/*
 * XREFs of MiReAcquireOutSwappedProcessCommit @ 0x14066A288
 * Callers:
 *     MmInSwapProcess @ 0x140338A94 (MmInSwapProcess.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeForceDetachProcess @ 0x1402F9B70 (KeForceDetachProcess.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     MiBeginProcessClean @ 0x140405D10 (MiBeginProcessClean.c)
 *     KeForceAttachProcess @ 0x14042D8D0 (KeForceAttachProcess.c)
 *     KeFreezeProcess @ 0x1404634A0 (KeFreezeProcess.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x140669F18 (MiLogOutswappedProcessCommitReacquire.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReAcquireOutSwappedProcessCommit(char *Object)
{
  char *v2; // rdi
  struct _WORK_QUEUE_ITEM **v3; // r15
  __int64 *v4; // r14
  struct _KTHREAD *CurrentThread; // r13
  unsigned int v6; // ebx
  int v7; // ebp
  int v8; // r12d
  unsigned __int8 v9; // al
  struct _WORK_QUEUE_ITEM *v10; // rax
  unsigned __int8 v11; // dl
  struct _WORK_QUEUE_ITEM *v12; // rsi
  struct _KEVENT *Blink; // rcx
  int v15; // [rsp+50h] [rbp+8h]

  KeForceAttachProcess((_KPROCESS *)Object, 0LL, 0);
  v2 = Object + 1024;
  if ( (*((_DWORD *)Object + 302) & 0xF) == 1 )
  {
    v3 = (struct _WORK_QUEUE_ITEM **)&unk_140E38760;
    v4 = (__int64 *)&unk_140E38748;
  }
  else
  {
    v3 = (struct _WORK_QUEUE_ITEM **)(Object + 1248);
    v4 = (__int64 *)(Object + 1224);
  }
  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  if ( dword_140FC4250 == 1 )
  {
    v7 = 1;
LABEL_9:
    MiLogOutswappedProcessCommitReacquire((__int64)Object, *v4, 0, 0);
    goto LABEL_11;
  }
  if ( (*((_DWORD *)Object + 125) & 8) != 0 )
  {
    v8 = 1;
    v7 = 0;
  }
  else
  {
    v8 = 0;
    v7 = MiChargeCommit(*((_QWORD *)qword_140E2FF88 + *((unsigned __int16 *)Object + 599)), *v4, 1);
    if ( v7 )
      goto LABEL_9;
  }
  MiLogOutswappedProcessCommitReacquire((__int64)Object, *v4, 1, v8);
  _InterlockedOr((volatile signed __int32 *)Object + 383, 0x100u);
  v9 = MiLockWorkingSetExclusive((__int64)(Object + 1024));
  Object[1211] = HIBYTE(*((_DWORD *)Object + 302)) | 0x30;
  MiUnlockWorkingSetExclusive((__int64)(Object + 1024), v9);
  MiBeginProcessClean((__int64)CurrentThread, (__int64)Object);
  KeFreezeProcess((__int64)Object, 0);
  ObfReferenceObjectWithTag(Object, 0x72506D4Du);
  v10 = *v3;
  v10->WorkerRoutine = (void (__fastcall *)(void *))MiReAcquireCommitFailWorker;
  v10->Parameter = Object;
  v10->List.Flink = 0LL;
LABEL_11:
  v11 = MiLockWorkingSetExclusive((__int64)(Object + 1024));
  v15 = *((_DWORD *)Object + 302);
  if ( (HIBYTE(v15) & 0x30) == 0x20 )
    Object[1211] = HIBYTE(v15) & 0xCF | 0x10;
  v12 = *v3;
  if ( v7 )
  {
    *v4 = 0LL;
    *v3 = 0LL;
  }
  MiUnlockWorkingSetExclusive((__int64)v2, v11);
  KeForceDetachProcess(0LL, 0);
  Blink = (struct _KEVENT *)v12[1].List.Blink;
  if ( Blink )
    KeSetEvent(Blink, 0, 0);
  if ( v7 )
  {
    ExFreePoolWithTag(v12, 0);
  }
  else
  {
    ExQueueWorkItem(v12, CriticalWorkQueue);
    return (unsigned int)-1073741523;
  }
  return v6;
}
