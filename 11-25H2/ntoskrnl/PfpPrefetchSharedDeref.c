/*
 * XREFs of PfpPrefetchSharedDeref @ 0x1408EBDAC
 * Callers:
 *     PfpQueryFileExtentsRequest @ 0x140739C28 (PfpQueryFileExtentsRequest.c)
 *     PfpPrefetchRequestPerform @ 0x1408EAE18 (PfpPrefetchRequestPerform.c)
 *     PfSnCleanupPrefetchHeader @ 0x1408EC328 (PfSnCleanupPrefetchHeader.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x140AA3530 (PfpPrefetchSharedConflictNotifyEnd.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PfpPrefetchSharedDeref(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  signed __int64 v3; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 15, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  v3 = v1 - 1;
  if ( v2 )
  {
    if ( v3 )
      __fastfail(0xEu);
    ExFreePoolWithTag((PVOID)a1, 0);
  }
}
