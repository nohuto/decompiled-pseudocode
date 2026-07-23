/*
 * XREFs of BapdpKsrCompleteScenarioPhase0 @ 0x140650F60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BapdpKsrCompleteScenarioPhase0(int a1, int a2)
{
  __int64 v2; // rdx

  v2 = a2 & 0x5000000;
  if ( (a1 & 0x5000000) == (_DWORD)v2 && *((_QWORD *)&ExKsrInterface + 1) )
    return guard_dispatch_icall_no_overrides((unsigned int)v2, v2);
  else
    return 3221225659LL;
}
