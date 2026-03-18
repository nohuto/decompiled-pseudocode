/*
 * XREFs of HalpTimerClockInterrupt @ 0x14033ADE0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerWatchdogTriggerSystemReset @ 0x14033A0D0 (HalpTimerWatchdogTriggerSystemReset.c)
 *     HalpTimerWatchdogResetCountdown @ 0x14033A1F0 (HalpTimerWatchdogResetCountdown.c)
 *     HalpTimerClockInterruptWork @ 0x14033A54C (HalpTimerClockInterruptWork.c)
 *     KeClockInterruptNotify @ 0x14033A5E0 (KeClockInterruptNotify.c)
 *     HalpHvTimerAcknowledgeInterrupt @ 0x14033B050 (HalpHvTimerAcknowledgeInterrupt.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     HalpScanForProfilingCorruption @ 0x140441980 (HalpScanForProfilingCorruption.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpTimerClockInterrupt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned __int8 v5; // si
  __int64 v6; // rax
  __int64 (__fastcall *v7)(_QWORD); // rdx
  char *v8; // rbx
  char v9; // cl
  char v10; // al
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  _QWORD *v17; // rbx
  char v18; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 136);
  v5 = *(_BYTE *)(v4 + 41);
  if ( (*(_DWORD *)(HalpClockTimer + 224) & 0x10000) != 0 )
    v6 = *(_QWORD *)(HalpClockTimer + 72) + *(_DWORD *)(HalpClockTimer + 80) * KeGetPcr()->Prcb.Number;
  else
    v6 = *(_QWORD *)(HalpClockTimer + 72);
  v7 = *(__int64 (__fastcall **)(_QWORD))(HalpClockTimer + 120);
  if ( v7 == HalpHvTimerAcknowledgeInterrupt )
    HalpHvTimerAcknowledgeInterrupt(v6);
  else
    guard_dispatch_icall_no_overrides(v6, v7, a3, a4);
  v8 = (char *)&HalpClockTickLog
     + 24 * (((unsigned __int8)_InterlockedExchangeAdd(&HalpClockTickLogIndex, 1u) + 1) & 0xF);
  *(_QWORD *)v8 = RtlGetInterruptTimePrecise(&v18);
  *((_DWORD *)v8 + 2) = KeGetPcr()->Prcb.Number;
  *((_DWORD *)v8 + 3) = KiClockTimerOwner;
  v8[16] = 0;
  v9 = KeGetCurrentPrcb()->PendingTickFlags & 1;
  v8[16] = v9;
  v10 = v9 | KeGetCurrentPrcb()->PendingTickFlags & 2;
  v8[16] = v10;
  if ( KeGetCurrentPrcb()->ClockOwner )
    v8[16] = v10 | 4;
  if ( (KeGetCurrentPrcb()->PendingTickFlags & 1) != 0 )
  {
    KeClockInterruptNotify(v4, v5, 0);
    if ( KeGetCurrentPrcb()->ClockOwner )
    {
      v14 = HalpClockTimer;
      v15 = MEMORY[0xFFFFF78000000008];
      if ( (unsigned int)(*(_DWORD *)(HalpClockTimer + 60) - MEMORY[0xFFFFF78000000008]) > 0x47868C00 )
      {
        BYTE1(HalpClockWorkUnion) = 1;
        *(_DWORD *)(HalpClockTimer + 60) = MEMORY[0xFFFFF78000000008] + 1200000000;
      }
      if ( HalpClockWorkUnion )
        HalpTimerClockInterruptWork(v14, v15, v12, v13);
      CurrentPrcb = KeGetCurrentPrcb();
      if ( HalpWatchdogTimer && CurrentPrcb->ClockOwner )
      {
        if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset > (unsigned __int64)HalpTimerWatchdogResetCount )
        {
          if ( off_140E00B00[0] == HalpTimerWatchdogResetCountdown )
            HalpTimerWatchdogResetCountdown();
          else
            guard_dispatch_icall_no_overrides(HalpTimerWatchdogResetCountdown, v15, v12, v13);
        }
        if ( HalpTimerWatchdogResetCount == -1 )
          HalpTimerWatchdogTriggerSystemReset(0);
      }
      if ( SLODWORD(KeGetCurrentPrcb()->HalReserved[3]) > 0 && (KeGetCurrentPrcb()->HalReserved[3] & 1) == 0 )
      {
        LODWORD(v4) = KeGetPcr()->Prcb.Number;
        v17 = (_QWORD *)(HalpCounterSetInfo + 24 * v4);
        if ( MEMORY[0xFFFFF78000000008] - v17[2] >= 0x4C4B40uLL )
        {
          if ( (_QWORD *)*v17 != v17 )
            guard_dispatch_icall_no_overrides(0LL, 0LL, v12, v13);
          HalpScanForProfilingCorruption((unsigned int)v4);
          v17[2] = MEMORY[0xFFFFF78000000008];
        }
      }
    }
  }
  return 1;
}
