/*
 * XREFs of BapdpKsrInitiateScenarioPhase0 @ 0x140652840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BapdpKsrInitiateScenarioPhase0(int a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax

  v4 = a2 & 0x5000000;
  if ( (a1 & 0x5000000) != 0 || !v4 )
    return 3221225485LL;
  if ( (_QWORD)ExKsrInterface )
    return guard_dispatch_icall_no_overrides(v4, 0LL, ExKsrInterface, a4);
  return 3221225659LL;
}
