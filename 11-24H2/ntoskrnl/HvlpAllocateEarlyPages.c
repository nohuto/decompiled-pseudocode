/*
 * XREFs of HvlpAllocateEarlyPages @ 0x14058942C
 * Callers:
 *     HvlpInitializeBootProcessor @ 0x1405819A4 (HvlpInitializeBootProcessor.c)
 *     HvlpSetupBootProcessorEarlyHypercallPages @ 0x14058280C (HvlpSetupBootProcessorEarlyHypercallPages.c)
 *     HvlpTryConfigureInterface @ 0x140588B0C (HvlpTryConfigureInterface.c)
 *     HvlpPhase0Enlightenments @ 0x140589208 (HvlpPhase0Enlightenments.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvlpAllocateEarlyPages(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
