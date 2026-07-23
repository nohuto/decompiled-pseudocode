/*
 * XREFs of MiReleasePtes @ 0x14029D9A0
 * Callers:
 *     MmFreeIndependentPages @ 0x14021D100 (MmFreeIndependentPages.c)
 *     MiDeleteCachedKernelShadowStack @ 0x14021E9E8 (MiDeleteCachedKernelShadowStack.c)
 *     MiDeleteCachedKernelStack @ 0x14021F06C (MiDeleteCachedKernelStack.c)
 *     MmDeleteKernelStack @ 0x14021FA40 (MmDeleteKernelStack.c)
 *     MmCreateKernelStack @ 0x1402207C0 (MmCreateKernelStack.c)
 *     MiReturnPteMappingSet @ 0x1402532A0 (MiReturnPteMappingSet.c)
 *     MiMakePageAvoidRead @ 0x140253334 (MiMakePageAvoidRead.c)
 *     MiRemoveFromSystemSpace @ 0x140290E7C (MiRemoveFromSystemSpace.c)
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiBuildReservationCluster @ 0x1402EAD30 (MiBuildReservationCluster.c)
 *     MiMapContiguousMemory @ 0x14034B0DC (MiMapContiguousMemory.c)
 *     MmCopyToCachedPage @ 0x14034F0D4 (MmCopyToCachedPage.c)
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 *     MiUpdateImagePfnImportRelocations @ 0x14043A5B4 (MiUpdateImagePfnImportRelocations.c)
 *     MiDeleteProcessShadow @ 0x140451008 (MiDeleteProcessShadow.c)
 *     MiReleasePteCopyList @ 0x1404A18B4 (MiReleasePteCopyList.c)
 *     MiUnmapSinglePage @ 0x1404C39B0 (MiUnmapSinglePage.c)
 *     MmMapMdl @ 0x140677E60 (MmMapMdl.c)
 *     MiChangePagingFileMaximum @ 0x14067AF90 (MiChangePagingFileMaximum.c)
 *     MiPrepareEnclaveMetadataPage @ 0x140681AE8 (MiPrepareEnclaveMetadataPage.c)
 *     MiCopyMemoryPagefileData @ 0x14068F450 (MiCopyMemoryPagefileData.c)
 *     MiReleasePageHash @ 0x1406923E0 (MiReleasePageHash.c)
 *     MiFreeZeroCalibrationBuffer @ 0x140694704 (MiFreeZeroCalibrationBuffer.c)
 *     MmDeleteProcessor @ 0x1407E8724 (MmDeleteProcessor.c)
 *     MmReleaseDumpHibernateResources @ 0x1407EDD58 (MmReleaseDumpHibernateResources.c)
 *     MiUnlockEntireDriver @ 0x1407F10C0 (MiUnlockEntireDriver.c)
 *     MmFreeIsrStack @ 0x1407F73D0 (MmFreeIsrStack.c)
 *     MiAllocateEnclaveVad @ 0x1407F74B4 (MiAllocateEnclaveVad.c)
 *     MiCreatePfnBitMaps @ 0x1407FAF3C (MiCreatePfnBitMaps.c)
 *     MiDeleteSparseRange @ 0x1407FB544 (MiDeleteSparseRange.c)
 *     MiExpandPartitionIds @ 0x1407FC698 (MiExpandPartitionIds.c)
 *     MiValidateImagePfn @ 0x14093AE5C (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x14093B6F8 (MiRelocateImagePfn.c)
 *     MmFreeMappingAddress @ 0x140A55EC0 (MmFreeMappingAddress.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140A83AFC (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8536C (MmAllocateIndependentPagesEx.c)
 *     MmFreeNonCachedMemory @ 0x140A99000 (MmFreeNonCachedMemory.c)
 *     MiReleaseHotPatchResources @ 0x140AAF528 (MiReleaseHotPatchResources.c)
 *     MiRelocateImageAgain @ 0x140AEAE48 (MiRelocateImageAgain.c)
 *     MiReleaseEnclaveMetadataPage @ 0x140B657F4 (MiReleaseEnclaveMetadataPage.c)
 *     MiDeleteEnclavePages @ 0x140B6FC18 (MiDeleteEnclavePages.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C5641C (MmInitializeImageViewExtensionCfg.c)
 *     MiCreateRetpolineBitmap @ 0x140C57950 (MiCreateRetpolineBitmap.c)
 *     MiInitializePteInfo @ 0x140C5BF50 (MiInitializePteInfo.c)
 *     MiInitializeTbFlush @ 0x140C5C78C (MiInitializeTbFlush.c)
 * Callees:
 *     MiReturnSystemPtes @ 0x140209C30 (MiReturnSystemPtes.c)
 *     MiCompressTbFlushList @ 0x140215218 (MiCompressTbFlushList.c)
 *     MiInsertCachedPte @ 0x14029E0E0 (MiInsertCachedPte.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiVaToFlushVm @ 0x1402FC5EC (MiVaToFlushVm.c)
 *     MiInitializeTbFlushStamps @ 0x14043A0EC (MiInitializeTbFlushStamps.c)
 *     MiAttemptCoalesce @ 0x140468B98 (MiAttemptCoalesce.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     MiCheckPteRelease @ 0x14068F110 (MiCheckPteRelease.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall MiReleasePtes(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // r12
  unsigned __int64 v6; // r15
  unsigned __int64 BugCheckParameter4; // rbx
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 result; // rax
  bool i; // zf
  __int64 v17; // r10
  __int64 v18; // rax
  _QWORD *v19; // rdi
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  int v22; // r8d
  unsigned int v23; // r9d
  __int64 v24; // r11
  __int64 v25; // rdx
  unsigned int v26; // r8d
  unsigned __int64 v27; // r10
  int v28; // r12d
  __int64 v29; // rax
  unsigned __int64 v30; // r10
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r9
  volatile signed __int32 *v37; // r10
  unsigned __int64 v38; // rcx
  __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  int v41; // [rsp+30h] [rbp-D0h]
  __int64 v42; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v43; // [rsp+40h] [rbp-C0h]
  __int64 v44[3]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A0h] BYREF
  int v46; // [rsp+68h] [rbp-98h]
  int v47; // [rsp+6Ch] [rbp-94h]
  int v48; // [rsp+70h] [rbp-90h]
  int v49; // [rsp+74h] [rbp-8Ch]
  bool v50; // [rsp+78h] [rbp-88h]
  __int16 v51; // [rsp+79h] [rbp-87h]
  unsigned int v52; // [rsp+7Ch] [rbp-84h]
  __int64 v53; // [rsp+80h] [rbp-80h]
  _QWORD Base[21]; // [rsp+88h] [rbp-78h] BYREF

  v3 = a3;
  v44[0] = 0LL;
  memset_0(&v45, 0, 0xC8uLL);
  v6 = (unsigned int)v3;
  if ( (*(_DWORD *)(a1 + 40) & 4) != 0 )
    MiCheckPteRelease(a1, a2, (unsigned int)v3);
  BugCheckParameter4 = ((__int64)a2 - *(_QWORD *)(a1 + 32)) >> 3;
  if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    BugCheckParameter4 >>= 4;
  v8 = (unsigned __int64)(unsigned int)v3 >> 4;
  if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
    v8 = (unsigned int)v3;
  if ( (unsigned int)v3 < 0x200 || (__int64 *)a1 != &qword_140E376A8 && (_UNKNOWN *)a1 != &unk_140E35EC0 )
  {
    v41 = 0;
    if ( BugCheckParameter4 >= *(_QWORD *)a1 )
      goto LABEL_12;
    if ( v8 > 1 )
    {
      if ( *(_QWORD *)a1 - BugCheckParameter4 < v8 )
        goto LABEL_12;
      v9 = *(_QWORD *)(a1 + 8);
      v10 = *(_QWORD *)(v9 + 8 * (BugCheckParameter4 >> 6));
      v11 = v9 + 8 * (BugCheckParameter4 >> 6);
      v12 = v9 + 8 * ((BugCheckParameter4 + v8 - 1) >> 6);
      if ( v11 == v12 )
      {
        if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << BugCheckParameter4) & v10) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << BugCheckParameter4 )
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
        if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v8 - 1)) & v17) != 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v8 - 1) )
LABEL_12:
          KeBugCheckEx(0xDAu, 0x302uLL, (__int64)((_QWORD)a2 << 25) >> 16, (unsigned int)v3, BugCheckParameter4);
      }
    }
    else if ( v8 != 1
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
  v41 = 1;
LABEL_17:
  v13 = a2;
  v14 = (unsigned int)v3;
  do
  {
    *v13++ = CLFS_LSN_NULL_EXT;
    --v14;
  }
  while ( v14 );
LABEL_19:
  result = MiInsertCachedPte(a1, a2, (unsigned int)v3);
  if ( (_DWORD)result )
    return result;
  if ( v41 == 1 )
    return MiReturnSystemPtes(a1, 1, BugCheckParameter4, (v3 + 511) & 0xFFFFFFFFFFFFFE00uLL);
  v44[0] = 0LL;
  MiInitializeTbFlushStamps(v44);
  v18 = v44[0];
  if ( (_DWORD)v3 )
  {
    v39 = (unsigned int)v3;
    do
    {
      *a2++ = v18;
      --v39;
    }
    while ( v39 );
  }
  v19 = &a2[-(unsigned int)v3];
  if ( qword_140E2DCC0 && (v18 & 0x10) == 0 )
    v18 &= ~qword_140E2DCC0;
  if ( (v18 & 0xFFFFFFFF00000000uLL) == 0 )
  {
    v20 = (__int64)((_QWORD)v19 << 25) >> 16;
    v21 = MiVaToFlushVm(v20);
    v47 = 20;
    v48 = 8;
    v49 = 1;
    v45 = v21;
    v50 = (*(_DWORD *)(v21 + 184) & 0x800) != 0;
    if ( (*(_DWORD *)(v21 + 184) & 0xF) != 0
      || (struct _LIST_ENTRY **)v21 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      v22 = v48;
      if ( (*(_DWORD *)(v21 + 184) & 0xF) == 0 )
      {
        v23 = 0;
        v46 = 1;
        v24 = 0LL;
        v52 = 0;
        v25 = (unsigned int)v3;
        v53 = 0LL;
        v26 = v48 & 0xFFFFFFDB;
        Base[0] = 0LL;
        v42 = (unsigned int)v3;
        v27 = v20;
        v51 = 0;
        v43 = v20;
        goto LABEL_35;
      }
    }
    else
    {
      v22 = 9;
    }
    v43 = v20;
    v26 = v22 & 0xFFFFFFDB;
    Base[0] = 0LL;
    v25 = (unsigned int)v3;
    v48 = v26;
    v42 = (unsigned int)v3;
    v53 = 0LL;
    v24 = 0LL;
    v52 = 0;
    v23 = 0;
    v51 = 0;
    v27 = v20;
    v46 = 0;
    if ( v20 < 0xFFFFF68000000000uLL || v20 > 0xFFFFF6FFFFFFFFFFuLL )
    {
LABEL_36:
      v28 = 0;
      while ( 1 )
      {
        if ( v23 )
        {
          if ( (v26 & 2) == 0 )
          {
            v29 = Base[v23 - 1];
            if ( (v29 & 0xC00) == 0 )
            {
              v30 = Base[v23 - 1] & 0x3FFLL;
              if ( (v29 & 0xFFFFFFFFFFFFF000uLL) + ((v30 + 1) << 12) == v43 )
              {
                if ( v30 + v42 > v30 && v30 + v42 <= 0x3FF )
                {
                  v53 = v42 + v24;
                  Base[v23 - 1] = (v29 + v42) ^ ((v29 + v42) ^ v29) & 0xFFFFFFFFFFFFFC00uLL;
                  goto LABEL_61;
                }
                v25 = v42;
              }
              else
              {
                v25 = v42;
              }
              v27 = v43;
            }
          }
          if ( (v26 & 2) == 0 )
          {
            v31 = Base[v23 - 1];
            if ( (v31 & 0xC00) == 0 && (v31 & 0xFFFFFFFFFFFFF000uLL) == (v25 << 12) + v27 )
            {
              v40 = Base[v23 - 1] & 0x3FFLL;
              if ( v40 + v42 <= 0x3FF && v40 + v42 > v40 )
              {
                v53 = v42 + v24;
                Base[v23 - 1] = (v31 - (v25 << 12) + v42) ^ ((v31 - (v25 << 12) + v42) ^ (v31 - (v25 << 12))) & 0xFFFFFFFFFFFFFC00uLL;
                goto LABEL_61;
              }
            }
          }
        }
        if ( v23 != v47 )
          break;
        if ( v28 )
        {
          if ( !(_BYTE)v51 )
            LOBYTE(v51) = 1;
          goto LABEL_61;
        }
        if ( (_BYTE)v51 )
          goto LABEL_61;
        qsort(Base, v23, 8uLL, MiTbFlushSort);
        MiCompressTbFlushList((__int64)&v45);
        v24 = v53;
        v28 = 1;
        v23 = v52;
        LOBYTE(v26) = v48;
        v27 = v43;
        v25 = v42;
      }
      v32 = v42;
      while ( v32 )
      {
        v33 = 1024LL;
        if ( (unsigned __int64)(v32 - 1) <= 0x3FF )
          v33 = v32;
        v42 = v32 - v33;
        v34 = v27 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v33 - 1) & 0x3FF;
        v27 += v33 << 12;
        v43 = v27;
        Base[v23] = v34;
        v23 = v52 + 1;
        v32 = v42;
        v24 = v33 + v53;
        ++v52;
        v53 += v33;
        if ( !v42 )
          break;
        if ( v23 == v47 )
        {
          LOBYTE(v26) = v48;
          v25 = v42;
          goto LABEL_36;
        }
      }
LABEL_61:
      MiFlushTbList(&v45);
      goto LABEL_62;
    }
    v26 |= 4u;
LABEL_35:
    v48 = v26;
    goto LABEL_36;
  }
LABEL_62:
  v35 = BugCheckParameter4 & 0x1F;
  v36 = v8;
  v37 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
  if ( v35 + v8 > 0x20 )
  {
    if ( (BugCheckParameter4 & 0x1F) != 0 )
    {
      _InterlockedAnd(v37, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v35));
      v36 = v8 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
      ++v37;
    }
    if ( v36 >= 0x20 )
    {
      v38 = v36 >> 5;
      v36 += -32LL * (v36 >> 5);
      do
      {
        *v37++ = 0;
        --v38;
      }
      while ( v38 );
    }
    if ( v36 )
      _InterlockedAnd(v37, -1 << v36);
  }
  else if ( v8 == 32 )
  {
    *v37 = 0;
  }
  else
  {
    _InterlockedAnd(v37, ~(((1 << v8) - 1) << v35));
  }
  result = v6 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v6);
  if ( result > 0x200000 )
    return MiAttemptCoalesce(a1, BugCheckParameter4, v8, v36);
  return result;
}
