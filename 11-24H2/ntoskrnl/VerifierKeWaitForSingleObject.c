/*
 * XREFs of VerifierKeWaitForSingleObject @ 0x140B95DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     VfRlrsKeInjectStatusAlerted @ 0x140B9F704 (VfRlrsKeInjectStatusAlerted.c)
 */

__int64 __fastcall VerifierKeWaitForSingleObject(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  char v5; // di
  __int64 v7; // rbp

  v4 = a4;
  v5 = a3;
  v7 = a1;
  if ( (VfRuleClasses & 4) != 0 )
  {
    LOBYTE(a1) = a4;
    if ( (unsigned int)VfRlrsKeInjectStatusAlerted(a1) )
      return 257LL;
  }
  LOBYTE(a4) = v4;
  LOBYTE(a3) = v5;
  return guard_dispatch_icall_no_overrides(v7, a2, a3, a4);
}
