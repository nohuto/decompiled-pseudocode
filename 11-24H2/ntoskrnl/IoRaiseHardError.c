/*
 * XREFs of IoRaiseHardError @ 0x1403C1290
 * Callers:
 *     DifIoRaiseHardErrorWrapper @ 0x140628330 (DifIoRaiseHardErrorWrapper.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     PsGetSessionId @ 0x1403C1560 (PsGetSessionId.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     KeInitializeApc @ 0x1404163D0 (KeInitializeApc.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     IopGetThreadActiveConsoleId @ 0x140A9982C (IopGetThreadActiveConsoleId.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void __stdcall IoRaiseHardError(PIRP Irp, PVPB Vpb, PDEVICE_OBJECT RealDeviceObject)
{
  PVPB v4; // r15
  bool v6; // si
  PETHREAD Thread; // r14
  int SessionId; // eax
  int v9; // r8d
  char v10; // cl
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  bool v12; // si
  struct _EX_RUNDOWN_REF *p_WaitStatus; // r15
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *Teb; // r13
  _KPROCESS *Process; // rsi
  char v18; // r14
  int v19; // eax
  __int16 v20; // cx
  __int64 v22; // rsi
  _OWORD v23[3]; // [rsp+58h] [rbp-60h] BYREF

  v4 = Vpb;
  v6 = 0;
  Thread = Irp->Tail.Overlay.Thread;
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 0x10) != 0
    || (IopGetThreadActiveConsoleId(Irp->Tail.Overlay.Thread),
        SessionId = PsGetSessionId(Thread->Process),
        SessionId != v9) )
  {
    if ( (Irp->Flags & 0x40) == 0 )
      goto LABEL_26;
    goto LABEL_25;
  }
  if ( (Irp->Flags & 0x3FF1FFFF) == 0x43 || Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 18 )
  {
    v10 = 1;
  }
  else
  {
    v10 = 0;
    v6 = KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
  }
  if ( v10 )
  {
    if ( !v6 )
      goto LABEL_7;
LABEL_10:
    if ( (Thread->MiscFlags & 0x400) == 0 )
    {
      v12 = 1;
      p_WaitStatus = (struct _EX_RUNDOWN_REF *)&Thread[1].WaitStatus;
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
      {
        memset(v23, 0, sizeof(v23));
        Teb = Thread->Teb;
        Process = Thread->Process;
        if ( Process == KeGetCurrentThread()->ApcState.Process )
        {
          v18 = 0;
        }
        else
        {
          v18 = 1;
          KiStackAttachProcess(Process, 0, (__int64)v23);
        }
        v19 = Teb[1452];
        if ( Process[1].ReadyTime )
        {
          v20 = WORD2(Process[3].PerProcessorCycleTimes);
          if ( v20 == 332 || v20 == 452 )
            v19 |= Teb[3018];
        }
        v12 = (v19 & 0x10) != 0;
        if ( v18 )
          KiUnstackDetachProcess((__int64)v23, 0, v14, v15);
        ExReleaseRundownProtection_0(p_WaitStatus);
      }
      if ( v12 )
      {
LABEL_25:
        Irp->IoStatus.Information = 0LL;
LABEL_26:
        IofCompleteRequest(Irp, 1);
        return;
      }
      v4 = Vpb;
    }
LABEL_7:
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL, 0x38uLL, 0x72456F49u);
    if ( Pool2 )
    {
      Pool2->WorkerRoutine = (void (__fastcall *)(void *))IopStartApcHardError;
      Pool2->Parameter = Pool2;
      Pool2->List.Flink = 0LL;
      Pool2[1].List.Flink = (struct _LIST_ENTRY *)Irp;
      Pool2[1].List.Blink = (struct _LIST_ENTRY *)v4;
      Pool2[1].WorkerRoutine = (void (__fastcall *)(void *))RealDeviceObject;
      ExQueueWorkItem(Pool2, CriticalWorkQueue);
      return;
    }
    goto LABEL_26;
  }
  if ( v6 )
    goto LABEL_10;
  v22 = ExAllocatePool2(0x40uLL, 0x58uLL, 0x4350414Bu);
  if ( !v22 )
    goto LABEL_26;
  KeInitializeApc(
    v22,
    (_DWORD)Thread,
    Irp->ApcEnvironment,
    (unsigned int)PspUserApcKernelRoutine,
    (__int64)IopAbortRequest,
    (__int64)IopRaiseHardError,
    0,
    (__int64)Irp);
  KeInsertQueueApc(v22, (__int64)v4, (__int64)RealDeviceObject, 0);
}
