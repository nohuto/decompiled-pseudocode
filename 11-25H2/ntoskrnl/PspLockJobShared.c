/*
 * XREFs of PspLockJobShared @ 0x1408DE264
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140762C40 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x140767F10 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1408DC184 (PspQueryJobHierarchyProcessIdList.c)
 *     PspCallJobHierarchyCallbacks @ 0x1408DCC28 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1408DD910 (PspEnforceLimitsJobPostCallback.c)
 *     PsInsertPermanentSiloContextEx @ 0x1409E3454 (PsInsertPermanentSiloContextEx.c)
 *     NtQueryInformationJobObject @ 0x1409ECC70 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN __fastcall PspLockJobShared(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
}
