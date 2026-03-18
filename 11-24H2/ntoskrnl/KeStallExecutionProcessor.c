/*
 * XREFs of KeStallExecutionProcessor @ 0x14033A030
 * Callers:
 *     KeFreezeExecution @ 0x1404D5B60 (KeFreezeExecution.c)
 *     PpmIdleSelectStates @ 0x1404EA518 (PpmIdleSelectStates.c)
 *     AccelpWaitForCompletionBusySpin @ 0x1404F9B54 (AccelpWaitForCompletionBusySpin.c)
 *     HalpInterruptResetThisProcessor @ 0x140541D10 (HalpInterruptResetThisProcessor.c)
 *     HalpInterruptWaitForProcessorStartUp @ 0x140541EF4 (HalpInterruptWaitForProcessorStartUp.c)
 *     HalpPowerWriteResetCommand @ 0x140544B14 (HalpPowerWriteResetCommand.c)
 *     HalpTimerInitializeClock @ 0x140546CF4 (HalpTimerInitializeClock.c)
 *     HalpTimerMeasureFrequencies @ 0x140547C90 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerTestHypervisorTimer @ 0x14054A490 (HalpTimerTestHypervisorTimer.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14054C1E0 (HalpTimerMeasureProcessorsWorker.c)
 *     HalpNmiReboot @ 0x140559C54 (HalpNmiReboot.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x140562470 (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpUsbLegacyStopUhciInterrupt @ 0x1405625A4 (HalpUsbLegacyStopUhciInterrupt.c)
 *     HalpApicStartProcessor @ 0x140569290 (HalpApicStartProcessor.c)
 *     IvtUpdateGlobalCommand @ 0x1405714D4 (IvtUpdateGlobalCommand.c)
 *     HsaGetPageFault @ 0x140572F60 (HsaGetPageFault.c)
 *     HvlPrepareForRootCrashdump @ 0x140587C34 (HvlPrepareForRootCrashdump.c)
 *     IoWriteCrashDump @ 0x1405927D4 (IoWriteCrashDump.c)
 *     KcsanValidateAddress @ 0x1405AE5E0 (KcsanValidateAddress.c)
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C5B80 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiMcheckAlternateReturn @ 0x1405C9C80 (KiMcheckAlternateReturn.c)
 *     ExpWaitForBootDevices @ 0x140655DF0 (ExpWaitForBootDevices.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14069A194 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14069A360 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14069A6B0 (BgpFwDisplayBugCheckScreenModernized.c)
 *     IpmiLibpDelay @ 0x14069FF94 (IpmiLibpDelay.c)
 *     InbvPortPutByte @ 0x1406A15D8 (InbvPortPutByte.c)
 *     IvtInitializeIommu @ 0x140B51B90 (IvtInitializeIommu.c)
 *     HdlspBugCheckProcessing @ 0x140BAD1F8 (HdlspBugCheckProcessing.c)
 * Callees:
 *     HalpTimerStallExecutionProcessor @ 0x14033B670 (HalpTimerStallExecutionProcessor.c)
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     HalpHvCounterQueryCounter @ 0x1403D6CB0 (HalpHvCounterQueryCounter.c)
 *     HalpHpetQueryCounter @ 0x1403D6DB0 (HalpHpetQueryCounter.c)
 *     KeStallWhileFrozen @ 0x1405C1B10 (KeStallWhileFrozen.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall KeStallExecutionProcessor(ULONG MicroSeconds)
{
  __int64 v1; // r8
  ULONG_PTR v3; // rdi
  __int64 InternalData; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 (__fastcall *v7)(_QWORD); // rdx
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 (__fastcall *v13)(_QWORD); // rdx
  __int64 Counter; // rax
  unsigned __int64 v15; // r11
  signed __int64 v16; // rax
  int v17; // r10d
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // r8
  signed __int64 v21; // rcx
  signed __int32 v22[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( HalpTimerProcessorsFrozen )
  {
    v3 = HalpAlwaysOnCounter;
    if ( HalpAlwaysOnCounter )
    {
      if ( *(_DWORD *)(HalpAlwaysOnCounter + 220) == 64 )
      {
        InternalData = HalpTimerGetInternalData(HalpAlwaysOnCounter);
        v7 = *(__int64 (__fastcall **)(_QWORD))(v3 + 112);
        if ( v7 == HalpHvCounterQueryCounter )
          HalpHvCounterQueryCounter(InternalData);
        else
          guard_dispatch_icall_no_overrides(InternalData, v7, v5, v6);
      }
      else
      {
        do
        {
          v8 = *(_QWORD *)(v3 + 208);
          do
          {
            v9 = *(_QWORD *)(v3 + 200);
            v10 = HalpTimerGetInternalData(v3);
            v13 = *(__int64 (__fastcall **)(_QWORD))(v3 + 112);
            if ( v13 == HalpHpetQueryCounter )
              Counter = HalpHpetQueryCounter(v10);
            else
              Counter = guard_dispatch_icall_no_overrides(v10, v13, v11, v12);
            v15 = Counter;
            _InterlockedOr(v22, 0);
            v16 = *(_QWORD *)(v3 + 200);
          }
          while ( v9 != v16 );
        }
        while ( v8 != *(_QWORD *)(v3 + 208) );
        v17 = *(_DWORD *)(v3 + 220);
        v18 = v9 ^ v15;
        if ( _bittest64((const __int64 *)&v18, (unsigned __int8)(v17 - 1)) )
        {
          v19 = -1LL;
          if ( v17 != 64 )
            v19 = (1LL << v17) - 1;
          v20 = v9 & v19;
          v21 = (v15 | v9 ^ v20) + (1LL << v17);
          if ( v15 >= v20 )
            v21 = v15 | v9 ^ v20;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 200), v21, v16);
        }
      }
    }
    KeStallWhileFrozen(MicroSeconds);
  }
  LOBYTE(v1) = 1;
  HalpTimerStallExecutionProcessor(HalpStallCounter, 10 * MicroSeconds, v1);
}
