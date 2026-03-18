/*
 * XREFs of BapdpKsrpInitiateScenario @ 0x140646990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BapdpKsrpInitiateScenario(int a1, int a2)
{
  unsigned int v2; // eax

  v2 = a2 & 0x5000000;
  if ( (a1 & 0x5000000) != 0 || !v2 )
    return 3221225485LL;
  if ( (_QWORD)ExKsrInterface )
    return guard_dispatch_icall_no_overrides(v2);
  return 3221225659LL;
}
