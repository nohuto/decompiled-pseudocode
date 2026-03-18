/*
 * XREFs of PspLockJobShared @ 0x1408ED5D4
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140772600 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1407779F0 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1408EB554 (PspQueryJobHierarchyProcessIdList.c)
 *     PspCallJobHierarchyCallbacks @ 0x1408EBFF8 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1408ECC80 (PspEnforceLimitsJobPostCallback.c)
 *     PsInsertPermanentSiloContextEx @ 0x1409E20A4 (PsInsertPermanentSiloContextEx.c)
 *     NtQueryInformationJobObject @ 0x140ACCBF0 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN __fastcall PspLockJobShared(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
}
