/*
 * XREFs of MiReservePtes @ 0x14032A200
 * Callers:
 *     MiMakePageAvoidRead @ 0x140222A90 (MiMakePageAvoidRead.c)
 *     MmCopyToCachedPage @ 0x140223414 (MmCopyToCachedPage.c)
 *     MiMapSinglePage @ 0x140225164 (MiMapSinglePage.c)
 *     MiInsertInSystemSpace @ 0x1402A4B54 (MiInsertInSystemSpace.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     MmCreateKernelStack @ 0x140345F40 (MmCreateKernelStack.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403FF808 (MiUpdateImagePfnImportRelocations.c)
 *     MiBuildReservationCluster @ 0x14040BF84 (MiBuildReservationCluster.c)
 *     MiMapContiguousMemory @ 0x140413F8C (MiMapContiguousMemory.c)
 *     MiPrivateFixup @ 0x140439BB4 (MiPrivateFixup.c)
 *     MiCreatePteCopyList @ 0x14047DD90 (MiCreatePteCopyList.c)
 *     MmMapMdl @ 0x14066B340 (MmMapMdl.c)
 *     MiInitializePageFaultResources @ 0x14066CCBC (MiInitializePageFaultResources.c)
 *     MiBuildDynamicRegion @ 0x14066DAC0 (MiBuildDynamicRegion.c)
 *     MiInitializeDebuggerSupport @ 0x1406742CC (MiInitializeDebuggerSupport.c)
 *     MiPrepareEnclaveMetadataPage @ 0x1406750C8 (MiPrepareEnclaveMetadataPage.c)
 *     MiCopyMemoryPagefileData @ 0x140682A90 (MiCopyMemoryPagefileData.c)
 *     MiReservePageHash @ 0x140685F10 (MiReservePageHash.c)
 *     MiAllocateZeroCalibrationBuffer @ 0x140687BD4 (MiAllocateZeroCalibrationBuffer.c)
 *     MmAllocateNonCachedMemory @ 0x1407DAD30 (MmAllocateNonCachedMemory.c)
 *     MiLockAndMapEntireDriver @ 0x1407E0A98 (MiLockAndMapEntireDriver.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1407E52D0 (MiMapHotPatchImageInSystemSpace.c)
 *     MiAllocateEnclaveVad @ 0x1407E6EB0 (MiAllocateEnclaveVad.c)
 *     MiCreatePfnBitMaps @ 0x1407EA93C (MiCreatePfnBitMaps.c)
 *     MiExpandPartitionIds @ 0x1407EC098 (MiExpandPartitionIds.c)
 *     MiRelocateImageAgain @ 0x14093FE24 (MiRelocateImageAgain.c)
 *     MiRelocateImagePfn @ 0x140945ED0 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x140946B4C (MiValidateImagePfn.c)
 *     MiAllocateProcessShadow @ 0x140A47EB0 (MiAllocateProcessShadow.c)
 *     MmAllocateMappingAddressEx @ 0x140A58950 (MmAllocateMappingAddressEx.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8508C (MmAllocateIndependentPagesEx.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140A8DB7C (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmAllocateDumpHibernateResources @ 0x140A9769C (MmAllocateDumpHibernateResources.c)
 *     MmInitializeProcessor @ 0x140B51F08 (MmInitializeProcessor.c)
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 *     MiMapDummyPages @ 0x140C3EA3C (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140C3EF24 (MiProtectSharedUserPage.c)
 *     MiSectionInitialization @ 0x140C424F4 (MiSectionInitialization.c)
 *     MiInitializeMirroring @ 0x140C42780 (MiInitializeMirroring.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C43014 (MmInitializeImageViewExtensionCfg.c)
 *     MiCreateRetpolineBitmap @ 0x140C444D8 (MiCreateRetpolineBitmap.c)
 *     MiInitializeRetpoline @ 0x140C44604 (MiInitializeRetpoline.c)
 *     MiInitializeKernelCfg @ 0x140C485AC (MiInitializeKernelCfg.c)
 *     MiInitializePteInfo @ 0x140C48A90 (MiInitializePteInfo.c)
 *     MiInitializeTbFlush @ 0x140C492CC (MiInitializeTbFlush.c)
 * Callees:
 *     MiCompareTbFlushTimeStamp @ 0x140239C5C (MiCompareTbFlushTimeStamp.c)
 *     RtlInterlockedSetClearRunEx @ 0x1402BFE00 (RtlInterlockedSetClearRunEx.c)
 *     MiVaToFlushVm @ 0x140327844 (MiVaToFlushVm.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiExpandPtes @ 0x14038E6D8 (MiExpandPtes.c)
 *     MiMakeSystemPtesAppear @ 0x1403F4A0C (MiMakeSystemPtesAppear.c)
 *     MiCheckProcessorPteCache @ 0x1403F4DB0 (MiCheckProcessorPteCache.c)
 *     MiEmptyPteBins @ 0x1403F5470 (MiEmptyPteBins.c)
 *     MiCompressTbFlushList @ 0x1404C7DF8 (MiCompressTbFlushList.c)
 *     MiCheckPteReserve @ 0x1404C7F38 (MiCheckPteReserve.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     qsort @ 0x1404FC5A0 (qsort.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiReservePtes(__int64 a1, unsigned int a2)
{
  int v2; // eax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r12
  unsigned int v8; // ecx
  __int64 *v9; // r8
  __int64 v10; // rax
  struct _LIST_ENTRY **v11; // rbx
  unsigned __int64 v12; // rsi
  int v13; // r12d
  __int64 v14; // r15
  __int64 v15; // rdx
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
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // r15
  __int64 v39; // rcx
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // r15
  __int64 v42; // rcx
  __int128 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // r15
  unsigned __int64 *v46; // rdx
  __int64 v47; // r11
  unsigned __int64 v48; // r9
  unsigned __int64 v49; // rax
  __int64 v50; // r15
  bool v51; // zf
  __int64 v52; // rax
  unsigned int v53; // r9d
  unsigned __int64 v54; // r15
  unsigned __int64 v55; // rax
  __int64 v56; // r15
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  unsigned int v60; // ecx
  __int64 v61; // r9
  unsigned __int64 *v62; // r11
  unsigned __int64 v63; // rcx
  unsigned __int64 *v64; // rax
  __int64 v65; // r11
  unsigned int v66; // r11d
  __int64 v67; // rcx
  __int64 v68; // rcx
  unsigned int v69; // eax
  unsigned __int64 v70; // rcx
  __int64 v71; // rax
  unsigned __int64 v72; // rax
  __int64 v73; // rax
  unsigned int v74; // [rsp+30h] [rbp-D0h]
  __int64 v75; // [rsp+30h] [rbp-D0h]
  __int64 v76; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v77; // [rsp+38h] [rbp-C8h]
  int v78; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v79; // [rsp+48h] [rbp-B8h]
  int v80; // [rsp+50h] [rbp-B0h]
  unsigned int v81; // [rsp+54h] [rbp-ACh]
  int v82; // [rsp+58h] [rbp-A8h]
  int v83; // [rsp+5Ch] [rbp-A4h]
  unsigned int v84; // [rsp+60h] [rbp-A0h]
  int v85; // [rsp+64h] [rbp-9Ch]
  int v86; // [rsp+68h] [rbp-98h]
  int v87; // [rsp+6Ch] [rbp-94h]
  unsigned __int64 v88; // [rsp+70h] [rbp-90h]
  __int128 *v89; // [rsp+78h] [rbp-88h]
  __int128 v90; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 *v91; // [rsp+90h] [rbp-70h]
  struct _LIST_ENTRY **v92; // [rsp+A0h] [rbp-60h] BYREF
  BOOL v93; // [rsp+A8h] [rbp-58h]
  int v94; // [rsp+ACh] [rbp-54h]
  unsigned int v95; // [rsp+B0h] [rbp-50h]
  int v96; // [rsp+B4h] [rbp-4Ch]
  bool v97; // [rsp+B8h] [rbp-48h]
  __int16 v98; // [rsp+B9h] [rbp-47h]
  char v99; // [rsp+BBh] [rbp-45h]
  _DWORD NumOfElements[3]; // [rsp+BCh] [rbp-44h] BYREF
  __int64 Base; // [rsp+C8h] [rbp-38h] BYREF
  char v102[160]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = *(_DWORD *)(a1 + 40);
  v78 = 0;
  v5 = a2;
  v6 = a2;
  v90 = 0LL;
  if ( (v2 & 1) != 0 )
  {
    v6 = (unsigned __int64)a2 >> 4;
  }
  else if ( (__int64 *)a1 == &qword_140E37328 && a2 <= 0x40uLL )
  {
    v76 = MiCheckProcessorPteCache(a2);
    v7 = v76;
    if ( v76 )
      goto LABEL_5;
  }
  if ( a2 < 0x200 )
    goto LABEL_66;
  MiEmptyPteBins(a1, v5, 6LL);
  v32 = MiExpandPtes(a1, v5);
  v7 = v32;
  if ( v32 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 4) != 0 )
      MiCheckPteReserve(a1, v32, v5);
    return v7;
  }
  if ( (__int64 *)a1 != &qword_140E37328 && (_UNKNOWN *)a1 != &unk_140E35B40 )
  {
LABEL_66:
    v33 = 0LL;
LABEL_67:
    while ( 1 )
    {
      v34 = *(_QWORD *)(a1 + 64);
      v35 = (__int128 *)a1;
      v36 = *(_QWORD *)a1;
      v89 = (__int128 *)a1;
      if ( v36 )
        break;
LABEL_85:
      if ( (!v33 || v33 == *(_QWORD *)(a1 + 72)) && !(unsigned int)MiMakeSystemPtesAppear(a1, v5, &v78) )
      {
        v44 = MiExpandPtes(a1, v5);
        v76 = v44;
        if ( v44 )
        {
          v7 = v44;
          goto LABEL_5;
        }
        if ( v78 == 6 )
          goto LABEL_58;
        v78 = 6;
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
        *(_QWORD *)&v43 = *(_QWORD *)a1 - v33;
        *((_QWORD *)&v43 + 1) = *(_QWORD *)(a1 + 8) + 8 * (v33 >> 6);
        v90 = v43;
        v35 = &v90;
        v89 = &v90;
        if ( v34 )
          v34 -= v33;
      }
    }
    v37 = *(_QWORD *)v35;
    v38 = 0LL;
    v39 = *((_QWORD *)v35 + 1);
    v75 = v39;
    if ( v34 < *(_QWORD *)v35 )
      v38 = v34;
    v40 = v37 - 1;
    if ( !v6 )
    {
      v41 = v38 & 0xFFFFFFFFFFFFFFF8uLL;
      goto LABEL_73;
    }
    while ( 1 )
    {
      v88 = v38;
      v80 = 0;
      if ( v40 - v38 + 1 < v6 )
      {
LABEL_161:
        v41 = -1LL;
        goto LABEL_98;
      }
      v77 = v40 - v6 + 1;
      v45 = v39 + 8 * (v77 >> 6);
      v46 = (unsigned __int64 *)(v39 + 8 * (v88 >> 6));
      v79 = v45;
      v47 = *v46 | ((1LL << (v88 & 0x3F)) - 1);
      if ( v6 <= 0x7F )
        break;
      v58 = v45 + 8;
      if ( (v77 & 0x3F) == 0 )
        v58 = v39 + 8 * (v77 >> 6);
      v79 = v58;
      if ( !v47 )
      {
        v61 = v75;
        v60 = 0;
        goto LABEL_142;
      }
      if ( *++v46 )
      {
        v61 = v75;
        v63 = v58;
LABEL_147:
        while ( 1 )
        {
          v64 = v46;
          if ( (unsigned __int64)v46 > v63 )
            break;
          if ( !*++v46 )
          {
            v51 = !_BitScanReverse64((unsigned __int64 *)&v65, *v64);
            v82 = 0;
            if ( v51 )
            {
              v60 = 64;
              v82 = 64;
            }
            else
            {
              v60 = 63 - v65;
              v82 = 63 - v65;
            }
            goto LABEL_142;
          }
        }
        v39 = v75;
        v41 = -1LL;
        goto LABEL_98;
      }
      v51 = !_BitScanReverse64((unsigned __int64 *)&v59, v47);
      v81 = 0;
      if ( v51 )
        v60 = 64;
      else
        v60 = 63 - v59;
      v61 = v75;
      v81 = v60;
LABEL_142:
      v41 = (((__int64)v46 - v61) >> 3 << 6) - v60;
      if ( v41 > v77 )
        goto LABEL_97;
      v62 = &v46[(v6 - v60) >> 6];
      while ( ++v46 != v62 )
      {
        if ( *v46 )
          goto LABEL_146;
      }
      v66 = ((_BYTE)v6 - (_BYTE)v60) & 0x3F;
      if ( (((_BYTE)v6 - (_BYTE)v60) & 0x3F) != 0 )
      {
        v51 = !_BitScanForward64((unsigned __int64 *)&v67, *v46);
        v83 = 0;
        if ( v51 )
          LODWORD(v67) = 64;
        v83 = v67;
        if ( (unsigned int)v67 < v66 )
        {
LABEL_146:
          v63 = v79;
          goto LABEL_147;
        }
      }
LABEL_155:
      v39 = v75;
LABEL_104:
      if ( v41 != -1LL )
        goto LABEL_105;
LABEL_98:
      if ( !v88 )
      {
LABEL_105:
        v35 = v89;
LABEL_73:
        if ( v41 == -1LL )
          goto LABEL_85;
        if ( (unsigned int)RtlInterlockedSetClearRunEx((__int64)v35, v41, v6) )
        {
          _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)v5);
          if ( v35 == &v90 )
            v41 += v33;
          v42 = 16 * v41;
          *(_QWORD *)(a1 + 64) = v6 + v41;
          if ( (*(_BYTE *)(a1 + 40) & 1) == 0 )
            v42 = v41;
          v7 = *(_QWORD *)(a1 + 32) + 8 * v42;
          v76 = v7;
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
              if ( qword_140E2D940 )
              {
                if ( (v10 & 0x10) != 0 )
                  v10 &= ~0x10uLL;
                else
                  v10 &= ~qword_140E2D940;
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
            v99 = 0;
            v12 = v7;
            memset_0(v102, 0, 0x98uLL);
            v13 = 0;
            v14 = 1LL;
            v15 = 0LL;
            v74 = 0;
            v97 = ((_DWORD)v11[23] & 0x800) != 0;
            v16 = 0;
            v17 = *((_DWORD *)v11 + 46);
            v94 = 20;
            v95 = 8;
            v96 = 1;
            v92 = v11;
            if ( (v17 & 0xF) != 0 || v11 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
            {
              v18 = v95;
              v19 = ((_DWORD)v11[23] & 0xF) == 0;
            }
            else
            {
              v19 = 0;
              v18 = 9;
            }
            v93 = v19;
            v95 = v18 & 0xFFFFFFDB;
            v20 = 0LL;
            v98 = 0;
            memset(NumOfElements, 0, sizeof(NumOfElements));
            Base = 0LL;
            while ( v20 < v5 )
            {
              v21 = *(_QWORD *)v12;
              if ( (*(_QWORD *)v12 & 0xC01LL) != 0 || (*(_QWORD *)v12 & 0x3E0LL) != 0 )
                KeBugCheckEx(0x1Au, 0x5100uLL, v12, v5 - v20, *(_QWORD *)v12);
              if ( qword_140E2D940 )
              {
                if ( (v21 & 0x10) != 0 )
                  v21 &= ~0x10uLL;
                else
                  v21 &= ~qword_140E2D940;
              }
              v22 = HIDWORD(v21);
              *(_QWORD *)v12 = CLFS_LSN_NULL_EXT;
              if ( (_DWORD)v22 )
              {
                if ( (_DWORD)v22 == v16 )
                {
                  if ( (_DWORD)v15 )
                  {
                    v23 = v95;
                    v24 = (__int64)(v12 << 25) >> 16;
                    if ( !v93 && (v95 & 4) == 0 && v24 >= 0xFFFFF68000000000uLL && v24 <= 0xFFFFF6FFFFFFFFFFuLL )
                    {
                      v23 = v95 | 4;
                      v95 |= 4u;
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
                              goto LABEL_60;
                            }
                          }
                        }
                        if ( (v23 & 2) == 0 )
                        {
                          v28 = *(&Base + v25 - 1);
                          if ( (v28 & 0xC00) == 0 && (v28 & 0xFFFFFFFFFFFFF000uLL) == v24 + (v14 << 12) )
                          {
                            v57 = *(&Base + v25 - 1) & 0x3FF;
                            if ( v14 + v57 <= 0x3FF && v14 + v57 > v57 )
                            {
                              *(_QWORD *)&NumOfElements[1] += v14;
                              *(&Base + v25 - 1) = (v28 - (v14 << 12) + v14) ^ ((v28 - (v14 << 12) + v14) ^ (v28 - (v14 << 12))) & 0xFFFFFFFFFFFFFC00uLL;
                              goto LABEL_60;
                            }
                          }
                        }
                      }
                      if ( v25 != v94 )
                        break;
                      if ( v13 )
                      {
                        if ( !(_BYTE)v98 )
                          LOBYTE(v98) = 1;
                        goto LABEL_60;
                      }
                      if ( (_BYTE)v98 )
                        goto LABEL_60;
                      qsort(&Base, v25, 8uLL, MiTbFlushSort);
                      MiCompressTbFlushList(&v92);
                      v23 = v95;
                      v13 = 1;
                    }
                    while ( v14 )
                    {
                      v29 = 1024LL;
                      if ( (unsigned __int64)(v14 - 1) <= 0x3FF )
                        v29 = v14;
                      v30 = v24 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v29 - 1) & 0x3FF;
                      v24 += v29 << 12;
                      *(_QWORD *)&v102[8 * v25 - 8] = v30;
                      *(_QWORD *)&NumOfElements[1] += v29;
                      v25 = ++NumOfElements[0];
                      v14 -= v29;
                      if ( v14 && v25 == v94 )
                      {
                        v23 = v95;
                        v13 = 0;
                        goto LABEL_34;
                      }
                    }
LABEL_60:
                    v15 = v74;
                    v13 = 0;
                    v14 = 1LL;
                  }
                }
                else
                {
                  if ( MiCompareTbFlushTimeStamp((unsigned int)v22) )
                  {
                    MiInsertTbFlushEntry((__int64)&v92, (__int64)(v12 << 25) >> 16, 1LL, 0);
                    v15 = 1LL;
                  }
                  else
                  {
                    v15 = 0LL;
                  }
                  v74 = v15;
                  v16 = v22;
                }
              }
              else
              {
                v15 = 0LL;
                v16 = 0;
                v74 = 0;
              }
              ++v20;
              v12 += 8LL;
            }
            MiFlushTbList(&v92, v15, 0xFFFFF68000000000uLL);
            return v76;
          }
          return v7;
        }
        goto LABEL_67;
      }
      v48 = v6 + v34;
      if ( v6 + v34 > v37 )
        v48 = v37;
      v40 = v48 - 1;
      v38 = 0LL;
    }
    if ( v6 < 0x40 )
    {
      if ( v6 <= 1 )
      {
        while ( v47 == -1 )
        {
          if ( (unsigned __int64)++v46 > v45 )
            goto LABEL_97;
          v47 = *v46;
        }
        v39 = v75;
        _BitScanForward64(&v49, ~v47);
        v80 = v49;
        v41 = v49 + (((__int64)v46 - v75) >> 3 << 6);
LABEL_103:
        if ( v41 > v77 )
        {
          v41 = -1LL;
          goto LABEL_98;
        }
        goto LABEL_104;
      }
      v50 = 0LL;
      v91 = (unsigned __int64 *)(v75 + 8 * (v40 >> 6));
      while ( v47 != -1 )
      {
LABEL_113:
        v51 = !_BitScanForward64((unsigned __int64 *)&v52, v47);
        v86 = 0;
        if ( v51 )
          LODWORD(v52) = 64;
        v86 = v52;
        if ( (unsigned int)(v50 + v52) >= v6 )
        {
          v56 = -v50;
LABEL_120:
          v39 = v75;
          v41 = (((__int64)v46 - v75) >> 3 << 6) + v56;
          goto LABEL_103;
        }
        v53 = v6;
        v54 = ~v47;
        while ( 1 )
        {
          v54 &= v54 >> (v53 >> 1);
          if ( !v54 )
            break;
          v53 -= v53 >> 1;
          if ( v53 <= 1 )
          {
            _BitScanForward64(&v55, v54);
            v80 = v55;
            v56 = (unsigned int)v55;
            goto LABEL_120;
          }
        }
        if ( v46 == v91 )
          goto LABEL_97;
        v51 = !_BitScanReverse64((unsigned __int64 *)&v73, v47);
        v87 = 0;
        v47 = v46[1];
        if ( v51 )
        {
          ++v46;
          v50 = 64LL;
          v87 = 64;
        }
        else
        {
          v50 = (unsigned int)(63 - v73);
          ++v46;
          v87 = 63 - v73;
        }
      }
      while ( (unsigned __int64)++v46 <= v79 )
      {
        v47 = *v46;
        if ( *v46 != -1LL )
        {
          v50 = 0LL;
          goto LABEL_113;
        }
      }
LABEL_97:
      v39 = v75;
      v41 = -1LL;
      goto LABEL_98;
    }
    while ( 1 )
    {
      while ( v47 < 0 )
      {
        if ( (unsigned __int64)++v46 > v45 )
          goto LABEL_97;
        v47 = *v46;
      }
      v51 = !_BitScanReverse64((unsigned __int64 *)&v68, v47);
      v84 = 0;
      if ( v51 )
        v69 = 64;
      else
        v69 = 63 - v68;
      v39 = v75;
      v84 = v69;
      v41 = (((((__int64)v46 - v75) >> 3) + 1) << 6) - v69;
      if ( v41 > v77 )
        goto LABEL_161;
      v70 = v6 - v69;
      if ( v6 == v69 )
        goto LABEL_155;
      v71 = v46[1];
      ++v46;
      v47 = v71;
      if ( v70 >= 0x40 )
      {
        if ( v71 )
          goto LABEL_170;
        v70 -= 64LL;
        if ( !v70 )
          goto LABEL_155;
        v47 = v46[1];
        ++v46;
      }
      v51 = !_BitScanForward64(&v72, v47);
      v85 = 0;
      if ( v51 )
        v72 = 64LL;
      v85 = v72;
      if ( v72 >= v70 )
        goto LABEL_155;
LABEL_170:
      v45 = v79;
    }
  }
LABEL_58:
  ++*(_DWORD *)(a1 + 48);
  return 0LL;
}
