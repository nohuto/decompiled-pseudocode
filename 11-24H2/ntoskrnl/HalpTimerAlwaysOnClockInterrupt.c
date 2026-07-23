/*
 * XREFs of HalpTimerAlwaysOnClockInterrupt @ 0x14055C7F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerWatchdogTriggerSystemReset @ 0x1403195B0 (HalpTimerWatchdogTriggerSystemReset.c)
 *     HalpTimerWatchdogResetCountdown @ 0x1403196D0 (HalpTimerWatchdogResetCountdown.c)
 *     HalpTimerClockInterruptWork @ 0x140319A2C (HalpTimerClockInterruptWork.c)
 *     KeClockInterruptNotify @ 0x140319AC0 (KeClockInterruptNotify.c)
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     HalpScanForProfilingCorruptionInternal @ 0x1404358DC (HalpScanForProfilingCorruptionInternal.c)
 *     HalpTimerSwitchToNormalClock @ 0x1405449A4 (HalpTimerSwitchToNormalClock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpTimerAlwaysOnClockInterrupt(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  char v3; // si
  __int64 InternalData; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned int Number; // eax
  char v8; // r8
  char v9; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  _QWORD *v12; // rdi
  __int64 QuadPart; // rbx
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 136);
  v3 = *(_BYTE *)(v2 + 41);
  InternalData = HalpTimerGetInternalData(HalpAlwaysOnTimer);
  guard_dispatch_icall_no_overrides(InternalData, v5);
  v6 = 3LL * (((unsigned __int8)_InterlockedExchangeAdd(&HalpClockTickLogIndex, 1u) + 1) & 0xF);
  HalpClockTickLog[v6] = RtlGetInterruptTimePrecise(&PerformanceCounter);
  Number = KeGetPcr()->Prcb.Number;
  LOBYTE(HalpClockTickLog[v6 + 2].LowPart) = 0;
  HalpClockTickLog[v6 + 1].LowPart = Number;
  HalpClockTickLog[v6 + 1].HighPart = KiClockTimerOwner;
  v8 = KeGetCurrentPrcb()->PendingTickFlags & 1;
  LOBYTE(HalpClockTickLog[v6 + 2].LowPart) = v8;
  v9 = KeGetCurrentPrcb()->PendingTickFlags & 2 | v8;
  LOBYTE(HalpClockTickLog[v6 + 2].LowPart) = v9;
  if ( KeGetCurrentPrcb()->ClockOwner )
    v9 |= 4u;
  LOBYTE(HalpClockTickLog[v6 + 2].LowPart) = v9 | 8;
  if ( (KeGetCurrentPrcb()->PendingTickFlags & 2) != 0 )
  {
    HalpTimerSwitchToNormalClock(1);
    LOBYTE(v10) = v3;
    KeClockInterruptNotify(v2, v10, 1u);
    if ( KeGetCurrentPrcb()->ClockOwner )
    {
      v11 = MEMORY[0xFFFFF78000000008];
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
            guard_dispatch_icall_no_overrides(HalpTimerWatchdogResetCountdown, v11);
        }
        if ( HalpTimerWatchdogResetCount == -1 )
          HalpTimerWatchdogTriggerSystemReset(0);
      }
      if ( SLODWORD(KeGetCurrentPrcb()->HalReserved[3]) > 0 && (KeGetCurrentPrcb()->HalReserved[3] & 1) == 0 )
      {
        LODWORD(v1) = KeGetPcr()->Prcb.Number;
        v12 = (_QWORD *)(HalpCounterSetInfo + 24 * v1);
        if ( MEMORY[0xFFFFF78000000008] - v12[2] >= 0x4C4B40uLL )
        {
          if ( (_QWORD *)*v12 != v12 )
            guard_dispatch_icall_no_overrides(0LL, 0LL);
          QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
          HalpScanForProfilingCorruptionInternal(0, v1, QuadPart);
          HalpScanForProfilingCorruptionInternal(1, v1, QuadPart);
          HalpScanForProfilingCorruptionInternal(100, v1, QuadPart);
          HalpScanForProfilingCorruptionInternal(101, v1, QuadPart);
          v12[2] = MEMORY[0xFFFFF78000000008];
        }
      }
    }
  }
  return 1;
}
