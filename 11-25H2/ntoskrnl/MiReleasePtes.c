/*
 * XREFs of MiReleasePtes @ 0x1403289B0
 * Callers:
 *     MiMakePageAvoidRead @ 0x140222A90 (MiMakePageAvoidRead.c)
 *     MmCopyToCachedPage @ 0x140223414 (MmCopyToCachedPage.c)
 *     MmFreeIndependentPages @ 0x140227210 (MmFreeIndependentPages.c)
 *     MiInsertInSystemSpace @ 0x1402A4B54 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1402A8BCC (MiRemoveFromSystemSpace.c)
 *     MiUnmapContiguousMemory @ 0x1402AA7B8 (MiUnmapContiguousMemory.c)
 *     MiReturnPteMappingSet @ 0x1402C79B0 (MiReturnPteMappingSet.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     MmCreateKernelStack @ 0x140345F40 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x140346FC0 (MmDeleteKernelStack.c)
 *     MiDeleteCachedKernelStack @ 0x1403B318C (MiDeleteCachedKernelStack.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403FF808 (MiUpdateImagePfnImportRelocations.c)
 *     MiBuildReservationCluster @ 0x14040BF84 (MiBuildReservationCluster.c)
 *     MiMapContiguousMemory @ 0x140413F8C (MiMapContiguousMemory.c)
 *     MiPrivateFixup @ 0x140439BB4 (MiPrivateFixup.c)
 *     MiDeleteProcessShadow @ 0x14045CFAC (MiDeleteProcessShadow.c)
 *     MiDeleteCachedKernelShadowStack @ 0x14048AFC4 (MiDeleteCachedKernelShadowStack.c)
 *     MiReleasePteCopyList @ 0x1404A6450 (MiReleasePteCopyList.c)
 *     MiUnmapSinglePage @ 0x1404CA490 (MiUnmapSinglePage.c)
 *     MmMapMdl @ 0x14066B340 (MmMapMdl.c)
 *     MiChangePagingFileMaximum @ 0x14066E504 (MiChangePagingFileMaximum.c)
 *     MiPrepareEnclaveMetadataPage @ 0x1406750C8 (MiPrepareEnclaveMetadataPage.c)
 *     MiCopyMemoryPagefileData @ 0x140682A90 (MiCopyMemoryPagefileData.c)
 *     MiReleasePageHash @ 0x140685EB0 (MiReleasePageHash.c)
 *     MiFreeZeroCalibrationBuffer @ 0x1406881D4 (MiFreeZeroCalibrationBuffer.c)
 *     MmDeleteProcessor @ 0x1407D8294 (MmDeleteProcessor.c)
 *     MmReleaseDumpHibernateResources @ 0x1407DD8E8 (MmReleaseDumpHibernateResources.c)
 *     MiUnlockEntireDriver @ 0x1407E0C50 (MiUnlockEntireDriver.c)
 *     MmFreeIsrStack @ 0x1407E6DCC (MmFreeIsrStack.c)
 *     MiAllocateEnclaveVad @ 0x1407E6EB0 (MiAllocateEnclaveVad.c)
 *     MiCreatePfnBitMaps @ 0x1407EA93C (MiCreatePfnBitMaps.c)
 *     MiDeleteSparseRange @ 0x1407EAF44 (MiDeleteSparseRange.c)
 *     MiExpandPartitionIds @ 0x1407EC098 (MiExpandPartitionIds.c)
 *     MiRelocateImageAgain @ 0x14093FE24 (MiRelocateImageAgain.c)
 *     MiRelocateImagePfn @ 0x140945ED0 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x140946B4C (MiValidateImagePfn.c)
 *     MmFreeMappingAddress @ 0x140A5BDC0 (MmFreeMappingAddress.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8508C (MmAllocateIndependentPagesEx.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140A8DB7C (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmFreeNonCachedMemory @ 0x140A97F60 (MmFreeNonCachedMemory.c)
 *     MiReleaseHotPatchResources @ 0x140AAF5C8 (MiReleaseHotPatchResources.c)
 *     MiReleaseEnclaveMetadataPage @ 0x140B535D4 (MiReleaseEnclaveMetadataPage.c)
 *     MiDeleteEnclavePages @ 0x140B5F0CC (MiDeleteEnclavePages.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C43014 (MmInitializeImageViewExtensionCfg.c)
 *     MiCreateRetpolineBitmap @ 0x140C444D8 (MiCreateRetpolineBitmap.c)
 *     MiInitializePteInfo @ 0x140C48A90 (MiInitializePteInfo.c)
 *     MiInitializeTbFlush @ 0x140C492CC (MiInitializeTbFlush.c)
 * Callees:
 *     MiReturnSystemPtes @ 0x1402BFD60 (MiReturnSystemPtes.c)
 *     MiVaToFlushVm @ 0x140327844 (MiVaToFlushVm.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiAttemptCoalesce @ 0x140327B3C (MiAttemptCoalesce.c)
 *     MiInitializeTbFlushStamps @ 0x140327C9C (MiInitializeTbFlushStamps.c)
 *     MiInsertCachedPte @ 0x140328E50 (MiInsertCachedPte.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MiCheckPteRelease @ 0x140682750 (MiCheckPteRelease.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall MiReleasePtes(__int64 a1, unsigned __int64 *a2, unsigned int a3)
{
  ULONG_PTR v3; // rbp
  unsigned __int64 BugCheckParameter4; // rbx
  unsigned __int64 v7; // rsi
  int v8; // r12d
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // rcx
  ULONG_PTR v14; // rdx
  unsigned __int64 v15; // rax
  bool i; // zf
  __int64 v17; // r10
  unsigned __int64 v18; // rax
  unsigned __int64 *v19; // rdi
  unsigned __int64 v20; // rdi
  struct _LIST_ENTRY **v21; // rax
  struct _LIST_ENTRY **v22; // rdx
  int v23; // eax
  BOOL v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r9
  volatile signed __int32 *v29; // r10
  unsigned __int64 v30; // rcx
  ULONG_PTR v31; // rcx
  unsigned __int64 v33; // [rsp+30h] [rbp-128h] BYREF
  struct _LIST_ENTRY **v34; // [rsp+40h] [rbp-118h] BYREF
  BOOL v35; // [rsp+48h] [rbp-110h]
  int v36; // [rsp+4Ch] [rbp-10Ch]
  unsigned int v37; // [rsp+50h] [rbp-108h]
  int v38; // [rsp+54h] [rbp-104h]
  bool v39; // [rsp+58h] [rbp-100h]
  __int16 v40; // [rsp+59h] [rbp-FFh]
  int v41; // [rsp+5Ch] [rbp-FCh]
  __int64 v42; // [rsp+60h] [rbp-F8h]
  __int64 v43; // [rsp+68h] [rbp-F0h]

  v3 = a3;
  v33 = 0LL;
  memset_0(&v34, 0, 0xC8uLL);
  if ( (*(_DWORD *)(a1 + 40) & 4) != 0 )
    MiCheckPteRelease(a1, a2, v3);
  BugCheckParameter4 = ((__int64)a2 - *(_QWORD *)(a1 + 32)) >> 3;
  if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    BugCheckParameter4 >>= 4;
  v7 = v3 >> 4;
  if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
    v7 = v3;
  if ( (unsigned int)v3 < 0x200 || (__int64 *)a1 != &qword_140E37328 && (_UNKNOWN *)a1 != &unk_140E35B40 )
  {
    v8 = 0;
    if ( BugCheckParameter4 >= *(_QWORD *)a1 )
      goto LABEL_12;
    if ( v7 > 1 )
    {
      if ( *(_QWORD *)a1 - BugCheckParameter4 < v7 )
        goto LABEL_12;
      v9 = *(_QWORD *)(a1 + 8);
      v10 = *(_QWORD *)(v9 + 8 * (BugCheckParameter4 >> 6));
      v11 = v9 + 8 * (BugCheckParameter4 >> 6);
      v12 = v9 + 8 * ((BugCheckParameter4 + v7 - 1) >> 6);
      if ( v11 == v12 )
      {
        if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v7) << BugCheckParameter4) & v10) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v7) << BugCheckParameter4 )
          goto LABEL_12;
      }
      else
      {
        for ( i = ((-1LL << BugCheckParameter4) & v10) == -1LL << BugCheckParameter4; ; i = v17 == -1 )
        {
          if ( !i )
            goto LABEL_12;
          v17 = *(_QWORD *)(v11 + 8);
          v11 += 8LL;
          if ( v11 == v12 )
            break;
        }
        if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v7 - 1)) & v17) != 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v7 - 1) )
LABEL_12:
          KeBugCheckEx(0xDAu, 0x302uLL, (__int64)((_QWORD)a2 << 25) >> 16, v3, BugCheckParameter4);
      }
    }
    else if ( v7 != 1
           || !_bittest64(
                 (const signed __int64 *)(*(_QWORD *)(a1 + 8) + 8 * (BugCheckParameter4 >> 6)),
                 BugCheckParameter4 & 0x3F) )
    {
      goto LABEL_12;
    }
    if ( !(_DWORD)v3 )
      goto LABEL_19;
    goto LABEL_17;
  }
  v8 = 1;
LABEL_17:
  v13 = a2;
  v14 = v3;
  do
  {
    *v13++ = CLFS_LSN_NULL_EXT;
    --v14;
  }
  while ( v14 );
LABEL_19:
  LODWORD(v15) = MiInsertCachedPte(a1, a2, (unsigned int)v3);
  if ( !(_DWORD)v15 )
  {
    if ( v8 == 1 )
    {
      LOBYTE(v15) = MiReturnSystemPtes(a1, 1, BugCheckParameter4, (v3 + 511) & 0xFFFFFFFFFFFFFE00uLL);
    }
    else
    {
      v33 = 0LL;
      MiInitializeTbFlushStamps(&v33);
      v18 = v33;
      if ( (_DWORD)v3 )
      {
        v31 = v3;
        do
        {
          *a2++ = v18;
          --v31;
        }
        while ( v31 );
      }
      v19 = &a2[-v3];
      if ( qword_140E2D940 && (v18 & 0x10) == 0 )
        v18 &= ~qword_140E2D940;
      if ( (v18 & 0xFFFFFFFF00000000uLL) == 0 )
      {
        v20 = (__int64)((_QWORD)v19 << 25) >> 16;
        v21 = MiVaToFlushVm(v20);
        v36 = 20;
        v22 = v21;
        v37 = 8;
        v38 = 1;
        v34 = v21;
        v39 = ((_DWORD)v21[23] & 0x800) != 0;
        if ( ((_DWORD)v21[23] & 0xF) != 0 || v21 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
        {
          v23 = v37;
          v24 = ((_DWORD)v22[23] & 0xF) == 0;
        }
        else
        {
          v24 = 0;
          v23 = 9;
        }
        v35 = v24;
        v37 = v23 & 0xFFFFFFDB;
        v40 = 0;
        v41 = 0;
        v42 = 0LL;
        v43 = 0LL;
        MiInsertTbFlushEntry((__int64)&v34, v20, v3, 0);
        MiFlushTbList(&v34, v25, v26);
      }
      v27 = BugCheckParameter4 & 0x1F;
      v28 = v7;
      v29 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
      if ( v27 + v7 > 0x20 )
      {
        if ( (BugCheckParameter4 & 0x1F) != 0 )
        {
          _InterlockedAnd(v29, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v27));
          v28 = v7 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
          ++v29;
        }
        if ( v28 >= 0x20 )
        {
          v30 = v28 >> 5;
          v28 += -32LL * (v28 >> 5);
          do
          {
            *v29++ = 0;
            --v30;
          }
          while ( v30 );
        }
        if ( v28 )
          _InterlockedAnd(v29, -1 << v28);
      }
      else if ( v7 == 32 )
      {
        *v29 = 0;
      }
      else
      {
        _InterlockedAnd(v29, ~(((1 << v7) - 1) << v27));
      }
      v15 = v3 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v3);
      if ( v15 > 0x200000 )
        LOBYTE(v15) = MiAttemptCoalesce(a1, BugCheckParameter4, v7);
    }
  }
  return v15;
}
