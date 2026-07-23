/*
 * XREFs of VerifierKeDelayExecutionThread @ 0x140B974B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     VfRlrsKeInjectStatusAlerted @ 0x140BA1704 (VfRlrsKeInjectStatusAlerted.c)
 */

__int64 __fastcall VerifierKeDelayExecutionThread(__int64 a1, __int64 a2)
{
  char v2; // bl
  char v3; // si

  v2 = a2;
  v3 = a1;
  if ( (VfRuleClasses & 4) != 0 )
  {
    LOBYTE(a1) = a2;
    if ( (unsigned int)VfRlrsKeInjectStatusAlerted(a1) )
      return 257LL;
  }
  LOBYTE(a2) = v2;
  LOBYTE(a1) = v3;
  return guard_dispatch_icall_no_overrides(a1, a2);
}
