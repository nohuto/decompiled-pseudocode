/*
 * XREFs of HalpMmAllocCtxFree @ 0x1402EA1C8
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x14038829C (HalpDmaAllocateMapRegisters.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1403976A0 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalFreeCommonBufferVector @ 0x140397BB0 (HalFreeCommonBufferVector.c)
 *     HalpBuddyAllocatorDeleteSubtree @ 0x14039A750 (HalpBuddyAllocatorDeleteSubtree.c)
 *     HalpBuddyAllocatorSplitNode @ 0x14039AA18 (HalpBuddyAllocatorSplitNode.c)
 *     HalpBuddyAllocatorFreeLogicalAddress @ 0x14039BF50 (HalpBuddyAllocatorFreeLogicalAddress.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x140489B60 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpIommuUnblockDevice @ 0x1404B6140 (HalpIommuUnblockDevice.c)
 *     HalpIommuBlockDevice @ 0x1404B9A40 (HalpIommuBlockDevice.c)
 *     HalpIommuGetHardwareDomain @ 0x1404C7308 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuCloneDeviceId @ 0x1404D36B0 (HalpIommuCloneDeviceId.c)
 *     HalpAcpiCacheTable @ 0x14053AA44 (HalpAcpiCacheTable.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x14053B3B0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpAllocatePmcCounterSetEx @ 0x1405429D0 (HalpAllocatePmcCounterSetEx.c)
 *     HalpFreePmcCounterSet @ 0x1405434A0 (HalpFreePmcCounterSet.c)
 *     HalpAcpiPopulateTableCacheWork @ 0x14054AA00 (HalpAcpiPopulateTableCacheWork.c)
 *     HalpIommuCreateDevice @ 0x14054AEFC (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x14054B4BC (HalpIommuDeleteDevice.c)
 *     IommupPasidDeviceCreate @ 0x14054BED8 (IommupPasidDeviceCreate.c)
 *     IommupPasidDeviceDelete @ 0x14054C01C (IommupPasidDeviceDelete.c)
 *     HalpDmaFreeChildAdapter @ 0x14054CEA0 (HalpDmaFreeChildAdapter.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x14054D144 (HalpDmaFreeMapRegisterFrame.c)
 *     HalpDmaAllocateDomain @ 0x14054E10C (HalpDmaAllocateDomain.c)
 *     HalpDmaDeleteDomain @ 0x14054E4C4 (HalpDmaDeleteDomain.c)
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x14054E514 (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     HalpIommuFreeDeviceId @ 0x14054FB40 (HalpIommuFreeDeviceId.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x1405511B0 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x140551358 (HalpIommuDereferenceHardwareDomain.c)
 *     HalpIommuFreeDmaDomain @ 0x1405515F8 (HalpIommuFreeDmaDomain.c)
 *     HalpNumaAddRangeProximity @ 0x1405553C0 (HalpNumaAddRangeProximity.c)
 *     EmonAddProfileSource @ 0x140558450 (EmonAddProfileSource.c)
 *     EmonAllocateResources @ 0x1405589BC (EmonAllocateResources.c)
 *     EmonReleaseProfileResources @ 0x14055B470 (EmonReleaseProfileResources.c)
 *     EmonRemoveProfileSourceEnhanced @ 0x14055B770 (EmonRemoveProfileSourceEnhanced.c)
 *     EmonRemoveProfileSourceOriginal @ 0x14055B870 (EmonRemoveProfileSourceOriginal.c)
 *     ExtEnvFreeMemory @ 0x14055D8D0 (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x14055D910 (ExtEnvFreePhysicalMemory.c)
 *     IommuDisableDevicePasid @ 0x140561480 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x140561750 (IommuEnableDevicePasid.c)
 *     IommuFreeLibraryContext @ 0x140561DB4 (IommuFreeLibraryContext.c)
 *     IommuGetLibraryContext @ 0x140561F90 (IommuGetLibraryContext.c)
 *     IommupFreeSystemContext @ 0x140562834 (IommupFreeSystemContext.c)
 *     IommupGetSystemContext @ 0x140562910 (IommupGetSystemContext.c)
 *     IommupMapDeviceInternal @ 0x140562A78 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x140562DD8 (IommupUnmapDeviceInternal.c)
 *     IommuDomainAttachDevice @ 0x140564090 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x140564470 (IommuDomainDetachDevice.c)
 *     IommuDomainDetachDeviceEx @ 0x1405645B0 (IommuDomainDetachDeviceEx.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x1405646B0 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuRegisterInterfaceStateChangeCallback @ 0x140564930 (IommuRegisterInterfaceStateChangeCallback.c)
 *     IommuReserveLogicalAddressRange @ 0x140564B30 (IommuReserveLogicalAddressRange.c)
 *     IommuUnregisterInterfaceStateChangeCallback @ 0x140564E60 (IommuUnregisterInterfaceStateChangeCallback.c)
 *     IommupCreateDeviceId @ 0x140564FBC (IommupCreateDeviceId.c)
 *     HalpIommuCleanupPageTable @ 0x1405651F8 (HalpIommuCleanupPageTable.c)
 *     HalpIommuCreateDmarPageTable @ 0x14056537C (HalpIommuCreateDmarPageTable.c)
 *     Amd64AddProfileSource @ 0x140567830 (Amd64AddProfileSource.c)
 *     Amd64RemoveProfileSource @ 0x140569A10 (Amd64RemoveProfileSource.c)
 *     HalpBuddyAllocatorCleanUp @ 0x140571CB0 (HalpBuddyAllocatorCleanUp.c)
 *     HalpBuddyAllocatorCreateAllocator @ 0x140571CEC (HalpBuddyAllocatorCreateAllocator.c)
 *     HalpAcpiDetectPiix4Work @ 0x1406FCCD0 (HalpAcpiDetectPiix4Work.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406FD3A4 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1406FD694 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpBuildResumeStructures @ 0x140B4EE68 (HalpBuildResumeStructures.c)
 *     HalpFreeResumeStructures @ 0x140B4EEE4 (HalpFreeResumeStructures.c)
 *     HalpMapCR3Ex @ 0x140B5071C (HalpMapCR3Ex.c)
 *     HalpFreeNvsBuffers @ 0x140B6DCA4 (HalpFreeNvsBuffers.c)
 *     HalpMceInitializeErrorPacket @ 0x140B6F19C (HalpMceInitializeErrorPacket.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140C1207C (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140C1219C (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140C12338 (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140C12394 (HalpDmaAllocateReservedMappingArray.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140C12468 (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaFreeTranslationBuffer @ 0x140C1262C (HalpDmaFreeTranslationBuffer.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140C12B98 (HalpDmaInitializeMasterAdapter.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlClearBits @ 0x1402EA360 (RtlClearBits.c)
 *     HalpMmAllocCtxBufferCleanup @ 0x1402EA404 (HalpMmAllocCtxBufferCleanup.c)
 */

