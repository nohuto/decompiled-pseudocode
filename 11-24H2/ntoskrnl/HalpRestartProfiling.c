/*
 * XREFs of HalpRestartProfiling @ 0x1404B3050
 * Callers:
 *     HalpDpPostReplaceInitialization @ 0x140B4F9EC (HalpDpPostReplaceInitialization.c)
 *     HalpPostSleepMP @ 0x140B6886C (HalpPostSleepMP.c)
 * Callees:
 *     HalpRestartPmcCounterSet @ 0x1404B3084 (HalpRestartPmcCounterSet.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpRestartProfiling(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  HalpRestartPmcCounterSet();
  LOBYTE(v4) = 1;
  return guard_dispatch_icall_no_overrides(v4, v5, v6, v7);
}
