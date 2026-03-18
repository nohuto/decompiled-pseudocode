/*
 * XREFs of VerifierKeDelayExecutionThread @ 0x140B954B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     VfRlrsKeInjectStatusAlerted @ 0x140B9F704 (VfRlrsKeInjectStatusAlerted.c)
 */

__int64 __fastcall VerifierKeDelayExecutionThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // bl
  char v6; // si

  v5 = a2;
  v6 = a1;
  if ( (VfRuleClasses & 4) != 0 )
  {
    LOBYTE(a1) = a2;
    if ( (unsigned int)VfRlrsKeInjectStatusAlerted(a1) )
      return 257LL;
  }
  LOBYTE(a2) = v5;
  LOBYTE(a1) = v6;
  return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
}
