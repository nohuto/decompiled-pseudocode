/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x1405C50CC
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14031ED40 (KiDeferredReadySingleThread.c)
 *     KiComputeEffectivePriority @ 0x1404024F0 (KiComputeEffectivePriority.c)
 *     KiTryScheduleNextForegroundBoost @ 0x14046FED0 (KiTryScheduleNextForegroundBoost.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 */

void __fastcall KiScheduleNextForegroundBoost(__int64 a1)
{
  _QWORD *v1; // rbx
  bool v2; // di
  _QWORD *v3; // rax

  v1 = (_QWORD *)(a1 + 880);
  if ( *(_QWORD *)(a1 + 880) == 1LL )
  {
    v2 = 0;
    KxAcquireSpinLock(&qword_140F222B8);
    if ( *v1 == 1LL )
    {
      v3 = (_QWORD *)qword_140F222B0;
      v2 = qword_140F222A8 == (_QWORD)&qword_140F222A8;
      if ( *(__int64 **)qword_140F222B0 != &qword_140F222A8 )
        __fastfail(3u);
      *v1 = &qword_140F222A8;
      v1[1] = v3;
      *v3 = v1;
      qword_140F222B0 = (__int64)v1;
    }
    KxReleaseSpinLock((volatile signed __int64 *)&qword_140F222B8);
    if ( v2 )
      KeInsertQueueDpc(&stru_140F22268, 0LL, 0LL);
  }
}
