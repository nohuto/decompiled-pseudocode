/*
 * XREFs of CcSerializeWithLazyWriter @ 0x1404A4FF4
 * Callers:
 *     CcFlushCachePreProcess @ 0x140278C74 (CcFlushCachePreProcess.c)
 * Callees:
 *     CcFreeWorkQueueEntry @ 0x140279C5C (CcFreeWorkQueueEntry.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 */

char __fastcall CcSerializeWithLazyWriter(__int64 a1, __int64 a2)
{
  char v3; // di
  __int64 v4; // rdx
  __int64 v5; // rbx
  _SLIST_ENTRY *v7; // rbx
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KLOCK_QUEUE_HANDLE v13; // [rsp+20h] [rbp-28h] BYREF

  memset(&v13, 0, sizeof(v13));
  v3 = 1;
  if ( (*(_DWORD *)(a2 + 152) & 0x20) != 0 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 832), &v13);
    v5 = *(_QWORD *)(a2 + 504);
    if ( v5 )
    {
      v7 = (_SLIST_ENTRY *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
      Next = v7->Next;
      if ( *(&v7->Next->Next + 1) != v7 || (v9 = (_SLIST_ENTRY **)*((_QWORD *)&v7->Next + 1), *v9 != v7) )
        __fastfail(3u);
      *v9 = Next;
      *((_QWORD *)&Next->Next + 1) = v9;
      *((_QWORD *)&v7->Next + 1) = 0LL;
      v7->Next = 0LL;
      *(_QWORD *)(a2 + 504) = 0LL;
      *(_DWORD *)(a2 + 152) &= ~0x20u;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v13, v4);
      CcFreeWorkQueueEntry(v7, v10, v11, v12);
    }
    else
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v13, v4);
      return 0;
    }
  }
  return v3;
}
