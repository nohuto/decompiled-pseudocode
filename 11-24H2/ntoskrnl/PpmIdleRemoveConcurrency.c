/*
 * XREFs of PpmIdleRemoveConcurrency @ 0x140475AB0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     PpmIdleUpdateConcurrency @ 0x140475BB0 (PpmIdleUpdateConcurrency.c)
 */

__int64 __fastcall PpmIdleRemoveConcurrency(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  KSPIN_LOCK *v4; // rcx

  v1 = *(KSPIN_LOCK **)(a1 + 35320);
  if ( v1 )
  {
    KeQueryPerformanceCounter(0LL);
    PpmIdleUpdateConcurrency(v1);
    v4 = *(KSPIN_LOCK **)(a1 + 35328);
    *(_QWORD *)(a1 + 35320) = 0LL;
    if ( v4 )
    {
      PpmIdleUpdateConcurrency(v4);
      *(_QWORD *)(a1 + 35328) = 0LL;
    }
  }
  return 0LL;
}
