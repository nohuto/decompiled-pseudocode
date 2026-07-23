/*
 * XREFs of HalpTimerClockInterrupt @ 0x14031A2C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerWatchdogTriggerSystemReset @ 0x1403195B0 (HalpTimerWatchdogTriggerSystemReset.c)
 *     HalpTimerWatchdogResetCountdown @ 0x1403196D0 (HalpTimerWatchdogResetCountdown.c)
 *     HalpTimerClockInterruptWork @ 0x140319A2C (HalpTimerClockInterruptWork.c)
 *     KeClockInterruptNotify @ 0x140319AC0 (KeClockInterruptNotify.c)
 *     HalpHvTimerAcknowledgeInterrupt @ 0x14031A530 (HalpHvTimerAcknowledgeInterrupt.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     HalpScanForProfilingCorruption @ 0x140435878 (HalpScanForProfilingCorruption.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpTimerClockInterrupt(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 v2; // si
  __int64 v3; // rax
  __int64 (__fastcall *v4)(_QWORD); // rdx
  char *v5; // rbx
  char v6; // cl
  char v7; // al
  __int64 v9; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  _QWORD *v11; // rbx
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 136);
  v2 = *(_BYTE *)(v1 + 41);
  if ( (*(_DWORD *)(HalpClockTimer + 224) & 0x10000) != 0 )
    v3 = *(_QWORD *)(HalpClockTimer + 72) + *(_DWORD *)(HalpClockTimer + 80) * KeGetPcr()->Prcb.Number;
  else
    v3 = *(_QWORD *)(HalpClockTimer + 72);
  v4 = *(__int64 (__fastcall **)(_QWORD))(HalpClockTimer + 120);
  if ( v4 == HalpHvTimerAcknowledgeInterrupt )
    HalpHvTimerAcknowledgeInterrupt(v3);
  else
    guard_dispatch_icall_no_overrides(v3, v4);
  v5 = (char *)&HalpClockTickLog
     + 24 * (((unsigned __int8)_InterlockedExchangeAdd(&HalpClockTickLogIndex, 1u) + 1) & 0xF);
  *(LARGE_INTEGER *)v5 = RtlGetInterruptTimePrecise(&PerformanceCounter);
  *((_DWORD *)v5 + 2) = KeGetPcr()->Prcb.Number;
  *((_DWORD *)v5 + 3) = KiClockTimerOwner;
  v5[16] = 0;
  v6 = KeGetCurrentPrcb()->PendingTickFlags & 1;
  v5[16] = v6;
  v7 = v6 | KeGetCurrentPrcb()->PendingTickFlags & 2;
  v5[16] = v7;
  if ( KeGetCurrentPrcb()->ClockOwner )
    v5[16] = v7 | 4;
  if ( (KeGetCurrentPrcb()->PendingTickFlags & 1) != 0 )
  {
    KeClockInterruptNotify(v1, v2, 0);
    if ( KeGetCurrentPrcb()->ClockOwner )
    {
      v9 = MEMORY[0xFFFFF78000000008];
      if ( (unsigned int)(*(_DWORD *)(HalpClockTimer + 60) - MEMORY[0xFFFFF78000000008]) > 0x47868C00 )
      {
        BYTE1(HalpClockWorkUnion) = 1;
        *(_DWORD *)(HalpClockTimer + 60) = MEMORY[0xFFFFF78000000008] + 1200000000;
      }
      if ( HalpClockWorkUnion )
        HalpTimerClockInterruptWork();
      CurrentPrcb = KeGetCurrentPrcb();
      if ( HalpWatchdogTimer && CurrentPrcb->ClockOwner )
      {
        if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset > (unsigned __int64)HalpTimerWatchdogResetCount )
        {
          if ( off_140E00B00[0] == HalpTimerWatchdogResetCountdown )
            HalpTimerWatchdogResetCountdown();
          else
            guard_dispatch_icall_no_overrides(HalpTimerWatchdogResetCountdown, v9);
        }
        if ( HalpTimerWatchdogResetCount == -1 )
          HalpTimerWatchdogTriggerSystemReset(0);
      }
      if ( SLODWORD(KeGetCurrentPrcb()->HalReserved[3]) > 0 && (KeGetCurrentPrcb()->HalReserved[3] & 1) == 0 )
      {
        LODWORD(v1) = KeGetPcr()->Prcb.Number;
        v11 = (_QWORD *)(HalpCounterSetInfo + 24 * v1);
        if ( MEMORY[0xFFFFF78000000008] - v11[2] >= 0x4C4B40uLL )
        {
          if ( (_QWORD *)*v11 != v11 )
            guard_dispatch_icall_no_overrides(0LL, 0LL);
          HalpScanForProfilingCorruption((unsigned int)v1);
          v11[2] = MEMORY[0xFFFFF78000000008];
        }
      }
    }
  }
  return 1;
}
