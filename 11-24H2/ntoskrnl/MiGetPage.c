/*
 * XREFs of MiGetPage @ 0x1402F41B0
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x140220F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiPruneStandbyPages @ 0x140225F84 (MiPruneStandbyPages.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiMigratePfn @ 0x14022C0A0 (MiMigratePfn.c)
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 *     MmCheckCachedPageStates @ 0x140280E90 (MmCheckCachedPageStates.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiPfPutPagesInTransition @ 0x1402E692C (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x1402EE4F0 (MiPrivateFixup.c)
 *     MiMakePageAvoidRead @ 0x1402EF168 (MiMakePageAvoidRead.c)
 *     MiGetLargePage @ 0x1402F35A0 (MiGetLargePage.c)
 *     MiGetUltraPage @ 0x1402F40C0 (MiGetUltraPage.c)
 *     MiDemoteLocalLargePage @ 0x1402F6020 (MiDemoteLocalLargePage.c)
 *     MiTradeTransitionPage @ 0x1402F718C (MiTradeTransitionPage.c)
 *     MiGetPageChain @ 0x1402FCDC0 (MiGetPageChain.c)
 *     MiGetSystemPage @ 0x140311984 (MiGetSystemPage.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
 *     MiGetPageTablePages @ 0x14039E9BC (MiGetPageTablePages.c)
 *     MiReplaceLockedPage @ 0x14039F10C (MiReplaceLockedPage.c)
 *     MiAllocateKernelStackPages @ 0x14039F96C (MiAllocateKernelStackPages.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1403D4F80 (MiGetLargePageDemoteAsNeeded.c)
 *     MiAllocateMdlPagesByLists @ 0x140412C40 (MiAllocateMdlPagesByLists.c)
 *     MiSwapStackPage @ 0x1404303C4 (MiSwapStackPage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140442B00 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiGetFileHashPage @ 0x140486B9C (MiGetFileHashPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x14049D980 (MmAllocateNonChargedSecurePages.c)
 *     MiMakeOutswappedPageResident @ 0x1404A8280 (MiMakeOutswappedPageResident.c)
 *     MiSplitDirectMapPage @ 0x1404D14D0 (MiSplitDirectMapPage.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1406931D8 (MiComputeCacheAttributeSpeeds.c)
 *     MiPfPrepareReadList @ 0x1409557EC (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x140A5A2FC (MiAllocateTopLevelPage.c)
 *     MiDoneWithThisPageGetAnother @ 0x140A66AF0 (MiDoneWithThisPageGetAnother.c)
 *     MiAllocateDriverPage @ 0x140A68CD8 (MiAllocateDriverPage.c)
 *     MmAllocateIndependentPagesEx @ 0x140A88F6C (MmAllocateIndependentPagesEx.c)
 *     MiAllocateDummyPage @ 0x140C4EBD8 (MiAllocateDummyPage.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C5428C (MmInitializeImageViewExtensionCfg.c)
 *     MiInitializeCacheFlushing @ 0x140C5A2D8 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiZeroPhysicalPage @ 0x14021EC40 (MiZeroPhysicalPage.c)
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140220F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiGetPfnChannel @ 0x14026ED40 (MiGetPfnChannel.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiPageToChannel @ 0x1402F3214 (MiPageToChannel.c)
 *     MiAssignDefaultChannel @ 0x1402F3560 (MiAssignDefaultChannel.c)
 *     MiGetPerfectFreeOrZeroPage @ 0x1402F55E0 (MiGetPerfectFreeOrZeroPage.c)
 *     MiGetPerfectColorHeadPage @ 0x1402F59B0 (MiGetPerfectColorHeadPage.c)
 *     MiCacheAttributeHasValue @ 0x1402F5FFC (MiCacheAttributeHasValue.c)
 *     MiDemoteLocalLargePage @ 0x1402F6020 (MiDemoteLocalLargePage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402F6568 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiRemovePageAnyColor @ 0x1402F65A4 (MiRemovePageAnyColor.c)
 *     MiGetFreeOrZeroPageAnyColor @ 0x1402F75B8 (MiGetFreeOrZeroPageAnyColor.c)
 *     MiZeroLargePage @ 0x140308BDC (MiZeroLargePage.c)
 *     MiSwapNumaStandbyPage @ 0x14039474C (MiSwapNumaStandbyPage.c)
 *     MiCheckZeroFreeRebalance @ 0x1403D3018 (MiCheckZeroFreeRebalance.c)
 *     MiPfnBestZeroAttribute @ 0x140400880 (MiPfnBestZeroAttribute.c)
 *     MiObtainedPageIsGood @ 0x14042F73C (MiObtainedPageIsGood.c)
 *     MiPageAvailable @ 0x140442ECC (MiPageAvailable.c)
 *     MiGetPageSlist @ 0x1404541D0 (MiGetPageSlist.c)
 *     MiCheckNodeChannelStandbyCount @ 0x140496644 (MiCheckNodeChannelStandbyCount.c)
 *     MiArePageContentsZero @ 0x1404CA060 (MiArePageContentsZero.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
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
  unsigned int v52; // esi
  unsigned int v53; // ecx
  __int64 v54; // rax
  __int64 v55; // r8
  unsigned int v56; // esi
  __int64 v57; // rax
  unsigned __int8 v58; // al
  unsigned __int8 v59; // al
  ULONG_PTR v60; // rsi
  int v61; // ecx
  int v62; // edx
  char *v63; // rax
  int m; // r8d
  int v65; // ecx
  char v66; // al
  unsigned __int8 v67; // r14
  unsigned int v68; // r14d
  int v69; // ecx
  char v71; // r8
  char *v72; // rax
  unsigned __int8 v73; // dl
  unsigned int v74; // r11d
  int v75; // edx
  __int64 v76; // r10
  __int64 v77; // rax
  unsigned int j; // edx
  __int64 v79; // rcx
  int v80; // r8d
  unsigned int v81; // edx
  __int64 v82; // rax
  __int64 v83; // rax
  unsigned int v84; // ebx
  unsigned int v85; // ebx
  int v86; // r15d
  int v87; // ecx
  BOOL v88; // r12d
  __int64 v89; // r9
  unsigned __int64 v90; // rdx
  volatile signed __int32 *v91; // r10
  unsigned int v92; // eax
  __int64 v93; // rax
  unsigned int k; // r8d
  unsigned __int64 v95; // rcx
  unsigned int v96; // ecx
  int v97; // r9d
  __int64 v98; // rcx
  unsigned __int64 FreeOrZeroPageAnyColor; // rax
  _QWORD *v100; // rcx
  bool v101; // zf
  unsigned __int8 CurrentIrql; // r11
  bool i; // zf
  __int64 v104; // rdx
  _QWORD *v105; // rax
  __int64 v106; // r15
  unsigned int v107; // r15d
  __int64 v108; // rcx
  unsigned int v109; // eax
  unsigned __int8 v110; // al
  char v111; // r12
  __int64 v112; // r9
  __int64 v113; // rdx
  __int64 v114; // r8
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
  v17 = *(unsigned int *)(qword_140E2DAD0 + 4LL * (v16 + v15 * (unsigned __int16)KeNumberNodes));
  v18 = *(_QWORD *)(a1 + 16) + 57216 * v17;
  v126 = v18;
  v5 ^= ((unsigned __int16)v5 ^ (unsigned __int16)((_WORD)v17 << 9)) & 0x7E00;
  v120 = v5;
  if ( !*(_QWORD *)(v18 + 14976) && (MiFlags & 0x30) != 0 )
  {
    if ( (unsigned int)MiPageAvailable(a1, v3) )
    {
      v84 = ((unsigned __int8)v11 ^ (unsigned __int8)(v11 >> 2)) & 3 ^ v11;
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
        v71 = v147;
        v72 = (char *)&v146;
        v73 = 0;
        do
        {
          v119 = *v72;
          *v72 = v71;
          if ( v119 == (_BYTE)v147 )
            break;
          ++v72;
          ++v73;
          v71 = v119;
        }
        while ( v73 < HIBYTE(v146) );
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
      v26 = dword_140E2DBC0[v22];
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
            for ( i = *v29 == 0LL; i; i = v104 == 0 )
            {
              v104 = v29[1];
              if ( ++v29 == v30 )
              {
                v31 = (v104 & (0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v26 - 1))) == 0;
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
  v74 = (v5 >> 15) & 1;
  v75 = ((unsigned __int8)v11 | (unsigned __int8)(16 << v21)) & 0xF0;
  v76 = HIWORD(v5) & 3;
  v11 = v11 & 0xFFFFF80F | v75;
  while ( ((unsigned __int8)(v11 >> 4) & (unsigned __int8)(1 << (BYTE1(v11) & 7)) & 0xF) != 0 )
  {
LABEL_125:
    v11 ^= ((unsigned __int16)v11 ^ (unsigned __int16)(v11 + 256)) & 0x700;
    if ( (v11 & 0x700) > 0x300 )
      goto LABEL_126;
  }
  v77 = v74;
  if ( (_DWORD)v76 == 3 )
    v77 = 0LL;
  if ( !*(_QWORD *)(v18 + 1280 * v76 + 8 * (((v11 >> 8) & 7) + 4 * v77) + 24)
    && !(unsigned __int16)*(_QWORD *)(v18 + 15200) )
  {
    for ( j = 0; j <= (unsigned int)v76; ++j )
    {
      v79 = 1280LL * j;
      if ( *(_QWORD *)(v79 + v18 + 8) || *(_QWORD *)(v79 + v18 + 16) )
        goto LABEL_126;
    }
    if ( (_DWORD)v76 == 3 && (BYTE1(v11) & 3) == 1 )
    {
      for ( k = 0; k < 2; ++k )
      {
        v95 = *(_QWORD *)(v18 + 16 * (k + 928LL));
        if ( !v95 )
          goto LABEL_126;
        if ( (unsigned int)dword_140E2DBCC > 1uLL )
        {
          if ( v95 < (unsigned int)dword_140E2DBCC )
            goto LABEL_126;
          v100 = *(_QWORD **)(v18 + 16 * (k + 928LL) + 8);
          if ( v100 == &v100[((unsigned __int64)(unsigned int)dword_140E2DBCC - 1) >> 6] )
          {
            v101 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)dword_140E2DBCC)) & *v100) == 0;
          }
          else
          {
            if ( *v100 )
              goto LABEL_126;
            v105 = &v100[((unsigned __int64)(unsigned int)dword_140E2DBCC - 1) >> 6];
            while ( 1 )
            {
              v106 = v100[1];
              ++v100;
              v128 = v106;
              v15 = v131;
              if ( v100 == v105 )
                break;
              if ( v128 )
                goto LABEL_126;
            }
            v101 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)dword_140E2DBCC - 1)) & v128) == 0;
          }
          if ( !v101 )
            goto LABEL_126;
        }
        else if ( dword_140E2DBCC != 1LL || _bittest64(*(const signed __int64 **)(v18 + 16 * (k + 928LL) + 8), 0) )
        {
          goto LABEL_126;
        }
      }
      v74 = (v5 >> 15) & 1;
    }
    v11 = v11 & 0xFFFFFF0F ^ ((unsigned __int8)v11 | (unsigned __int8)(16 << (BYTE1(v11) & 7))) & 0xF0;
    goto LABEL_125;
  }
LABEL_126:
  v3 = a3;
  if ( (v11 & 0xF0) == 0xF0 )
  {
LABEL_127:
    v80 = v127;
    v81 = v11;
    if ( v127 )
      goto LABEL_132;
    v82 = 15192LL;
    if ( v123 != 3 )
      v82 = 15200LL;
    v137 = (__int64 *)(v18 + v82);
    v83 = *(_QWORD *)(v18 + v82);
    if ( (_WORD)v83 )
    {
      v107 = 0;
      do
      {
        if ( (++v107 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v107);
        }
        else
        {
          _mm_pause();
        }
        v83 = *v137;
      }
      while ( (unsigned __int16)*v137 );
      v15 = v131;
      v81 = v11;
      v5 = v120;
      v80 = 0;
    }
    if ( ((v8 ^ v83) & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      --v16;
      v8 = v83;
      v84 = v81 ^ ((unsigned __int8)v81 ^ (unsigned __int8)(v81 >> 2)) & 3;
    }
    else
    {
LABEL_132:
      v84 = ((unsigned __int8)v11 ^ (unsigned __int8)(v11 >> 2)) & 3 ^ v11;
      if ( v80 )
      {
        v7 = 1;
LABEL_134:
        v11 = ((unsigned __int8)v84 ^ (unsigned __int8)(16 * ~(unsigned __int8)(v7 << ((v84 >> 2) & 3)))) & 0xF0 ^ v84;
        goto LABEL_184;
      }
    }
    LOBYTE(v7) = 1;
LABEL_183:
    v11 = v84 & 0xFFFFFF0F;
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
    v35 = MiZeroThenZero;
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
    v89 = v32 & 0x1F;
    LOBYTE(v90) = 1;
    v91 = (volatile signed __int32 *)(*(_QWORD *)(v129 + 8) + 4 * ((unsigned __int64)(unsigned __int8)v32 >> 5));
    if ( (unsigned __int64)(v89 + 1) <= 0x20 )
    {
      v92 = ~(1 << v89);
      goto LABEL_151;
    }
    if ( (v32 & 0x1F) == 0 )
      goto LABEL_232;
    _InterlockedAnd(v91++, ~(((1 << (32 - (v32 & 0x1F))) - 1) << v89));
    v90 = 1LL - (32 - (v32 & 0x1F));
    if ( v90 >= 0x20 )
    {
      v116 = v90 >> 5;
      v90 += -32LL * (v90 >> 5);
      do
      {
        *v91++ = 0;
        --v116;
      }
      while ( v116 );
    }
    if ( v90 )
    {
LABEL_232:
      v92 = -1 << v90;
LABEL_151:
      _InterlockedAnd(v91, v92);
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
    v108 = v32 & 0x1F;
    if ( (unsigned __int64)(v108 + 1) <= 0x20 )
    {
      v109 = 1 << v108;
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
      v109 = (1 << v37) - 1;
LABEL_247:
      _InterlockedOr(v39, v109);
    }
    v110 = v133;
    if ( v133 != 17 )
    {
      if ( KiIrqlFlags )
      {
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v133);
        v110 = v133;
      }
      __writecr8(v110);
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
    if ( (++dword_140E30170 & MmPageValidationFrequency) != 0 )
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
          if ( (unsigned int)MiObtainedPageIsGood(PerfectColorHeadPage) )
            break;
        }
      }
    }
    v52 = v3;
    v53 = v120;
    v130 = *(_QWORD *)(v126 + 14984);
    if ( (v120 & 0x30000) == 0x30000 && (v120 & 0xC0000) == 0x40000 )
    {
      PerfectColorHeadPage = (PSLIST_ENTRY)MiGetPageSlist(v126, v120, v3);
      if ( !PerfectColorHeadPage )
      {
        v53 = v120;
        goto LABEL_71;
      }
LABEL_188:
      v56 = v120;
LABEL_189:
      if ( (unsigned __int64)PerfectColorHeadPage < 2 )
        goto LABEL_190;
      break;
    }
LABEL_71:
    v54 = MiRemovePageAnyColor(v130, v53, v3, 1LL);
    PerfectColorHeadPage = (PSLIST_ENTRY)v54;
    if ( v54 == 2 )
      return -1LL;
    if ( v54 )
      goto LABEL_188;
    if ( (v3 & 0x40) != 0 )
    {
      v52 = v3 & 0xFFFFFFBF;
      if ( (v120 & 0x30000) == 0x30000 && (v120 & 0xC0000) == 0x40000 )
      {
        PerfectColorHeadPage = (PSLIST_ENTRY)MiGetPageSlist(v126, v120, v52);
        if ( PerfectColorHeadPage )
          goto LABEL_188;
      }
    }
    if ( (v52 & 0x400) != 0 )
    {
      v56 = v120;
      goto LABEL_190;
    }
    v55 = v52 | 0x400;
    v56 = v120;
    v57 = MiRemovePageAnyColor(v130, v120, v55, 1LL);
    PerfectColorHeadPage = (PSLIST_ENTRY)v57;
    if ( v57 == 2 )
      return -1LL;
    if ( v57 )
      goto LABEL_189;
LABEL_190:
    v96 = v3 & 0xFFFFFFEF;
    if ( (v3 & 0x10) == 0 )
      v96 = v3 | 0x10;
    v97 = 0;
    v125 = v96;
    if ( (v56 & 0x30000) == 196608 && (v3 & 2) == 0 )
    {
      v98 = (v56 >> 18) & 3;
      if ( (unsigned int)(v98 - 1) <= 1 )
      {
        if ( !(unsigned int)MiCacheAttributeHasValue(v98)
          || (PerfectColorHeadPage = (PSLIST_ENTRY)MiDemoteLocalLargePage(
                                                     *(_QWORD *)(v126 + 14984),
                                                     v56 ^ (v56 ^ (v11 << 16)) & 0xC0000,
                                                     v3)) == 0LL
          || !(unsigned int)MiObtainedPageIsGood(PerfectColorHeadPage) )
        {
          FreeOrZeroPageAnyColor = MiGetFreeOrZeroPageAnyColor(v126, v56, v125, (v11 >> 2) & 3, 0);
          goto LABEL_197;
        }
        break;
      }
    }
    if ( !v127 )
      v97 = 1;
    FreeOrZeroPageAnyColor = MiGetFreeOrZeroPageAnyColor(v126, v56, v125, (v11 >> 2) & 3, v97);
LABEL_197:
    PerfectColorHeadPage = (PSLIST_ENTRY)FreeOrZeroPageAnyColor;
    if ( FreeOrZeroPageAnyColor < 2 )
    {
      if ( !(unsigned int)MiPageAvailable(*(_QWORD *)(v126 + 14984), v3) )
        return -1LL;
      v58 = BYTE2(v146) + 1;
      BYTE2(v146) = v58;
      if ( v58 < HIBYTE(v146) )
      {
        v115 = *((_BYTE *)&v146 + v58);
        if ( v115 == 2 )
          v115 = MiAssignDefaultChannel((v56 >> 9) & 0x3F);
        v18 = v126;
        v33 = v3 & 0x10;
        v32 = ((unsigned __int16)v56 ^ (unsigned __int16)(v115 << 8)) & 0x100 ^ v56;
        continue;
      }
      v59 = v147;
      if ( (_BYTE)v147 == 2 )
        v59 = MiAssignDefaultChannel((v56 >> 9) & 0x3F);
      v5 = ((unsigned __int16)v56 ^ (unsigned __int16)(v59 << 8)) & 0x100 ^ v56;
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
    v60 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&PerfectColorHeadPage[0x22000000000LL] >> 4);
    goto LABEL_86;
  }
  if ( (v3 & 2) != 0
    || (v3 & 0x10000) != 0
    || (v3 & 0x3000) != 0 && !(unsigned int)MiCheckNodeChannelStandbyCount(a1, v15, (unsigned __int8)v147) )
  {
    return -1LL;
  }
  v93 = MiRemoveLowestPriorityStandbyPage(a1, 8u, v3);
  v60 = v93;
  if ( v93 == -1 )
    return -1LL;
  PerfectColorHeadPage = (PSLIST_ENTRY)(48 * v93 - 0x220000000000LL);
LABEL_86:
  PerfectColorHeadPage->Next = 0LL;
  v61 = 0;
  if ( ((__int64)*(&PerfectColorHeadPage[2].Next + 1) & 0x10000000000LL) != 0 )
    v61 = HIDWORD(PerfectColorHeadPage[2].Next) & 0x18000000;
  HIDWORD(PerfectColorHeadPage[2].Next) = v61;
  v62 = dword_140E2DAC4;
  if ( dword_140E2DAC0 > (unsigned int)dword_140E2DAC4
    || (v63 = (char *)qword_140E2DB20 + 16 * dword_140E2DAC0, v60 < *(_QWORD *)v63)
    || dword_140E2DAC0 != dword_140E2DAC4 && v60 >= *((_QWORD *)v63 + 2) )
  {
    for ( m = 0; ; m = v65 + 1 )
    {
      while ( 1 )
      {
        if ( v62 < m )
          KeBugCheckEx(0x1Au, 0x5180uLL, v60, 0LL, 0LL);
        v65 = (m + v62) >> 1;
        v63 = (char *)qword_140E2DB20 + 16 * v65;
        if ( v60 >= *(_QWORD *)v63 )
          break;
        if ( !v65 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v60, (ULONG_PTR)qword_140E2DB20, 0LL);
        v62 = v65 - 1;
      }
      if ( v65 == dword_140E2DAC4 || v60 < *((_QWORD *)v63 + 2) )
        break;
    }
    dword_140E2DAC0 = (m + v62) >> 1;
  }
  if ( *((_DWORD *)v63 + 2) == v15 )
  {
    if ( qword_140E2DB28 )
      v66 = MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * ((__int64)&PerfectColorHeadPage[0x22000000000LL] >> 4));
    else
      v66 = 0;
    v67 = v147;
    if ( v66 == (_BYTE)v147 )
      goto LABEL_101;
    v111 = HIBYTE(v147);
    if ( HIBYTE(v147) )
      goto LABEL_101;
  }
  else
  {
    v111 = HIBYTE(v147);
    v67 = v147;
  }
  if ( (v3 & 2) != 0 )
    goto LABEL_101;
  if ( (v3 & 0x20000) == 0 )
  {
    v112 = v3;
    LODWORD(v112) = v3 | 0x1000;
    v60 = MiSwapNumaStandbyPage(v60, v15, v67, v112);
    PerfectColorHeadPage = (PSLIST_ENTRY)(48 * v60 - 0x220000000000LL);
  }
  if ( ((v3 & 0x1000) == 0 || (unsigned int)MiPageToNode(v60) == v15)
    && ((v3 & 0x2000) == 0 || MiGetPfnChannel((__int64)PerfectColorHeadPage) == v67 || v111) )
  {
LABEL_101:
    if ( (v3 & 0x20) != 0
      && ((v68 = (v11 >> 2) & 3, ((__int64)PerfectColorHeadPage[1].Next & 0x3E0) != 0)
       || (v69 = (unsigned __int8)BYTE2(LODWORD(PerfectColorHeadPage[2].Next)) >> 6, v69 != v68)
       && ((unsigned __int8)((1 << v69) | (1 << v68)) & (unsigned __int8)byte_140E2DBD8) != 0)
      || (v3 & 8) == 0
      && (v68 = (v11 >> 2) & 3, (unsigned __int8)BYTE2(LODWORD(PerfectColorHeadPage[2].Next)) >> 6 != v68) )
    {
      v85 = (8 * v3) | 1;
      v86 = HIWORD(v120) & 3;
      if ( (v3 & 0x20) == 0 )
        v85 = 8 * v3;
      if ( (HIWORD(LODWORD(PerfectColorHeadPage[2].Next)) & 0xC0) == 0xC0 )
      {
        v118 = MiPfnBestZeroAttribute(PerfectColorHeadPage, v68);
        MiChangePageAttribute((unsigned __int64)PerfectColorHeadPage, v118);
      }
      v87 = (unsigned __int8)BYTE2(LODWORD(PerfectColorHeadPage[2].Next)) >> 6;
      v88 = v87 != v68;
      if ( (v85 & 1) != 0 )
      {
        if ( v87 != v68 && (unsigned int)MiPfnBestZeroAttribute(PerfectColorHeadPage, v68) == v68 )
        {
          MiChangePageAttribute((unsigned __int64)PerfectColorHeadPage, v68);
          v88 = 0;
        }
        if ( v86 == 3 )
          MiZeroPhysicalPage(
            0LL,
            0xAAAAAAAAAAAAAAABuLL * ((__int64)&PerfectColorHeadPage[0x22000000000LL] >> 4),
            (v85 >> 2) & 2,
            v68);
        else
          MiZeroLargePage(0, (_DWORD)PerfectColorHeadPage, v86, v68, (v85 >> 3) & 1);
        PerfectColorHeadPage[1].Next = (_SLIST_ENTRY *)((unsigned __int64)PerfectColorHeadPage[1].Next & 0xFFFFFFFFFFFFFC1FuLL);
      }
      if ( v88 )
        MiChangePageAttribute((unsigned __int64)PerfectColorHeadPage, v68);
    }
    return v60;
  }
  else
  {
    MiReleaseFreshPage((__int64)PerfectColorHeadPage, v113, v114);
    return -1LL;
  }
}
