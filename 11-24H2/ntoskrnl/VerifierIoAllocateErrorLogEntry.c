/*
 * XREFs of VerifierIoAllocateErrorLogEntry @ 0x140B8AC30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     VfFaultsInjectResourceFailure @ 0x140B96568 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierIoAllocateErrorLogEntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl

  v4 = a2;
  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0LL) )
    return 0LL;
  LOBYTE(a2) = v4;
  return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
}
