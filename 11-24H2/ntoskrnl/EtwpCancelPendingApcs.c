/*
 * XREFs of EtwpCancelPendingApcs @ 0x140487408
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140A48E90 (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeRemoveQueueApc @ 0x14032CCE0 (KeRemoveQueueApc.c)
 *     EtwpFinalizePendingApc @ 0x140438BA8 (EtwpFinalizePendingApc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1406B48B0 (RtlpInterlockedFlushSList.c)
 */

PSLIST_ENTRY __fastcall EtwpCancelPendingApcs(__int64 a1)
{
  void *v2; // rdi
  PSLIST_ENTRY result; // rax
  _SLIST_ENTRY *i; // rbx
  _SLIST_ENTRY *v5; // r13
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
