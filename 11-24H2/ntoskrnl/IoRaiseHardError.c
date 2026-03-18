/*
 * XREFs of IoRaiseHardError @ 0x1403D5B40
 * Callers:
 *     DifIoRaiseHardErrorWrapper @ 0x140629D70 (DifIoRaiseHardErrorWrapper.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KeInsertQueueApc @ 0x140337240 (KeInsertQueueApc.c)
 *     PsGetSessionId @ 0x1403D5E10 (PsGetSessionId.c)
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     KeInitializeApc @ 0x140422520 (KeInitializeApc.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     IopGetThreadActiveConsoleId @ 0x140A9E2BC (IopGetThreadActiveConsoleId.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
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
  _DWORD *Teb; // r13
  _KPROCESS *Process; // rsi
  char v16; // r14
  int v17; // eax
  __int16 v18; // cx
  __int64 v20; // rsi
  _OWORD v21[3]; // [rsp+58h] [rbp-60h] BYREF

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
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
      {
        memset(v21, 0, sizeof(v21));
        Teb = Thread->Teb;
        Process = Thread->Process;
        if ( Process == KeGetCurrentThread()->ApcState.Process )
        {
          v16 = 0;
        }
        else
        {
          v16 = 1;
          KiStackAttachProcess(Process, 0, (__int64)v21);
        }
        v17 = Teb[1452];
        if ( Process[1].ReadyTime )
        {
          v18 = WORD2(Process[3].PerProcessorCycleTimes);
          if ( v18 == 332 || v18 == 452 )
            v17 |= Teb[3018];
        }
        v12 = (v17 & 0x10) != 0;
        if ( v16 )
          KiUnstackDetachProcess((__int64)v21, 0);
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
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
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
  v20 = ExAllocatePool2(0x40uLL);
  if ( !v20 )
    goto LABEL_26;
  KeInitializeApc(
    v20,
    (_DWORD)Thread,
    Irp->ApcEnvironment,
    (unsigned int)PspUserApcKernelRoutine,
    (__int64)IopAbortRequest,
    (__int64)IopRaiseHardError,
    0,
    (__int64)Irp);
  KeInsertQueueApc(v20, (__int64)v4, (__int64)RealDeviceObject, 0);
}
