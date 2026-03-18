/*
 * XREFs of HalpTimerQueryHostPerformanceCounter @ 0x14053B660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerQueryHostPerformanceCounter(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  if ( !HalpPerformanceCounter || *(_DWORD *)(HalpPerformanceCounter + 228) != 8 || !qword_140FC1030 || !qword_140FC0EC8 )
    return 3221225659LL;
  v5 = guard_dispatch_icall_no_overrides(0LL, a2, a3, a4);
  *a1 = guard_dispatch_icall_no_overrides(v7, v6, v8, v9) + v5;
  return 0LL;
}
