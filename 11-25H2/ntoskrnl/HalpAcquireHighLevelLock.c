/*
 * XREFs of HalpAcquireHighLevelLock @ 0x140445E40
 * Callers:
 *     HalEnableInterrupt @ 0x140201940 (HalEnableInterrupt.c)
 *     HalpQueryProfileSourceList @ 0x140377670 (HalpQueryProfileSourceList.c)
 *     HalpInterruptLocalErrorService @ 0x140443C20 (HalpInterruptLocalErrorService.c)
 *     HalpInterruptEnableNmi @ 0x140443DC4 (HalpInterruptEnableNmi.c)
 *     HalpInterruptSetLineState @ 0x140443F50 (HalpInterruptSetLineState.c)
 *     ExtEnvSetVpptTarget @ 0x140444404 (ExtEnvSetVpptTarget.c)
 *     HalDisableInterrupt @ 0x140444D30 (HalDisableInterrupt.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x140444F88 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptSetDestination @ 0x1404450C0 (HalpInterruptSetDestination.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1404451F8 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptApplyOverrides @ 0x140445554 (HalpInterruptApplyOverrides.c)
 *     IvtFlushDomainTb @ 0x1404456A0 (IvtFlushDomainTb.c)
 *     HalpMaskInterrupt @ 0x140445850 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x140445980 (HalpUnmaskInterrupt.c)
 *     HalpFindSecondaryIcEntry @ 0x140445C44 (HalpFindSecondaryIcEntry.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x140445CE0 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x140447620 (HalpVpptArmTimer.c)
 *     HalpQueryProfileSource @ 0x1404BCB50 (HalpQueryProfileSource.c)
 *     HalpTimerEnableHypervisorTimer @ 0x1404CD4C8 (HalpTimerEnableHypervisorTimer.c)
 *     HalpInterruptEnumerateUnmaskedInterrupts @ 0x14053E140 (HalpInterruptEnumerateUnmaskedInterrupts.c)
 *     HalpInterruptRemapFixedLines @ 0x14053FD20 (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptRequestInterrupt @ 0x14053FF70 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x14054019C (HalpInterruptSetLineSpecificOverride.c)
 *     HalpInterruptServiceActiveBoth @ 0x14054180C (HalpInterruptServiceActiveBoth.c)
 *     HalpTimerConfigureInterrupt @ 0x140544A90 (HalpTimerConfigureInterrupt.c)
 *     HalpVpptInitializePhysicalTimer @ 0x1405462D4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x140546360 (HalpVpptStop.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x140552EE8 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     HalpCreateSecondaryIcEntry @ 0x14055300C (HalpCreateSecondaryIcEntry.c)
 *     HalpInsertSecondarySignalList @ 0x1405531BC (HalpInsertSecondarySignalList.c)
 *     HalpInterruptEnumerateUnmaskedSecondaryInterrupts @ 0x14055324C (HalpInterruptEnumerateUnmaskedSecondaryInterrupts.c)
 *     HalpProcessSecondarySignalList @ 0x140553420 (HalpProcessSecondarySignalList.c)
 *     HalpUnregisterSecondaryIcInterface @ 0x1405534F0 (HalpUnregisterSecondaryIcInterface.c)
 *     EmonAddProfileSource @ 0x140557F20 (EmonAddProfileSource.c)
 *     EmonEnableMonitoringEnhanced @ 0x140558960 (EmonEnableMonitoringEnhanced.c)
 *     EmonEnableMonitoringOriginal @ 0x140558AC0 (EmonEnableMonitoringOriginal.c)
 *     EmonRemoveProfileSourceEnhanced @ 0x14055B240 (EmonRemoveProfileSourceEnhanced.c)
 *     EmonRemoveProfileSourceOriginal @ 0x14055B340 (EmonRemoveProfileSourceOriginal.c)
 *     EmonSetIntervalEnhanced @ 0x14055BE30 (EmonSetIntervalEnhanced.c)
 *     EmonSetIntervalOriginal @ 0x14055C030 (EmonSetIntervalOriginal.c)
 *     Amd64AddProfileSource @ 0x1405670A0 (Amd64AddProfileSource.c)
 *     Amd64EnableMonitoring @ 0x140567CE0 (Amd64EnableMonitoring.c)
 *     Amd64RemoveProfileSource @ 0x140569280 (Amd64RemoveProfileSource.c)
 *     Amd64SetInterval @ 0x1405694D0 (Amd64SetInterval.c)
 *     IvtAttachDeviceDomainInternal @ 0x14056A710 (IvtAttachDeviceDomainInternal.c)
 *     IvtFreeDomain @ 0x14056B260 (IvtFreeDomain.c)
 *     IvtLegacyAttachDeviceDomainInternal @ 0x14056C85C (IvtLegacyAttachDeviceDomainInternal.c)
 *     IvtLegacyFlushDomainTb @ 0x14056CDA0 (IvtLegacyFlushDomainTb.c)
 *     HsaAllocateRemappingTableEntry @ 0x14056F1A0 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x14056FAC0 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
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
    KiRaiseIrqlProcessIrqlFlags(SpinLock);
  }
  KxAcquireSpinLock(v1);
  return CurrentIrql;
}
