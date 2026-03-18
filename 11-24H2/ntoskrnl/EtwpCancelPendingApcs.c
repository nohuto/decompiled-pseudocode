/*
 * XREFs of EtwpCancelPendingApcs @ 0x14048C6E8
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1409D77E0 (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeRemoveQueueApc @ 0x140205700 (KeRemoveQueueApc.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     EtwpFinalizePendingApc @ 0x140441FD8 (EtwpFinalizePendingApc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1406B3910 (RtlpInterlockedFlushSList.c)
 */

PSLIST_ENTRY __fastcall EtwpCancelPendingApcs(__int64 a1)
{
  void *v2; // rdi
  PSLIST_ENTRY result; // rax
  struct _SLIST_ENTRY *i; // rbx
  struct _SLIST_ENTRY *v5; // r13
  KIRQL v6; // r12
  void *v7; // rcx

  v2 = 0LL;
  result = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 16));
  for ( i = result; i; result = RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 16), v5) )
  {
    v5 = i;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 8));
    if ( BYTE2(i[-1].Next) )
    {
      v7 = (void *)*((_QWORD *)&i[-6].Next + 1);
      if ( v7 )
      {
        v2 = (void *)*((_QWORD *)&i[-6].Next + 1);
        ObfReferenceObjectWithTag(v7, 0x746C6644u);
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 8), v6);
    if ( v2 )
    {
      if ( KeRemoveQueueApc((__int64)&i[-6]) )
        EtwpFinalizePendingApc((unsigned int **)a1, i - 6);
      ObfDereferenceObjectWithTag(v2, 0x746C6644u);
      v2 = 0LL;
    }
    i = i->Next;
  }
  return result;
}
