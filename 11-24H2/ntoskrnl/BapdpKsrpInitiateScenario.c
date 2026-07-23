/*
 * XREFs of BapdpKsrpInitiateScenario @ 0x140650FF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BapdpKsrpInitiateScenario(int a1, int a2)
{
  __int64 v3; // rdx
  unsigned int v4; // eax

  v3 = 83886080LL;
  v4 = a2 & 0x5000000;
  if ( (a1 & 0x5000000) != 0 || !v4 )
    return 3221225485LL;
  if ( !(_QWORD)ExKsrInterface )
    return 3221225659LL;
  LOBYTE(v3) = 1;
  return guard_dispatch_icall_no_overrides(v4, v3);
}