void __fastcall HalpMmAllocCtxFree(__int64 a1, __int64 a2)
{
  KIRQL v3; // bp
  __int64 i; // rbx
  ULONG v5; // r8d
  __int64 v6; // rsi
  unsigned int *v7; // rdi
  __int64 v8; // rcx
  __int64 *v9; // rax
  unsigned int v10; // edx
  int *v11; // rcx
  char v12; // r9
  int v13; // r8d
  int *v14; // r10
  bool j; // zf
  int v16; // edx
  bool v17; // zf
  bool v18; // al
  __int64 v19; // rax
  __int64 v20; // rcx

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140FC2150);
  if ( (a2 & 0xFFF) == 0 )
  {
    for ( i = HalpNPPoolAllocCtx; (__int64 *)i != &HalpNPPoolAllocCtx; i = *(_QWORD *)i )
    {
      if ( a2 == *(_QWORD *)(i + 16) )
      {
        v5 = *(_DWORD *)(i + 28);
        *(_DWORD *)(i + 28) = 0;
        LODWORD(v6) = 0;
        goto LABEL_3;
      }
    }
  }
  i = *(_QWORD *)(a2 - 16);
  v5 = *(_DWORD *)(a2 - 8);
  v6 = (a2 - 16 - *(_QWORD *)(i + 16)) / 16;
LABEL_3:
  v7 = (unsigned int *)(i + 32);
  RtlClearBits((PRTL_BITMAP)(i + 32), v6, v5);
  *(_DWORD *)(i + 24) = v6;
  v8 = *(_QWORD *)i;
  if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || (v9 = *(__int64 **)(i + 8), *v9 != i) )
LABEL_16:
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  v10 = *v7;
  if ( *v7 )
  {
    if ( v10 > 1 )
    {
      v11 = *(int **)(i + 40);
      v12 = v10 - 1;
      v13 = *v11;
      v14 = &v11[(unsigned __int64)(v10 - 1) >> 5];
      if ( v11 == v14 )
      {
        v17 = (v13 & (0xFFFFFFFF >> (32 - v10))) == 0;
      }
      else
      {
        for ( j = v13 == 0; ; j = v16 == 0 )
        {
          if ( !j )
            goto LABEL_15;
          v16 = *++v11;
          if ( v11 == v14 )
            break;
        }
        v17 = (v16 & (0xFFFFFFFF >> ~v12)) == 0;
      }
      v18 = v17;
LABEL_14:
      if ( v18 )
        goto LABEL_21;
      goto LABEL_15;
    }
    if ( v10 == 1 )
    {
      v18 = !_bittest(*(const signed __int32 **)(i + 40), 0);
      goto LABEL_14;
    }
  }
LABEL_15:
  v19 = HalpNPPoolAllocCtx;
  if ( *(__int64 **)(HalpNPPoolAllocCtx + 8) != &HalpNPPoolAllocCtx )
    goto LABEL_16;
  *(_QWORD *)i = HalpNPPoolAllocCtx;
  *(_QWORD *)(i + 8) = &HalpNPPoolAllocCtx;
  *(_QWORD *)(v19 + 8) = i;
  HalpNPPoolAllocCtx = i;
  i = 0LL;
LABEL_21:
  KeReleaseSpinLock(&qword_140FC2150, v3);
  if ( i )
    HalpMmAllocCtxBufferCleanup(v20, i);
}
