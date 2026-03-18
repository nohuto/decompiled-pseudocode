/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x1405C0D28
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 *     KiComputeEffectivePriority @ 0x140316760 (KiComputeEffectivePriority.c)
 *     KiTryScheduleNextForegroundBoost @ 0x140472C3C (KiTryScheduleNextForegroundBoost.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
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
    KxAcquireSpinLock(&qword_140F21B18);
    if ( *v1 == 1LL )
    {
      v3 = (_QWORD *)qword_140F21B10;
      v2 = qword_140F21B08 == (_QWORD)&qword_140F21B08;
      if ( *(__int64 **)qword_140F21B10 != &qword_140F21B08 )
        __fastfail(3u);
      *v1 = &qword_140F21B08;
      v1[1] = v3;
      *v3 = v1;
      qword_140F21B10 = (__int64)v1;
    }
    KxReleaseSpinLock((volatile signed __int64 *)&qword_140F21B18);
    if ( v2 )
      KeInsertQueueDpc(&stru_140F21AC8, 0LL, 0LL);
  }
}
