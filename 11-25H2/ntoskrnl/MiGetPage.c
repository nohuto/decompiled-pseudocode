/*
 * XREFs of MiGetPage @ 0x14022CE00
 * Callers:
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiGetLargePage @ 0x140222688 (MiGetLargePage.c)
 *     MiMakePageAvoidRead @ 0x140222A90 (MiMakePageAvoidRead.c)
 *     MiResolveMappedFileFault @ 0x1402276BC (MiResolveMappedFileFault.c)
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MiDemoteLocalLargePage @ 0x140229CD0 (MiDemoteLocalLargePage.c)
 *     MiGetPageTablePages @ 0x14022A2B8 (MiGetPageTablePages.c)
 *     MiTradeTransitionPage @ 0x14022A82C (MiTradeTransitionPage.c)
 *     MiGetUltraPage @ 0x14022CD10 (MiGetUltraPage.c)
 *     MiGetPageChain @ 0x140241940 (MiGetPageChain.c)
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 *     MiPruneStandbyPages @ 0x1402C622C (MiPruneStandbyPages.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 *     MiGetFileHashPage @ 0x1402D1F24 (MiGetFileHashPage.c)
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140342DE0 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x140392A30 (MiGetLargePageDemoteAsNeeded.c)
 *     MiSwapStackPage @ 0x1403DBBA8 (MiSwapStackPage.c)
 *     MiReplaceLockedPage @ 0x1403FE3AC (MiReplaceLockedPage.c)
 *     MiMakeOutswappedPageResident @ 0x14040F088 (MiMakeOutswappedPageResident.c)
 *     MiAllocateMdlPagesByLists @ 0x1404161A0 (MiAllocateMdlPagesByLists.c)
 *     MiPrivateFixup @ 0x140439BB4 (MiPrivateFixup.c)
 *     MiGetSystemPage @ 0x140454030 (MiGetSystemPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x14049E89C (MmAllocateNonChargedSecurePages.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1404C22F8 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiSplitDirectMapPage @ 0x1404D1400 (MiSplitDirectMapPage.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140687D78 (MiComputeCacheAttributeSpeeds.c)
 *     MiPfPrepareReadList @ 0x1409C90BC (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x140A480DC (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x140A69E40 (MiAllocateDriverPage.c)
 *     MiDoneWithThisPageGetAnother @ 0x140A6ED60 (MiDoneWithThisPageGetAnother.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8508C (MmAllocateIndependentPagesEx.c)
 *     MiAllocateDummyPage @ 0x140C3D9A8 (MiAllocateDummyPage.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C43014 (MmInitializeImageViewExtensionCfg.c)
 *     MiInitializeCacheFlushing @ 0x140C48FA8 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiGetPfnChannel @ 0x140216430 (MiGetPfnChannel.c)
 *     MiAssignDefaultChannel @ 0x140222A5C (MiAssignDefaultChannel.c)
 *     MiZeroLargePage @ 0x140223DEC (MiZeroLargePage.c)
 *     MiCacheAttributeHasValue @ 0x140229CA8 (MiCacheAttributeHasValue.c)
 *     MiDemoteLocalLargePage @ 0x140229CD0 (MiDemoteLocalLargePage.c)
 *     MiGetFreeOrZeroPageAnyColor @ 0x14022A544 (MiGetFreeOrZeroPageAnyColor.c)
 *     MiGetPageSlist @ 0x14022AC58 (MiGetPageSlist.c)
 *     MiColorHasSlists @ 0x14022B2E0 (MiColorHasSlists.c)
 *     MiRemovePageAnyColor @ 0x14022B30C (MiRemovePageAnyColor.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetPerfectFreeOrZeroPage @ 0x14022BEE0 (MiGetPerfectFreeOrZeroPage.c)
 *     MiGetPerfectColorHeadPage @ 0x14022C2A0 (MiGetPerfectColorHeadPage.c)
 *     MiPageToChannel @ 0x14023EDC0 (MiPageToChannel.c)
 *     MiZeroPhysicalPage @ 0x14024D560 (MiZeroPhysicalPage.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140342DE0 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiSwapNumaStandbyPage @ 0x1403B905C (MiSwapNumaStandbyPage.c)
 *     MiCheckZeroFreeRebalance @ 0x1403BCA78 (MiCheckZeroFreeRebalance.c)
 *     MiPageAvailable @ 0x1403BFA7C (MiPageAvailable.c)
 *     MiPfnBestZeroAttribute @ 0x1403F8C70 (MiPfnBestZeroAttribute.c)
 *     MiObtainedPageIsGood @ 0x14048BC58 (MiObtainedPageIsGood.c)
 *     MiCheckNodeChannelStandbyCount @ 0x140496BB8 (MiCheckNodeChannelStandbyCount.c)
 *     MiArePageContentsZero @ 0x1404C9D90 (MiArePageContentsZero.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall MiGetPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // esi
  char v5; // al
  unsigned int v6; // edx
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // r12
  unsigned int v10; // ecx
  int v11; // edx
  unsigned int v12; // ebx
  unsigned __int64 PerfectColorHeadPage; // r13
  unsigned int v14; // r14d
  __int64 v15; // r9
  unsigned int v16; // r15d
  __int64 v17; // rax
  __int64 v18; // r10
  __int64 v19; // r12
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int i; // ecx
  __int64 v24; // r8
  unsigned int v25; // eax
  unsigned int v26; // r11d
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  unsigned int v29; // r10d
  int v30; // edx
  __int64 v31; // r9
  __int64 v32; // r11
  __int64 v33; // rax
  unsigned int k; // edx
  __int64 v35; // rcx
  unsigned int v36; // eax
  unsigned int m; // r11d
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  int v40; // r8d
  unsigned int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  unsigned int v45; // ebx
  int v46; // r11d
  __int64 *v47; // rcx
  char v48; // r10
  __int64 v49; // r8
  __int64 *v50; // r9
  bool v51; // zf
  unsigned int v52; // esi
  int v53; // edx
  int v54; // ecx
  __int64 *v55; // rax
  unsigned __int64 v56; // r8
  bool v57; // zf
  __int64 v58; // r13
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // r8
  unsigned __int64 *v62; // rdx
  int v63; // esi
  unsigned __int64 v64; // r8
  const void *v65; // rdx
  unsigned __int64 *v66; // rcx
  unsigned int v67; // r8d
  unsigned int v68; // edx
  __int64 v69; // r9
  unsigned int v70; // esi
  unsigned int v71; // ecx
  unsigned int v72; // esi
  unsigned __int8 v73; // al
  unsigned __int8 v74; // al
  ULONG_PTR v75; // rsi
  int v76; // ecx
  __int64 v77; // rdx
  char v78; // al
  unsigned __int8 v79; // r15
  unsigned int v80; // r14d
  int v81; // ecx
  __int64 v83; // r9
  unsigned __int64 v84; // rdx
  volatile signed __int32 *v85; // r10
  unsigned int v86; // eax
  unsigned int v87; // ebx
  unsigned int v88; // r15d
  unsigned int v89; // edx
  int v90; // ecx
  BOOL v91; // r12d
  __int64 v92; // rax
  _QWORD *v93; // rcx
  char v94; // r10
  _QWORD *v95; // r8
  bool v96; // zf
  PSLIST_ENTRY v97; // rax
  int v98; // r8d
  PSLIST_ENTRY v99; // rax
  unsigned int v100; // ecx
  __int64 v101; // r9
  bool j; // zf
  __int64 v103; // rdx
  unsigned __int8 CurrentIrql; // r10
  bool n; // zf
  __int64 v106; // rdx
  unsigned __int64 v107; // rdx
  volatile signed __int32 *v108; // r9
  __int64 v109; // rcx
  unsigned int v110; // eax
  unsigned __int8 v111; // al
  unsigned int v112; // r14d
  char v113; // r12
  __int64 v114; // r9
  unsigned __int8 v115; // al
  unsigned __int64 v116; // rcx
  unsigned __int64 v117; // rcx
  char v118; // r8
  char *v119; // rax
  unsigned __int8 v120; // dl
  unsigned int v121; // edx
  unsigned int v122; // eax
  char v123; // cl
  unsigned int v124; // [rsp+30h] [rbp-A9h]
  unsigned int v125; // [rsp+34h] [rbp-A5h]
  int v126; // [rsp+34h] [rbp-A5h]
  int v127; // [rsp+34h] [rbp-A5h]
  __int64 v128; // [rsp+38h] [rbp-A1h]
  int v129; // [rsp+40h] [rbp-99h]
  unsigned int v130; // [rsp+40h] [rbp-99h]
  int v131; // [rsp+50h] [rbp-89h]
  unsigned int v132; // [rsp+50h] [rbp-89h]
  int v133; // [rsp+54h] [rbp-85h]
  __int64 v134; // [rsp+60h] [rbp-79h]
  __int64 v135; // [rsp+60h] [rbp-79h]
  unsigned int v136; // [rsp+68h] [rbp-71h]
  unsigned int v137; // [rsp+6Ch] [rbp-6Dh]
  unsigned __int8 v138; // [rsp+70h] [rbp-69h]
  __int64 *v140; // [rsp+88h] [rbp-51h]
  __int64 v141; // [rsp+88h] [rbp-51h]
  __int64 v142; // [rsp+98h] [rbp-41h]
  __int64 v143[2]; // [rsp+A0h] [rbp-39h] BYREF
  __int64 *v144; // [rsp+B0h] [rbp-29h]
  int v145; // [rsp+B8h] [rbp-21h]
  unsigned int v146; // [rsp+BCh] [rbp-1Dh]
  unsigned int v147; // [rsp+C0h] [rbp-19h]
  int v148; // [rsp+C4h] [rbp-15h]
  __int64 v149; // [rsp+C8h] [rbp-11h]
  int v150; // [rsp+D0h] [rbp-9h] BYREF
  __int16 v151; // [rsp+D4h] [rbp-5h]
  _OWORD v152[2]; // [rsp+D8h] [rbp-1h] BYREF

  v124 = a2;
  v4 = a2;
  v5 = a3;
  v6 = HIWORD(a2);
  v7 = a1;
  v8 = v6 & 0xC;
  v9 = 0LL;
  v133 = v5 & 2;
  if ( (v5 & 2) != 0 )
    v8 = (16 * (~(unsigned __int8)(1 << ((unsigned __int8)(v6 & 0xC) >> 2)) & 0xF)) | v6 & 0xC;
  v10 = (unsigned __int16)KeNumberNodes;
  v11 = v6 & 3;
  v129 = v11;
  v12 = (v8 >> 2) & 3 | v8;
  if ( (a3 & 0x40000) != 0 )
  {
    v10 = 0;
  }
  else if ( (a3 & 0x1040) != 0 )
  {
    v10 = 1;
  }
  v137 = v10;
  v150 = 0;
  PerfectColorHeadPage = 0LL;
  v14 = (v4 >> 9) & 0x3F;
  v151 = 0;
  v136 = v14;
  HIBYTE(v150) = MmNumberOfChannels;
  if ( (unsigned __int8)MmNumberOfChannels <= 1u )
    HIBYTE(v150) = 1;
  v142 = 0LL;
  v15 = 0LL;
  v16 = 0;
  LOBYTE(v151) = BYTE1(v4) & 1;
LABEL_9:
  if ( v16 >= v10 )
    goto LABEL_115;
  v17 = *(unsigned int *)(qword_140E2D890 + 4LL * (v16 + v14 * (unsigned __int16)KeNumberNodes));
  v18 = *(_QWORD *)(v7 + 16) + 57216 * v17;
  v128 = v18;
  v4 ^= ((unsigned __int16)v4 ^ (unsigned __int16)((_WORD)v17 << 9)) & 0x7E00;
  v124 = v4;
  if ( !*(_QWORD *)(v18 + 14976) && (MiFlags & 0x30) != 0 )
  {
    if ( (unsigned int)MiPageAvailable(v7, a3) )
    {
      v45 = ((unsigned __int8)v12 ^ (unsigned __int8)(v12 >> 2)) & 3 ^ v12;
      if ( v133 )
        goto LABEL_70;
      goto LABEL_166;
    }
    return -1LL;
  }
  if ( v18 )
  {
    BYTE2(v150) = 0;
    if ( HIBYTE(v150) > 1u )
    {
      HIBYTE(v151) = (*(_BYTE *)(v18 + 15184) & 1) == 0;
      LOWORD(v150) = *(_WORD *)(v18 + 15233);
      if ( (a3 & 0x2000) != 0 )
      {
        v118 = v151;
        v119 = (char *)&v150;
        v120 = 0;
        do
        {
          v123 = *v119;
          *v119 = v118;
          if ( v123 == (_BYTE)v151 )
            break;
          ++v119;
          ++v120;
          v118 = v123;
        }
        while ( v120 < HIBYTE(v150) );
        v11 = v129;
      }
    }
  }
  else
  {
    v150 = 0;
    v151 = 0;
    HIBYTE(v150) = MmNumberOfChannels;
    if ( (unsigned __int8)MmNumberOfChannels <= 1u )
      HIBYTE(v150) = 1;
    LOBYTE(v151) = BYTE1(v4) & 1;
  }
  if ( !_bittest64(&v15, v16) )
  {
    v19 = 15192LL;
    if ( v11 != 3 )
      v19 = 15200LL;
    _bittestandset64(&v15, v16);
    v142 = v15;
    v9 = *(_QWORD *)(v19 + v18);
  }
  v20 = v12 & 3;
  v21 = HIWORD(v4) & 3;
  v22 = (v4 >> 15) & 1;
  if ( (_DWORD)v21 == 3 )
    v22 = 0LL;
  if ( *(_QWORD *)(v18 + 1280 * v21 + 8 * (v20 + 4 * v22) + 24) || (unsigned __int16)*(_QWORD *)(v18 + 15200) )
  {
LABEL_76:
    if ( ((unsigned __int8)(v12 >> 4) & (unsigned __int8)(1 << v20) & 0xF) == 0 )
      goto LABEL_77;
  }
  else
  {
    for ( i = 0; i <= (unsigned int)v21; ++i )
    {
      v24 = 1280LL * i;
      if ( *(_QWORD *)(v24 + v18 + 8) || *(_QWORD *)(v24 + v18 + 16) )
        goto LABEL_76;
    }
    if ( (_DWORD)v20 == 1 && (_DWORD)v21 == 3 )
    {
      v25 = dword_140E2D980[v21];
      v26 = 0;
      v125 = v25;
      while ( v26 < 2 )
      {
        v27 = v25;
        v28 = v18 + 16 * (v26 + 928LL);
        if ( !*(_QWORD *)v28 )
          goto LABEL_75;
        if ( v27 > 1 )
        {
          if ( *(_QWORD *)v28 < v27 )
            goto LABEL_75;
          v47 = *(__int64 **)(v28 + 8);
          v48 = v27 - 1;
          v49 = *v47;
          v50 = &v47[(v27 - 1) >> 6];
          if ( v47 != v50 )
          {
            for ( j = v49 == 0; j; j = v103 == 0 )
            {
              v103 = v47[1];
              if ( ++v47 == v50 )
              {
                v51 = (v103 & (0xFFFFFFFFFFFFFFFFuLL >> ~v48)) == 0;
                goto LABEL_74;
              }
            }
LABEL_75:
            LOBYTE(v20) = v12 & 3;
            goto LABEL_76;
          }
          v51 = (v49 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v27))) == 0;
LABEL_74:
          if ( !v51 )
            goto LABEL_75;
          v18 = v128;
        }
        else if ( v27 != 1 || _bittest64(*(const signed __int64 **)(v28 + 8), 0) )
        {
          goto LABEL_75;
        }
        v25 = v125;
        ++v26;
      }
      LOBYTE(v20) = v12 & 3;
    }
  }
  v29 = (v4 >> 15) & 1;
  v30 = ((unsigned __int8)v12 | (unsigned __int8)(16 << v20)) & 0xF0;
  v31 = HIWORD(v4) & 3;
  v12 = v12 & 0xFFFFF80F | v30;
  while ( ((unsigned __int8)(v12 >> 4) & (unsigned __int8)(1 << (BYTE1(v12) & 7)) & 0xF) != 0 )
  {
LABEL_60:
    v12 ^= ((unsigned __int16)v12 ^ (unsigned __int16)(v12 + 256)) & 0x700;
    if ( (v12 & 0x700) > 0x300 )
      goto LABEL_61;
  }
  v32 = v128;
  v33 = v29;
  if ( (_DWORD)v31 == 3 )
    v33 = 0LL;
  if ( *(_QWORD *)(v128 + 1280 * v31 + 8 * (((v12 >> 8) & 7) + 4 * v33) + 24)
    || (unsigned __int16)*(_QWORD *)(v128 + 15200) )
  {
    goto LABEL_62;
  }
  for ( k = 0; k <= (unsigned int)v31; ++k )
  {
    v35 = 1280LL * k;
    if ( *(_QWORD *)(v35 + v128 + 8) || *(_QWORD *)(v35 + v128 + 16) )
      goto LABEL_62;
  }
  if ( (_DWORD)v31 != 3 || (BYTE1(v12) & 3) != 1 )
  {
LABEL_59:
    v12 = v12 & 0xFFFFFF0F ^ ((unsigned __int8)v12 | (unsigned __int8)(16 << (BYTE1(v12) & 7))) & 0xF0;
    goto LABEL_60;
  }
  v36 = dword_140E2D98C;
  for ( m = 0; ; ++m )
  {
    if ( m >= 2 )
    {
      v29 = (v4 >> 15) & 1;
      goto LABEL_59;
    }
    v38 = v36;
    v39 = v128 + 16 * (m + 928LL);
    if ( !*(_QWORD *)v39 )
      goto LABEL_61;
    if ( v38 <= 1 )
    {
      if ( v38 != 1 || _bittest64(*(const signed __int64 **)(v39 + 8), 0) )
        goto LABEL_61;
      goto LABEL_58;
    }
    if ( *(_QWORD *)v39 < v38 )
      goto LABEL_61;
    v93 = *(_QWORD **)(v39 + 8);
    v94 = v38 - 1;
    v95 = &v93[(v38 - 1) >> 6];
    if ( v93 != v95 )
      break;
    v96 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v38)) & *v93) == 0;
LABEL_176:
    if ( !v96 )
      goto LABEL_61;
LABEL_58:
    v36 = dword_140E2D98C;
  }
  for ( n = *v93 == 0LL; n; n = v106 == 0 )
  {
    v106 = v93[1];
    if ( ++v93 == v95 )
    {
      v96 = (v106 & (0xFFFFFFFFFFFFFFFFuLL >> ~v94)) == 0;
      goto LABEL_176;
    }
  }
LABEL_61:
  v32 = v128;
LABEL_62:
  v14 = v136;
  if ( (v12 & 0xF0) == 0xF0 )
  {
LABEL_63:
    v40 = v133;
    v41 = v12;
    if ( v133 )
      goto LABEL_68;
    v42 = 15192LL;
    if ( v129 != 3 )
      v42 = 15200LL;
    v43 = 0LL;
    v140 = (__int64 *)(v32 + v42);
    v44 = *(_QWORD *)(v32 + v42);
    if ( (_WORD)v44 )
    {
      v112 = 0;
      do
      {
        if ( (++v112 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v43) )
        {
          HvlNotifyLongSpinWait(v112);
        }
        else
        {
          _mm_pause();
        }
        v44 = *v140;
      }
      while ( (unsigned __int16)*v140 );
      v14 = v136;
      v41 = v12;
      v4 = v124;
      v40 = 0;
    }
    if ( ((v9 ^ v44) & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      --v16;
      v9 = v44;
      v45 = v41 ^ ((unsigned __int8)v41 ^ (unsigned __int8)(v41 >> 2)) & 3;
    }
    else
    {
LABEL_68:
      v45 = ((unsigned __int8)v12 ^ (unsigned __int8)(v12 >> 2)) & 3 ^ v12;
      if ( v40 )
      {
        v46 = 1;
LABEL_70:
        v12 = ((unsigned __int8)v45 ^ (unsigned __int8)(16 * ~(unsigned __int8)(v46 << ((v45 >> 2) & 3)))) & 0xF0 ^ v45;
        goto LABEL_167;
      }
    }
LABEL_166:
    v12 = v45 & 0xFFFFFF0F;
    goto LABEL_167;
  }
  v12 ^= ((unsigned __int8)v12 ^ BYTE1(v12)) & 3;
LABEL_77:
  v32 = v128;
  v52 = (v4 ^ (v12 << 18)) & 0xC0000 ^ v4;
  v53 = a3 & 0x10;
  while ( 2 )
  {
    v54 = 0;
    v145 = 1;
    v143[1] = 0LL;
    v55 = MiZeroThenZero;
    v148 = 0;
    v149 = 0LL;
    if ( !v53 )
      v55 = &MiFreeThenFree;
    v124 = v52;
    LOBYTE(v54) = v53 == 0;
    v144 = v55;
    v143[0] = v32;
    v146 = v52;
    v147 = a3;
    v131 = v54;
    if ( (v52 & 0x30000) != 0x30000 || (v52 & 0xC0000) != 0x40000 )
    {
LABEL_88:
      PerfectColorHeadPage = MiGetPerfectColorHeadPage(v143);
      goto LABEL_89;
    }
    v56 = (unsigned __int8)v52;
    while ( 2 )
    {
      v134 = v32 + 16 * (v54 + 928LL);
      if ( !_bittest64(*(const signed __int64 **)(v134 + 8), v56) )
      {
LABEL_141:
        if ( v54 == *((_DWORD *)v144 + 1) )
          goto LABEL_88;
        v54 = *((_DWORD *)v144 + 1);
        v131 = v54;
        continue;
      }
      break;
    }
    v141 = *(_QWORD *)(v32 + 8LL * v54 + 14944);
    PerfectColorHeadPage = (unsigned __int64)RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v141 + 16 * v56));
    if ( PerfectColorHeadPage )
      goto LABEL_85;
    if ( a3 & 1 | ((a3 & 2) != 0) )
    {
      v138 = 17;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      v138 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    }
    v83 = v52 & 0x1F;
    LOBYTE(v84) = 1;
    v85 = (volatile signed __int32 *)(*(_QWORD *)(v134 + 8) + 4 * ((unsigned __int64)(unsigned __int8)v52 >> 5));
    if ( (unsigned __int64)(v83 + 1) <= 0x20 )
    {
      v86 = ~(1 << v83);
      goto LABEL_134;
    }
    if ( (v52 & 0x1F) == 0 )
      goto LABEL_217;
    _InterlockedAnd(v85++, ~(((1 << (32 - (v52 & 0x1F))) - 1) << v83));
    v84 = 1LL - (32 - (v52 & 0x1F));
    if ( v84 >= 0x20 )
    {
      v116 = v84 >> 5;
      v84 += -32LL * (v84 >> 5);
      do
      {
        *v85++ = 0;
        --v116;
      }
      while ( v116 );
    }
    if ( v84 )
    {
LABEL_217:
      v86 = -1 << v84;
LABEL_134:
      _InterlockedAnd(v85, v86);
    }
    PerfectColorHeadPage = (unsigned __int64)RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v141
                                                                                        + 16LL * (unsigned __int8)v52));
    if ( !PerfectColorHeadPage )
    {
      if ( v138 != 17 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v138);
        __writecr8(v138);
      }
      v32 = v128;
      v56 = (unsigned __int8)v52;
      v54 = v131;
      goto LABEL_141;
    }
    LOBYTE(v107) = 1;
    v108 = (volatile signed __int32 *)(*(_QWORD *)(v134 + 8) + 4 * ((unsigned __int64)(unsigned __int8)v52 >> 5));
    v109 = v52 & 0x1F;
    if ( (unsigned __int64)(v109 + 1) <= 0x20 )
    {
      v110 = 1 << v109;
      goto LABEL_224;
    }
    if ( (v52 & 0x1F) == 0 )
      goto LABEL_244;
    _InterlockedOr(v108++, ((1 << (32 - (v52 & 0x1F))) - 1) << (v52 & 0x1F));
    v107 = 1LL - (32 - (v52 & 0x1F));
    if ( v107 >= 0x20 )
    {
      v117 = v107 >> 5;
      v107 += -32LL * (v107 >> 5);
      do
      {
        *v108++ = -1;
        --v117;
      }
      while ( v117 );
    }
    if ( v107 )
    {
LABEL_244:
      v110 = (1 << v107) - 1;
LABEL_224:
      _InterlockedOr(v108, v110);
    }
    v111 = v138;
    if ( v138 != 17 )
    {
      if ( KiIrqlFlags )
      {
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v138);
        v111 = v138;
      }
      __writecr8(v111);
    }
LABEL_85:
    *(_QWORD *)(PerfectColorHeadPage + 16) = CLFS_LSN_NULL_EXT;
    if ( v131 )
    {
      MiSetOriginalPtePfnFromFreeList((__int64 *)(PerfectColorHeadPage + 16));
      goto LABEL_87;
    }
    if ( (MiFlags & 0x80u) == 0LL || (++dword_140E2FF28, (dword_140E2FF28 & MmPageValidationFrequency) != 0) )
    {
LABEL_87:
      *(_QWORD *)PerfectColorHeadPage = 0LL;
    }
    else
    {
      MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((__int64)(PerfectColorHeadPage + 0x220000000000LL) >> 4));
      *(_QWORD *)PerfectColorHeadPage = 0LL;
    }
LABEL_89:
    v57 = PerfectColorHeadPage == 2;
    if ( PerfectColorHeadPage >= 2 )
      goto LABEL_116;
    v58 = v128;
    v59 = HIWORD(v52) & 3;
    v60 = (v52 >> 15) & 1;
    v126 = v59;
    v61 = v128 + 1280 * v59;
    if ( (a3 & 0x10) != 0 )
    {
      if ( (a3 & 0x20) != 0 )
        v62 = (unsigned __int64 *)(v61 + 32 * ((v12 & 3) + 4LL + 4 * v60));
      else
        v62 = 0LL;
      v63 = a3 & 0xFFFFFFEF;
    }
    else
    {
      v62 = (unsigned __int64 *)(v61 + 32 * ((v12 & 3) + 4 * v60) + 144);
      v63 = a3 | 0x10;
    }
    if ( !v62 )
      goto LABEL_98;
    v64 = *v62;
    v65 = (const void *)v62[1];
    memset(v152, 0, sizeof(v152));
    memmove(v152, v65, v64 >> 3);
    v66 = (unsigned __int64 *)v152;
    v67 = 0;
    v68 = 0;
    while ( 1 )
    {
      v67 += __popcnt(*v66);
      if ( v67 >= 8 )
        break;
      ++v68;
      ++v66;
      if ( v68 >= 4 )
        goto LABEL_98;
    }
    PerfectColorHeadPage = (unsigned __int64)MiRemovePageAnyColor(*(_QWORD *)(v128 + 14984), v124, a3, 0);
    if ( PerfectColorHeadPage >= 2 )
      break;
    v58 = v128;
LABEL_98:
    PerfectColorHeadPage = MiGetPerfectFreeOrZeroPage(v58, v124, v63);
    if ( PerfectColorHeadPage >= 2 )
      break;
    if ( v126 == 3 )
      MiCheckZeroFreeRebalance(*(_QWORD *)(v128 + 14984), v124, a3);
    if ( (v124 & 0x30000) == 196608 && (a3 & 2) == 0 && MiCacheAttributeHasValue((v124 >> 18) & 3) )
    {
      PerfectColorHeadPage = MiDemoteLocalLargePage(
                               *(_QWORD *)(v128 + 14984),
                               v124 ^ (v124 ^ (v12 << 16)) & 0xC0000,
                               a3,
                               v69);
      if ( PerfectColorHeadPage )
      {
        if ( (unsigned int)MiObtainedPageIsGood(PerfectColorHeadPage) )
          break;
      }
    }
    v70 = a3;
    v71 = v124;
    v135 = *(_QWORD *)(v128 + 14984);
    if ( (v124 & 0x30000) == 0x30000 && (v124 & 0xC0000) == 0x40000 )
    {
      PerfectColorHeadPage = MiGetPageSlist(v128, v124, a3);
      if ( PerfectColorHeadPage )
        goto LABEL_107;
      v71 = v124;
    }
    v97 = MiRemovePageAnyColor(v135, v71, a3, 1);
    PerfectColorHeadPage = (unsigned __int64)v97;
    if ( v97 == (PSLIST_ENTRY)2 )
      return -1LL;
    if ( v97
      || (a3 & 0x40) != 0
      && (v70 = a3 & 0xFFFFFFBF, MiColorHasSlists(v124))
      && (PerfectColorHeadPage = MiGetPageSlist(v128, v121, v70)) != 0 )
    {
LABEL_107:
      v72 = v124;
      goto LABEL_108;
    }
    if ( (v70 & 0x400) != 0 )
    {
      v72 = v124;
      goto LABEL_185;
    }
    v98 = v70 | 0x400;
    v72 = v124;
    v99 = MiRemovePageAnyColor(v135, v124, v98, 1);
    PerfectColorHeadPage = (unsigned __int64)v99;
    if ( v99 == (PSLIST_ENTRY)2 )
      return -1LL;
    if ( !v99 )
      goto LABEL_185;
LABEL_108:
    if ( PerfectColorHeadPage >= 2 )
      break;
LABEL_185:
    v100 = a3 & 0xFFFFFFEF;
    if ( (a3 & 0x10) == 0 )
      v100 = a3 | 0x10;
    LODWORD(v101) = 0;
    v127 = 0;
    v132 = v100;
    if ( (v72 & 0x30000) == 196608 && (a3 & 2) == 0 && MiCacheAttributeHasValue((v72 >> 18) & 3) )
    {
      PerfectColorHeadPage = MiDemoteLocalLargePage(
                               *(_QWORD *)(v128 + 14984),
                               v72 ^ (v72 ^ (v12 << 16)) & 0xC0000,
                               a3,
                               v101);
      if ( !PerfectColorHeadPage || !(unsigned int)MiObtainedPageIsGood(PerfectColorHeadPage) )
        goto LABEL_197;
      break;
    }
    if ( v133 == (_DWORD)v101 )
      LODWORD(v101) = 1;
    v127 = v101;
LABEL_197:
    PerfectColorHeadPage = MiGetFreeOrZeroPageAnyColor(v128, v72, v132, (v12 >> 2) & 3, v127);
    if ( PerfectColorHeadPage < 2 )
    {
      if ( !(unsigned int)MiPageAvailable(*(_QWORD *)(v128 + 14984), a3) )
        return -1LL;
      v73 = BYTE2(v150) + 1;
      BYTE2(v150) = v73;
      if ( v73 < HIBYTE(v150) )
      {
        v115 = *((_BYTE *)&v150 + v73);
        if ( v115 == 2 )
          v115 = MiAssignDefaultChannel((v72 >> 9) & 0x3F);
        v53 = a3 & 0x10;
        v52 = ((unsigned __int16)v72 ^ (unsigned __int16)(v115 << 8)) & 0x100 ^ v72;
        continue;
      }
      v74 = v151;
      if ( (_BYTE)v151 == 2 )
        v74 = MiAssignDefaultChannel((v72 >> 9) & 0x3F);
      v4 = ((unsigned __int16)v72 ^ (unsigned __int16)(v74 << 8)) & 0x100 ^ v72;
      v124 = v4;
      if ( PerfectColorHeadPage )
        break;
      v12 = v12 & 0xFFFFFF0F ^ ((unsigned __int8)(16 << (v12 & 3)) | (unsigned __int8)v12) & 0xF0;
      if ( (v12 & 0xF0) == 0xF0 )
        goto LABEL_63;
      --v16;
LABEL_167:
      v10 = v137;
      ++v16;
      v11 = v129;
      v15 = v142;
      v7 = a1;
      goto LABEL_9;
    }
    break;
  }
LABEL_115:
  v57 = PerfectColorHeadPage == 2;
LABEL_116:
  if ( v57 )
    return -1LL;
  if ( PerfectColorHeadPage )
  {
    v75 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(PerfectColorHeadPage + 0x220000000000LL) >> 4);
    goto LABEL_119;
  }
  if ( (a3 & 2) != 0
    || (a3 & 0x10000) != 0
    || (a3 & 0x3000) != 0 && !(unsigned int)MiCheckNodeChannelStandbyCount(a1, v14, (unsigned __int8)v151) )
  {
    return -1LL;
  }
  v92 = MiRemoveLowestPriorityStandbyPage(a1, 8LL, a3);
  v75 = v92;
  if ( v92 == -1 )
    return -1LL;
  PerfectColorHeadPage = 48 * v92 - 0x220000000000LL;
LABEL_119:
  *(_QWORD *)PerfectColorHeadPage = 0LL;
  v76 = 0;
  if ( (*(_QWORD *)(PerfectColorHeadPage + 40) & 0x10000000000LL) != 0 )
    v76 = *(_DWORD *)(PerfectColorHeadPage + 36) & 0x18000000;
  *(_DWORD *)(PerfectColorHeadPage + 36) = v76;
  if ( (unsigned int)MiPageToNode(v75) == v14 )
  {
    if ( qword_140E2D8E8 )
      v78 = MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * ((__int64)(PerfectColorHeadPage + 0x220000000000LL) >> 4), v77);
    else
      v78 = 0;
    v79 = v151;
    if ( v78 == (_BYTE)v151 )
      goto LABEL_125;
    v113 = HIBYTE(v151);
    if ( HIBYTE(v151) )
      goto LABEL_125;
  }
  else
  {
    v113 = HIBYTE(v151);
    v79 = v151;
  }
  if ( (a3 & 2) != 0 )
    goto LABEL_125;
  if ( (a3 & 0x20000) == 0 )
  {
    v114 = a3;
    LODWORD(v114) = a3 | 0x1000;
    v75 = MiSwapNumaStandbyPage(v75, v14, v79, v114);
    PerfectColorHeadPage = 48 * v75 - 0x220000000000LL;
  }
  if ( ((a3 & 0x1000) == 0 || (unsigned int)MiPageToNode(v75) == v14)
    && ((a3 & 0x2000) == 0 || MiGetPfnChannel(PerfectColorHeadPage) == v79 || v113) )
  {
LABEL_125:
    if ( (a3 & 0x20) != 0
      && ((v80 = (v12 >> 2) & 3, (*(_QWORD *)(PerfectColorHeadPage + 16) & 0x3E0LL) != 0)
       || (v81 = (unsigned __int8)BYTE2(*(_DWORD *)(PerfectColorHeadPage + 32)) >> 6, v81 != v80)
       && ((unsigned __int8)((1 << v81) | (1 << v80)) & (unsigned __int8)byte_140E2D998) != 0)
      || (a3 & 8) == 0
      && (v80 = (v12 >> 2) & 3, (unsigned __int8)BYTE2(*(_DWORD *)(PerfectColorHeadPage + 32)) >> 6 != v80) )
    {
      v87 = (8 * a3) | 1;
      v88 = HIWORD(v124) & 3;
      if ( (a3 & 0x20) == 0 )
        v87 = 8 * a3;
      v89 = 2 * (v87 & 8 | 4);
      v130 = v89;
      if ( (HIWORD(*(_DWORD *)(PerfectColorHeadPage + 32)) & 0xC0) == 0xC0 )
      {
        v122 = MiPfnBestZeroAttribute(PerfectColorHeadPage, v80);
        MiChangePageAttribute(PerfectColorHeadPage, v122, v130);
        v89 = 2 * (v87 & 8 | 4);
      }
      v90 = (unsigned __int8)BYTE2(*(_DWORD *)(PerfectColorHeadPage + 32)) >> 6;
      v91 = v90 != v80;
      if ( (v87 & 1) != 0 )
      {
        if ( v90 != v80 && (unsigned int)MiPfnBestZeroAttribute(PerfectColorHeadPage, v80) == v80 )
        {
          MiChangePageAttribute(PerfectColorHeadPage, v80, v130);
          v91 = 0;
        }
        if ( v88 == 3 )
          MiZeroPhysicalPage(
            0LL,
            0xAAAAAAAAAAAAAAABuLL * ((__int64)(PerfectColorHeadPage + 0x220000000000LL) >> 4),
            (v87 >> 2) & 2,
            v80);
        else
          MiZeroLargePage(0LL, PerfectColorHeadPage, v88, v80, (v87 >> 3) & 1);
        v89 = 2 * (v87 & 8 | 4);
        *(_QWORD *)(PerfectColorHeadPage + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
      }
      if ( v91 )
        MiChangePageAttribute(PerfectColorHeadPage, v80, v89);
    }
    return v75;
  }
  else
  {
    MiReleaseFreshPage(PerfectColorHeadPage);
    return -1LL;
  }
}
