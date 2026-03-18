/*
 * XREFs of HalpTimerAlwaysOnClockInterrupt @ 0x14055EBC0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerWatchdogTriggerSystemReset @ 0x14033A0D0 (HalpTimerWatchdogTriggerSystemReset.c)
 *     HalpTimerWatchdogResetCountdown @ 0x14033A1F0 (HalpTimerWatchdogResetCountdown.c)
 *     HalpTimerClockInterruptWork @ 0x14033A54C (HalpTimerClockInterruptWork.c)
 *     KeClockInterruptNotify @ 0x14033A5E0 (KeClockInterruptNotify.c)
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     HalpScanForProfilingCorruptionInternal @ 0x1404419E4 (HalpScanForProfilingCorruptionInternal.c)
 *     HalpTimerSwitchToNormalClock @ 0x1405470E4 (HalpTimerSwitchToNormalClock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpTimerAlwaysOnClockInterrupt(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  char v3; // si
  __int64 InternalData; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned int Number; // eax
  char v10; // r8
  char v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rdi
  __int64 QuadPart; // rbx
  unsigned __int64 v20; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 136);
  v3 = *(_BYTE *)(v2 + 41);
  InternalData = HalpTimerGetInternalData(HalpAlwaysOnTimer);
  guard_dispatch_icall_no_overrides(InternalData, v5, v6, v7);
  v8 = 3LL * (((unsigned __int8)_InterlockedExchangeAdd(&HalpClockTickLogIndex, 1u) + 1) & 0xF);
  *((_QWORD *)&HalpClockTickLog + v8) = RtlGetInterruptTimePrecise(&v20);
  Number = KeGetPcr()->Prcb.Number;
  *((_BYTE *)&HalpClockTickLog + 8 * v8 + 16) = 0;
  *((_DWORD *)&HalpClockTickLog + 2 * v8 + 2) = Number;
  *((_DWORD *)&HalpClockTickLog + 2 * v8 + 3) = KiClockTimerOwner;
  v10 = KeGetCurrentPrcb()->PendingTickFlags & 1;
  *((_BYTE *)&HalpClockTickLog + 8 * v8 + 16) = v10;
  v11 = KeGetCurrentPrcb()->PendingTickFlags & 2 | v10;
  *((_BYTE *)&HalpClockTickLog + 8 * v8 + 16) = v11;
  if ( KeGetCurrentPrcb()->ClockOwner )
    v11 |= 4u;
  *((_BYTE *)&HalpClockTickLog + 8 * v8 + 16) = v11 | 8;
  if ( (KeGetCurrentPrcb()->PendingTickFlags & 2) != 0 )
  {
    HalpTimerSwitchToNormalClock(1);
    LOBYTE(v12) = v3;
    KeClockInterruptNotify(v2, v12, 1u);
    if ( KeGetCurrentPrcb()->ClockOwner )
    {
      v15 = HalpClockTimer;
      v16 = MEMORY[0xFFFFF78000000008];
      if ( (unsigned int)(*(_DWORD *)(HalpClockTimer + 60) - MEMORY[0xFFFFF78000000008]) > 0x47868C00 )
      {
        BYTE1(HalpClockWorkUnion) = 1;
        *(_DWORD *)(HalpClockTimer + 60) = MEMORY[0xFFFFF78000000008] + 1200000000;
      }
      if ( HalpClockWorkUnion )
        HalpTimerClockInterruptWork(v15, v16, v13, v14);
      if ( KeGetCurrentPrcb()->ClockOwner && HalpWatchdogTimer )
      {
        if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset > (unsigned __int64)HalpTimerWatchdogResetCount )
        {
          if ( off_140E00B00[0] == HalpTimerWatchdogResetCountdown )
            HalpTimerWatchdogResetCountdown();
          else
            guard_dispatch_icall_no_overrides(HalpTimerWatchdogResetCountdown, v16, v13, v14);
        }
        if ( HalpTimerWatchdogResetCount == -1 )
          HalpTimerWatchdogTriggerSystemReset(0);
      }
      if ( SLODWORD(KeGetCurrentPrcb()->HalReserved[3]) > 0 && (KeGetCurrentPrcb()->HalReserved[3] & 1) == 0 )
      {
        LODWORD(v1) = KeGetPcr()->Prcb.Number;
        v17 = (_QWORD *)(HalpCounterSetInfo + 24 * v1);
        if ( MEMORY[0xFFFFF78000000008] - v17[2] >= 0x4C4B40uLL )
        {
          if ( (_QWORD *)*v17 != v17 )
            guard_dispatch_icall_no_overrides(0LL, 0LL, v13, v14);
          QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
          HalpScanForProfilingCorruptionInternal(0, v1, QuadPart);
          HalpScanForProfilingCorruptionInternal(1, v1, QuadPart);
          HalpScanForProfilingCorruptionInternal(100, v1, QuadPart);
          HalpScanForProfilingCorruptionInternal(101, v1, QuadPart);
          v17[2] = MEMORY[0xFFFFF78000000008];
        }
      }
    }
  }
  return 1;
}
