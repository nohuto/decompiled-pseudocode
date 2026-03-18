/*
 * XREFs of BapdpKsrCompleteScenarioPhase0 @ 0x140646900
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BapdpKsrCompleteScenarioPhase0(int a1, int a2)
{
  unsigned int v2; // edx

  v2 = a2 & 0x5000000;
  if ( (a1 & 0x5000000) == v2 && *((_QWORD *)&ExKsrInterface + 1) )
    return guard_dispatch_icall_no_overrides(v2);
  else
    return 3221225659LL;
}
