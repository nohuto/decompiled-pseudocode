/*
 * XREFs of KiSrcuNotifyWorkerAcquire @ 0x1405BEA20
 * Callers:
 *     KeSrcuFree @ 0x1405BE120 (KeSrcuFree.c)
 *     KiSrcuNotifyGracePeriodStarted @ 0x1405BE81C (KiSrcuNotifyGracePeriodStarted.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x14045A7C0 (KeRemoveQueueDpcEx.c)
 */

_BOOL8 __fastcall KiSrcuNotifyWorkerAcquire(__int64 a1, int a2, unsigned __int32 a3)
{
  if ( a2 == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 68), a3);
    return _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), 1, 0) == 0;
  }
  else
  {
    _InterlockedExchange((volatile __int32 *)(a1 + 72), 2);
    _InterlockedExchange((volatile __int32 *)(a1 + 68), 0);
    KeRemoveQueueDpcEx(a1, 1);
    _InterlockedExchange((volatile __int32 *)(a1 + 68), a3);
    return 1LL;
  }
}
