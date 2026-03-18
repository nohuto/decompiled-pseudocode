/*
 * XREFs of BapdpKsrCompleteScenario @ 0x1406527C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BapdpKsrCompleteScenario(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx

  v4 = a1 & 0x5000000;
  if ( (_DWORD)v4 && (a2 & 0x5000000) == 0 && *((_QWORD *)&xmmword_140EFEA90 + 1) )
    return guard_dispatch_icall_no_overrides(v4, a2, a3, a4);
  else
    return 3221225659LL;
}
