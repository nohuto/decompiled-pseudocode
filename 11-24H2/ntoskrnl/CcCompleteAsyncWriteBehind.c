/*
 * XREFs of CcCompleteAsyncWriteBehind @ 0x14057B504
 * Callers:
 *     CcCompleteAsyncLazywriteWorker @ 0x14057B38C (CcCompleteAsyncLazywriteWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     CcFreeWorkQueueEntry @ 0x140279C5C (CcFreeWorkQueueEntry.c)
 *     CcWriteBehindPostProcess @ 0x14027A62C (CcWriteBehindPostProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall CcCompleteAsyncWriteBehind(_SLIST_ENTRY *P, char a2)
{
  _SLIST_ENTRY *Next; // rdi
  __int64 v3; // r15
  char v4; // r14
  _SLIST_ENTRY *v5; // r13
  _SLIST_ENTRY *v7; // r12
  unsigned __int8 v8; // al
  unsigned __int8 v9; // bp
  unsigned __int8 *v10; // rsi
  _SLIST_ENTRY **v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // eax
  _SLIST_ENTRY **v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF

  Next = P[1].Next;
  v3 = *((_QWORD *)&P[9].Next + 1);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  v5 = Next->Next;
  v7 = Next[7].Next;
  if ( a2 )
  {
    v8 = CcWriteBehindPostProcess((__int64)Next, 1);
    v9 = v8;
    v10 = (unsigned __int8 *)&Next[8].Next + 9;
    if ( !v8 || *v10 )
      DbgPrintEx(
        0x7Fu,
        3u,
        "[%04x:%04x]CcCompleteAsyncWriteBehind: PostProc:%d, Retry:%d, PVCM:%p(vid:%2lx)\n",
        LODWORD(KeGetCurrentThread()[1].CycleTime),
        KeGetCurrentThread()[1].CurrentRunTime,
        v8,
        *v10,
        P[9].Next,
        *((_DWORD *)&P[9].Next[1].Next + 2));
    if ( !v9 && *v10 )
    {
      LODWORD(P[8].Next) = 7;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&v5[52], &LockHandle);
      v11 = (_SLIST_ENTRY **)(v3 + 312);
      v12 = *(_QWORD *)(v3 + 312);
      if ( *(_QWORD *)(v12 + 8) != v3 + 312 )
        goto LABEL_13;
      P->Next = (_SLIST_ENTRY *)v12;
      *((_QWORD *)&P->Next + 1) = v11;
      *(_QWORD *)(v12 + 8) = P;
      *v11 = P;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v4 = 1;
    }
  }
  if ( !v4 )
  {
    if ( *((_QWORD *)&v7->Next + 1) == 35422LL && (v13 = (unsigned int)Next[16].Next, v13 < 0xA) )
    {
      LODWORD(Next[16].Next) = v13 + 1;
      LODWORD(P[8].Next) = 7;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&v5[52], &LockHandle);
      v14 = (_SLIST_ENTRY **)(v3 + 312);
      v15 = *(_QWORD *)(v3 + 312);
      if ( *(_QWORD *)(v15 + 8) != v3 + 312 )
LABEL_13:
        __fastfail(3u);
      P->Next = (_SLIST_ENTRY *)v15;
      *((_QWORD *)&P->Next + 1) = v14;
      *(_QWORD *)(v15 + 8) = P;
      *v14 = P;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    else
    {
      ExFreePoolWithTag(Next, 0x42576343u);
      P[1].Next = 0LL;
      CcFreeWorkQueueEntry(P, v16, v17, v18);
    }
  }
  return 1;
}
