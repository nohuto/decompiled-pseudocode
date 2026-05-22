/*
 * XREFs of ?ScheduleNextTimerCallback@MPCHeadMovementDetector@@AEAAXXZ @ 0x180080970
 * Callers:
 *     ?OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ @ 0x180076838 (-OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ.c)
 *     ??0MPCHeadMovementDetector@@QEAA@XZ @ 0x1800D0E94 (--0MPCHeadMovementDetector@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MPCHeadMovementDetector::ScheduleNextTimerCallback(MPCHeadMovementDetector *this)
{
  SetThreadpoolTimer(
    *((PTP_TIMER *)this + 1),
    (PFILETIME)((char *)this + (-(__int64)(*((_BYTE *)this + 64) != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 32),
    0,
    *((_DWORD *)this + 5));
}
