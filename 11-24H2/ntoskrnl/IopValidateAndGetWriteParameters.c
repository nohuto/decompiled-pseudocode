/*
 * XREFs of IopValidateAndGetWriteParameters @ 0x1403FB3F0
 * Callers:
 *     IopPopulateCopyWriteWorkerData @ 0x1403FB310 (IopPopulateCopyWriteWorkerData.c)
 *     IopWriteFile @ 0x1408BEFF0 (IopWriteFile.c)
 * Callees:
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     IopExceptionFilter @ 0x140593308 (IopExceptionFilter.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140958F48 (IopWaitAndAcquireFileObjectLock.c)
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
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v13; // rcx
  struct _KTHREAD *Flink; // rcx
  _KWAIT_BLOCK *WaitBlockList; // rax
  struct _KTHREAD **v16; // rax
  struct _KTHREAD *i; // rax
  struct _KTHREAD *v18; // rax
  _QWORD *v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  struct _KTHREAD *v22; // r8
  _KPROCESS *Process; // rcx
  __int16 v24; // ax
  struct _KTHREAD *Lock; // rcx
  NTSTATUS v26; // edi
  int v27; // eax
  struct _KTHREAD *v29; // rdi
  int v30; // esi
  unsigned __int8 v31; // r15
  struct _KTHREAD *v32; // rax
  _QWORD *v33; // rax
  int v34; // r8d
  _KSCHEDULING_GROUP *volatile *v35; // rdx
  struct _KTHREAD *v36; // rdx
  KPROCESSOR_MODE v37; // r9
  struct _KEVENT *v38; // rcx
  __int64 v39; // r9
  unsigned int v40; // edx
  _DWORD *v41; // r8
  unsigned int v42; // r10d
  int v43; // ecx
  int v44; // eax
  struct _KTHREAD *v45; // rcx
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  Object = a1;
  if ( a1[12] && (a1[6] || a2 || a1[2]->ApcState.ApcListHead[1].Blink) )
    goto LABEL_90;
  v8 = a1[15];
  if ( v8 )
  {
    if ( *(_QWORD *)&v8->Header.Lock && *(_DWORD *)(*(_QWORD *)&v8->Header.Lock + 40LL) < *((_DWORD *)a1 + 18) )
      goto LABEL_90;
  }
  v9 = *((_DWORD *)a1 + 28);
  if ( (v9 & 1) != 0 && (a1[2]->CurrentRunTime & 8) == 0 )
  {
    v26 = -1073740587;
    goto LABEL_91;
  }
  CurrentThread = KeGetCurrentThread();
  *a1 = CurrentThread;
  *((_BYTE *)a1 + 8) = CurrentThread->PreviousMode;
  v11 = a1[2];
  *((_BYTE *)a1 + 9) = v9 >= 0 && (v11->CurrentRunTime & 2) != 0;
  *((_BYTE *)a1 + 10) = (v9 & 0x40000000) == 0;
  Blink = v11->Header.WaitListHead.Blink;
  if ( (!Blink || (Flink = (struct _KTHREAD *)Blink->Blink) == 0LL)
    && ((v11->CurrentRunTime & 0x800) != 0
     || (v13 = v11->Header.WaitListHead.Flink[3].Blink) == 0LL
     || (Flink = (struct _KTHREAD *)v13->Blink) == 0LL) )
  {
    Flink = (struct _KTHREAD *)v11->Header.WaitListHead.Flink;
  }
  if ( !Flink->SListFaultAddress )
    goto LABEL_13;
  WaitBlockList = v11->WaitBlockList;
  if ( !WaitBlockList || (v16 = *(struct _KTHREAD ***)&WaitBlockList->WaitType) == 0LL || (v18 = *v16) == 0LL )
  {
LABEL_11:
    for ( i = (struct _KTHREAD *)Flink->SListFaultAddress; i; i = (struct _KTHREAD *)i->SListFaultAddress )
      Flink = i;
LABEL_13:
    v18 = Flink;
    goto LABEL_14;
  }
  v36 = Flink;
  while ( v36 != v18 )
  {
    v36 = (struct _KTHREAD *)v36->SListFaultAddress;
    if ( !v36 )
      goto LABEL_11;
  }
LABEL_14:
  v19 = a1 + 3;
  a1[3] = v18;
  if ( !*((_BYTE *)a1 + 8) || a1[12] )
  {
    if ( a3 )
    {
      a1[10] = *a3;
      v19 = a1 + 3;
    }
    if ( a4 )
      *((_DWORD *)a1 + 22) = *a4;
  }
  else
  {
    v20 = (unsigned __int64)a1[7];
    v21 = 0x7FFFFFFF0000LL;
    if ( v20 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v20 = *(_DWORD *)v20;
    v22 = a1[5];
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[1].ReadyTime )
    {
      v24 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( (v24 == 332 || v24 == 452) && !*((_BYTE *)a1 + 9) )
      {
        Lock = (struct _KTHREAD *)(unsigned int)a1[7]->Header.Lock;
        Lock->Header.LockNV = Lock->Header.LockNV;
        a1[7] = Lock;
        a1[5] = (struct _KTHREAD *)((unsigned __int64)v22 | 1);
      }
    }
    if ( a1[2]->ApcState.ApcListHead[1].Blink && ((unsigned __int64)a1[5] & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v26 = -1073741811;
      goto LABEL_45;
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
        v21 = (__int64)a4;
      *((_DWORD *)a1 + 22) = *(_DWORD *)v21;
    }
    v19 = a1 + 3;
  }
  if ( *((_BYTE *)a1 + 8) && (a1[2]->CurrentRunTime & 8) != 0 )
  {
    if ( (v39 = *v19, v40 = *(unsigned __int16 *)(*v19 + 304LL), v41 = a1 + 9, (_WORD)v40)
      && (v42 = v40, ((v40 - 1) & *v41) != 0)
      || (v42 = v40, (*(unsigned int *)(v39 + 152) & (unsigned __int64)a1[8]) != 0) )
    {
      if ( (_WORD)v40 && *v41 % v42 || (*(unsigned int *)(v39 + 152) & (unsigned __int64)a1[8]) != 0 )
        goto LABEL_90;
    }
    if ( a3 )
    {
      v43 = *((_DWORD *)a1 + 20);
      if ( (v43 != -1 || *((_DWORD *)a1 + 21) != -1) && (v43 != -2 || *((_DWORD *)a1 + 21) != -1 || !*((_BYTE *)a1 + 9)) )
      {
        v44 = *(unsigned __int16 *)(v39 + 304);
        if ( (_WORD)v44 )
        {
          if ( ((v44 - 1) & v43) != 0 )
            goto LABEL_90;
        }
      }
    }
  }
  if ( (a5 & 6) == 4 )
    a1[10] = (struct _KTHREAD *)-1LL;
  if ( a2 )
  {
    v37 = *((_BYTE *)a1 + 8);
    Object = 0LL;
    v26 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, v37, &Object, 0LL);
    v38 = (struct _KEVENT *)Object;
    a1[4] = (struct _KTHREAD *)Object;
    if ( v26 < 0 )
      goto LABEL_45;
    KeResetEvent(v38);
  }
  else
  {
    v26 = 0;
  }
  if ( *((_BYTE *)a1 + 9) )
  {
    v29 = a1[2];
    v30 = v29->CurrentRunTime & 4;
    v31 = *((_BYTE *)a1 + 8);
    v32 = KeGetCurrentThread();
    --v32->KernelApcDisable;
    v33 = KeAbPreAcquire((__int64)&v29->SystemCallNumber, 0LL);
    LOBYTE(Object) = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v29->116, 1) )
    {
      LOBYTE(v34) = v30 != 0;
      v26 = IopWaitAndAcquireFileObjectLock((_DWORD)v29, v31, v34, (_DWORD)v33, (__int64)&Object);
    }
    else
    {
      if ( v33 )
        *((_BYTE *)v33 + 10) = 1;
      PsReferenceSiloContext(v29);
      v26 = 0;
    }
    if ( (_BYTE)Object )
    {
LABEL_45:
      if ( v26 >= 0 )
        return (unsigned int)v26;
      goto LABEL_91;
    }
    v35 = (_KSCHEDULING_GROUP *volatile *)(a1 + 10);
    if ( !a3 && !*(_DWORD *)v35 || *(_DWORD *)v35 == -2 && *((_DWORD *)a1 + 21) == -1 )
      *v35 = a1[2]->SchedulingGroup;
  }
  else if ( !a3 && (a1[2]->CurrentRunTime & 0x280) == 0 )
  {
    goto LABEL_90;
  }
  v27 = *((_DWORD *)a1 + 21);
  if ( v27 >= 0 || v27 == -1 && *((_DWORD *)a1 + 20) == -1 )
    goto LABEL_45;
  if ( !*((_BYTE *)a1 + 9) )
  {
LABEL_90:
    v26 = -1073741811;
    goto LABEL_91;
  }
  IopReleaseFileObjectLock((ULONG_PTR)a1[2]);
  v26 = -1073741811;
LABEL_91:
  v45 = a1[4];
  if ( v45 )
  {
    ObfDereferenceObjectWithTag(v45, 0x746C6644u);
    a1[4] = 0LL;
  }
  ObfDereferenceObjectWithTag(a1[2], 0x746C6644u);
  a1[2] = 0LL;
  return (unsigned int)v26;
}
