/*
 * XREFs of HvlpAcquireHypercallPage @ 0x140465ED0
 * Callers:
 *     HvlFlushRangeListTb @ 0x1403AEEF0 (HvlFlushRangeListTb.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1403C6780 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlParkedVirtualProcessors @ 0x1403C8E74 (HvlParkedVirtualProcessors.c)
 *     HvlRetargetDeviceInterrupt @ 0x1403C9670 (HvlRetargetDeviceInterrupt.c)
 *     HvlpSlowFlushListTbEx @ 0x1403CA27C (HvlpSlowFlushListTbEx.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x140582F2C (HvlQueryHypervisorTscAdjustment.c)
 *     HvlGetRootVpSharedPages @ 0x14058332C (HvlGetRootVpSharedPages.c)
 *     HvlQueryNumaDistance @ 0x1405836C0 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1405839A0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlStartBootLogicalProcessors @ 0x140583AD8 (HvlStartBootLogicalProcessors.c)
 *     HvlpDepositPages @ 0x140584134 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x140584434 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x140584540 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x140584828 (HvlpMapStatisticsPage.c)
 *     HvlpSetupSchedulerAssist @ 0x1405855B8 (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x140585648 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x14058579C (HvlpStartVirtualProcessor.c)
 *     HvlpUpdateLpcbIndex @ 0x140585898 (HvlpUpdateLpcbIndex.c)
 *     HvlpWithdrawPages @ 0x140585950 (HvlpWithdrawPages.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x140585C74 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140586710 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaGetHybridPassthroughReservedRegions @ 0x140586810 (HvlDmaGetHybridPassthroughReservedRegions.c)
 *     HvlEnterSleepState @ 0x140586B10 (HvlEnterSleepState.c)
 *     HvlGetDeviceCapabilities @ 0x140586BB0 (HvlGetDeviceCapabilities.c)
 *     HvlGetSystemPasidCapabilities @ 0x1405871E0 (HvlGetSystemPasidCapabilities.c)
 *     HvlHvDebuggerPowerHandler @ 0x140587430 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x1405875C0 (HvlLpReadCpuid.c)
 *     HvlLpWritebackInvalidate @ 0x1405876C0 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x140587750 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x1405879B4 (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140587A40 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x140587B10 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x140587BA8 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x140587D10 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x140587E70 (HvlRegisterDeviceId.c)
 *     HvlSetHpetConfig @ 0x1405882D0 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x140588468 (HvlSetPartitionProperty.c)
 *     HvlSetSystemMachineCheckProperty @ 0x140588640 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x1405886E0 (HvlSetSystemSleepProperty.c)
 *     HvlUnmapDeviceInterrupt @ 0x140588850 (HvlUnmapDeviceInterrupt.c)
 *     HvlpDmaSlowFlushDeviceDomainVaList @ 0x140588A30 (HvlpDmaSlowFlushDeviceDomainVaList.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x140588B90 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x140588C54 (HvlpSlowFlushPasidAddressList.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x140588D40 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlMapDmaRanges @ 0x140588E80 (HvlMapDmaRanges.c)
 *     HvlUnmapDmaRanges @ 0x140588F80 (HvlUnmapDmaRanges.c)
 *     HvlNotifyAcpiReenabled @ 0x1405893BC (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x140589428 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x140589550 (HvlPrepareForSecureHibernate.c)
 *     HvlWakeVirtualProcessors @ 0x1405897E0 (HvlWakeVirtualProcessors.c)
 *     HvlpInitializePowerStatistics @ 0x1405899A0 (HvlpInitializePowerStatistics.c)
 *     HvlCollectLivedump @ 0x14058A1C0 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x14058B060 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x14058B1EC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x14058B484 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x14058B9FC (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x14058C028 (HvlpQueryExtendedCapabilities.c)
 *     HvlpApplyIoCachePolicy @ 0x14058C1BC (HvlpApplyIoCachePolicy.c)
 *     HvlpInvokeGetPageListHypercall @ 0x14058C45C (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSecureFlushLargeRangeList @ 0x1406A0EC0 (HvlpSecureFlushLargeRangeList.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1406A0FD0 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlNotifyPageHeat @ 0x1406A10E8 (HvlNotifyPageHeat.c)
 *     HvlpCreateRootVirtualProcessor @ 0x14070F000 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x14070F134 (HvlpLpCpuid.c)
 *     HvlGetMicrocodeLatency @ 0x14070F260 (HvlGetMicrocodeLatency.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140263A60 (MmGetPhysicalAddress.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
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
