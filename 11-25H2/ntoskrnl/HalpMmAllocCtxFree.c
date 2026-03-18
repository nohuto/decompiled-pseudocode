/*
 * XREFs of HalpMmAllocCtxFree @ 0x140337DCC
 * Callers:
 *     HalpBuddyAllocatorFreeLogicalAddress @ 0x14026D980 (HalpBuddyAllocatorFreeLogicalAddress.c)
 *     HalpDmaAllocateMapRegisters @ 0x140334FBC (HalpDmaAllocateMapRegisters.c)
 *     HalpBuddyAllocatorSplitNode @ 0x1403389E8 (HalpBuddyAllocatorSplitNode.c)
 *     HalFreeCommonBufferVector @ 0x140411520 (HalFreeCommonBufferVector.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x140412974 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpBuddyAllocatorDeleteSubtree @ 0x140470534 (HalpBuddyAllocatorDeleteSubtree.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x14048FFC4 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpIommuUnblockDevice @ 0x1404BC0D0 (HalpIommuUnblockDevice.c)
 *     HalpIommuBlockDevice @ 0x1404BFF40 (HalpIommuBlockDevice.c)
 *     HalpIommuGetHardwareDomain @ 0x1404CE25C (HalpIommuGetHardwareDomain.c)
 *     HalpIommuCloneDeviceId @ 0x1404DACA4 (HalpIommuCloneDeviceId.c)
 *     HalpAcpiCacheTable @ 0x14053A914 (HalpAcpiCacheTable.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x14053B280 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpAllocatePmcCounterSetEx @ 0x140542820 (HalpAllocatePmcCounterSetEx.c)
 *     HalpFreePmcCounterSet @ 0x1405432F0 (HalpFreePmcCounterSet.c)
 *     HalpAcpiPopulateTableCacheWork @ 0x14054A850 (HalpAcpiPopulateTableCacheWork.c)
 *     HalpIommuCreateDevice @ 0x14054ACF8 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x14054B2F8 (HalpIommuDeleteDevice.c)
 *     IommupPasidDeviceCreate @ 0x14054BC9C (IommupPasidDeviceCreate.c)
 *     IommupPasidDeviceDelete @ 0x14054BDCC (IommupPasidDeviceDelete.c)
 *     HalpDmaFreeChildAdapter @ 0x14054CC00 (HalpDmaFreeChildAdapter.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x14054CEA4 (HalpDmaFreeMapRegisterFrame.c)
 *     HalpDmaAllocateDomain @ 0x14054DE6C (HalpDmaAllocateDomain.c)
 *     HalpDmaDeleteDomain @ 0x14054E224 (HalpDmaDeleteDomain.c)
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x14054E274 (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     HalpIommuFreeDeviceId @ 0x14054F900 (HalpIommuFreeDeviceId.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x140550F70 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x140551118 (HalpIommuDereferenceHardwareDomain.c)
 *     HalpIommuFreeDmaDomain @ 0x1405513B8 (HalpIommuFreeDmaDomain.c)
 *     HalpNumaAddRangeProximity @ 0x140555180 (HalpNumaAddRangeProximity.c)
 *     EmonAddProfileSource @ 0x140557F20 (EmonAddProfileSource.c)
 *     EmonAllocateResources @ 0x14055848C (EmonAllocateResources.c)
 *     EmonReleaseProfileResources @ 0x14055AF40 (EmonReleaseProfileResources.c)
 *     EmonRemoveProfileSourceEnhanced @ 0x14055B240 (EmonRemoveProfileSourceEnhanced.c)
 *     EmonRemoveProfileSourceOriginal @ 0x14055B340 (EmonRemoveProfileSourceOriginal.c)
 *     ExtEnvFreeMemory @ 0x14055D3A0 (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x14055D3E0 (ExtEnvFreePhysicalMemory.c)
 *     IommuDisableDevicePasid @ 0x140560FB0 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x140561280 (IommuEnableDevicePasid.c)
 *     IommuFreeLibraryContext @ 0x1405618E4 (IommuFreeLibraryContext.c)
 *     IommuGetLibraryContext @ 0x140561AC0 (IommuGetLibraryContext.c)
 *     IommupFreeSystemContext @ 0x140562374 (IommupFreeSystemContext.c)
 *     IommupGetSystemContext @ 0x140562450 (IommupGetSystemContext.c)
 *     IommupMapDeviceInternal @ 0x1405625B8 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x140562918 (IommupUnmapDeviceInternal.c)
 *     IommuDomainAttachDevice @ 0x140563B20 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x140563F00 (IommuDomainDetachDevice.c)
 *     IommuDomainDetachDeviceEx @ 0x140564040 (IommuDomainDetachDeviceEx.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x140564140 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuReserveLogicalAddressRange @ 0x140564530 (IommuReserveLogicalAddressRange.c)
 *     IommuUnregisterInterfaceStateChangeCallback @ 0x140564860 (IommuUnregisterInterfaceStateChangeCallback.c)
 *     IommupCreateDeviceId @ 0x140564960 (IommupCreateDeviceId.c)
 *     HalpIommuCleanupPageTable @ 0x140564B48 (HalpIommuCleanupPageTable.c)
 *     HalpIommuCreateDmarPageTable @ 0x140564CBC (HalpIommuCreateDmarPageTable.c)
 *     Amd64AddProfileSource @ 0x1405670A0 (Amd64AddProfileSource.c)
 *     Amd64RemoveProfileSource @ 0x140569280 (Amd64RemoveProfileSource.c)
 *     HalpBuddyAllocatorCleanUp @ 0x140571520 (HalpBuddyAllocatorCleanUp.c)
 *     HalpBuddyAllocatorCreateAllocator @ 0x14057155C (HalpBuddyAllocatorCreateAllocator.c)
 *     HalpAcpiDetectPiix4Work @ 0x1406F32A0 (HalpAcpiDetectPiix4Work.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406F3974 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1406F3C64 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpBuildResumeStructures @ 0x140B3CE28 (HalpBuildResumeStructures.c)
 *     HalpFreeResumeStructures @ 0x140B3CEA4 (HalpFreeResumeStructures.c)
 *     HalpMapCR3Ex @ 0x140B3E6CC (HalpMapCR3Ex.c)
 *     HalpFreeNvsBuffers @ 0x140B5D320 (HalpFreeNvsBuffers.c)
 *     HalpMceInitializeErrorPacket @ 0x140B5E84C (HalpMceInitializeErrorPacket.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140BFF07C (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140BFF19C (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140BFF338 (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140BFF394 (HalpDmaAllocateReservedMappingArray.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140BFF468 (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaFreeTranslationBuffer @ 0x140BFF62C (HalpDmaFreeTranslationBuffer.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140BFFB18 (HalpDmaInitializeMasterAdapter.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     RtlClearBits @ 0x140337F60 (RtlClearBits.c)
 *     HalpMmAllocCtxBufferCleanup @ 0x140338004 (HalpMmAllocCtxBufferCleanup.c)
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

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140FC1750);
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
  KeReleaseSpinLock(&qword_140FC1750, v3);
  if ( i )
    HalpMmAllocCtxBufferCleanup(v20, i);
}
