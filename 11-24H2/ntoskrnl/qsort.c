/*
 * XREFs of qsort @ 0x1404FED20
 * Callers:
 *     MiFlushSingleTbEntry @ 0x14022A7E0 (MiFlushSingleTbEntry.c)
 *     MiAgePteWorker @ 0x14022FCA0 (MiAgePteWorker.c)
 *     MiClearPteAccessed @ 0x1402307A0 (MiClearPteAccessed.c)
 *     MiFlushTbAsNeeded @ 0x14023FA90 (MiFlushTbAsNeeded.c)
 *     MmSetAddressRangeModifiedEx @ 0x140240600 (MmSetAddressRangeModifiedEx.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiEmptyWorkingSetHelper @ 0x140287320 (MiEmptyWorkingSetHelper.c)
 *     MiEmptyPte @ 0x140287AF0 (MiEmptyPte.c)
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 *     MiFillNoReservationCluster @ 0x14036A7DC (MiFillNoReservationCluster.c)
 *     RtlpDynamicLookasideRebalance @ 0x14040C08C (RtlpDynamicLookasideRebalance.c)
 *     PpmHeteroComputeCoreParkingUtilities @ 0x14042303C (PpmHeteroComputeCoreParkingUtilities.c)
 *     MiMakePteClean @ 0x1404326A0 (MiMakePteClean.c)
 *     PpmCheckComputeHeteroResponse @ 0x1404EC390 (PpmCheckComputeHeteroResponse.c)
 *     sub_14050A0C0 @ 0x14050A0C0 (sub_14050A0C0.c)
 *     SymCryptParallelHashProcess @ 0x14051FF14 (SymCryptParallelHashProcess.c)
 *     HalpNumaAddRangeProximity @ 0x140557A80 (HalpNumaAddRangeProximity.c)
 *     HvlStartBootLogicalProcessors @ 0x140583AD8 (HvlStartBootLogicalProcessors.c)
 *     VslInitializeSecureKernelCfg @ 0x14058D624 (VslInitializeSecureKernelCfg.c)
 *     IopCompactRemovePagesArray @ 0x1405A0A44 (IopCompactRemovePagesArray.c)
 *     KiAddProcessorToCoreControlBlock @ 0x1405BAB1C (KiAddProcessorToCoreControlBlock.c)
 *     KiAdjustGroupConfiguration @ 0x1405BABD4 (KiAdjustGroupConfiguration.c)
 *     KiRemoveProcessorFromCoreControlBlock @ 0x1405BBA4C (KiRemoveProcessorFromCoreControlBlock.c)
 *     PpmCheckComputeHeteroResponseEx @ 0x1405DF774 (PpmCheckComputeHeteroResponseEx.c)
 *     PpmHeteroComputeCoreParkingUtilitiesEx @ 0x1405E0088 (PpmHeteroComputeCoreParkingUtilitiesEx.c)
 *     RtlCompareExchangePropertyStore @ 0x1405E9CD0 (RtlCompareExchangePropertyStore.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x14060C008 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     AsiPopulateHashes @ 0x140660A38 (AsiPopulateHashes.c)
 *     AccelpBuildHuffmanEncoding @ 0x140665DA0 (AccelpBuildHuffmanEncoding.c)
 *     IaapSetAecsDecompressionHuffmanTable @ 0x140666EC8 (IaapSetAecsDecompressionHuffmanTable.c)
 *     MiSortMdlFrames @ 0x140672088 (MiSortMdlFrames.c)
 *     MiSortPageFramesRemoveDuplicates @ 0x14067477C (MiSortPageFramesRemoveDuplicates.c)
 *     MmKcsanGetIgnoredRangeList @ 0x140679C1C (MmKcsanGetIgnoredRangeList.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140681434 (MiBuildPhysicalPageFreeChain.c)
 *     MiCalibrateTbFlush @ 0x14068EDD8 (MiCalibrateTbFlush.c)
 *     EtwpAllocatePhysicalPages @ 0x1407A6EFC (EtwpAllocatePhysicalPages.c)
 *     sub_1407B8DA4 @ 0x1407B8DA4 (sub_1407B8DA4.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA204 (SLUpdateLicenseDataInternal.c)
 *     CmpLoadLayerVersions @ 0x1407D6F70 (CmpLoadLayerVersions.c)
 *     MmFreeBootRegistry @ 0x1407E725C (MmFreeBootRegistry.c)
 *     MiProcessPatchImageCfg @ 0x1407F5CBC (MiProcessPatchImageCfg.c)
 *     EtwpGetTraceGroupInfo @ 0x140833E70 (EtwpGetTraceGroupInfo.c)
 *     PspBuildCreateProcessContext @ 0x1408A2E70 (PspBuildCreateProcessContext.c)
 *     PnpAllocateResources @ 0x14098DAA8 (PnpAllocateResources.c)
 *     ?RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z @ 0x1409EBA68 (-RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z.c)
 *     MiProcessCrcList @ 0x1409F2910 (MiProcessCrcList.c)
 *     EtwpUpdateDisallowedGuids @ 0x1409F5D48 (EtwpUpdateDisallowedGuids.c)
 *     PipSortDeviceObjectList @ 0x140A0F8DC (PipSortDeviceObjectList.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x140A287B0 (CmpSortedValueEnumStackEntryStart.c)
 *     RtlpFcUpdateUsageTriggers @ 0x140A35AEC (RtlpFcUpdateUsageTriggers.c)
 *     RtlpFcUpdateFeatureConfiguration @ 0x140AA53D4 (RtlpFcUpdateFeatureConfiguration.c)
 *     IopRearrangeReqList @ 0x140AA5658 (IopRearrangeReqList.c)
 *     AdtpBuildObjectTypeStrings @ 0x140AB7ED0 (AdtpBuildObjectTypeStrings.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140C119F8 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpNumaParseHmat @ 0x140C122A0 (HalpNumaParseHmat.c)
 *     HalpChannelInitializeStaticConfiguration @ 0x140C14C38 (HalpChannelInitializeStaticConfiguration.c)
 *     KiComputeNumaCosts @ 0x140C278AC (KiComputeNumaCosts.c)
 *     KiPerformAutomaticGroupConfiguration @ 0x140C28A0C (KiPerformAutomaticGroupConfiguration.c)
 *     PpmInitPolicyConfiguration @ 0x140C302E8 (PpmInitPolicyConfiguration.c)
 *     MiInitializeNumaGraph @ 0x140C4D820 (MiInitializeNumaGraph.c)
 *     MiSwitchToPfns @ 0x140C51F10 (MiSwitchToPfns.c)
 *     MiAssignTopLevelRanges @ 0x140C54828 (MiAssignTopLevelRanges.c)
 *     IntpAllocateProcessorContext @ 0x140C5CF18 (IntpAllocateProcessorContext.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140493990 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_check_icall_no_overrides @ 0x1406B3DA0 (_guard_check_icall_no_overrides.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __cdecl qsort(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(const void *, const void *))
{
  size_t v8; // r8
  signed __int64 v9; // r9
  char *v10; // r15
  __int64 v11; // rcx
  size_t v12; // rbx
  char *v13; // rbx
  char *i; // rdi
  int v15; // eax
  char *v16; // rcx
  _BYTE *v17; // rdx
  __int64 v18; // rbx
  char v19; // cl
  size_t v20; // rbx
  char *v21; // rdi
  _BYTE *v22; // r8
  size_t v23; // r9
  char v24; // cl
  size_t v25; // r8
  _BYTE *v26; // rdx
  char *v27; // r9
  char v28; // cl
  _BYTE *v29; // rdx
  char v30; // cl
  char *v31; // rbx
  char *v32; // rsi
  unsigned __int64 v33; // rbp
  char *v34; // rdx
  char v35; // cl
  char *v36; // rax
  __int64 v37; // [rsp+30h] [rbp-448h]
  _QWORD v38[62]; // [rsp+40h] [rbp-438h] BYREF
  _QWORD v39[62]; // [rsp+230h] [rbp-248h] BYREF

  memset_0(v38, 0, sizeof(v38));
  memset_0(v39, 0, sizeof(v39));
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    if ( NumOfElements >= 2 )
    {
      guard_check_icall_no_overrides(PtFuncCompare);
      v10 = (char *)Base + SizeOfElements * (NumOfElements - 1);
      v11 = 0LL;
      v37 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v12 = (v10 - (_BYTE *)Base) / SizeOfElements + 1;
          if ( v12 <= 8 )
          {
            if ( v10 > Base )
            {
              do
              {
                v13 = (char *)Base;
                for ( i = (char *)Base + SizeOfElements; i <= v10; v13 = v16 )
                {
                  v15 = guard_dispatch_icall_no_overrides(i, v13, v8, v9);
                  v16 = i;
                  if ( v15 <= 0 )
                    v16 = v13;
                  i += SizeOfElements;
                }
                v8 = SizeOfElements;
                v17 = v10;
                if ( v13 != v10 )
                {
                  v18 = v13 - v10;
                  do
                  {
                    v19 = v17[v18];
                    v17[v18] = *v17;
                    *v17++ = v19;
                    --v8;
                  }
                  while ( v8 );
                }
                v10 -= SizeOfElements;
              }
              while ( v10 > Base );
              v11 = v37;
            }
            goto LABEL_18;
          }
          v20 = SizeOfElements * (v12 >> 1);
          v21 = (char *)Base + v20;
          if ( ((int (__fastcall *)(void *, char *))PtFuncCompare)(Base, (char *)Base + v20) > 0 )
          {
            v23 = SizeOfElements;
            v22 = (char *)Base + v20;
            if ( Base != v21 )
            {
              do
              {
                v24 = v22[-v20];
                v22[-v20] = *v22;
                *v22++ = v24;
                --v23;
              }
              while ( v23 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, _BYTE *, size_t))PtFuncCompare)(Base, v10, v22, v23) > 0 )
          {
            v25 = SizeOfElements;
            v26 = v10;
            if ( Base != v10 )
            {
              v27 = (char *)((_BYTE *)Base - v10);
              do
              {
                v28 = v26[(_QWORD)v27];
                v26[(_QWORD)v27] = *v26;
                *v26++ = v28;
                --v25;
              }
              while ( v25 );
            }
          }
          if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)((char *)Base + v20, v10, v25) > 0 )
          {
            v8 = SizeOfElements;
            v29 = v10;
            if ( v21 != v10 )
            {
              v9 = v21 - v10;
              do
              {
                v30 = v29[v9];
                v29[v9] = *v29;
                *v29++ = v30;
                --v8;
              }
              while ( v8 );
            }
          }
          v31 = (char *)Base;
          v32 = v10;
          while ( 1 )
          {
            if ( v21 > v31 )
            {
              while ( 1 )
              {
                v31 += SizeOfElements;
                if ( v31 >= v21 )
                  break;
                if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v31, v21, v8) > 0 )
                  goto LABEL_38;
              }
            }
            do
              v31 += SizeOfElements;
            while ( v31 <= v10 && ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v31, v21, v8) <= 0 );
            do
            {
LABEL_38:
              v33 = (unsigned __int64)v32;
              v32 -= SizeOfElements;
            }
            while ( v32 > v21 && ((int (__fastcall *)(char *, char *))PtFuncCompare)(v32, v21) > 0 );
            if ( v32 < v31 )
              break;
            v8 = SizeOfElements;
            v34 = v32;
            if ( v32 != v31 )
            {
              v9 = v31 - v32;
              do
              {
                v35 = v34[v9];
                v34[v9] = *v34;
                *v34++ = v35;
                --v8;
              }
              while ( v8 );
            }
            v36 = v31;
            if ( v21 != v32 )
              v36 = v21;
            v21 = v36;
          }
          if ( (unsigned __int64)v21 < v33 )
          {
            while ( 1 )
            {
              v33 -= SizeOfElements;
              if ( v33 <= (unsigned __int64)v21 )
                break;
              if ( ((unsigned int (__fastcall *)(unsigned __int64, char *))PtFuncCompare)(v33, v21) )
                goto LABEL_53;
            }
          }
          do
            v33 -= SizeOfElements;
          while ( v33 > (unsigned __int64)Base
               && !((unsigned int (__fastcall *)(unsigned __int64, char *))PtFuncCompare)(v33, v21) );
LABEL_53:
          v11 = v37;
          if ( (__int64)(v33 - (_QWORD)Base) >= v10 - v31 )
            break;
          if ( v31 < v10 )
          {
            v38[v37] = v31;
            v39[v37] = v10;
            v11 = ++v37;
          }
          if ( (unsigned __int64)Base >= v33 )
          {
LABEL_18:
            v37 = --v11;
            if ( v11 < 0 )
              return;
            Base = (void *)v38[v11];
            v10 = (char *)v39[v11];
          }
          else
          {
            v10 = (char *)v33;
          }
        }
        if ( (unsigned __int64)Base < v33 )
        {
          v38[v37] = Base;
          v39[v37] = v33;
          v11 = ++v37;
        }
        if ( v31 >= v10 )
          goto LABEL_18;
        Base = v31;
      }
    }
  }
  else
  {
    xHalTimerWatchdogStop();
  }
}
