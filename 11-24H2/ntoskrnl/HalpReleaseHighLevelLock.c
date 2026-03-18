/*
 * XREFs of HalpReleaseHighLevelLock @ 0x1403B9898
 * Callers:
 *     HalpQueryProfileSourceList @ 0x1403B53B8 (HalpQueryProfileSourceList.c)
 *     KiConnectSecondaryInterrupt @ 0x1403B7390 (KiConnectSecondaryInterrupt.c)
 *     HalEnableInterrupt @ 0x1403B7D10 (HalEnableInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x1403B8B5C (KiDisconnectInterruptCommon.c)
 *     HalDisableInterrupt @ 0x1403B8EA0 (HalDisableInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1403B9038 (KiDisconnectSecondaryInterrupt.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403B90F8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptSetDestination @ 0x1403B9230 (HalpInterruptSetDestination.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1403B9368 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptApplyOverrides @ 0x1403B96C4 (HalpInterruptApplyOverrides.c)
 *     IvtFlushDomainTb @ 0x1403B9810 (IvtFlushDomainTb.c)
 *     ExtEnvSetVpptTarget @ 0x1403BB428 (ExtEnvSetVpptTarget.c)
 *     HalpInterruptSetLineState @ 0x1403BBB90 (HalpInterruptSetLineState.c)
 *     HalpInterruptLocalErrorService @ 0x1403BC000 (HalpInterruptLocalErrorService.c)
 *     KiInterruptDispatchCommon @ 0x1403BF7F8 (KiInterruptDispatchCommon.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x14046E528 (KiUnmaskSecondaryInterruptInternal.c)
 *     KiMaskSecondaryInterruptInternal @ 0x14046E5F4 (KiMaskSecondaryInterruptInternal.c)
 *     HalpInterruptEnableNmi @ 0x1404A356C (HalpInterruptEnableNmi.c)
 *     HalpVpptArmTimer @ 0x1404A5A30 (HalpVpptArmTimer.c)
 *     HalpQueryProfileSource @ 0x1404BBCB0 (HalpQueryProfileSource.c)
 *     HalpTimerEnableHypervisorTimer @ 0x1404CD038 (HalpTimerEnableHypervisorTimer.c)
 *     HalpInterruptEnumerateUnmaskedInterrupts @ 0x140540970 (HalpInterruptEnumerateUnmaskedInterrupts.c)
 *     HalpInterruptRemapFixedLines @ 0x140542550 (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptRequestInterrupt @ 0x1405427A0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x1405429CC (HalpInterruptSetLineSpecificOverride.c)
 *     HalpInterruptServiceActiveBoth @ 0x14054403C (HalpInterruptServiceActiveBoth.c)
 *     HalpTimerConfigureInterrupt @ 0x140547380 (HalpTimerConfigureInterrupt.c)
 *     HalpVpptInitializePhysicalTimer @ 0x140548BC4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x140548C50 (HalpVpptStop.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x1405557E8 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     HalpCreateSecondaryIcEntry @ 0x14055590C (HalpCreateSecondaryIcEntry.c)
 *     HalpDeleteSecondaryIcEntry @ 0x140555A18 (HalpDeleteSecondaryIcEntry.c)
 *     HalpInsertSecondarySignalList @ 0x140555ABC (HalpInsertSecondarySignalList.c)
 *     HalpInterruptEnumerateUnmaskedSecondaryInterrupts @ 0x140555B4C (HalpInterruptEnumerateUnmaskedSecondaryInterrupts.c)
 *     HalpProcessSecondarySignalList @ 0x140555D20 (HalpProcessSecondarySignalList.c)
 *     HalpUnregisterSecondaryIcInterface @ 0x140555DF0 (HalpUnregisterSecondaryIcInterface.c)
 *     EmonAddProfileSource @ 0x14055A820 (EmonAddProfileSource.c)
 *     EmonEnableMonitoringEnhanced @ 0x14055B260 (EmonEnableMonitoringEnhanced.c)
 *     EmonEnableMonitoringOriginal @ 0x14055B3C0 (EmonEnableMonitoringOriginal.c)
 *     EmonRemoveProfileSourceEnhanced @ 0x14055DB40 (EmonRemoveProfileSourceEnhanced.c)
 *     EmonRemoveProfileSourceOriginal @ 0x14055DC40 (EmonRemoveProfileSourceOriginal.c)
 *     EmonSetIntervalEnhanced @ 0x14055E730 (EmonSetIntervalEnhanced.c)
 *     EmonSetIntervalOriginal @ 0x14055E930 (EmonSetIntervalOriginal.c)
 *     Amd64AddProfileSource @ 0x14056A3A0 (Amd64AddProfileSource.c)
 *     Amd64EnableMonitoring @ 0x14056AFE0 (Amd64EnableMonitoring.c)
 *     Amd64RemoveProfileSource @ 0x14056C580 (Amd64RemoveProfileSource.c)
 *     Amd64SetInterval @ 0x14056C7D0 (Amd64SetInterval.c)
 *     IvtAttachDeviceDomainInternal @ 0x14056DA10 (IvtAttachDeviceDomainInternal.c)
 *     IvtFreeDomain @ 0x14056E560 (IvtFreeDomain.c)
 *     IvtLegacyAttachDeviceDomainInternal @ 0x14056FB5C (IvtLegacyAttachDeviceDomainInternal.c)
 *     IvtLegacyFlushDomainTb @ 0x1405700A0 (IvtLegacyFlushDomainTb.c)
 *     HsaAllocateRemappingTableEntry @ 0x1405724A0 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x140572DC0 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall HalpReleaseHighLevelLock(volatile signed __int64 *a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rdx

  v2 = a2;
  result = KxReleaseSpinLock(a1);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = v2;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  }
  __writecr8(v2);
  return result;
}
