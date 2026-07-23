/*
 * XREFs of MiReservePtes @ 0x14029FB10
 * Callers:
 *     MmCreateKernelStack @ 0x1402207C0 (MmCreateKernelStack.c)
 *     MiMakePageAvoidRead @ 0x140253334 (MiMakePageAvoidRead.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiBuildReservationCluster @ 0x1402EAD30 (MiBuildReservationCluster.c)
 *     MiMapContiguousMemory @ 0x14034B0DC (MiMapContiguousMemory.c)
 *     MmCopyToCachedPage @ 0x14034F0D4 (MmCopyToCachedPage.c)
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 *     MiMapSinglePage @ 0x1403F14B0 (MiMapSinglePage.c)
 *     MiUpdateImagePfnImportRelocations @ 0x14043A5B4 (MiUpdateImagePfnImportRelocations.c)
 *     MiCreatePteCopyList @ 0x14047968C (MiCreatePteCopyList.c)
 *     MmMapMdl @ 0x140677E60 (MmMapMdl.c)
 *     MiInitializePageFaultResources @ 0x140679754 (MiInitializePageFaultResources.c)
 *     MiBuildDynamicRegion @ 0x14067A54C (MiBuildDynamicRegion.c)
 *     MiInitializeDebuggerSupport @ 0x140680CEC (MiInitializeDebuggerSupport.c)
 *     MiPrepareEnclaveMetadataPage @ 0x140681AE8 (MiPrepareEnclaveMetadataPage.c)
 *     MiCopyMemoryPagefileData @ 0x14068F450 (MiCopyMemoryPagefileData.c)
 *     MiReservePageHash @ 0x140692440 (MiReservePageHash.c)
 *     MiAllocateZeroCalibrationBuffer @ 0x140694104 (MiAllocateZeroCalibrationBuffer.c)
 *     MmAllocateNonCachedMemory @ 0x1407EB1A0 (MmAllocateNonCachedMemory.c)
 *     MiLockAndMapEntireDriver @ 0x1407F0F08 (MiLockAndMapEntireDriver.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1407F584C (MiMapHotPatchImageInSystemSpace.c)
 *     MiAllocateEnclaveVad @ 0x1407F74B4 (MiAllocateEnclaveVad.c)
 *     MiCreatePfnBitMaps @ 0x1407FAF3C (MiCreatePfnBitMaps.c)
 *     MiExpandPartitionIds @ 0x1407FC698 (MiExpandPartitionIds.c)
 *     MiValidateImagePfn @ 0x14093AE5C (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x14093B6F8 (MiRelocateImagePfn.c)
 *     MiAllocateProcessShadow @ 0x140A51A70 (MiAllocateProcessShadow.c)
 *     MmAllocateMappingAddressEx @ 0x140A531F0 (MmAllocateMappingAddressEx.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140A83AFC (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8536C (MmAllocateIndependentPagesEx.c)
 *     MmAllocateDumpHibernateResources @ 0x140A9873C (MmAllocateDumpHibernateResources.c)
 *     MiRelocateImageAgain @ 0x140AEAE48 (MiRelocateImageAgain.c)
 *     MmInitializeProcessor @ 0x140B64108 (MmInitializeProcessor.c)
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 *     MiMapDummyPages @ 0x140C51DFC (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140C522E4 (MiProtectSharedUserPage.c)
 *     MiSectionInitialization @ 0x140C558B4 (MiSectionInitialization.c)
 *     MiInitializeMirroring @ 0x140C55B40 (MiInitializeMirroring.c)
 *     MiInitializeCrashDumpPtes @ 0x140C56150 (MiInitializeCrashDumpPtes.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C5641C (MmInitializeImageViewExtensionCfg.c)
 *     MiCreateRetpolineBitmap @ 0x140C57950 (MiCreateRetpolineBitmap.c)
 *     MiInitializeRetpoline @ 0x140C57A7C (MiInitializeRetpoline.c)
 *     MiInitializeKernelCfg @ 0x140C5BA6C (MiInitializeKernelCfg.c)
 *     MiInitializePteInfo @ 0x140C5BF50 (MiInitializePteInfo.c)
 *     MiInitializeTbFlush @ 0x140C5C78C (MiInitializeTbFlush.c)
 * Callees:
 *     RtlInterlockedSetClearRunEx @ 0x140209CD0 (RtlInterlockedSetClearRunEx.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiCompressTbFlushList @ 0x140215218 (MiCompressTbFlushList.c)
 *     MiExpandPtes @ 0x14026C728 (MiExpandPtes.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiVaToFlushVm @ 0x1402FC5EC (MiVaToFlushVm.c)
 *     MiMakeSystemPtesAppear @ 0x1403F5D58 (MiMakeSystemPtesAppear.c)
 *     MiCheckProcessorPteCache @ 0x1403F6100 (MiCheckProcessorPteCache.c)
 *     MiEmptyPteBins @ 0x1403F67B4 (MiEmptyPteBins.c)
 *     MiCompareTbFlushTimeStamp @ 0x14044D95C (MiCompareTbFlushTimeStamp.c)
 *     MiCheckPteReserve @ 0x1404C206C (MiCheckPteReserve.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiReservePtes(__int64 a1, unsigned int a2)
{
  int v2; // eax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  __int64 v7; // r12
  unsigned int v8; // ecx
  __int64 *v9; // r8
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rsi
  int v13; // r12d
  __int64 v14; // r15
  int v15; // edx
  int v16; // r13d
  int v17; // eax
  int v18; // eax
  BOOL v19; // ecx
  unsigned __int64 v20; // r14
  ULONG_PTR v21; // rbx
  ULONG_PTR v22; // rbx
  char v23; // r10
  unsigned __int64 v24; // rbx
  unsigned int v25; // r9d
  __int64 v26; // rax
  unsigned __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // r8
  __int128 *v35; // r13
  __int64 v36; // rax
  __int128 v37; // rax
  unsigned __int64 v38; // r11
  unsigned __int64 v39; // r15
  __int64 v40; // rcx
  unsigned __int64 v41; // r10
  unsigned __int64 v42; // r15
  __int64 v43; // rcx
  unsigned __int64 *v44; // rdx
  __int64 v45; // r9
  unsigned __int64 v46; // r10
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r15
  bool v50; // zf
  __int64 v51; // rax
  unsigned int v52; // r15d
  unsigned __int64 v53; // r10
  unsigned __int64 v54; // rax
  __int64 v55; // r15
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // r10
  __int64 v58; // rax
  unsigned int v59; // ecx
  unsigned __int64 *v60; // r9
  unsigned __int64 *v61; // rax
  __int64 v62; // r9
  unsigned int v63; // r9d
  __int64 v64; // rcx
  __int64 v65; // rcx
  unsigned int v66; // eax
  unsigned __int64 v67; // rcx
  __int64 v68; // rax
  unsigned __int64 v69; // rax
  __int64 v70; // rax
  int v71; // [rsp+30h] [rbp-D0h]
  __int64 v72; // [rsp+30h] [rbp-D0h]
  __int64 v73; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v74; // [rsp+38h] [rbp-C8h]
  int v75; // [rsp+40h] [rbp-C0h] BYREF
  int v76; // [rsp+44h] [rbp-BCh]
  unsigned __int64 v77; // [rsp+48h] [rbp-B8h]
  unsigned int v78; // [rsp+50h] [rbp-B0h]
  int v79; // [rsp+54h] [rbp-ACh]
  int v80; // [rsp+58h] [rbp-A8h]
  unsigned int v81; // [rsp+5Ch] [rbp-A4h]
  int v82; // [rsp+60h] [rbp-A0h]
  int v83; // [rsp+64h] [rbp-9Ch]
  int v84; // [rsp+68h] [rbp-98h]
  unsigned __int64 v85; // [rsp+70h] [rbp-90h]
  __int128 *v86; // [rsp+78h] [rbp-88h]
  __int128 v87; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 *v88; // [rsp+90h] [rbp-70h]
  __int64 v89; // [rsp+A0h] [rbp-60h] BYREF
  BOOL v90; // [rsp+A8h] [rbp-58h]
  int v91; // [rsp+ACh] [rbp-54h]
  unsigned int v92; // [rsp+B0h] [rbp-50h]
  int v93; // [rsp+B4h] [rbp-4Ch]
  bool v94; // [rsp+B8h] [rbp-48h]
  __int16 v95; // [rsp+B9h] [rbp-47h]
  char v96; // [rsp+BBh] [rbp-45h]
  _DWORD NumOfElements[3]; // [rsp+BCh] [rbp-44h] BYREF
  __int64 Base; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v99[160]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = *(_DWORD *)(a1 + 40);
  v75 = 0;
  v5 = a2;
  v6 = a2;
  v87 = 0LL;
  if ( (v2 & 1) != 0 )
  {
    v6 = (unsigned __int64)a2 >> 4;
  }
  else if ( (__int64 *)a1 == &qword_140E376A8 && a2 <= 0x40uLL )
  {
    v73 = MiCheckProcessorPteCache(a2);
    v7 = v73;
    if ( v73 )
      goto LABEL_5;
  }
  if ( a2 < 0x200 )
    goto LABEL_65;
  MiEmptyPteBins(a1, v5, 6LL);
  v32 = MiExpandPtes(a1, v5);
  v7 = v32;
  if ( v32 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 4) != 0 )
      MiCheckPteReserve(a1, v32, v5);
    return v7;
  }
  if ( (__int64 *)a1 != &qword_140E376A8 && (_UNKNOWN *)a1 != &unk_140E35EC0 )
  {
LABEL_65:
    v33 = 0LL;
LABEL_66:
    while ( 1 )
    {
      v34 = *(_QWORD *)(a1 + 64);
      v35 = (__int128 *)a1;
      v36 = *(_QWORD *)a1;
      v86 = (__int128 *)a1;
      if ( v36 )
        break;
LABEL_104:
      if ( (!v33 || v33 == *(_QWORD *)(a1 + 72)) && !(unsigned int)MiMakeSystemPtesAppear(a1, v5, &v75) )
      {
        v48 = MiExpandPtes(a1, v5);
        v73 = v48;
        if ( v48 )
        {
          v7 = v48;
          goto LABEL_5;
        }
        if ( v75 == 6 )
          goto LABEL_58;
        v75 = 6;
        MiEmptyPteBins(a1, v5, 1LL);
      }
    }
    v33 = *(_QWORD *)(a1 + 72);
    if ( v33 )
    {
      if ( *(_QWORD *)a1 < v33 )
      {
        v33 = 0LL;
      }
      else
      {
        *(_QWORD *)&v37 = *(_QWORD *)a1 - v33;
        *((_QWORD *)&v37 + 1) = *(_QWORD *)(a1 + 8) + 8 * (v33 >> 6);
        v87 = v37;
        v35 = &v87;
        v86 = &v87;
        if ( v34 )
          v34 -= v33;
      }
    }
    v38 = *(_QWORD *)v35;
    v39 = 0LL;
    v40 = *((_QWORD *)v35 + 1);
    v72 = v40;
    if ( v34 < *(_QWORD *)v35 )
      v39 = v34;
    v41 = v38 - 1;
    if ( !v6 )
    {
      v42 = v39 & 0xFFFFFFFFFFFFFFF8uLL;
      goto LABEL_75;
    }
    while ( 1 )
    {
      v85 = v39;
      v76 = 0;
      if ( v41 - v39 + 1 < v6 )
      {
LABEL_163:
        v42 = -1LL;
        goto LABEL_95;
      }
      v77 = v41 - v6 + 1;
      v74 = v40 + 8 * (v77 >> 6);
      v44 = (unsigned __int64 *)(v40 + 8 * (v39 >> 6));
      v45 = *v44 | ((1LL << (v39 & 0x3F)) - 1);
      if ( v6 <= 0x7F )
        break;
      v57 = v74 + 8;
      if ( (v77 & 0x3F) == 0 )
        v57 = v40 + 8 * (v77 >> 6);
      if ( v45 )
      {
        if ( *++v44 )
          goto LABEL_148;
        v50 = !_BitScanReverse64((unsigned __int64 *)&v58, v45);
        v78 = 0;
        if ( v50 )
          v59 = 64;
        else
          v59 = 63 - v58;
        v78 = v59;
      }
      else
      {
        v59 = 0;
      }
LABEL_144:
      v42 = (((__int64)v44 - v72) >> 3 << 6) - v59;
      if ( v42 > v77 )
        goto LABEL_94;
      v60 = &v44[(v6 - v59) >> 6];
      while ( ++v44 != v60 )
      {
        if ( *v44 )
          goto LABEL_148;
      }
      v63 = ((_BYTE)v6 - (_BYTE)v59) & 0x3F;
      if ( (((_BYTE)v6 - (_BYTE)v59) & 0x3F) != 0 )
      {
        v50 = !_BitScanForward64((unsigned __int64 *)&v64, *v44);
        v80 = 0;
        if ( v50 )
          LODWORD(v64) = 64;
        v80 = v64;
        if ( (unsigned int)v64 < v63 )
        {
LABEL_148:
          while ( 1 )
          {
            v61 = v44;
            if ( (unsigned __int64)v44 > v57 )
              break;
            if ( !*++v44 )
            {
              v50 = !_BitScanReverse64((unsigned __int64 *)&v62, *v61);
              v79 = 0;
              if ( v50 )
              {
                v59 = 64;
                v79 = 64;
              }
              else
              {
                v59 = 63 - v62;
                v79 = 63 - v62;
              }
              goto LABEL_144;
            }
          }
          v40 = v72;
          v42 = -1LL;
          goto LABEL_95;
        }
      }
LABEL_156:
      v40 = v72;
LABEL_101:
      if ( v42 != -1LL )
        goto LABEL_102;
LABEL_95:
      if ( !v85 )
      {
LABEL_102:
        v35 = v86;
LABEL_75:
        if ( v42 == -1LL )
          goto LABEL_104;
        if ( (unsigned int)RtlInterlockedSetClearRunEx((__int64)v35, v42, v6) )
        {
          _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)v5);
          if ( v35 == &v87 )
            v42 += v33;
          v43 = 16 * v42;
          *(_QWORD *)(a1 + 64) = v6 + v42;
          if ( (*(_BYTE *)(a1 + 40) & 1) == 0 )
            v43 = v42;
          v7 = *(_QWORD *)(a1 + 32) + 8 * v43;
          v73 = v7;
LABEL_5:
          if ( (*(_DWORD *)(a1 + 40) & 4) != 0 )
            MiCheckPteReserve(a1, v7, v5);
          if ( a2 > 0x10 )
            goto LABEL_16;
          v8 = 0;
          if ( a2 )
          {
            v9 = (__int64 *)v7;
            do
            {
              v10 = *v9;
              if ( qword_140E2DCC0 )
              {
                if ( (v10 & 0x10) != 0 )
                  v10 &= ~0x10uLL;
                else
                  v10 &= ~qword_140E2DCC0;
              }
              if ( (v10 & 0xFFFFFFFF00000000uLL) != 0 )
                break;
              ++v8;
              ++v9;
            }
            while ( v8 < a2 );
          }
          if ( v8 != a2 )
          {
LABEL_16:
            v11 = MiVaToFlushVm(v7);
            v96 = 0;
            v12 = v7;
            memset_0(v99, 0, 0x98uLL);
            v13 = 0;
            v14 = 1LL;
            v15 = 0;
            v71 = 0;
            v94 = (*(_DWORD *)(v11 + 184) & 0x800) != 0;
            v16 = 0;
            v17 = *(_DWORD *)(v11 + 184);
            v91 = 20;
            v92 = 8;
            v93 = 1;
            v89 = v11;
            if ( (v17 & 0xF) != 0
              || (struct _LIST_ENTRY **)v11 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
            {
              v18 = v92;
              v19 = (*(_DWORD *)(v11 + 184) & 0xF) == 0;
            }
            else
            {
              v19 = 0;
              v18 = 9;
            }
            v90 = v19;
            v92 = v18 & 0xFFFFFFDB;
            v20 = 0LL;
            v95 = 0;
            memset(NumOfElements, 0, sizeof(NumOfElements));
            Base = 0LL;
            while ( v20 < v5 )
            {
              v21 = *(_QWORD *)v12;
              if ( (*(_QWORD *)v12 & 0xC01LL) != 0 || (*(_QWORD *)v12 & 0x3E0LL) != 0 )
                KeBugCheckEx(0x1Au, 0x5100uLL, v12, v5 - v20, *(_QWORD *)v12);
              if ( qword_140E2DCC0 )
              {
                if ( (v21 & 0x10) != 0 )
                  v21 &= ~0x10uLL;
                else
                  v21 &= ~qword_140E2DCC0;
              }
              v22 = HIDWORD(v21);
              *(_QWORD *)v12 = CLFS_LSN_NULL_EXT;
              if ( (_DWORD)v22 )
              {
                if ( (_DWORD)v22 == v16 )
                {
                  if ( v15 )
                  {
                    v23 = v92;
                    v24 = v12 << 25 >> 16;
                    if ( !v90 && (v92 & 4) == 0 && v24 >= 0xFFFFF68000000000uLL && v24 <= 0xFFFFF6FFFFFFFFFFuLL )
                    {
                      v23 = v92 | 4;
                      v92 |= 4u;
                    }
                    while ( 1 )
                    {
                      v25 = NumOfElements[0];
LABEL_34:
                      if ( v25 )
                      {
                        if ( (v23 & 2) == 0 )
                        {
                          v26 = *(&Base + v25 - 1);
                          if ( (v26 & 0xC00) == 0 )
                          {
                            v27 = *(&Base + v25 - 1) & 0x3FF;
                            if ( (v26 & 0xFFFFFFFFFFFFF000uLL) + ((v27 + 1) << 12) == v24
                              && v14 + v27 <= 0x3FF
                              && v14 + v27 > v27 )
                            {
                              *(_QWORD *)&NumOfElements[1] += v14;
                              *(&Base + v25 - 1) = (v26 + v14) ^ ((v26 + v14) ^ v26) & 0xFFFFFFFFFFFFFC00uLL;
                              goto LABEL_64;
                            }
                          }
                        }
                        if ( (v23 & 2) == 0 )
                        {
                          v28 = *(&Base + v25 - 1);
                          if ( (v28 & 0xC00) == 0 && (v28 & 0xFFFFFFFFFFFFF000uLL) == v24 + (v14 << 12) )
                          {
                            v56 = *(&Base + v25 - 1) & 0x3FF;
                            if ( v14 + v56 <= 0x3FF && v14 + v56 > v56 )
                            {
                              *(_QWORD *)&NumOfElements[1] += v14;
                              *(&Base + v25 - 1) = (v28 - (v14 << 12) + v14) ^ ((v28 - (v14 << 12) + v14) ^ (v28 - (v14 << 12))) & 0xFFFFFFFFFFFFFC00uLL;
                              goto LABEL_64;
                            }
                          }
                        }
                      }
                      if ( v25 != v91 )
                        break;
                      if ( v13 )
                      {
                        if ( !(_BYTE)v95 )
                          LOBYTE(v95) = 1;
                        goto LABEL_64;
                      }
                      if ( (_BYTE)v95 )
                        goto LABEL_64;
                      qsort(&Base, v25, 8uLL, MiTbFlushSort);
                      MiCompressTbFlushList((__int64)&v89);
                      v23 = v92;
                      v13 = 1;
                    }
                    while ( v14 )
                    {
                      v29 = 1024LL;
                      if ( (unsigned __int64)(v14 - 1) <= 0x3FF )
                        v29 = v14;
                      v30 = v24 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v29 - 1) & 0x3FF;
                      v24 += v29 << 12;
                      *(_QWORD *)&v99[8 * v25 - 8] = v30;
                      *(_QWORD *)&NumOfElements[1] += v29;
                      v25 = ++NumOfElements[0];
                      v14 -= v29;
                      if ( v14 && v25 == v91 )
                      {
                        v23 = v92;
                        v13 = 0;
                        goto LABEL_34;
                      }
                    }
LABEL_64:
                    v15 = v71;
                    v13 = 0;
                    v14 = 1LL;
                  }
                }
                else
                {
                  if ( (unsigned __int8)MiCompareTbFlushTimeStamp((unsigned int)v22) )
                  {
                    MiInsertTbFlushEntry((__int64)&v89, v12 << 25 >> 16, 1LL, 0);
                    v15 = 1;
                  }
                  else
                  {
                    v15 = 0;
                  }
                  v71 = v15;
                  v16 = v22;
                }
              }
              else
              {
                v15 = 0;
                v16 = 0;
                v71 = 0;
              }
              ++v20;
              v12 += 8LL;
            }
            MiFlushTbList(&v89);
            return v73;
          }
          return v7;
        }
        goto LABEL_66;
      }
      v46 = v6 + v34;
      if ( v6 + v34 > v38 )
        v46 = v38;
      v41 = v46 - 1;
      v39 = 0LL;
    }
    if ( v6 < 0x40 )
    {
      if ( v6 <= 1 )
      {
        while ( v45 == -1 )
        {
          if ( (unsigned __int64)++v44 > v74 )
            goto LABEL_94;
          v45 = *v44;
        }
        v40 = v72;
        _BitScanForward64(&v47, ~v45);
        v76 = v47;
        v42 = v47 + (((__int64)v44 - v72) >> 3 << 6);
LABEL_100:
        if ( v42 > v77 )
        {
          v42 = -1LL;
          goto LABEL_95;
        }
        goto LABEL_101;
      }
      v49 = 0LL;
      v88 = (unsigned __int64 *)(v72 + 8 * (v41 >> 6));
      while ( v45 != -1 )
      {
LABEL_112:
        v50 = !_BitScanForward64((unsigned __int64 *)&v51, v45);
        v83 = 0;
        if ( v50 )
          LODWORD(v51) = 64;
        v83 = v51;
        if ( (unsigned int)(v49 + v51) >= v6 )
        {
          v55 = -v49;
LABEL_119:
          v40 = v72;
          v42 = (((__int64)v44 - v72) >> 3 << 6) + v55;
          goto LABEL_100;
        }
        v52 = v6;
        v53 = ~v45;
        while ( 1 )
        {
          v53 &= v53 >> (v52 >> 1);
          if ( !v53 )
            break;
          v52 -= v52 >> 1;
          if ( v52 <= 1 )
          {
            _BitScanForward64(&v54, v53);
            v76 = v54;
            v55 = (unsigned int)v54;
            goto LABEL_119;
          }
        }
        if ( v44 == v88 )
          goto LABEL_94;
        v50 = !_BitScanReverse64((unsigned __int64 *)&v70, v45);
        v84 = 0;
        v45 = v44[1];
        if ( v50 )
        {
          ++v44;
          v49 = 64LL;
          v84 = 64;
        }
        else
        {
          v49 = (unsigned int)(63 - v70);
          ++v44;
          v84 = 63 - v70;
        }
      }
      while ( (unsigned __int64)++v44 <= v74 )
      {
        v45 = *v44;
        if ( *v44 != -1LL )
        {
          v49 = 0LL;
          goto LABEL_112;
        }
      }
LABEL_94:
      v40 = v72;
      v42 = -1LL;
      goto LABEL_95;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v45 < 0 )
        {
          if ( (unsigned __int64)++v44 > v74 )
            goto LABEL_94;
          v45 = *v44;
        }
        v50 = !_BitScanReverse64((unsigned __int64 *)&v65, v45);
        v81 = 0;
        if ( v50 )
          v66 = 64;
        else
          v66 = 63 - v65;
        v40 = v72;
        v81 = v66;
        v42 = (((((__int64)v44 - v72) >> 3) + 1) << 6) - v66;
        if ( v42 > v77 )
          goto LABEL_163;
        v67 = v6 - v66;
        if ( v6 == v66 )
          goto LABEL_156;
        v68 = v44[1];
        ++v44;
        v45 = v68;
        if ( v67 >= 0x40 )
          break;
LABEL_169:
        v50 = !_BitScanForward64(&v69, v45);
        v82 = 0;
        if ( v50 )
          v69 = 64LL;
        v82 = v69;
        if ( v69 >= v67 )
          goto LABEL_156;
      }
      if ( !v68 )
      {
        v67 -= 64LL;
        if ( !v67 )
          goto LABEL_156;
        v45 = v44[1];
        ++v44;
        goto LABEL_169;
      }
    }
  }
LABEL_58:
  ++*(_DWORD *)(a1 + 48);
  return 0LL;
}
