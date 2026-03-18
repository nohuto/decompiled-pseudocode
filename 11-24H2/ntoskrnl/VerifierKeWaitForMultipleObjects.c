/*
 * XREFs of VerifierKeWaitForMultipleObjects @ 0x140B95D40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     VfRlrsKeInjectStatusAlerted @ 0x140B9F704 (VfRlrsKeInjectStatusAlerted.c)
 */

__int64 __fastcall VerifierKeWaitForMultipleObjects(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6)
{
  unsigned int v9; // r14d

  v9 = a1;
  if ( (VfRuleClasses & 4) != 0 && (LOBYTE(a1) = a6, (unsigned int)VfRlrsKeInjectStatusAlerted(a1)) )
    return 257LL;
  else
    return guard_dispatch_icall_no_overrides(v9, a2, a3, a4);
}
