/*
 * XREFs of PpmIdleInstallConcurrency @ 0x140475B30
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     PpmIdleUpdateConcurrency @ 0x140475BB0 (PpmIdleUpdateConcurrency.c)
 */

__int64 __fastcall PpmIdleInstallConcurrency(__int64 a1, KSPIN_LOCK *a2, KSPIN_LOCK *a3)
{
  KeQueryPerformanceCounter(0LL);
  PpmIdleUpdateConcurrency(a2);
  *(_QWORD *)(a1 + 35320) = a2;
  if ( a3 )
  {
    PpmIdleUpdateConcurrency(a3);
    *(_QWORD *)(a1 + 35328) = a3;
  }
  return 0LL;
}
