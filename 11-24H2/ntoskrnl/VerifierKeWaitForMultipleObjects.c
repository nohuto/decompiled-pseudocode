/*
 * XREFs of VerifierKeWaitForMultipleObjects @ 0x140B97D40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     VfRlrsKeInjectStatusAlerted @ 0x140BA1704 (VfRlrsKeInjectStatusAlerted.c)
 */

__int64 __fastcall VerifierKeWaitForMultipleObjects(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  unsigned int v7; // r14d

  v7 = a1;
  if ( (VfRuleClasses & 4) != 0 && (LOBYTE(a1) = a6, (unsigned int)VfRlrsKeInjectStatusAlerted(a1)) )
    return 257LL;
  else
    return guard_dispatch_icall_no_overrides(v7, a2);
}
