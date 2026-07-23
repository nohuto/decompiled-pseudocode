/*
 * XREFs of HalpTimerAlwaysOnClockInterrupt @ 0x14055C2C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerWatchdogTriggerSystemReset @ 0x140278DC0 (HalpTimerWatchdogTriggerSystemReset.c)
 *     HalpTimerWatchdogResetCountdown @ 0x140278F80 (HalpTimerWatchdogResetCountdown.c)
 *     HalpTimerClockInterruptWork @ 0x1402792DC (HalpTimerClockInterruptWork.c)
 *     KeClockInterruptNotify @ 0x140279370 (KeClockInterruptNotify.c)
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     HalpScanForProfilingCorruptionInternal @ 0x14043FC2C (HalpScanForProfilingCorruptionInternal.c)
 *     HalpTimerSwitchToNormalClock @ 0x1405447F4 (HalpTimerSwitchToNormalClock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpTimerAlwaysOnClockInterrupt(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  char v3; // si
  __int64 InternalData; // rax
  __int64 v5; // rbx
  unsigned int Number; // eax
  char v7; // r8
  char v8; // r8
  __int64 v9; // rdx
  _QWORD *v10; // rdi
  __int64 QuadPart; // rbx
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 136);
  v3 = *(_BYTE *)(v2 + 41);
  InternalData = HalpTimerGetInternalData(HalpAlwaysOnTimer);
  guard_dispatch_icall_no_overrides(InternalData);
  v5 = 3LL * (((unsigned __int8)_InterlockedExchangeAdd(&HalpClockTickLogIndex, 1u) + 1) & 0xF);
  HalpClockTickLog[v5] = RtlGetInterruptTimePrecise(&PerformanceCounter);
  Number = KeGetPcr()->Prcb.Number;
  LOBYTE(HalpClockTickLog[v5 + 2].LowPart) = 0;
  HalpClockTickLog[v5 + 1].LowPart = Number;
  HalpClockTickLog[v5 + 1].HighPart = KiClockTimerOwner;
  v7 = KeGetCurrentPrcb()->PendingTickFlags & 1;
  LOBYTE(HalpClockTickLog[v5 + 2].LowPart) = v7;
  v8 = KeGetCurrentPrcb()->PendingTickFlags & 2 | v7;
  LOBYTE(HalpClockTickLog[v5 + 2].LowPart) = v8;
  if ( KeGetCurrentPrcb()->ClockOwner )
    v8 |= 4u;
  LOBYTE(HalpClockTickLog[v5 + 2].LowPart) = v8 | 8;
  if ( (KeGetCurrentPrcb()->PendingTickFlags & 2) != 0 )
  {
    HalpTimerSwitchToNormalClock(1);
    LOBYTE(v9) = v3;
    KeClockInterruptNotify((__int64 *)v2, v9, 1LL);
    if ( KeGetCurrentPrcb()->ClockOwner )
    {
      if ( (unsigned int)(*(_DWORD *)(HalpClockTimer + 60) - MEMORY[0xFFFFF78000000008]) > 0x47868C00 )
      {
        BYTE1(HalpClockWorkUnion) = 1;
        *(_DWORD *)(HalpClockTimer + 60) = MEMORY[0xFFFFF78000000008] + 1200000000;
      }
      if ( HalpClockWorkUnion )
        HalpTimerClockInterruptWork();
      if ( KeGetCurrentPrcb()->ClockOwner && HalpWatchdogTimer )
      {
        if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset > (unsigned __int64)HalpTimerWatchdogResetCount )
        {
          if ( off_140E00B00[0] == HalpTimerWatchdogResetCountdown )
            HalpTimerWatchdogResetCountdown();
          else
            guard_dispatch_icall_no_overrides(HalpTimerWatchdogResetCountdown);
        }
        if ( HalpTimerWatchdogResetCount == -1 )
          HalpTimerWatchdogTriggerSystemReset(0);
      }
      if ( SLODWORD(KeGetCurrentPrcb()->HalReserved[3]) > 0 && (KeGetCurrentPrcb()->HalReserved[3] & 1) == 0 )
      {
        LODWORD(v1) = KeGetPcr()->Prcb.Number;
        v10 = (_QWORD *)(HalpCounterSetInfo + 24 * v1);
        if ( MEMORY[0xFFFFF78000000008] - v10[2] >= 0x4C4B40uLL )
        {
          if ( (_QWORD *)*v10 != v10 )
            guard_dispatch_icall_no_overrides(0LL);
          QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
          HalpScanForProfilingCorruptionInternal(0, v1, QuadPart);
          HalpScanForProfilingCorruptionInternal(1, v1, QuadPart);
          HalpScanForProfilingCorruptionInternal(100, v1, QuadPart);
          HalpScanForProfilingCorruptionInternal(101, v1, QuadPart);
          v10[2] = MEMORY[0xFFFFF78000000008];
        }
      }
    }
  }
  return 1;
}
