/*
 * XREFs of BapdpKsrCompleteScenarioPhase0 @ 0x140652800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BapdpKsrCompleteScenarioPhase0(int a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx

  v4 = a2 & 0x5000000;
  if ( (a1 & 0x5000000) == (_DWORD)v4 && *((_QWORD *)&ExKsrInterface + 1) )
    return guard_dispatch_icall_no_overrides((unsigned int)v4, v4, a3, a4);
  else
    return 3221225659LL;
}
