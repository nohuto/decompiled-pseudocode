/*
 * XREFs of HalpRestartProfiling @ 0x1404B1CF0
 * Callers:
 *     HalpDpPostReplaceInitialization @ 0x140B3F9EC (HalpDpPostReplaceInitialization.c)
 *     HalpPostSleepMP @ 0x140B58A3C (HalpPostSleepMP.c)
 * Callees:
 *     HalpRestartPmcCounterSet @ 0x1404B1D24 (HalpRestartPmcCounterSet.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
