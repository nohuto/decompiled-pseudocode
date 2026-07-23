/*
 * XREFs of HalpReleaseHighLevelLock @ 0x140372268
 * Callers:
 *     KiConnectSecondaryInterrupt @ 0x1402B3644 (KiConnectSecondaryInterrupt.c)
 *     HalEnableInterrupt @ 0x1402B3DD0 (HalEnableInterrupt.c)
 *     KiMaskSecondaryInterruptInternal @ 0x1402B4D5C (KiMaskSecondaryInterruptInternal.c)
 *     HalpInterruptSetLineState @ 0x1402B4E20 (HalpInterruptSetLineState.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x1402B5288 (KiUnmaskSecondaryInterruptInternal.c)
 *     HalpQueryProfileSourceList @ 0x140371748 (HalpQueryProfileSourceList.c)
 *     IvtFlushDomainTb @ 0x1403721E0 (IvtFlushDomainTb.c)
 *     HalpInterruptApplyOverrides @ 0x1403732F0 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptSetDestination @ 0x140373710 (HalpInterruptSetDestination.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x140373848 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x140373A20 (HalpInterruptEnablePerformanceEvents.c)
 *     KiDisconnectInterruptCommon @ 0x140373CA8 (KiDisconnectInterruptCommon.c)
 *     HalDisableInterrupt @ 0x140373FF0 (HalDisableInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140374188 (KiDisconnectSecondaryInterrupt.c)
 *     ExtEnvSetVpptTarget @ 0x140374B64 (ExtEnvSetVpptTarget.c)
 *     KiInterruptDispatchCommon @ 0x1403AE3B8 (KiInterruptDispatchCommon.c)
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
 *     HalpDeleteSecondaryIcEntry @ 0x140553358 (HalpDeleteSecondaryIcEntry.c)
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
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
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
