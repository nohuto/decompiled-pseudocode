/*
 * XREFs of BapdpKsrCompleteScenario @ 0x1406468C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BapdpKsrCompleteScenario(int a1, int a2)
{
  __int64 v2; // rcx

  v2 = a1 & 0x5000000;
  if ( (_DWORD)v2 && (a2 & 0x5000000) == 0 && *((_QWORD *)&xmmword_140EFE750 + 1) )
    return guard_dispatch_icall_no_overrides(v2);
  else
    return 3221225659LL;
}
