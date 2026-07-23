/*
 * XREFs of EtwpFinalizePendingApc @ 0x14030CD94
 * Callers:
 *     EtwpCancelPendingApcs @ 0x14048CB68 (EtwpCancelPendingApcs.c)
 *     EtwpCancelApcThunk @ 0x1406449C0 (EtwpCancelApcThunk.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall EtwpFinalizePendingApc(unsigned int **a1, _SLIST_ENTRY *a2)
{
  _InterlockedDecrement((volatile signed __int32 *)a1 + 44);
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)a1 + 2, a2 + 7);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)*a1 + 170) + 448LL) + 8LL * **a1),
    1u);
}
