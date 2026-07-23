/*
 * XREFs of KeStallExecutionProcessor @ 0x140319510
 * Callers:
 *     KeFreezeExecution @ 0x1404CEFB0 (KeFreezeExecution.c)
 *     PpmIdleSelectStates @ 0x1404E1498 (PpmIdleSelectStates.c)
 *     AccelpWaitForCompletionBusySpin @ 0x1404F7434 (AccelpWaitForCompletionBusySpin.c)
 *     HalpInterruptResetThisProcessor @ 0x14053F610 (HalpInterruptResetThisProcessor.c)
 *     HalpInterruptWaitForProcessorStartUp @ 0x14053F7F0 (HalpInterruptWaitForProcessorStartUp.c)
 *     HalpPowerWriteResetCommand @ 0x1405423D4 (HalpPowerWriteResetCommand.c)
 *     HalpTimerInitializeClock @ 0x1405445B4 (HalpTimerInitializeClock.c)
 *     HalpTimerMeasureFrequencies @ 0x140545550 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerTestHypervisorTimer @ 0x140547D50 (HalpTimerTestHypervisorTimer.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x140549AA0 (HalpTimerMeasureProcessorsWorker.c)
 *     HalpNmiReboot @ 0x140557884 (HalpNmiReboot.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x1405600A0 (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpUsbLegacyStopUhciInterrupt @ 0x1405601D4 (HalpUsbLegacyStopUhciInterrupt.c)
 *     HalpApicStartProcessor @ 0x140566D80 (HalpApicStartProcessor.c)
 *     IvtUpdateGlobalCommand @ 0x14056E964 (IvtUpdateGlobalCommand.c)
 *     HsaGetPageFault @ 0x1405703F0 (HsaGetPageFault.c)
 *     HvlPrepareForRootCrashdump @ 0x140584F94 (HvlPrepareForRootCrashdump.c)
 *     IoWriteCrashDump @ 0x14058F7F8 (IoWriteCrashDump.c)
 *     KcsanValidateAddress @ 0x1405AB550 (KcsanValidateAddress.c)
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C32B0 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiMcheckAlternateReturn @ 0x1405C73B0 (KiMcheckAlternateReturn.c)
 *     ExpWaitForBootDevices @ 0x1406544F0 (ExpWaitForBootDevices.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14069B214 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14069B3E0 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14069B730 (BgpFwDisplayBugCheckScreenModernized.c)
 *     IpmiLibpDelay @ 0x1406A1098 (IpmiLibpDelay.c)
 *     InbvPortPutByte @ 0x1406A2630 (InbvPortPutByte.c)
 *     IvtInitializeIommu @ 0x140B53BE0 (IvtInitializeIommu.c)
 *     HdlspBugCheckProcessing @ 0x140BAF1F8 (HdlspBugCheckProcessing.c)
 * Callees:
 *     HalpTimerStallExecutionProcessor @ 0x14031AB50 (HalpTimerStallExecutionProcessor.c)
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     HalpHvCounterQueryCounter @ 0x1403BC300 (HalpHvCounterQueryCounter.c)
 *     HalpHpetQueryCounter @ 0x1403BC400 (HalpHpetQueryCounter.c)
 *     KeStallWhileFrozen @ 0x1405BF0E0 (KeStallWhileFrozen.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall KeStallExecutionProcessor(ULONG MicroSeconds)
{
  __int64 v1; // r8
  ULONG_PTR v3; // rdi
  __int64 InternalData; // rax
  __int64 (__fastcall *v5)(_QWORD); // rdx
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(_QWORD); // rdx
  __int64 Counter; // rax
  unsigned __int64 v11; // r11
  signed __int64 v12; // rax
  int v13; // r10d
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // r8
  signed __int64 v17; // rcx
  signed __int32 v18[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( HalpTimerProcessorsFrozen )
  {
    v3 = HalpAlwaysOnCounter;
    if ( HalpAlwaysOnCounter )
    {
      if ( *(_DWORD *)(HalpAlwaysOnCounter + 220) == 64 )
      {
        InternalData = HalpTimerGetInternalData(HalpAlwaysOnCounter);
        v5 = *(__int64 (__fastcall **)(_QWORD))(v3 + 112);
        if ( v5 == HalpHvCounterQueryCounter )
          HalpHvCounterQueryCounter(InternalData);
        else
          guard_dispatch_icall_no_overrides(InternalData, v5);
      }
      else
      {
        do
        {
          v6 = *(_QWORD *)(v3 + 208);
          do
          {
            v7 = *(_QWORD *)(v3 + 200);
            v8 = HalpTimerGetInternalData(v3);
            v9 = *(__int64 (__fastcall **)(_QWORD))(v3 + 112);
            if ( v9 == HalpHpetQueryCounter )
              Counter = HalpHpetQueryCounter(v8);
            else
              Counter = guard_dispatch_icall_no_overrides(v8, v9);
            v11 = Counter;
            _InterlockedOr(v18, 0);
            v12 = *(_QWORD *)(v3 + 200);
          }
          while ( v7 != v12 );
        }
        while ( v6 != *(_QWORD *)(v3 + 208) );
        v13 = *(_DWORD *)(v3 + 220);
        v14 = v7 ^ v11;
        if ( _bittest64((const __int64 *)&v14, (unsigned __int8)(v13 - 1)) )
        {
          v15 = -1LL;
          if ( v13 != 64 )
            v15 = (1LL << v13) - 1;
          v16 = v7 & v15;
          v17 = (v11 | v7 ^ v16) + (1LL << v13);
          if ( v11 >= v16 )
            v17 = v11 | v7 ^ v16;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 200), v17, v12);
        }
      }
    }
    KeStallWhileFrozen(MicroSeconds);
  }
  LOBYTE(v1) = 1;
  HalpTimerStallExecutionProcessor(HalpStallCounter, 10 * MicroSeconds, v1);
}
