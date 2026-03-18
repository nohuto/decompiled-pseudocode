/*
 * XREFs of HvlpMapEarlyPages @ 0x140588BF4
 * Callers:
 *     HvlpInitializeBootProcessor @ 0x140580E74 (HvlpInitializeBootProcessor.c)
 *     HvlpTryConfigureInterface @ 0x1405881AC (HvlpTryConfigureInterface.c)
 *     HvlpPhase0Enlightenments @ 0x1405888A8 (HvlpPhase0Enlightenments.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvlpMapEarlyPages(__int64 a1)
{
  return guard_dispatch_icall_no_overrides(a1);
}
