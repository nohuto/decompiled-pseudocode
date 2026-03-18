/*
 * XREFs of BapdpKsrpInitiateScenario @ 0x140652890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BapdpKsrpInitiateScenario(int a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  unsigned int v6; // eax

  v5 = 83886080LL;
  v6 = a2 & 0x5000000;
  if ( (a1 & 0x5000000) != 0 || !v6 )
    return 3221225485LL;
  if ( !(_QWORD)ExKsrInterface )
    return 3221225659LL;
  LOBYTE(v5) = 1;
  return guard_dispatch_icall_no_overrides(v6, v5, ExKsrInterface, a4);
}
