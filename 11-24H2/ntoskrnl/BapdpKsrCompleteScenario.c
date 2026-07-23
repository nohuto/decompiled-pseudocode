/*
 * XREFs of BapdpKsrCompleteScenario @ 0x140650F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BapdpKsrCompleteScenario(int a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = a1 & 0x5000000;
  if ( (_DWORD)v2 && (a2 & 0x5000000) == 0 && *((_QWORD *)&xmmword_140EFEDB0 + 1) )
    return guard_dispatch_icall_no_overrides(v2, a2);
  else
    return 3221225659LL;
}
