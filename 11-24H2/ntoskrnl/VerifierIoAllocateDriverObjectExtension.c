/*
 * XREFs of VerifierIoAllocateDriverObjectExtension @ 0x140B8CBB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     VfFaultsInjectResourceFailure @ 0x140B98568 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierIoAllocateDriverObjectExtension(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  if ( (VfRuleClasses & 4) == 0 || !(unsigned int)VfFaultsInjectResourceFailure(0LL) )
    return guard_dispatch_icall_no_overrides(a1, a2);
  *a4 = 0LL;
  return 3221225626LL;
}
