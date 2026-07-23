/*
 * XREFs of KiResumeClockTimer @ 0x1404F2E04
 * Callers:
 *     KeResumeClockTimer @ 0x1404F2DEC (KeResumeClockTimer.c)
 *     KeResumeClockTimerSafe @ 0x1405B6128 (KeResumeClockTimerSafe.c)
 * Callees:
 *     KiSetClockTimer @ 0x140274458 (KiSetClockTimer.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140277BC0 (KiSetClockTimerKTimerDeadlines.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KiEventClockStateChange @ 0x14045A880 (KiEventClockStateChange.c)
 *     KiRestoreClockTickRate @ 0x1404C7BF0 (KiRestoreClockTickRate.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int8 __fastcall KiResumeClockTimer(__int64 a1, __int64 a2)
{
  char v2; // di
  struct _KPRCB *CurrentPrcb; // rsi
  int v4; // ebx
  unsigned __int8 result; // al
  __int64 v6; // rdx
  __int64 v7; // rcx
  LARGE_INTEGER InterruptTimePrecise; // rbp
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // [rsp+70h] [rbp+8h] BYREF
  __int64 v11; // [rsp+78h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+80h] [rbp+18h] BYREF

  v11 = 0LL;
  v2 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = KiClockState;
  v10 = 0LL;
  result = KiClockTimerOwner;
  if ( CurrentPrcb->Number == (_DWORD)KiClockTimerOwner )
  {
    v2 = 1;
  }
  else if ( !KiClockTimerPerCpu )
  {
    goto LABEL_8;
  }
  guard_dispatch_icall_no_overrides(a1, a2);
  LOBYTE(v7) = 1;
  if ( !KiClockTimerPerCpuTickScheduling )
    LOBYTE(v7) = v2;
  result = guard_dispatch_icall_no_overrides(v7, v6);
  if ( !v2 )
  {
LABEL_8:
    if ( !KiClockTimerPerCpuTickScheduling )
      return result;
    goto LABEL_9;
  }
  ++KiClockStats;
  CurrentPrcb->ClockOwner = 1;
LABEL_9:
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    KiSetClockTimer(
      (__int64)CurrentPrcb,
      InterruptTimePrecise,
      -(__int64)(unsigned int)KeQuantumEndTimerIncrement,
      KeMinimumIncrement,
      3,
      1,
      0);
    if ( v2 || !KiSerializeTimerExpiration )
      KiSetClockTimerKTimerDeadlines((__int64)CurrentPrcb, InterruptTimePrecise, v2);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  result = KiRestoreClockTickRate(InterruptTimePrecise.QuadPart, &v10, (int *)&v11);
  if ( v2 )
  {
    if ( v4 == 2 )
      LOBYTE(v4) = _InterlockedExchange(&KiClockState, 0);
    KiEventClockStateChange(0, v4, &v11, &v10);
    result = LOBYTE(InterruptTimePrecise.LowPart) + KeTimeIncrement;
    KiClockTimerNextTickTime = InterruptTimePrecise.QuadPart + (unsigned int)KeTimeIncrement;
  }
  return result;
}
