/*
 * XREFs of HalpAcquireHighLevelLock @ 0x1403729A0
 * Callers:
 *     HalEnableInterrupt @ 0x1402B3DD0 (HalEnableInterrupt.c)
 *     HalpInterruptSetLineState @ 0x1402B4E20 (HalpInterruptSetLineState.c)
 *     HalpQueryProfileSourceList @ 0x140371748 (HalpQueryProfileSourceList.c)
 *     IvtFlushDomainTb @ 0x1403721E0 (IvtFlushDomainTb.c)
 *     HalpMaskInterrupt @ 0x1403723C0 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x1403724F0 (HalpUnmaskInterrupt.c)
 *     HalpFindSecondaryIcEntry @ 0x1403727AC (HalpFindSecondaryIcEntry.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x140372840 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpInterruptApplyOverrides @ 0x1403732F0 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptSetDestination @ 0x140373710 (HalpInterruptSetDestination.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x140373848 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x140373A20 (HalpInterruptEnablePerformanceEvents.c)
 *     HalDisableInterrupt @ 0x140373FF0 (HalDisableInterrupt.c)
 *     ExtEnvSetVpptTarget @ 0x140374B64 (ExtEnvSetVpptTarget.c)
 *     HalpInterruptEnableNmi @ 0x14049E4CC (HalpInterruptEnableNmi.c)
 *     HalpVpptArmTimer @ 0x1404A07C0 (HalpVpptArmTimer.c)
 *     HalpInterruptLocalErrorService @ 0x1404A96F0 (HalpInterruptLocalErrorService.c)
 *     HalpQueryProfileSource @ 0x1404B6BC0 (HalpQueryProfileSource.c)
 *     HalpTimerEnableHypervisorTimer @ 0x1404C6408 (HalpTimerEnableHypervisorTimer.c)
 *     HalpInterruptEnumerateUnmaskedInterrupts @ 0x14053E270 (HalpInterruptEnumerateUnmaskedInterrupts.c)
 *     HalpInterruptRemapFixedLines @ 0x14053FEA0 (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptRequestInterrupt @ 0x1405400F0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x14054031C (HalpInterruptSetLineSpecificOverride.c)
 *     HalpInterruptServiceActiveBoth @ 0x14054198C (HalpInterruptServiceActiveBoth.c)
 *     HalpTimerConfigureInterrupt @ 0x140544C40 (HalpTimerConfigureInterrupt.c)
 *     HalpVpptInitializePhysicalTimer @ 0x140546484 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x140546510 (HalpVpptStop.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x140553128 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     HalpCreateSecondaryIcEntry @ 0x14055324C (HalpCreateSecondaryIcEntry.c)
 *     HalpInsertSecondarySignalList @ 0x1405533FC (HalpInsertSecondarySignalList.c)
 *     HalpInterruptEnumerateUnmaskedSecondaryInterrupts @ 0x14055348C (HalpInterruptEnumerateUnmaskedSecondaryInterrupts.c)
 *     HalpProcessSecondarySignalList @ 0x140553660 (HalpProcessSecondarySignalList.c)
 *     HalpUnregisterSecondaryIcInterface @ 0x140553730 (HalpUnregisterSecondaryIcInterface.c)
 *     EmonAddProfileSource @ 0x140558450 (EmonAddProfileSource.c)
 *     EmonEnableMonitoringEnhanced @ 0x140558E90 (EmonEnableMonitoringEnhanced.c)
 *     EmonEnableMonitoringOriginal @ 0x140558FF0 (EmonEnableMonitoringOriginal.c)
 *     EmonRemoveProfileSourceEnhanced @ 0x14055B770 (EmonRemoveProfileSourceEnhanced.c)
 *     EmonRemoveProfileSourceOriginal @ 0x14055B870 (EmonRemoveProfileSourceOriginal.c)
 *     EmonSetIntervalEnhanced @ 0x14055C360 (EmonSetIntervalEnhanced.c)
 *     EmonSetIntervalOriginal @ 0x14055C560 (EmonSetIntervalOriginal.c)
 *     Amd64AddProfileSource @ 0x140567830 (Amd64AddProfileSource.c)
 *     Amd64EnableMonitoring @ 0x140568470 (Amd64EnableMonitoring.c)
 *     Amd64RemoveProfileSource @ 0x140569A10 (Amd64RemoveProfileSource.c)
 *     Amd64SetInterval @ 0x140569C60 (Amd64SetInterval.c)
 *     IvtAttachDeviceDomainInternal @ 0x14056AEA0 (IvtAttachDeviceDomainInternal.c)
 *     IvtFreeDomain @ 0x14056B9F0 (IvtFreeDomain.c)
 *     IvtLegacyAttachDeviceDomainInternal @ 0x14056CFEC (IvtLegacyAttachDeviceDomainInternal.c)
 *     IvtLegacyFlushDomainTb @ 0x14056D530 (IvtLegacyFlushDomainTb.c)
 *     HsaAllocateRemappingTableEntry @ 0x14056F930 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x140570250 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
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
