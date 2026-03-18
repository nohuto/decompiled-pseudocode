/*
 * XREFs of PfpPrefetchSharedDeref @ 0x140952908
 * Callers:
 *     PfpQueryFileExtentsRequest @ 0x140745C48 (PfpQueryFileExtentsRequest.c)
 *     PfpPrefetchRequestPerform @ 0x140951A08 (PfpPrefetchRequestPerform.c)
 *     PfSnCleanupPrefetchHeader @ 0x140952328 (PfSnCleanupPrefetchHeader.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x140AA8610 (PfpPrefetchSharedConflictNotifyEnd.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
