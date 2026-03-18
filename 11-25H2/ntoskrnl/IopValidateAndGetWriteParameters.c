/*
 * XREFs of IopValidateAndGetWriteParameters @ 0x1402D3880
 * Callers:
 *     IopPopulateCopyWriteWorkerData @ 0x1402D379C (IopPopulateCopyWriteWorkerData.c)
 *     IopWriteFile @ 0x1408C3790 (IopWriteFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     IopReleaseFileObjectLock @ 0x140285FF0 (IopReleaseFileObjectLock.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     IopExceptionFilter @ 0x140592C78 (IopExceptionFilter.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1409888C0 (IopWaitAndAcquireFileObjectLock.c)
 */

__int64 __fastcall IopValidateAndGetWriteParameters(
        struct _KTHREAD **a1,
        void *a2,
        struct _KTHREAD **a3,
        _DWORD *a4,
        char a5)
{
  struct _KTHREAD *v8; // rax
  int v9; // edx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // r8
  bool v12; // al
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v14; // rcx
  struct _KTHREAD *Flink; // rcx
  _KWAIT_BLOCK *WaitBlockList; // rax
  struct _KTHREAD **v17; // rax
  struct _KTHREAD *i; // rax
  struct _KTHREAD *v19; // rax
  _QWORD *v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  struct _KTHREAD *v23; // r8
  _KPROCESS *Process; // rcx
  __int16 v25; // ax
  struct _KTHREAD *Lock; // rcx
  NTSTATUS v27; // edi
  int v28; // eax
  struct _KTHREAD *v30; // rdi
  int v31; // r14d
  unsigned __int8 v32; // r15
  struct _KTHREAD *v33; // rax
  __int64 *v34; // rax
  int v35; // r8d
  _KSCHEDULING_GROUP *volatile *v36; // rdx
  struct _KTHREAD *v37; // rdx
  KPROCESSOR_MODE v38; // r9
  struct _KEVENT *v39; // rcx
  __int64 v40; // r9
  unsigned int v41; // edx
  _DWORD *v42; // r8
  unsigned int v43; // r10d
  int v44; // ecx
  int v45; // eax
  struct _KTHREAD *v46; // rcx
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  Object = a1;
  if ( a1[12] && (a1[6] || a2 || a1[2]->ApcState.ApcListHead[1].Blink) )
    goto LABEL_93;
  v8 = a1[15];
  if ( v8 )
  {
    if ( *(_QWORD *)&v8->Header.Lock && *(_DWORD *)(*(_QWORD *)&v8->Header.Lock + 40LL) < *((_DWORD *)a1 + 18) )
      goto LABEL_93;
  }
  v9 = *((_DWORD *)a1 + 28);
  if ( (v9 & 1) != 0 && (a1[2]->CurrentRunTime & 8) == 0 )
  {
    v27 = -1073740587;
    goto LABEL_94;
  }
  CurrentThread = KeGetCurrentThread();
  *a1 = CurrentThread;
  *((_BYTE *)a1 + 8) = CurrentThread->PreviousMode;
  v11 = a1[2];
  v12 = (v11->CurrentRunTime & 2) != 0 && v9 >= 0;
  *((_BYTE *)a1 + 9) = v12;
  *((_BYTE *)a1 + 10) = (v9 & 0x40000000) == 0;
  Blink = v11->Header.WaitListHead.Blink;
  if ( (!Blink || (Flink = (struct _KTHREAD *)Blink->Blink) == 0LL)
    && ((v11->CurrentRunTime & 0x800) != 0
     || (v14 = v11->Header.WaitListHead.Flink[3].Blink) == 0LL
     || (Flink = (struct _KTHREAD *)v14->Blink) == 0LL) )
  {
    Flink = (struct _KTHREAD *)v11->Header.WaitListHead.Flink;
  }
  if ( !Flink->SListFaultAddress )
    goto LABEL_15;
  WaitBlockList = v11->WaitBlockList;
  if ( !WaitBlockList || (v17 = *(struct _KTHREAD ***)&WaitBlockList->WaitType) == 0LL || (v19 = *v17) == 0LL )
  {
LABEL_13:
    for ( i = (struct _KTHREAD *)Flink->SListFaultAddress; i; i = (struct _KTHREAD *)i->SListFaultAddress )
      Flink = i;
LABEL_15:
    v19 = Flink;
    goto LABEL_16;
  }
  v37 = Flink;
  while ( v37 != v19 )
  {
    v37 = (struct _KTHREAD *)v37->SListFaultAddress;
    if ( !v37 )
      goto LABEL_13;
  }
LABEL_16:
  v20 = a1 + 3;
  a1[3] = v19;
  if ( !*((_BYTE *)a1 + 8) || a1[12] )
  {
    if ( a3 )
    {
      a1[10] = *a3;
      v20 = a1 + 3;
    }
    if ( a4 )
      *((_DWORD *)a1 + 22) = *a4;
  }
  else
  {
    v21 = (unsigned __int64)a1[7];
    v22 = 0x7FFFFFFF0000LL;
    if ( v21 >= 0x7FFFFFFF0000LL )
      v21 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v21 = *(_DWORD *)v21;
    v23 = a1[5];
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[1].ReadyTime )
    {
      v25 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( (v25 == 332 || v25 == 452) && !*((_BYTE *)a1 + 9) )
      {
        Lock = (struct _KTHREAD *)(unsigned int)a1[7]->Header.Lock;
        Lock->Header.LockNV = Lock->Header.LockNV;
        a1[7] = Lock;
        a1[5] = (struct _KTHREAD *)((unsigned __int64)v23 | 1);
      }
    }
    if ( a1[2]->ApcState.ApcListHead[1].Blink && ((unsigned __int64)a1[5] & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v27 = -1073741811;
      goto LABEL_47;
    }
    if ( a3 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      a1[10] = *a3;
    }
    if ( a4 )
    {
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v22 = (__int64)a4;
      *((_DWORD *)a1 + 22) = *(_DWORD *)v22;
    }
    v20 = a1 + 3;
  }
  if ( *((_BYTE *)a1 + 8) && (a1[2]->CurrentRunTime & 8) != 0 )
  {
    if ( (v40 = *v20, v41 = *(unsigned __int16 *)(*v20 + 304LL), v42 = a1 + 9, (_WORD)v41)
      && (v43 = v41, ((v41 - 1) & *v42) != 0)
      || (v43 = v41, (*(unsigned int *)(v40 + 152) & (unsigned __int64)a1[8]) != 0) )
    {
      if ( (_WORD)v41 && *v42 % v43 || (*(unsigned int *)(v40 + 152) & (unsigned __int64)a1[8]) != 0 )
        goto LABEL_93;
    }
    if ( a3 )
    {
      v44 = *((_DWORD *)a1 + 20);
      if ( (v44 != -1 || *((_DWORD *)a1 + 21) != -1) && (v44 != -2 || *((_DWORD *)a1 + 21) != -1 || !*((_BYTE *)a1 + 9)) )
      {
        v45 = *(unsigned __int16 *)(v40 + 304);
        if ( (_WORD)v45 )
        {
          if ( ((v45 - 1) & v44) != 0 )
            goto LABEL_93;
        }
      }
    }
  }
  if ( (a5 & 6) == 4 )
    a1[10] = (struct _KTHREAD *)-1LL;
  if ( a2 )
  {
    v38 = *((_BYTE *)a1 + 8);
    Object = 0LL;
    v27 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, v38, &Object, 0LL);
    v39 = (struct _KEVENT *)Object;
    a1[4] = (struct _KTHREAD *)Object;
    if ( v27 < 0 )
      goto LABEL_47;
    KeResetEvent(v39);
  }
  else
  {
    v27 = 0;
  }
  if ( *((_BYTE *)a1 + 9) )
  {
    v30 = a1[2];
    v31 = v30->CurrentRunTime & 4;
    v32 = *((_BYTE *)a1 + 8);
    v33 = KeGetCurrentThread();
    --v33->KernelApcDisable;
    v34 = KeAbPreAcquire((__int64)&v30->SystemCallNumber, 0LL);
    LOBYTE(Object) = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v30->116, 1) )
    {
      LOBYTE(v35) = v31 != 0;
      v27 = IopWaitAndAcquireFileObjectLock((_DWORD)v30, v32, v35, (_DWORD)v34, (__int64)&Object);
    }
    else
    {
      if ( v34 )
        *((_BYTE *)v34 + 10) = 1;
      PsReferenceSiloContext(v30);
      v27 = 0;
    }
    if ( (_BYTE)Object )
    {
LABEL_47:
      if ( v27 >= 0 )
        return (unsigned int)v27;
      goto LABEL_94;
    }
    v36 = (_KSCHEDULING_GROUP *volatile *)(a1 + 10);
    if ( !a3 && !*(_DWORD *)v36 || *(_DWORD *)v36 == -2 && *((_DWORD *)a1 + 21) == -1 )
      *v36 = a1[2]->SchedulingGroup;
  }
  else if ( !a3 && (a1[2]->CurrentRunTime & 0x280) == 0 )
  {
    goto LABEL_93;
  }
  v28 = *((_DWORD *)a1 + 21);
  if ( v28 >= 0 || v28 == -1 && *((_DWORD *)a1 + 20) == -1 )
    goto LABEL_47;
  if ( !*((_BYTE *)a1 + 9) )
  {
LABEL_93:
    v27 = -1073741811;
    goto LABEL_94;
  }
  IopReleaseFileObjectLock((ULONG_PTR)a1[2]);
  v27 = -1073741811;
LABEL_94:
  v46 = a1[4];
  if ( v46 )
  {
    ObfDereferenceObjectWithTag(v46, 0x746C6644u);
    a1[4] = 0LL;
  }
  ObfDereferenceObjectWithTag(a1[2], 0x746C6644u);
  a1[2] = 0LL;
  return (unsigned int)v27;
}
