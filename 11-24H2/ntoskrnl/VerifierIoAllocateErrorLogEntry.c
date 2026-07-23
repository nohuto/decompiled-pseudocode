/*
 * XREFs of VerifierIoAllocateErrorLogEntry @ 0x140B8CC30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     VfFaultsInjectResourceFailure @ 0x140B98568 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierIoAllocateErrorLogEntry(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0LL) )
    return 0LL;
  LOBYTE(a2) = v2;
  return guard_dispatch_icall_no_overrides(a1, a2);
}
