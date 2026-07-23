/*
 * XREFs of HvlpAcquireHypercallPage @ 0x14045D900
 * Callers:
 *     HvlFlushRangeListTb @ 0x14039D700 (HvlFlushRangeListTb.c)
 *     HvlParkedVirtualProcessors @ 0x1403A3A14 (HvlParkedVirtualProcessors.c)
 *     HvlRetargetDeviceInterrupt @ 0x1403A4210 (HvlRetargetDeviceInterrupt.c)
 *     HvlpSlowFlushListTbEx @ 0x1403A4E4C (HvlpSlowFlushListTbEx.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1404BB764 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x1405802AC (HvlQueryHypervisorTscAdjustment.c)
 *     HvlGetRootVpSharedPages @ 0x1405806AC (HvlGetRootVpSharedPages.c)
 *     HvlQueryNumaDistance @ 0x140580A40 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x140580D20 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlStartBootLogicalProcessors @ 0x140580E58 (HvlStartBootLogicalProcessors.c)
 *     HvlpDepositPages @ 0x1405814B4 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x1405817B4 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x1405818C0 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x140581BA8 (HvlpMapStatisticsPage.c)
 *     HvlpSetupSchedulerAssist @ 0x140582938 (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x1405829C8 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x140582B1C (HvlpStartVirtualProcessor.c)
 *     HvlpUpdateLpcbIndex @ 0x140582C18 (HvlpUpdateLpcbIndex.c)
 *     HvlpWithdrawPages @ 0x140582CD0 (HvlpWithdrawPages.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x140582FF4 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140583A90 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaGetHybridPassthroughReservedRegions @ 0x140583B90 (HvlDmaGetHybridPassthroughReservedRegions.c)
 *     HvlEnterSleepState @ 0x140583E90 (HvlEnterSleepState.c)
 *     HvlGetDeviceCapabilities @ 0x140583F30 (HvlGetDeviceCapabilities.c)
 *     HvlGetSystemPasidCapabilities @ 0x140584560 (HvlGetSystemPasidCapabilities.c)
 *     HvlHvDebuggerPowerHandler @ 0x1405847B0 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x140584940 (HvlLpReadCpuid.c)
 *     HvlLpWritebackInvalidate @ 0x140584A40 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x140584AD0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140584D34 (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140584DC0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x140584E70 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x140584F08 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x140585030 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x140585190 (HvlRegisterDeviceId.c)
 *     HvlSetHpetConfig @ 0x1405855B0 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x140585748 (HvlSetPartitionProperty.c)
 *     HvlSetSystemMachineCheckProperty @ 0x140585920 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x1405859C0 (HvlSetSystemSleepProperty.c)
 *     HvlUnmapDeviceInterrupt @ 0x140585B30 (HvlUnmapDeviceInterrupt.c)
 *     HvlpDmaSlowFlushDeviceDomainVaList @ 0x140585D10 (HvlpDmaSlowFlushDeviceDomainVaList.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x140585E70 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x140585F34 (HvlpSlowFlushPasidAddressList.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x140586020 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlMapDmaRanges @ 0x140586160 (HvlMapDmaRanges.c)
 *     HvlUnmapDmaRanges @ 0x140586260 (HvlUnmapDmaRanges.c)
 *     HvlNotifyAcpiReenabled @ 0x14058669C (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x140586714 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x14058683C (HvlPrepareForSecureHibernate.c)
 *     HvlWakeVirtualProcessors @ 0x140586AD0 (HvlWakeVirtualProcessors.c)
 *     HvlpInitializePowerStatistics @ 0x140586C90 (HvlpInitializePowerStatistics.c)
 *     HvlCollectLivedump @ 0x1405874B0 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x140588350 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1405884DC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x140588774 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x140588CEC (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x140589318 (HvlpQueryExtendedCapabilities.c)
 *     HvlpApplyIoCachePolicy @ 0x1405894AC (HvlpApplyIoCachePolicy.c)
 *     HvlpInvokeGetPageListHypercall @ 0x1405897FC (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSecureFlushLargeRangeList @ 0x1406A1F18 (HvlpSecureFlushLargeRangeList.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1406A2028 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlNotifyPageHeat @ 0x1406A2140 (HvlNotifyPageHeat.c)
 *     HvlpCreateRootVirtualProcessor @ 0x14070CB90 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x14070CCC4 (HvlpLpCpuid.c)
 *     HvlGetMicrocodeLatency @ 0x14070CDF0 (HvlGetMicrocodeLatency.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 */

_QWORD *__fastcall HvlpAcquireHypercallPage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *HypercallCachedPages; // rbx
  struct _KPRCB *v9; // rbp
  PSLIST_ENTRY v10; // rax
  _SLIST_ENTRY *Next; // rax
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v19; // al
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  struct _KPRCB *v21; // rax

  HypercallCachedPages = 0LL;
  if ( (a2 & 8) != 0 )
    goto LABEL_14;
  if ( (HvlpFlags & 8) == 0 )
  {
    *(_DWORD *)a1 = 4;
    *(_BYTE *)(a1 + 8) = KeDisableInterrupts();
    *(_DWORD *)(a1 + 12) = a2;
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (a2 & 1) != 0 )
    {
      HypercallCachedPages = CurrentPrcb->HypercallCachedPages;
    }
    else if ( (a2 & 2) != 0 )
    {
      HypercallCachedPages = (char *)CurrentPrcb->HypercallCachedPages + 4096;
    }
    Next = (_SLIST_ENTRY *)HypercallCachedPages[2];
    goto LABEL_5;
  }
  v9 = KeGetCurrentPrcb();
  v10 = RtlpInterlockedPopEntrySList(&v9->HypercallPageList);
  HypercallCachedPages = &v10->Next;
  if ( v10 )
  {
    *(_DWORD *)a1 = 1;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 16) = v10;
    Next = v10[1].Next;
LABEL_5:
    *(_QWORD *)(a1 + 24) = Next;
    return HypercallCachedPages;
  }
  if ( (a2 & 4) == 0 )
  {
LABEL_14:
    if ( a3 )
    {
      v14 = -4096LL;
      v15 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v16 = v15 + a4 - 1;
      HypercallCachedPages = (_QWORD *)(v16 & 0xFFFFFFFFFFFFF000uLL);
      if ( ((v15 ^ v16) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        HypercallCachedPages = (_QWORD *)((a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v17 = 2LL;
      *(_DWORD *)a1 = 2;
      CurrentIrql = KeGetCurrentIrql();
      *(_BYTE *)(a1 + 8) = CurrentIrql;
      if ( CurrentIrql < 2u )
      {
        v19 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v14) = 2;
          LOBYTE(v17) = v19;
          KiRaiseIrqlProcessIrqlFlags(v17, v14);
        }
      }
      PhysicalAddress = MmGetPhysicalAddress(HypercallCachedPages);
    }
    else
    {
      *(_DWORD *)a1 = 4;
      *(_BYTE *)(a1 + 8) = KeDisableInterrupts();
      *(_DWORD *)(a1 + 12) = a2;
      v21 = KeGetCurrentPrcb();
      if ( (a2 & 1) != 0 )
      {
        HypercallCachedPages = v21->HypercallCachedPages;
      }
      else if ( (a2 & 2) != 0 )
      {
        HypercallCachedPages = (char *)v21->HypercallCachedPages + 4096;
      }
      PhysicalAddress = (PHYSICAL_ADDRESS)HypercallCachedPages[2];
    }
    *(PHYSICAL_ADDRESS *)(a1 + 24) = PhysicalAddress;
    return HypercallCachedPages;
  }
  return 0LL;
}
