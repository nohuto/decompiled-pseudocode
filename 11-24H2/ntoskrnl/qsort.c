/*
 * XREFs of qsort @ 0x1404FC5E0
 * Callers:
 *     MiMakePteClean @ 0x140200C78 (MiMakePteClean.c)
 *     MiFlushTbAsNeeded @ 0x140207BE0 (MiFlushTbAsNeeded.c)
 *     MmSetAddressRangeModifiedEx @ 0x140208750 (MmSetAddressRangeModifiedEx.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiEmptyWorkingSetHelper @ 0x140296F20 (MiEmptyWorkingSetHelper.c)
 *     MiEmptyPte @ 0x1402976F0 (MiEmptyPte.c)
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiFillNoReservationCluster @ 0x1402EC57C (MiFillNoReservationCluster.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     MiAgePteWorker @ 0x1403040A0 (MiAgePteWorker.c)
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     RtlpDynamicLookasideRebalance @ 0x14040468C (RtlpDynamicLookasideRebalance.c)
 *     PpmHeteroComputeCoreParkingUtilities @ 0x140416EEC (PpmHeteroComputeCoreParkingUtilities.c)
 *     PpmCheckComputeHeteroResponse @ 0x1404E3AD0 (PpmCheckComputeHeteroResponse.c)
 *     sub_140507980 @ 0x140507980 (sub_140507980.c)
 *     SymCryptParallelHashProcess @ 0x14051D7E4 (SymCryptParallelHashProcess.c)
 *     HalpNumaAddRangeProximity @ 0x1405553C0 (HalpNumaAddRangeProximity.c)
 *     HvlStartBootLogicalProcessors @ 0x140580E58 (HvlStartBootLogicalProcessors.c)
 *     VslInitializeSecureKernelCfg @ 0x14058A914 (VslInitializeSecureKernelCfg.c)
 *     IopCompactRemovePagesArray @ 0x14059D974 (IopCompactRemovePagesArray.c)
 *     KiAddProcessorToCoreControlBlock @ 0x1405B814C (KiAddProcessorToCoreControlBlock.c)
 *     KiAdjustGroupConfiguration @ 0x1405B8204 (KiAdjustGroupConfiguration.c)
 *     KiRemoveProcessorFromCoreControlBlock @ 0x1405B907C (KiRemoveProcessorFromCoreControlBlock.c)
 *     PpmCheckComputeHeteroResponseEx @ 0x1405DC8E0 (PpmCheckComputeHeteroResponseEx.c)
 *     PpmHeteroComputeCoreParkingUtilitiesEx @ 0x1405DD6A8 (PpmHeteroComputeCoreParkingUtilitiesEx.c)
 *     RtlCompareExchangePropertyStore @ 0x1405E7220 (RtlCompareExchangePropertyStore.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x14060A5C8 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     AsiPopulateHashes @ 0x14065F208 (AsiPopulateHashes.c)
 *     AccelpBuildHuffmanEncoding @ 0x140664690 (AccelpBuildHuffmanEncoding.c)
 *     IaapSetAecsDecompressionHuffmanTable @ 0x1406657B8 (IaapSetAecsDecompressionHuffmanTable.c)
 *     MiSortMdlFrames @ 0x140673258 (MiSortMdlFrames.c)
 *     MiSortPageFramesRemoveDuplicates @ 0x14067594C (MiSortPageFramesRemoveDuplicates.c)
 *     MmKcsanGetIgnoredRangeList @ 0x14067ADFC (MmKcsanGetIgnoredRangeList.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140682624 (MiBuildPhysicalPageFreeChain.c)
 *     MiCalibrateTbFlush @ 0x14068FEB4 (MiCalibrateTbFlush.c)
 *     EtwpAllocatePhysicalPages @ 0x1407A703C (EtwpAllocatePhysicalPages.c)
 *     sub_1407B91F4 @ 0x1407B91F4 (sub_1407B91F4.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA654 (SLUpdateLicenseDataInternal.c)
 *     CmpLoadLayerVersions @ 0x1407D74E4 (CmpLoadLayerVersions.c)
 *     MmFreeBootRegistry @ 0x1407E782C (MmFreeBootRegistry.c)
 *     MiProcessPatchImageCfg @ 0x1407F63AC (MiProcessPatchImageCfg.c)
 *     EtwpUpdateDisallowedGuids @ 0x140831C00 (EtwpUpdateDisallowedGuids.c)
 *     PspBuildCreateProcessContext @ 0x1408F9210 (PspBuildCreateProcessContext.c)
 *     ?RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z @ 0x14093FDFC (-RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z.c)
 *     PnpAllocateResources @ 0x140978AE0 (PnpAllocateResources.c)
 *     EtwpGetTraceGroupInfo @ 0x1409948E0 (EtwpGetTraceGroupInfo.c)
 *     PipSortDeviceObjectList @ 0x1409BDCEC (PipSortDeviceObjectList.c)
 *     MiProcessCrcList @ 0x1409E6C70 (MiProcessCrcList.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x140A1D230 (CmpSortedValueEnumStackEntryStart.c)
 *     RtlpFcUpdateUsageTriggers @ 0x140A2B008 (RtlpFcUpdateUsageTriggers.c)
 *     RtlpFcUpdateFeatureConfiguration @ 0x140AA0444 (RtlpFcUpdateFeatureConfiguration.c)
 *     IopRearrangeReqList @ 0x140AA06C8 (IopRearrangeReqList.c)
 *     AdtpBuildObjectTypeStrings @ 0x140AB2284 (AdtpBuildObjectTypeStrings.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140C139F8 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpNumaParseHmat @ 0x140C142A0 (HalpNumaParseHmat.c)
 *     HalpChannelInitializeStaticConfiguration @ 0x140C16C38 (HalpChannelInitializeStaticConfiguration.c)
 *     KiComputeNumaCosts @ 0x140C29888 (KiComputeNumaCosts.c)
 *     KiPerformAutomaticGroupConfiguration @ 0x140C2AAAC (KiPerformAutomaticGroupConfiguration.c)
 *     PpmInitPolicyConfiguration @ 0x140C32408 (PpmInitPolicyConfiguration.c)
 *     MiInitializeNumaGraph @ 0x140C4F9BC (MiInitializeNumaGraph.c)
 *     MiSwitchToPfns @ 0x140C540A0 (MiSwitchToPfns.c)
 *     MiAssignTopLevelRanges @ 0x140C569B8 (MiAssignTopLevelRanges.c)
 *     IntpAllocateProcessorContext @ 0x140C5F0A8 (IntpAllocateProcessorContext.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14048E2E0 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_check_icall_no_overrides @ 0x1406B4D40 (_guard_check_icall_no_overrides.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __cdecl qsort(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(const void *, const void *))
{
  char *v8; // r15
  __int64 v9; // rcx
  size_t v10; // rbx
  char *v11; // rbx
  char *i; // rdi
  int v13; // eax
  char *v14; // rcx
  size_t v15; // r8
  _BYTE *v16; // rdx
  __int64 v17; // rbx
  char v18; // cl
  size_t v19; // rbx
  char *v20; // rdi
  _BYTE *v21; // r8
  size_t v22; // r9
  char v23; // cl
  size_t v24; // r8
  _BYTE *v25; // rdx
  char *v26; // r9
  char v27; // cl
  size_t v28; // r8
  _BYTE *v29; // rdx
  __int64 v30; // r9
  char v31; // cl
  char *v32; // rbx
  char *v33; // rsi
  unsigned __int64 v34; // rbp
  char *v35; // rdx
  signed __int64 v36; // r9
  char v37; // cl
  char *v38; // rax
  __int64 v39; // [rsp+30h] [rbp-448h]
  _QWORD v40[62]; // [rsp+40h] [rbp-438h] BYREF
  _QWORD v41[62]; // [rsp+230h] [rbp-248h] BYREF

  memset_0(v40, 0, sizeof(v40));
  memset_0(v41, 0, sizeof(v41));
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    if ( NumOfElements >= 2 )
    {
      guard_check_icall_no_overrides(PtFuncCompare);
      v8 = (char *)Base + SizeOfElements * (NumOfElements - 1);
      v9 = 0LL;
      v39 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = (v8 - (_BYTE *)Base) / SizeOfElements + 1;
          if ( v10 <= 8 )
          {
            if ( v8 > Base )
            {
              do
              {
                v11 = (char *)Base;
                for ( i = (char *)Base + SizeOfElements; i <= v8; v11 = v14 )
                {
                  v13 = guard_dispatch_icall_no_overrides(i, v11);
                  v14 = i;
                  if ( v13 <= 0 )
                    v14 = v11;
                  i += SizeOfElements;
                }
                v15 = SizeOfElements;
                v16 = v8;
                if ( v11 != v8 )
                {
                  v17 = v11 - v8;
                  do
                  {
                    v18 = v16[v17];
                    v16[v17] = *v16;
                    *v16++ = v18;
                    --v15;
                  }
                  while ( v15 );
                }
                v8 -= SizeOfElements;
              }
              while ( v8 > Base );
              v9 = v39;
            }
            goto LABEL_18;
          }
          v19 = SizeOfElements * (v10 >> 1);
          v20 = (char *)Base + v19;
          if ( ((int (__fastcall *)(void *, char *))PtFuncCompare)(Base, (char *)Base + v19) > 0 )
          {
            v22 = SizeOfElements;
            v21 = (char *)Base + v19;
            if ( Base != v20 )
            {
              do
              {
                v23 = v21[-v19];
                v21[-v19] = *v21;
                *v21++ = v23;
                --v22;
              }
              while ( v22 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, _BYTE *, size_t))PtFuncCompare)(Base, v8, v21, v22) > 0 )
          {
            v24 = SizeOfElements;
            v25 = v8;
            if ( Base != v8 )
            {
              v26 = (char *)((_BYTE *)Base - v8);
              do
              {
                v27 = v25[(_QWORD)v26];
                v25[(_QWORD)v26] = *v25;
                *v25++ = v27;
                --v24;
              }
              while ( v24 );
            }
          }
          if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)((char *)Base + v19, v8, v24) > 0 )
          {
            v28 = SizeOfElements;
            v29 = v8;
            if ( v20 != v8 )
            {
              v30 = v20 - v8;
              do
              {
                v31 = v29[v30];
                v29[v30] = *v29;
                *v29++ = v31;
                --v28;
              }
              while ( v28 );
            }
          }
          v32 = (char *)Base;
          v33 = v8;
          while ( 1 )
          {
            if ( v20 > v32 )
            {
              while ( 1 )
              {
                v32 += SizeOfElements;
                if ( v32 >= v20 )
                  break;
                if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v32, v20, v28) > 0 )
                  goto LABEL_38;
              }
            }
            do
              v32 += SizeOfElements;
            while ( v32 <= v8 && ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v32, v20, v28) <= 0 );
            do
            {
LABEL_38:
              v34 = (unsigned __int64)v33;
              v33 -= SizeOfElements;
            }
            while ( v33 > v20 && ((int (__fastcall *)(char *, char *))PtFuncCompare)(v33, v20) > 0 );
            if ( v33 < v32 )
              break;
            v28 = SizeOfElements;
            v35 = v33;
            if ( v33 != v32 )
            {
              v36 = v32 - v33;
              do
              {
                v37 = v35[v36];
                v35[v36] = *v35;
                *v35++ = v37;
                --v28;
              }
              while ( v28 );
            }
            v38 = v32;
            if ( v20 != v33 )
              v38 = v20;
            v20 = v38;
          }
          if ( (unsigned __int64)v20 < v34 )
          {
            while ( 1 )
            {
              v34 -= SizeOfElements;
              if ( v34 <= (unsigned __int64)v20 )
                break;
              if ( ((unsigned int (__fastcall *)(unsigned __int64, char *))PtFuncCompare)(v34, v20) )
                goto LABEL_53;
            }
          }
          do
            v34 -= SizeOfElements;
          while ( v34 > (unsigned __int64)Base
               && !((unsigned int (__fastcall *)(unsigned __int64, char *))PtFuncCompare)(v34, v20) );
LABEL_53:
          v9 = v39;
          if ( (__int64)(v34 - (_QWORD)Base) >= v8 - v32 )
            break;
          if ( v32 < v8 )
          {
            v40[v39] = v32;
            v41[v39] = v8;
            v9 = ++v39;
          }
          if ( (unsigned __int64)Base >= v34 )
          {
LABEL_18:
            v39 = --v9;
            if ( v9 < 0 )
              return;
            Base = (void *)v40[v9];
            v8 = (char *)v41[v9];
          }
          else
          {
            v8 = (char *)v34;
          }
        }
        if ( (unsigned __int64)Base < v34 )
        {
          v40[v39] = Base;
          v41[v39] = v34;
          v9 = ++v39;
        }
        if ( v32 >= v8 )
          goto LABEL_18;
        Base = v32;
      }
    }
  }
  else
  {
    xHalTimerWatchdogStop();
  }
}
