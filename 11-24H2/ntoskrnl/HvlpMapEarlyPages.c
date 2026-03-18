/*
 * XREFs of HvlpMapEarlyPages @ 0x14058C264
 * Callers:
 *     HvlpInitializeBootProcessor @ 0x140584624 (HvlpInitializeBootProcessor.c)
 *     HvlpTryConfigureInterface @ 0x14058B81C (HvlpTryConfigureInterface.c)
 *     HvlpPhase0Enlightenments @ 0x14058BF18 (HvlpPhase0Enlightenments.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvlpMapEarlyPages(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return guard_dispatch_icall_no_overrides(a1, 1LL, a3, a4);
}
