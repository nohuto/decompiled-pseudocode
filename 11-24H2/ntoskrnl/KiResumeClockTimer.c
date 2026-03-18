/*
 * XREFs of KiResumeClockTimer @ 0x1404F5708
 * Callers:
 *     KeResumeClockTimer @ 0x1404F56F0 (KeResumeClockTimer.c)
 *     KeResumeClockTimerSafe @ 0x1405B9F4C (KeResumeClockTimerSafe.c)
 * Callees:
 *     KiSetClockTimer @ 0x14029F85C (KiSetClockTimer.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x1402A04E0 (KiSetClockTimerKTimerDeadlines.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KiEventClockStateChange @ 0x140459BEC (KiEventClockStateChange.c)
 *     KiRestoreClockTickRate @ 0x1404C89B0 (KiRestoreClockTickRate.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiResumeClockTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  struct _KPRCB *CurrentPrcb; // rsi
  int v6; // ebx
  char result; // al
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 InterruptTimePrecise; // rbp
  __int64 v13; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v17; // [rsp+80h] [rbp+18h] BYREF

  v16 = 0LL;
  v4 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = KiClockState;
  v15 = 0LL;
  result = KiClockTimerOwner;
  if ( CurrentPrcb->Number == (_DWORD)KiClockTimerOwner )
  {
    v4 = 1;
  }
  else if ( !KiClockTimerPerCpu )
  {
    goto LABEL_8;
  }
  guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  LOBYTE(v11) = 1;
  if ( !KiClockTimerPerCpuTickScheduling )
    LOBYTE(v11) = v4;
  result = guard_dispatch_icall_no_overrides(v11, v8, v9, v10);
  if ( !v4 )
  {
LABEL_8:
    if ( !KiClockTimerPerCpuTickScheduling )
      return result;
    goto LABEL_9;
  }
  ++KiClockStats;
  CurrentPrcb->ClockOwner = 1;
LABEL_9:
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v17);
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
    if ( v4 || !KiSerializeTimerExpiration )
      KiSetClockTimerKTimerDeadlines((__int64)CurrentPrcb, InterruptTimePrecise, v4);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  result = KiRestoreClockTickRate(InterruptTimePrecise, &v15, (int *)&v16, v13);
  if ( v4 )
  {
    if ( v6 == 2 )
      LOBYTE(v6) = _InterlockedExchange(&KiClockState, 0);
    KiEventClockStateChange(0, v6, &v16, &v15);
    result = InterruptTimePrecise + KeTimeIncrement;
    KiClockTimerNextTickTime = InterruptTimePrecise + (unsigned int)KeTimeIncrement;
  }
  return result;
}
