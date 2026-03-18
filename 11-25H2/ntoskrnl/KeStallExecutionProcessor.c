/*
 * XREFs of KeStallExecutionProcessor @ 0x140278EE0
 * Callers:
 *     PpmIdleSelectStates @ 0x1404B1F28 (PpmIdleSelectStates.c)
 *     KeFreezeExecution @ 0x1404D6470 (KeFreezeExecution.c)
 *     HalpInterruptResetThisProcessor @ 0x14053F4E0 (HalpInterruptResetThisProcessor.c)
 *     HalpInterruptWaitForProcessorStartUp @ 0x14053F6C4 (HalpInterruptWaitForProcessorStartUp.c)
 *     HalpPowerWriteResetCommand @ 0x140542254 (HalpPowerWriteResetCommand.c)
 *     HalpTimerInitializeClock @ 0x140544404 (HalpTimerInitializeClock.c)
 *     HalpTimerMeasureFrequencies @ 0x1405453A0 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerTestHypervisorTimer @ 0x140547BA0 (HalpTimerTestHypervisorTimer.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1405498F0 (HalpTimerMeasureProcessorsWorker.c)
 *     HalpNmiReboot @ 0x140557354 (HalpNmiReboot.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x14055FB70 (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpUsbLegacyStopUhciInterrupt @ 0x14055FCA4 (HalpUsbLegacyStopUhciInterrupt.c)
 *     HalpApicStartProcessor @ 0x1405666C0 (HalpApicStartProcessor.c)
 *     IvtUpdateGlobalCommand @ 0x14056E1D4 (IvtUpdateGlobalCommand.c)
 *     HsaGetPageFault @ 0x14056FC60 (HsaGetPageFault.c)
 *     HvlPrepareForRootCrashdump @ 0x1405844B4 (HvlPrepareForRootCrashdump.c)
 *     IoWriteCrashDump @ 0x14058EFA4 (IoWriteCrashDump.c)
 *     KcsanValidateAddress @ 0x1405AAC50 (KcsanValidateAddress.c)
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C17E0 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiMcheckAlternateReturn @ 0x1405C5660 (KiMcheckAlternateReturn.c)
 *     ExpWaitForBootDevices @ 0x140649EF0 (ExpWaitForBootDevices.c)
 *     AccelpSiovInternalOperationHandler @ 0x14065ABC4 (AccelpSiovInternalOperationHandler.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14068EE44 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14068F010 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14068F360 (BgpFwDisplayBugCheckScreenModernized.c)
 *     IpmiLibpDelay @ 0x140694BF4 (IpmiLibpDelay.c)
 *     InbvPortPutByte @ 0x1406963A4 (InbvPortPutByte.c)
 *     IvtInitializeIommu @ 0x140B41B90 (IvtInitializeIommu.c)
 *     HdlspBugCheckProcessing @ 0x140B9D1F8 (HdlspBugCheckProcessing.c)
 * Callees:
 *     HalpTimerStallExecutionProcessor @ 0x14027A3C0 (HalpTimerStallExecutionProcessor.c)
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     HalpHvCounterQueryCounter @ 0x14028FA00 (HalpHvCounterQueryCounter.c)
 *     HalpHpetQueryCounter @ 0x140350770 (HalpHpetQueryCounter.c)
 *     KeStallWhileFrozen @ 0x1405BDAA0 (KeStallWhileFrozen.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
