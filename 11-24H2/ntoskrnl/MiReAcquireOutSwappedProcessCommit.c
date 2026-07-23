/*
 * XREFs of MiReAcquireOutSwappedProcessCommit @ 0x14066B458
 * Callers:
 *     MmInSwapProcess @ 0x1402DFEE4 (MmInSwapProcess.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     KeForceDetachProcess @ 0x1403422E0 (KeForceDetachProcess.c)
 *     MiBeginProcessClean @ 0x1403C826C (MiBeginProcessClean.c)
 *     KeForceAttachProcess @ 0x140424E30 (KeForceAttachProcess.c)
 *     KeFreezeProcess @ 0x14048E57C (KeFreezeProcess.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14066B0E8 (MiLogOutswappedProcessCommitReacquire.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v13; // r8
  __int64 v14; // r9
  struct _KEVENT *Blink; // rcx
  int v17; // [rsp+50h] [rbp+8h]

  KeForceAttachProcess((_KPROCESS *)Object, 0LL, 0);
  v2 = Object + 1024;
  if ( (*((_DWORD *)Object + 302) & 0xF) == 1 )
  {
    v3 = (struct _WORK_QUEUE_ITEM **)&unk_140E388A0;
    v4 = (__int64 *)&unk_140E38888;
  }
  else
  {
    v3 = (struct _WORK_QUEUE_ITEM **)(Object + 1248);
    v4 = (__int64 *)(Object + 1224);
  }
  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  if ( dword_140FC5250 == 1 )
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
    v7 = MiChargeCommit(*((_QWORD *)qword_140E300C8 + *((unsigned __int16 *)Object + 599)), *v4, 1);
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
  v17 = *((_DWORD *)Object + 302);
  if ( (HIBYTE(v17) & 0x30) == 0x20 )
    Object[1211] = HIBYTE(v17) & 0xCF | 0x10;
  v12 = *v3;
  if ( v7 )
  {
    *v4 = 0LL;
    *v3 = 0LL;
  }
  MiUnlockWorkingSetExclusive((__int64)v2, v11);
  KeForceDetachProcess(0LL, 0, v13, v14);
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
