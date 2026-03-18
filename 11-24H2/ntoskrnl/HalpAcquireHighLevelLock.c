/*
 * XREFs of HalpAcquireHighLevelLock @ 0x1403B9FD0
 * Callers:
 *     HalpQueryProfileSourceList @ 0x1403B53B8 (HalpQueryProfileSourceList.c)
 *     HalEnableInterrupt @ 0x1403B7D10 (HalEnableInterrupt.c)
 *     HalDisableInterrupt @ 0x1403B8EA0 (HalDisableInterrupt.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403B90F8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptSetDestination @ 0x1403B9230 (HalpInterruptSetDestination.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1403B9368 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptApplyOverrides @ 0x1403B96C4 (HalpInterruptApplyOverrides.c)
 *     IvtFlushDomainTb @ 0x1403B9810 (IvtFlushDomainTb.c)
 *     HalpMaskInterrupt @ 0x1403B99F0 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x1403B9B20 (HalpUnmaskInterrupt.c)
 *     HalpFindSecondaryIcEntry @ 0x1403B9DDC (HalpFindSecondaryIcEntry.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x1403B9E70 (HalpVpptAcknowledgeInterrupt.c)
 *     ExtEnvSetVpptTarget @ 0x1403BB428 (ExtEnvSetVpptTarget.c)
 *     HalpInterruptSetLineState @ 0x1403BBB90 (HalpInterruptSetLineState.c)
 *     HalpInterruptLocalErrorService @ 0x1403BC000 (HalpInterruptLocalErrorService.c)
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
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int8 __fastcall HalpAcquireHighLevelLock(PKSPIN_LOCK SpinLock)
{
  KSPIN_LOCK *v1; // rdi
  unsigned __int8 CurrentIrql; // bl

  v1 = SpinLock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(SpinLock) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(SpinLock, 15LL);
  }
  KxAcquireSpinLock(v1);
  return CurrentIrql;
}
