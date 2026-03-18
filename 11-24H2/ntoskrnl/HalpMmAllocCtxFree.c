/*
 * XREFs of HalpMmAllocCtxFree @ 0x14037CBAC
 * Callers:
 *     HalpBuddyAllocatorSplitNode @ 0x14024B038 (HalpBuddyAllocatorSplitNode.c)
 *     HalpDmaAllocateMapRegisters @ 0x14038E95C (HalpDmaAllocateMapRegisters.c)
 *     HalFreeCommonBufferVector @ 0x1403A8F20 (HalFreeCommonBufferVector.c)
 *     HalpBuddyAllocatorDeleteSubtree @ 0x1403AC040 (HalpBuddyAllocatorDeleteSubtree.c)
 *     HalpBuddyAllocatorFreeLogicalAddress @ 0x1403AD740 (HalpBuddyAllocatorFreeLogicalAddress.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x14041011C (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x14048F950 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpIommuUnblockDevice @ 0x1404BB2D0 (HalpIommuUnblockDevice.c)
 *     HalpIommuBlockDevice @ 0x1404BE880 (HalpIommuBlockDevice.c)
 *     HalpIommuGetHardwareDomain @ 0x1404CE03C (HalpIommuGetHardwareDomain.c)
 *     HalpIommuCloneDeviceId @ 0x1404D9C34 (HalpIommuCloneDeviceId.c)
 *     HalpAcpiCacheTable @ 0x14053D144 (HalpAcpiCacheTable.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x14053DAB0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpAllocatePmcCounterSetEx @ 0x140545110 (HalpAllocatePmcCounterSetEx.c)
 *     HalpFreePmcCounterSet @ 0x140545BE0 (HalpFreePmcCounterSet.c)
 *     HalpAcpiPopulateTableCacheWork @ 0x14054D140 (HalpAcpiPopulateTableCacheWork.c)
 *     HalpIommuCreateDevice @ 0x14054D63C (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x14054DC10 (HalpIommuDeleteDevice.c)
 *     IommupPasidDeviceCreate @ 0x14054E5AC (IommupPasidDeviceCreate.c)
 *     IommupPasidDeviceDelete @ 0x14054E6DC (IommupPasidDeviceDelete.c)
 *     HalpDmaFreeChildAdapter @ 0x14054F560 (HalpDmaFreeChildAdapter.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x14054F804 (HalpDmaFreeMapRegisterFrame.c)
 *     HalpDmaAllocateDomain @ 0x1405507CC (HalpDmaAllocateDomain.c)
 *     HalpDmaDeleteDomain @ 0x140550B84 (HalpDmaDeleteDomain.c)
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x140550BD4 (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     HalpIommuFreeDeviceId @ 0x140552200 (HalpIommuFreeDeviceId.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x140553870 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x140553A18 (HalpIommuDereferenceHardwareDomain.c)
 *     HalpIommuFreeDmaDomain @ 0x140553CB8 (HalpIommuFreeDmaDomain.c)
 *     HalpNumaAddRangeProximity @ 0x140557A80 (HalpNumaAddRangeProximity.c)
 *     EmonAddProfileSource @ 0x14055A820 (EmonAddProfileSource.c)
 *     EmonAllocateResources @ 0x14055AD8C (EmonAllocateResources.c)
 *     EmonReleaseProfileResources @ 0x14055D840 (EmonReleaseProfileResources.c)
 *     EmonRemoveProfileSourceEnhanced @ 0x14055DB40 (EmonRemoveProfileSourceEnhanced.c)
 *     EmonRemoveProfileSourceOriginal @ 0x14055DC40 (EmonRemoveProfileSourceOriginal.c)
 *     ExtEnvFreeMemory @ 0x14055FCA0 (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x14055FCE0 (ExtEnvFreePhysicalMemory.c)
 *     IommuDisableDevicePasid @ 0x140563850 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x140563B20 (IommuEnableDevicePasid.c)
 *     IommuFreeLibraryContext @ 0x140564184 (IommuFreeLibraryContext.c)
 *     IommuGetLibraryContext @ 0x140564360 (IommuGetLibraryContext.c)
 *     IommupFreeSystemContext @ 0x140564C04 (IommupFreeSystemContext.c)
 *     IommupGetSystemContext @ 0x140564CE0 (IommupGetSystemContext.c)
 *     IommupMapDeviceInternal @ 0x140564E48 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x1405651A8 (IommupUnmapDeviceInternal.c)
 *     IommuDomainAttachDevice @ 0x140566390 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x140566770 (IommuDomainDetachDevice.c)
 *     IommuDomainDetachDeviceEx @ 0x1405668B0 (IommuDomainDetachDeviceEx.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x1405669B0 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuRegisterInterfaceStateChangeCallback @ 0x140566C30 (IommuRegisterInterfaceStateChangeCallback.c)
 *     IommuReserveLogicalAddressRange @ 0x140566FA0 (IommuReserveLogicalAddressRange.c)
 *     IommuUnregisterInterfaceStateChangeCallback @ 0x1405672D0 (IommuUnregisterInterfaceStateChangeCallback.c)
 *     IommuUnregisterInterfaceStateChangeCallbackLegacy @ 0x140567430 (IommuUnregisterInterfaceStateChangeCallbackLegacy.c)
 *     IommupCreateDeviceId @ 0x140567530 (IommupCreateDeviceId.c)
 *     HalpIommuCleanupPageTable @ 0x140567718 (HalpIommuCleanupPageTable.c)
 *     HalpIommuCreateDmarPageTable @ 0x14056788C (HalpIommuCreateDmarPageTable.c)
 *     Amd64AddProfileSource @ 0x14056A3A0 (Amd64AddProfileSource.c)
 *     Amd64RemoveProfileSource @ 0x14056C580 (Amd64RemoveProfileSource.c)
 *     HalpBuddyAllocatorCleanUp @ 0x140574820 (HalpBuddyAllocatorCleanUp.c)
 *     HalpBuddyAllocatorCreateAllocator @ 0x14057485C (HalpBuddyAllocatorCreateAllocator.c)
 *     HalpAcpiDetectPiix4Work @ 0x1406FF090 (HalpAcpiDetectPiix4Work.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406FF764 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1406FFA54 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpBuildResumeStructures @ 0x140B4CE28 (HalpBuildResumeStructures.c)
 *     HalpFreeResumeStructures @ 0x140B4CEA4 (HalpFreeResumeStructures.c)
 *     HalpMapCR3Ex @ 0x140B4E6CC (HalpMapCR3Ex.c)
 *     HalpFreeNvsBuffers @ 0x140B6C400 (HalpFreeNvsBuffers.c)
 *     HalpMceInitializeErrorPacket @ 0x140B6D8FC (HalpMceInitializeErrorPacket.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140C1007C (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140C1019C (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140C10338 (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140C10394 (HalpDmaAllocateReservedMappingArray.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140C10468 (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaFreeTranslationBuffer @ 0x140C1062C (HalpDmaFreeTranslationBuffer.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140C10B98 (HalpDmaInitializeMasterAdapter.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlClearBits @ 0x14037CD40 (RtlClearBits.c)
 *     HalpMmAllocCtxBufferCleanup @ 0x14037CDE4 (HalpMmAllocCtxBufferCleanup.c)
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

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140FC2B30);
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
  KeReleaseSpinLock(&qword_140FC2B30, v3);
  if ( i )
    HalpMmAllocCtxBufferCleanup(v20, i);
}
