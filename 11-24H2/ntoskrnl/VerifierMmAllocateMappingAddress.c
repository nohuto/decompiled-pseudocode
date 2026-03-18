/*
 * XREFs of VerifierMmAllocateMappingAddress @ 0x140BA0380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     VfFaultsInjectResourceFailure @ 0x140B96568 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierMmAllocateMappingAddress(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  else
    return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
}
