/*
 * XREFs of HalpRestartProfiling @ 0x1404AD860
 * Callers:
 *     HalpDpPostReplaceInitialization @ 0x140B51A3C (HalpDpPostReplaceInitialization.c)
 *     HalpPostSleepMP @ 0x140B70824 (HalpPostSleepMP.c)
 * Callees:
 *     HalpRestartPmcCounterSet @ 0x1404AD894 (HalpRestartPmcCounterSet.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpRestartProfiling(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  guard_dispatch_icall_no_overrides(a1, a2);
  HalpRestartPmcCounterSet();
  LOBYTE(v2) = 1;
  return guard_dispatch_icall_no_overrides(v2, v3);
}
