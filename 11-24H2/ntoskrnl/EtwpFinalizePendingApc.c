/*
 * XREFs of EtwpFinalizePendingApc @ 0x140438BA8
 * Callers:
 *     EtwpCancelPendingApcs @ 0x140487408 (EtwpCancelPendingApcs.c)
 *     EtwpCancelApcThunk @ 0x14064EFB0 (EtwpCancelApcThunk.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall EtwpFinalizePendingApc(unsigned int **a1, _SLIST_ENTRY *a2)
{
  _InterlockedDecrement((volatile signed __int32 *)a1 + 44);
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)a1 + 2, a2 + 7);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)*a1 + 170) + 704LL) + 8LL * **a1),
    1u);
}
