/*
 * XREFs of VerifierKeWaitForSingleObject @ 0x140B97DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     VfRlrsKeInjectStatusAlerted @ 0x140BA1704 (VfRlrsKeInjectStatusAlerted.c)
 */

__int64 __fastcall VerifierKeWaitForSingleObject(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v5; // rbp

  v5 = a1;
  if ( (VfRuleClasses & 4) != 0 && (LOBYTE(a1) = a4, (unsigned int)VfRlrsKeInjectStatusAlerted(a1)) )
    return 257LL;
  else
    return guard_dispatch_icall_no_overrides(v5, a2);
}
