/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x1405C2800
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 *     KiComputeEffectivePriority @ 0x1403FCAF0 (KiComputeEffectivePriority.c)
 *     KiTryScheduleNextForegroundBoost @ 0x14046A2F8 (KiTryScheduleNextForegroundBoost.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
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
    KxAcquireSpinLock(&qword_140F224F8);
    if ( *v1 == 1LL )
    {
      v3 = (_QWORD *)qword_140F224F0;
      v2 = qword_140F224E8 == (_QWORD)&qword_140F224E8;
      if ( *(__int64 **)qword_140F224F0 != &qword_140F224E8 )
        __fastfail(3u);
      *v1 = &qword_140F224E8;
      v1[1] = v3;
      *v3 = v1;
      qword_140F224F0 = (__int64)v1;
    }
    KxReleaseSpinLock((volatile signed __int64 *)&qword_140F224F8);
    if ( v2 )
      KeInsertQueueDpc(&stru_140F224A8, 0LL, 0LL);
  }
}
