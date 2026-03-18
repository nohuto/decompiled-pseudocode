/*
 * XREFs of HvlpAcquireHypercallPage @ 0x140467900
 * Callers:
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x14026778C (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlParkedVirtualProcessors @ 0x14026C074 (HvlParkedVirtualProcessors.c)
 *     HvlRetargetDeviceInterrupt @ 0x14026C870 (HvlRetargetDeviceInterrupt.c)
 *     HvlFlushRangeListTb @ 0x14032CB20 (HvlFlushRangeListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1404518A8 (HvlpSlowFlushListTbEx.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x14057F77C (HvlQueryHypervisorTscAdjustment.c)
 *     HvlGetRootVpSharedPages @ 0x14057FB7C (HvlGetRootVpSharedPages.c)
 *     HvlQueryNumaDistance @ 0x14057FF10 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1405801F0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlStartBootLogicalProcessors @ 0x140580328 (HvlStartBootLogicalProcessors.c)
 *     HvlpDepositPages @ 0x140580984 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x140580C84 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x140580D90 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x140581078 (HvlpMapStatisticsPage.c)
 *     HvlpSetupSchedulerAssist @ 0x140581E08 (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x140581E98 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x140581FEC (HvlpStartVirtualProcessor.c)
 *     HvlpUpdateLpcbIndex @ 0x1405820E8 (HvlpUpdateLpcbIndex.c)
 *     HvlpWithdrawPages @ 0x1405821A0 (HvlpWithdrawPages.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x1405824C4 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140582F60 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaGetHybridPassthroughReservedRegions @ 0x140583060 (HvlDmaGetHybridPassthroughReservedRegions.c)
 *     HvlEnterSleepState @ 0x140583360 (HvlEnterSleepState.c)
 *     HvlGetDeviceCapabilities @ 0x140583430 (HvlGetDeviceCapabilities.c)
 *     HvlGetSystemPasidCapabilities @ 0x140583A60 (HvlGetSystemPasidCapabilities.c)
 *     HvlHvDebuggerPowerHandler @ 0x140583CB0 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x140583E40 (HvlLpReadCpuid.c)
 *     HvlLpWritebackInvalidate @ 0x140583F40 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x140583FD0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140584234 (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1405842C0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x140584390 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x140584428 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x140584590 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x1405846F0 (HvlRegisterDeviceId.c)
 *     HvlSetHpetConfig @ 0x140584B50 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x140584CE8 (HvlSetPartitionProperty.c)
 *     HvlSetSystemMachineCheckProperty @ 0x140584EC0 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x140584F60 (HvlSetSystemSleepProperty.c)
 *     HvlUnmapDeviceInterrupt @ 0x1405850D0 (HvlUnmapDeviceInterrupt.c)
 *     HvlpDmaSlowFlushDeviceDomainVaList @ 0x1405852B0 (HvlpDmaSlowFlushDeviceDomainVaList.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x140585524 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1405855E8 (HvlpSlowFlushPasidAddressList.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x1405856D0 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlMapDmaRanges @ 0x140585810 (HvlMapDmaRanges.c)
 *     HvlUnmapDmaRanges @ 0x140585910 (HvlUnmapDmaRanges.c)
 *     HvlNotifyAcpiReenabled @ 0x140585D4C (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x140585DB8 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x140585EE0 (HvlPrepareForSecureHibernate.c)
 *     HvlWakeVirtualProcessors @ 0x140586170 (HvlWakeVirtualProcessors.c)
 *     HvlpInitializePowerStatistics @ 0x140586330 (HvlpInitializePowerStatistics.c)
 *     HvlCollectLivedump @ 0x140586B50 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x1405879F0 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x140587B7C (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x140587E14 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x14058838C (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x1405889B8 (HvlpQueryExtendedCapabilities.c)
 *     HvlpApplyIoCachePolicy @ 0x140588B4C (HvlpApplyIoCachePolicy.c)
 *     HvlpInvokeGetPageListHypercall @ 0x140588DEC (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSecureFlushLargeRangeList @ 0x140695C8C (HvlpSecureFlushLargeRangeList.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x140695D9C (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlNotifyPageHeat @ 0x140695EB4 (HvlNotifyPageHeat.c)
 *     HvlpCreateRootVirtualProcessor @ 0x140703120 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140703254 (HvlpLpCpuid.c)
 *     HvlGetMicrocodeLatency @ 0x140703380 (HvlGetMicrocodeLatency.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     MmGetPhysicalAddress @ 0x1402AB2E0 (MmGetPhysicalAddress.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 */

_QWORD *__fastcall HvlpAcquireHypercallPage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *HypercallCachedPages; // rbx
  struct _KPRCB *v9; // rbp
  PSLIST_ENTRY v10; // rax
  _SLIST_ENTRY *Next; // rax
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v18; // al
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  struct _KPRCB *v20; // rax

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
      v14 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v15 = v14 + a4 - 1;
      HypercallCachedPages = (_QWORD *)(v15 & 0xFFFFFFFFFFFFF000uLL);
      if ( ((v14 ^ v15) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        HypercallCachedPages = (_QWORD *)((a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v16 = 2LL;
      *(_DWORD *)a1 = 2;
      CurrentIrql = KeGetCurrentIrql();
      *(_BYTE *)(a1 + 8) = CurrentIrql;
      if ( CurrentIrql < 2u )
      {
        v18 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v16) = v18;
          KiRaiseIrqlProcessIrqlFlags(v16);
        }
      }
      PhysicalAddress = MmGetPhysicalAddress(HypercallCachedPages);
    }
    else
    {
      *(_DWORD *)a1 = 4;
      *(_BYTE *)(a1 + 8) = KeDisableInterrupts();
      *(_DWORD *)(a1 + 12) = a2;
      v20 = KeGetCurrentPrcb();
      if ( (a2 & 1) != 0 )
      {
        HypercallCachedPages = v20->HypercallCachedPages;
      }
      else if ( (a2 & 2) != 0 )
      {
        HypercallCachedPages = (char *)v20->HypercallCachedPages + 4096;
      }
      PhysicalAddress = (PHYSICAL_ADDRESS)HypercallCachedPages[2];
    }
    *(PHYSICAL_ADDRESS *)(a1 + 24) = PhysicalAddress;
    return HypercallCachedPages;
  }
  return 0LL;
}
