/*
 * XREFs of MiGetPage @ 0x14033BF40
 * Callers:
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 *     MiReplaceLockedPage @ 0x1402158AC (MiReplaceLockedPage.c)
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 *     MiGetPageTablePages @ 0x14021CA98 (MiGetPageTablePages.c)
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14024DC50 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiGetLargePage @ 0x1402517B0 (MiGetLargePage.c)
 *     MiMakePageAvoidRead @ 0x140253334 (MiMakePageAvoidRead.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x140263DE4 (MiGetLargePageDemoteAsNeeded.c)
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiMakeOutswappedPageResident @ 0x1402EF6F4 (MiMakeOutswappedPageResident.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiGetPageChain @ 0x140307540 (MiGetPageChain.c)
 *     MiGetUltraPage @ 0x14033BE50 (MiGetUltraPage.c)
 *     MiDemoteLocalLargePage @ 0x14033E130 (MiDemoteLocalLargePage.c)
 *     MiTradeTransitionPage @ 0x14033F5E8 (MiTradeTransitionPage.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 *     MiAllocateMdlPagesByLists @ 0x140395080 (MiAllocateMdlPagesByLists.c)
 *     MiGetSystemPage @ 0x1403F462C (MiGetSystemPage.c)
 *     MiPruneStandbyPages @ 0x1403F7714 (MiPruneStandbyPages.c)
 *     MiSwapStackPage @ 0x140421D74 (MiSwapStackPage.c)
 *     MiGetFileHashPage @ 0x1404264BC (MiGetFileHashPage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14043BAD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MmAllocateNonChargedSecurePages @ 0x140498780 (MmAllocateNonChargedSecurePages.c)
 *     MiSplitDirectMapPage @ 0x1404CA510 (MiSplitDirectMapPage.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1406942A8 (MiComputeCacheAttributeSpeeds.c)
 *     MiPfPrepareReadList @ 0x14093919C (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x140A51BBC (MiAllocateTopLevelPage.c)
 *     MiDoneWithThisPageGetAnother @ 0x140A5F8D4 (MiDoneWithThisPageGetAnother.c)
 *     MiAllocateDriverPage @ 0x140A62088 (MiAllocateDriverPage.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8536C (MmAllocateIndependentPagesEx.c)
 *     MiAllocateDummyPage @ 0x140C50D68 (MiAllocateDummyPage.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C5641C (MmInitializeImageViewExtensionCfg.c)
 *     MiInitializeCacheFlushing @ 0x140C5C468 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiGetPfnChannel @ 0x1402242D0 (MiGetPfnChannel.c)
 *     MiZeroPhysicalPage @ 0x14024B990 (MiZeroPhysicalPage.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14024DC50 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     MiAssignDefaultChannel @ 0x140251B50 (MiAssignDefaultChannel.c)
 *     MiPageToChannel @ 0x140258D54 (MiPageToChannel.c)
 *     MiPageAvailable @ 0x140260D7C (MiPageAvailable.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiObtainedPageIsGood @ 0x1402F0004 (MiObtainedPageIsGood.c)
 *     MiZeroLargePage @ 0x140312ABC (MiZeroLargePage.c)
 *     MiGetPerfectFreeOrZeroPage @ 0x14033D370 (MiGetPerfectFreeOrZeroPage.c)
 *     MiGetPerfectColorHeadPage @ 0x14033D740 (MiGetPerfectColorHeadPage.c)
 *     MiCacheAttributeHasValue @ 0x14033DD8C (MiCacheAttributeHasValue.c)
 *     MiDemoteLocalLargePage @ 0x14033E130 (MiDemoteLocalLargePage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiRemovePageAnyColor @ 0x14033E6B4 (MiRemovePageAnyColor.c)
 *     MiCheckZeroFreeRebalance @ 0x14033F29C (MiCheckZeroFreeRebalance.c)
 *     MiGetPageSlist @ 0x14033F3D8 (MiGetPageSlist.c)
 *     MiGetFreeOrZeroPageAnyColor @ 0x14033FA14 (MiGetFreeOrZeroPageAnyColor.c)
 *     MiSwapNumaStandbyPage @ 0x1403F7A6C (MiSwapNumaStandbyPage.c)
 *     MiPfnBestZeroAttribute @ 0x1403F90A0 (MiPfnBestZeroAttribute.c)
 *     MiCheckNodeChannelStandbyCount @ 0x140490FD4 (MiCheckNodeChannelStandbyCount.c)
 *     MiArePageContentsZero @ 0x1404C33B0 (MiArePageContentsZero.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall MiGetPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edi
  unsigned int v4; // r8d
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v7; // r11d
  __int64 v8; // r12
  unsigned int v9; // edx
  int v10; // r8d
  unsigned int v11; // ebx
  PSLIST_ENTRY PerfectColorHeadPage; // r13
  __int64 v13; // r10
  char v14; // cl
  unsigned int v15; // r15d
  unsigned int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // r9
  char v19; // cl
  __int64 v20; // r12
  __int64 v21; // r10
  __int64 v22; // r8
  unsigned int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // eax
  unsigned int v27; // r11d
  unsigned __int64 v28; // rcx
  _QWORD *v29; // rcx
  _QWORD *v30; // r8
  bool v31; // zf
  unsigned int v32; // esi
  int v33; // edx
  int v34; // ecx
  __int64 *v35; // rax
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // rdx
  __int64 v38; // r8
  volatile signed __int32 *v39; // r9
  bool v40; // zf
  __int64 v41; // r13
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // r8
  unsigned __int64 *v45; // rdx
  unsigned int v46; // esi
  unsigned __int64 v47; // r8
  const void *v48; // rdx
  unsigned __int64 *v49; // rcx
  unsigned int v50; // r8d
  unsigned int v51; // edx
  __int64 v52; // rdx
  unsigned int v53; // esi
  unsigned int v54; // ecx
  __int64 v55; // rax
  __int64 v56; // r8
  unsigned int v57; // esi
  __int64 v58; // rax
  unsigned __int8 v59; // al
  unsigned __int8 v60; // al
  ULONG_PTR v61; // rsi
  int v62; // ecx
  int v63; // edx
  char *v64; // rax
  int m; // r8d
  int v66; // ecx
  char v67; // al
  unsigned __int8 v68; // r14
  unsigned int v69; // r14d
  int v70; // ecx
  char v72; // r8
  char *v73; // rax
  unsigned __int8 v74; // dl
  unsigned int v75; // r11d
  int v76; // edx
  __int64 v77; // r10
  __int64 v78; // rax
  unsigned int j; // edx
  __int64 v80; // rcx
  int v81; // r8d
  unsigned int v82; // edx
  __int64 v83; // rax
  __int64 v84; // rax
  unsigned int v85; // ebx
  unsigned int v86; // ebx
  unsigned int v87; // r15d
  int v88; // ecx
  BOOL v89; // r12d
  __int64 v90; // r9
  unsigned __int64 v91; // rdx
  volatile signed __int32 *v92; // r10
  unsigned int v93; // eax
  __int64 v94; // rax
  unsigned int k; // r8d
  unsigned __int64 v96; // rcx
  unsigned int v97; // ecx
  int v98; // r9d
  __int64 v99; // rcx
  __int64 v100; // rdx
  unsigned __int64 FreeOrZeroPageAnyColor; // rax
  _QWORD *v102; // rcx
  bool v103; // zf
  unsigned __int8 CurrentIrql; // r11
  bool i; // zf
  __int64 v106; // rdx
  _QWORD *v107; // rax
  __int64 v108; // r15
  unsigned int v109; // r15d
  __int64 v110; // rcx
  unsigned int v111; // eax
  unsigned __int8 v112; // al
  char v113; // r12
  __int64 v114; // r9
  unsigned __int8 v115; // al
  unsigned __int64 v116; // rcx
  unsigned __int64 v117; // rcx
  unsigned int v118; // eax
  char v119; // cl
  unsigned int v120; // [rsp+30h] [rbp-D0h]
  unsigned int v121; // [rsp+34h] [rbp-CCh]
  int v122; // [rsp+34h] [rbp-CCh]
  int v123; // [rsp+38h] [rbp-C8h]
  int v124; // [rsp+48h] [rbp-B8h]
  unsigned int v125; // [rsp+48h] [rbp-B8h]
  __int64 v126; // [rsp+50h] [rbp-B0h]
  int v127; // [rsp+58h] [rbp-A8h]
  __int64 v128; // [rsp+60h] [rbp-A0h]
  __int64 v129; // [rsp+68h] [rbp-98h]
  __int64 v130; // [rsp+68h] [rbp-98h]
  unsigned int v131; // [rsp+74h] [rbp-8Ch]
  unsigned int v132; // [rsp+78h] [rbp-88h]
  unsigned __int8 v133; // [rsp+80h] [rbp-80h]
  __int64 v136; // [rsp+98h] [rbp-68h]
  __int64 *v137; // [rsp+98h] [rbp-68h]
  __int64 v138; // [rsp+A8h] [rbp-58h]
  _QWORD v139[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v140; // [rsp+C0h] [rbp-40h]
  int v141; // [rsp+C8h] [rbp-38h]
  unsigned int v142; // [rsp+CCh] [rbp-34h]
  unsigned int v143; // [rsp+D0h] [rbp-30h]
  int v144; // [rsp+D4h] [rbp-2Ch]
  __int64 v145; // [rsp+D8h] [rbp-28h]
  int v146; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v147; // [rsp+E4h] [rbp-1Ch]
  _OWORD v148[2]; // [rsp+E8h] [rbp-18h] BYREF

  v3 = a3;
  v120 = a2;
  v4 = HIWORD(a2);
  v5 = a2;
  v6 = BYTE2(a2) & 0xC;
  LOBYTE(v7) = 1;
  v8 = 0LL;
  v127 = v3 & 2;
  if ( (v3 & 2) != 0 )
    v6 = (16 * (~(unsigned __int8)(1 << ((unsigned __int8)(BYTE2(a2) & 0xC) >> 2)) & 0xF)) | BYTE2(a2) & 0xC;
  v9 = (unsigned __int16)KeNumberNodes;
  v10 = v4 & 3;
  v11 = (v6 >> 2) & 3 | v6;
  if ( (v3 & 0x40000) != 0 )
  {
    v9 = 0;
  }
  else if ( (v3 & 0x1040) != 0 )
  {
    v9 = 1;
  }
  v132 = v9;
  v146 = 0;
  v147 = 0;
  PerfectColorHeadPage = 0LL;
  v13 = 0LL;
  v14 = MmNumberOfChannels;
  v15 = (v5 >> 9) & 0x3F;
  v138 = 0LL;
  v131 = v15;
  v123 = v10;
  if ( (unsigned __int8)MmNumberOfChannels <= 1u )
    v14 = 1;
  v16 = 0;
  HIBYTE(v146) = v14;
  LOBYTE(v147) = BYTE1(v5) & 1;
LABEL_9:
  if ( v16 >= v9 )
    goto LABEL_82;
  v17 = *(unsigned int *)(qword_140E2DC10 + 4LL * (v16 + v15 * (unsigned __int16)KeNumberNodes));
  v18 = *(_QWORD *)(a1 + 16) + 57216 * v17;
  v126 = v18;
  v5 ^= ((unsigned __int16)v5 ^ (unsigned __int16)((_WORD)v17 << 9)) & 0x7E00;
  v120 = v5;
  if ( !*(_QWORD *)(v18 + 14976) && (MiFlags & 0x30) != 0 )
  {
    if ( (unsigned int)MiPageAvailable(a1, v3) )
    {
      v85 = ((unsigned __int8)v11 ^ (unsigned __int8)(v11 >> 2)) & 3 ^ v11;
      if ( v127 )
        goto LABEL_134;
      goto LABEL_183;
    }
    return -1LL;
  }
  if ( v18 )
  {
    BYTE2(v146) = 0;
    if ( HIBYTE(v146) > 1u )
    {
      HIBYTE(v147) = (*(_BYTE *)(v18 + 15184) & 1) == 0;
      LOWORD(v146) = *(_WORD *)(v18 + 15233);
      if ( (v3 & 0x2000) != 0 )
      {
        v72 = v147;
        v73 = (char *)&v146;
        v74 = 0;
        do
        {
          v119 = *v73;
          *v73 = v72;
          if ( v119 == (_BYTE)v147 )
            break;
          ++v73;
          ++v74;
          v72 = v119;
        }
        while ( v74 < HIBYTE(v146) );
        v10 = v123;
      }
    }
  }
  else
  {
    v146 = 0;
    v147 = 0;
    v19 = MmNumberOfChannels;
    if ( (unsigned __int8)MmNumberOfChannels <= 1u )
      v19 = v7;
    HIBYTE(v146) = v19;
    LOBYTE(v147) = BYTE1(v5) & 1;
  }
  if ( !_bittest64(&v13, v16) )
  {
    v20 = 15192LL;
    if ( v10 != 3 )
      v20 = 15200LL;
    _bittestandset64(&v13, v16);
    v138 = v13;
    v8 = *(_QWORD *)(v20 + v18);
  }
  v21 = v11 & 3;
  v22 = HIWORD(v5) & 3;
  v23 = 0;
  v24 = (v5 >> 15) & 1;
  if ( (_DWORD)v22 == 3 )
    v24 = 0LL;
  if ( *(_QWORD *)(v18 + 1280 * v22 + 8 * (v21 + 4 * v24) + 24) || (unsigned __int16)*(_QWORD *)(v18 + 15200) )
  {
LABEL_41:
    if ( ((unsigned __int8)(v11 >> 4) & (unsigned __int8)(1 << v21) & 0xF) == 0 )
      goto LABEL_42;
  }
  else
  {
    while ( v23 <= (unsigned int)v22 )
    {
      v25 = 1280LL * v23;
      if ( *(_QWORD *)(v25 + v18 + 8) || *(_QWORD *)(v25 + v18 + 16) )
        goto LABEL_41;
      ++v23;
    }
    if ( (_DWORD)v21 == 1 && (_DWORD)v22 == 3 )
    {
      v26 = dword_140E2DD00[v22];
      v27 = 0;
      v121 = v26;
      while ( v27 < 2 )
      {
        v28 = *(_QWORD *)(v18 + 16 * (v27 + 928LL));
        if ( !v28 )
          goto LABEL_40;
        if ( v26 > 1uLL )
        {
          if ( v28 < v26 )
            goto LABEL_40;
          v29 = *(_QWORD **)(v18 + 16 * (v27 + 928LL) + 8);
          v30 = &v29[((unsigned __int64)v26 - 1) >> 6];
          if ( v29 != v30 )
          {
            for ( i = *v29 == 0LL; i; i = v106 == 0 )
            {
              v106 = v29[1];
              if ( ++v29 == v30 )
              {
                v31 = (v106 & (0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v26 - 1))) == 0;
                goto LABEL_39;
              }
            }
LABEL_40:
            LOBYTE(v21) = v11 & 3;
            goto LABEL_41;
          }
          v31 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v26)) & *v29) == 0;
LABEL_39:
          if ( !v31 )
            goto LABEL_40;
        }
        else if ( v26 != 1LL || _bittest64(*(const signed __int64 **)(v18 + 16 * (v27 + 928LL) + 8), 0) )
        {
          goto LABEL_40;
        }
        v26 = v121;
        ++v27;
      }
      LOBYTE(v21) = v11 & 3;
    }
  }
  v75 = (v5 >> 15) & 1;
  v76 = ((unsigned __int8)v11 | (unsigned __int8)(16 << v21)) & 0xF0;
  v77 = HIWORD(v5) & 3;
  v11 = v11 & 0xFFFFF80F | v76;
  while ( ((unsigned __int8)(v11 >> 4) & (unsigned __int8)(1 << (BYTE1(v11) & 7)) & 0xF) != 0 )
  {
LABEL_125:
    v11 ^= ((unsigned __int16)v11 ^ (unsigned __int16)(v11 + 256)) & 0x700;
    if ( (v11 & 0x700) > 0x300 )
      goto LABEL_126;
  }
  v78 = v75;
  if ( (_DWORD)v77 == 3 )
    v78 = 0LL;
  if ( !*(_QWORD *)(v18 + 1280 * v77 + 8 * (((v11 >> 8) & 7) + 4 * v78) + 24)
    && !(unsigned __int16)*(_QWORD *)(v18 + 15200) )
  {
    for ( j = 0; j <= (unsigned int)v77; ++j )
    {
      v80 = 1280LL * j;
      if ( *(_QWORD *)(v80 + v18 + 8) || *(_QWORD *)(v80 + v18 + 16) )
        goto LABEL_126;
    }
    if ( (_DWORD)v77 == 3 && (BYTE1(v11) & 3) == 1 )
    {
      for ( k = 0; k < 2; ++k )
      {
        v96 = *(_QWORD *)(v18 + 16 * (k + 928LL));
        if ( !v96 )
          goto LABEL_126;
        if ( (unsigned int)dword_140E2DD0C > 1uLL )
        {
          if ( v96 < (unsigned int)dword_140E2DD0C )
            goto LABEL_126;
          v102 = *(_QWORD **)(v18 + 16 * (k + 928LL) + 8);
          if ( v102 == &v102[((unsigned __int64)(unsigned int)dword_140E2DD0C - 1) >> 6] )
          {
            v103 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)dword_140E2DD0C)) & *v102) == 0;
          }
          else
          {
            if ( *v102 )
              goto LABEL_126;
            v107 = &v102[((unsigned __int64)(unsigned int)dword_140E2DD0C - 1) >> 6];
            while ( 1 )
            {
              v108 = v102[1];
              ++v102;
              v128 = v108;
              v15 = v131;
              if ( v102 == v107 )
                break;
              if ( v128 )
                goto LABEL_126;
            }
            v103 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)dword_140E2DD0C - 1)) & v128) == 0;
          }
          if ( !v103 )
            goto LABEL_126;
        }
        else if ( dword_140E2DD0C != 1LL || _bittest64(*(const signed __int64 **)(v18 + 16 * (k + 928LL) + 8), 0) )
        {
          goto LABEL_126;
        }
      }
      v75 = (v5 >> 15) & 1;
    }
    v11 = v11 & 0xFFFFFF0F ^ ((unsigned __int8)v11 | (unsigned __int8)(16 << (BYTE1(v11) & 7))) & 0xF0;
    goto LABEL_125;
  }
LABEL_126:
  v3 = a3;
  if ( (v11 & 0xF0) == 0xF0 )
  {
LABEL_127:
    v81 = v127;
    v82 = v11;
    if ( v127 )
      goto LABEL_132;
    v83 = 15192LL;
    if ( v123 != 3 )
      v83 = 15200LL;
    v137 = (__int64 *)(v18 + v83);
    v84 = *(_QWORD *)(v18 + v83);
    if ( (_WORD)v84 )
    {
      v109 = 0;
      do
      {
        if ( (++v109 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v109);
        }
        else
        {
          _mm_pause();
        }
        v84 = *v137;
      }
      while ( (unsigned __int16)*v137 );
      v15 = v131;
      v82 = v11;
      v5 = v120;
      v81 = 0;
    }
    if ( ((v8 ^ v84) & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      --v16;
      v8 = v84;
      v85 = v82 ^ ((unsigned __int8)v82 ^ (unsigned __int8)(v82 >> 2)) & 3;
    }
    else
    {
LABEL_132:
      v85 = ((unsigned __int8)v11 ^ (unsigned __int8)(v11 >> 2)) & 3 ^ v11;
      if ( v81 )
      {
        v7 = 1;
LABEL_134:
        v11 = ((unsigned __int8)v85 ^ (unsigned __int8)(16 * ~(unsigned __int8)(v7 << ((v85 >> 2) & 3)))) & 0xF0 ^ v85;
        goto LABEL_184;
      }
    }
    LOBYTE(v7) = 1;
LABEL_183:
    v11 = v85 & 0xFFFFFF0F;
    goto LABEL_184;
  }
  v11 ^= ((unsigned __int8)v11 ^ BYTE1(v11)) & 3;
LABEL_42:
  v32 = (v5 ^ (v11 << 18)) & 0xC0000 ^ v5;
  v33 = v3 & 0x10;
  while ( 2 )
  {
    v34 = 0;
    v141 = 1;
    v139[1] = 0LL;
    v35 = &MiZeroThenZero;
    v144 = 0;
    v145 = 0LL;
    if ( !v33 )
      v35 = &MiFreeThenFree;
    v120 = v32;
    LOBYTE(v34) = v33 == 0;
    v140 = v35;
    v139[0] = v18;
    v142 = v32;
    v143 = v3;
    v124 = v34;
    if ( (v32 & 0x30000) != 0x30000 || (v32 & 0xC0000) != 0x40000 )
    {
LABEL_53:
      PerfectColorHeadPage = (PSLIST_ENTRY)MiGetPerfectColorHeadPage(v139);
      goto LABEL_54;
    }
    v36 = (unsigned __int8)v32;
    while ( 2 )
    {
      v129 = v18 + 16 * (v34 + 928LL);
      if ( !_bittest64(*(const signed __int64 **)(v129 + 8), v36) )
      {
LABEL_158:
        if ( v34 == *((_DWORD *)v140 + 1) )
          goto LABEL_53;
        v34 = *((_DWORD *)v140 + 1);
        v124 = v34;
        continue;
      }
      break;
    }
    v136 = *(_QWORD *)(v18 + 8LL * v34 + 14944);
    PerfectColorHeadPage = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v136 + 16 * v36));
    if ( PerfectColorHeadPage )
      goto LABEL_50;
    if ( v3 & 1 | ((v3 & 2) != 0) )
    {
      v133 = 17;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      v133 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    }
    v90 = v32 & 0x1F;
    LOBYTE(v91) = 1;
    v92 = (volatile signed __int32 *)(*(_QWORD *)(v129 + 8) + 4 * ((unsigned __int64)(unsigned __int8)v32 >> 5));
    if ( (unsigned __int64)(v90 + 1) <= 0x20 )
    {
      v93 = ~(1 << v90);
      goto LABEL_151;
    }
    if ( (v32 & 0x1F) == 0 )
      goto LABEL_232;
    _InterlockedAnd(v92++, ~(((1 << (32 - (v32 & 0x1F))) - 1) << v90));
    v91 = 1LL - (32 - (v32 & 0x1F));
    if ( v91 >= 0x20 )
    {
      v116 = v91 >> 5;
      v91 += -32LL * (v91 >> 5);
      do
      {
        *v92++ = 0;
        --v116;
      }
      while ( v116 );
    }
    if ( v91 )
    {
LABEL_232:
      v93 = -1 << v91;
LABEL_151:
      _InterlockedAnd(v92, v93);
    }
    PerfectColorHeadPage = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v136 + 16LL * (unsigned __int8)v32));
    if ( !PerfectColorHeadPage )
    {
      if ( v133 != 17 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v133);
        __writecr8(v133);
      }
      v36 = (unsigned __int8)v32;
      v18 = v126;
      v34 = v124;
      goto LABEL_158;
    }
    v38 = (unsigned __int8)v32;
    v37 = 1LL;
    v39 = (volatile signed __int32 *)(*(_QWORD *)(v129 + 8) + 4 * ((unsigned __int64)(unsigned __int8)v32 >> 5));
    v110 = v32 & 0x1F;
    if ( (unsigned __int64)(v110 + 1) <= 0x20 )
    {
      v111 = 1 << v110;
      goto LABEL_247;
    }
    if ( (v32 & 0x1F) == 0 )
      goto LABEL_262;
    v38 = v32 & 0x1F;
    _InterlockedOr(v39++, ((1 << (32 - (v32 & 0x1F))) - 1) << (v32 & 0x1F));
    v37 = 1LL - (unsigned int)(32 - v38);
    if ( v37 >= 0x20 )
    {
      v117 = v37 >> 5;
      v37 += -32LL * (v37 >> 5);
      do
      {
        *v39++ = -1;
        --v117;
      }
      while ( v117 );
    }
    if ( v37 )
    {
LABEL_262:
      v111 = (1 << v37) - 1;
LABEL_247:
      _InterlockedOr(v39, v111);
    }
    v112 = v133;
    if ( v133 != 17 )
    {
      if ( KiIrqlFlags )
      {
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v133);
        v112 = v133;
      }
      __writecr8(v112);
    }
LABEL_50:
    PerfectColorHeadPage[1].Next = (_SLIST_ENTRY *)CLFS_LSN_NULL_EXT;
    if ( v124 )
    {
      MiSetOriginalPtePfnFromFreeList(&PerfectColorHeadPage[1], v37, v38, v39);
LABEL_52:
      PerfectColorHeadPage->Next = 0LL;
      goto LABEL_54;
    }
    if ( (MiFlags & 0x80u) == 0LL )
      goto LABEL_52;
    if ( (++dword_140E302B0 & MmPageValidationFrequency) != 0 )
      goto LABEL_52;
    MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((__int64)&PerfectColorHeadPage[0x22000000000LL] >> 4));
    PerfectColorHeadPage->Next = 0LL;
LABEL_54:
    v40 = PerfectColorHeadPage == (PSLIST_ENTRY)2;
    if ( (unsigned __int64)PerfectColorHeadPage >= 2 )
      goto LABEL_83;
    v41 = v126;
    v42 = HIWORD(v32) & 3;
    v43 = (v32 >> 15) & 1;
    v122 = v42;
    v44 = v126 + 1280 * v42;
    if ( (v3 & 0x10) != 0 )
    {
      if ( (v3 & 0x20) != 0 )
        v45 = (unsigned __int64 *)(v44 + 32 * ((v11 & 3) + 4LL + 4 * v43));
      else
        v45 = 0LL;
      v46 = v3 & 0xFFFFFFEF;
    }
    else
    {
      v45 = (unsigned __int64 *)(v44 + 32 * ((v11 & 3) + 4 * v43) + 144);
      v46 = v3 | 0x10;
    }
    if ( !v45 )
      goto LABEL_63;
    v47 = *v45;
    v48 = (const void *)v45[1];
    memset(v148, 0, sizeof(v148));
    memmove(v148, v48, v47 >> 3);
    v49 = (unsigned __int64 *)v148;
    v50 = 0;
    v51 = 0;
    while ( 1 )
    {
      v50 += __popcnt(*v49);
      if ( v50 >= 8 )
        break;
      ++v51;
      ++v49;
      if ( v51 >= 4 )
        goto LABEL_63;
    }
    PerfectColorHeadPage = (PSLIST_ENTRY)MiRemovePageAnyColor(*(_QWORD *)(v126 + 14984), v120, v3, 0LL);
    if ( (unsigned __int64)PerfectColorHeadPage >= 2 )
      break;
    v41 = v126;
LABEL_63:
    PerfectColorHeadPage = (PSLIST_ENTRY)MiGetPerfectFreeOrZeroPage(v41, v120, v46);
    if ( (unsigned __int64)PerfectColorHeadPage >= 2 )
      break;
    if ( v122 == 3 )
      MiCheckZeroFreeRebalance(*(_QWORD *)(v126 + 14984), v120, v3);
    if ( (v120 & 0x30000) == 196608 && (v3 & 2) == 0 )
    {
      if ( (unsigned int)MiCacheAttributeHasValue((v120 >> 18) & 3) )
      {
        PerfectColorHeadPage = (PSLIST_ENTRY)MiDemoteLocalLargePage(
                                               *(_QWORD *)(v126 + 14984),
                                               v120 ^ (v120 ^ (v11 << 16)) & 0xC0000,
                                               v3);
        if ( PerfectColorHeadPage )
        {
          if ( (unsigned int)MiObtainedPageIsGood((__int64)PerfectColorHeadPage, v52) )
            break;
        }
      }
    }
    v53 = v3;
    v54 = v120;
    v130 = *(_QWORD *)(v126 + 14984);
    if ( (v120 & 0x30000) == 0x30000 && (v120 & 0xC0000) == 0x40000 )
    {
      PerfectColorHeadPage = (PSLIST_ENTRY)MiGetPageSlist(v126, v120, v3);
      if ( !PerfectColorHeadPage )
      {
        v54 = v120;
        goto LABEL_71;
      }
LABEL_188:
      v57 = v120;
LABEL_189:
      if ( (unsigned __int64)PerfectColorHeadPage < 2 )
        goto LABEL_190;
      break;
    }
LABEL_71:
    v55 = MiRemovePageAnyColor(v130, v54, v3, 1LL);
    PerfectColorHeadPage = (PSLIST_ENTRY)v55;
    if ( v55 == 2 )
      return -1LL;
    if ( v55 )
      goto LABEL_188;
    if ( (v3 & 0x40) != 0 )
    {
      v53 = v3 & 0xFFFFFFBF;
      if ( (v120 & 0x30000) == 0x30000 && (v120 & 0xC0000) == 0x40000 )
      {
        PerfectColorHeadPage = (PSLIST_ENTRY)MiGetPageSlist(v126, v120, v53);
        if ( PerfectColorHeadPage )
          goto LABEL_188;
      }
    }
    if ( (v53 & 0x400) != 0 )
    {
      v57 = v120;
      goto LABEL_190;
    }
    v56 = v53 | 0x400;
    v57 = v120;
    v58 = MiRemovePageAnyColor(v130, v120, v56, 1LL);
    PerfectColorHeadPage = (PSLIST_ENTRY)v58;
    if ( v58 == 2 )
      return -1LL;
    if ( v58 )
      goto LABEL_189;
LABEL_190:
    v97 = v3 & 0xFFFFFFEF;
    if ( (v3 & 0x10) == 0 )
      v97 = v3 | 0x10;
    v98 = 0;
    v125 = v97;
    if ( (v57 & 0x30000) == 196608 && (v3 & 2) == 0 )
    {
      v99 = (v57 >> 18) & 3;
      if ( (unsigned int)(v99 - 1) <= 1 )
      {
        if ( !(unsigned int)MiCacheAttributeHasValue(v99)
          || (PerfectColorHeadPage = (PSLIST_ENTRY)MiDemoteLocalLargePage(
                                                     *(_QWORD *)(v126 + 14984),
                                                     v57 ^ (v57 ^ (v11 << 16)) & 0xC0000,
                                                     v3)) == 0LL
          || !(unsigned int)MiObtainedPageIsGood((__int64)PerfectColorHeadPage, v100) )
        {
          FreeOrZeroPageAnyColor = MiGetFreeOrZeroPageAnyColor(v126, v57, v125, (v11 >> 2) & 3, 0);
          goto LABEL_197;
        }
        break;
      }
    }
    if ( !v127 )
      v98 = 1;
    FreeOrZeroPageAnyColor = MiGetFreeOrZeroPageAnyColor(v126, v57, v125, (v11 >> 2) & 3, v98);
LABEL_197:
    PerfectColorHeadPage = (PSLIST_ENTRY)FreeOrZeroPageAnyColor;
    if ( FreeOrZeroPageAnyColor < 2 )
    {
      if ( !(unsigned int)MiPageAvailable(*(_QWORD *)(v126 + 14984), v3) )
        return -1LL;
      v59 = BYTE2(v146) + 1;
      BYTE2(v146) = v59;
      if ( v59 < HIBYTE(v146) )
      {
        v115 = *((_BYTE *)&v146 + v59);
        if ( v115 == 2 )
          v115 = MiAssignDefaultChannel((v57 >> 9) & 0x3F);
        v18 = v126;
        v33 = v3 & 0x10;
        v32 = ((unsigned __int16)v57 ^ (unsigned __int16)(v115 << 8)) & 0x100 ^ v57;
        continue;
      }
      v60 = v147;
      if ( (_BYTE)v147 == 2 )
        v60 = MiAssignDefaultChannel((v57 >> 9) & 0x3F);
      v5 = ((unsigned __int16)v57 ^ (unsigned __int16)(v60 << 8)) & 0x100 ^ v57;
      v120 = v5;
      if ( PerfectColorHeadPage )
        break;
      v11 = v11 & 0xFFFFFF0F ^ ((unsigned __int8)(16 << (v11 & 3)) | (unsigned __int8)v11) & 0xF0;
      if ( (v11 & 0xF0) == 0xF0 )
      {
        v18 = v126;
        goto LABEL_127;
      }
      --v16;
      LOBYTE(v7) = 1;
LABEL_184:
      v9 = v132;
      ++v16;
      v10 = v123;
      v13 = v138;
      goto LABEL_9;
    }
    break;
  }
LABEL_82:
  v40 = PerfectColorHeadPage == (PSLIST_ENTRY)2;
LABEL_83:
  if ( v40 )
    return -1LL;
  if ( PerfectColorHeadPage )
  {
    v61 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&PerfectColorHeadPage[0x22000000000LL] >> 4);
    goto LABEL_86;
  }
  if ( (v3 & 2) != 0
    || (v3 & 0x10000) != 0
    || (v3 & 0x3000) != 0 && !(unsigned int)MiCheckNodeChannelStandbyCount(a1, v15, (unsigned __int8)v147) )
  {
    return -1LL;
  }
  v94 = MiRemoveLowestPriorityStandbyPage(a1, 8u, v3);
  v61 = v94;
  if ( v94 == -1 )
    return -1LL;
  PerfectColorHeadPage = (PSLIST_ENTRY)(48 * v94 - 0x220000000000LL);
LABEL_86:
  PerfectColorHeadPage->Next = 0LL;
  v62 = 0;
  if ( ((__int64)*(&PerfectColorHeadPage[2].Next + 1) & 0x10000000000LL) != 0 )
    v62 = HIDWORD(PerfectColorHeadPage[2].Next) & 0x18000000;
  HIDWORD(PerfectColorHeadPage[2].Next) = v62;
  v63 = dword_140E2DC04;
  if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
    || (v64 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, v61 < *(_QWORD *)v64)
    || dword_140E2DC00 != dword_140E2DC04 && v61 >= *((_QWORD *)v64 + 2) )
  {
    for ( m = 0; ; m = v66 + 1 )
    {
      while ( 1 )
      {
        if ( v63 < m )
          KeBugCheckEx(0x1Au, 0x5180uLL, v61, 0LL, 0LL);
        v66 = (m + v63) >> 1;
        v64 = (char *)qword_140E2DC60 + 16 * v66;
        if ( v61 >= *(_QWORD *)v64 )
          break;
        if ( !v66 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v61, (ULONG_PTR)qword_140E2DC60, 0LL);
        v63 = v66 - 1;
      }
      if ( v66 == dword_140E2DC04 || v61 < *((_QWORD *)v64 + 2) )
        break;
    }
    dword_140E2DC00 = (m + v63) >> 1;
  }
  if ( *((_DWORD *)v64 + 2) == v15 )
  {
    if ( qword_140E2DC68 )
      v67 = MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * ((__int64)&PerfectColorHeadPage[0x22000000000LL] >> 4));
    else
      v67 = 0;
    v68 = v147;
    if ( v67 == (_BYTE)v147 )
      goto LABEL_101;
    v113 = HIBYTE(v147);
    if ( HIBYTE(v147) )
      goto LABEL_101;
  }
  else
  {
    v113 = HIBYTE(v147);
    v68 = v147;
  }
  if ( (v3 & 2) != 0 )
    goto LABEL_101;
  if ( (v3 & 0x20000) == 0 )
  {
    v114 = v3;
    LODWORD(v114) = v3 | 0x1000;
    v61 = MiSwapNumaStandbyPage(v61, v15, v68, v114);
    PerfectColorHeadPage = (PSLIST_ENTRY)(48 * v61 - 0x220000000000LL);
  }
  if ( ((v3 & 0x1000) == 0 || (unsigned int)MiPageToNode(v61) == v15)
    && ((v3 & 0x2000) == 0 || MiGetPfnChannel((__int64)PerfectColorHeadPage) == v68 || v113) )
  {
LABEL_101:
    if ( (v3 & 0x20) != 0
      && ((v69 = (v11 >> 2) & 3, ((__int64)PerfectColorHeadPage[1].Next & 0x3E0) != 0)
       || (v70 = (unsigned __int8)BYTE2(LODWORD(PerfectColorHeadPage[2].Next)) >> 6, v70 != v69)
       && ((unsigned __int8)((1 << v70) | (1 << v69)) & (unsigned __int8)byte_140E2DD18) != 0)
      || (v3 & 8) == 0
      && (v69 = (v11 >> 2) & 3, (unsigned __int8)BYTE2(LODWORD(PerfectColorHeadPage[2].Next)) >> 6 != v69) )
    {
      v86 = (8 * v3) | 1;
      v87 = HIWORD(v120) & 3;
      if ( (v3 & 0x20) == 0 )
        v86 = 8 * v3;
      if ( (HIWORD(LODWORD(PerfectColorHeadPage[2].Next)) & 0xC0) == 0xC0 )
      {
        v118 = MiPfnBestZeroAttribute(PerfectColorHeadPage, v69);
        MiChangePageAttribute((unsigned __int64)PerfectColorHeadPage, v118);
      }
      v88 = (unsigned __int8)BYTE2(LODWORD(PerfectColorHeadPage[2].Next)) >> 6;
      v89 = v88 != v69;
      if ( (v86 & 1) != 0 )
      {
        if ( v88 != v69 && (unsigned int)MiPfnBestZeroAttribute(PerfectColorHeadPage, v69) == v69 )
        {
          MiChangePageAttribute((unsigned __int64)PerfectColorHeadPage, v69);
          v89 = 0;
        }
        if ( v87 == 3 )
          MiZeroPhysicalPage(
            0LL,
            0xAAAAAAAAAAAAAAABuLL * ((__int64)&PerfectColorHeadPage[0x22000000000LL] >> 4),
            (v86 >> 2) & 2,
            v69);
        else
          MiZeroLargePage(0LL, (__int64)PerfectColorHeadPage, v87, v69, (v86 >> 3) & 1);
        PerfectColorHeadPage[1].Next = (_SLIST_ENTRY *)((unsigned __int64)PerfectColorHeadPage[1].Next & 0xFFFFFFFFFFFFFC1FuLL);
      }
      if ( v89 )
        MiChangePageAttribute((unsigned __int64)PerfectColorHeadPage, v69);
    }
    return v61;
  }
  else
  {
    MiReleaseFreshPage((__int64)PerfectColorHeadPage);
    return -1LL;
  }
}
