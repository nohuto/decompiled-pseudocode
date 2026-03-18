/*
 * XREFs of EtwpFinalizePendingApc @ 0x140441FD8
 * Callers:
 *     EtwpCancelPendingApcs @ 0x14048C6E8 (EtwpCancelPendingApcs.c)
 *     EtwpCancelApcThunk @ 0x1406509D0 (EtwpCancelApcThunk.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259600 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall EtwpFinalizePendingApc(unsigned int **a1, struct _SLIST_ENTRY *a2)
{
  _InterlockedDecrement((volatile signed __int32 *)a1 + 44);
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)a1 + 2, a2 + 7);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)*a1 + 170) + 704LL) + 8LL * **a1),
    1u);
}
