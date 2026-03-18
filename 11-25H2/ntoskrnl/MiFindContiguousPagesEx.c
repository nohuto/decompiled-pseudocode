/*
 * XREFs of MiFindContiguousPagesEx @ 0x14021E3E0
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402090B8 (MiWaitForInPageComplete.c)
 *     MiRebuildLargePage @ 0x1403BC60C (MiRebuildLargePage.c)
 *     MiAllocateContiguousMemory @ 0x140414D9C (MiAllocateContiguousMemory.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x140416F94 (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiAllocateSkipPagesForMdl @ 0x140417220 (MiAllocateSkipPagesForMdl.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406690F0 (MmMarkPhysicalMemoryAsBad.c)
 *     MmRemovePhysicalMemory @ 0x1407DA710 (MmRemovePhysicalMemory.c)
 *     MiCreatePagefileMemoryExtents @ 0x1407EDFFC (MiCreatePagefileMemoryExtents.c)
 *     MiAllocateDriverPage @ 0x140A69E40 (MiAllocateDriverPage.c)
 *     MiFindLargePageMemory @ 0x140A8E124 (MiFindLargePageMemory.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MiDeleteUltraThreadContext @ 0x140211630 (MiDeleteUltraThreadContext.c)
 *     MiIsPageOnBadList @ 0x14021E29C (MiIsPageOnBadList.c)
 *     MiCollapseRunTopDown @ 0x14021F480 (MiCollapseRunTopDown.c)
 *     MiPfnsWorthTrying @ 0x14021F790 (MiPfnsWorthTrying.c)
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     MiConvertContiguousPages @ 0x140224560 (MiConvertContiguousPages.c)
 *     MiCreateUltraThreadContext @ 0x14022CB40 (MiCreateUltraThreadContext.c)
 *     MiAcquireNonPagedResources @ 0x14022E560 (MiAcquireNonPagedResources.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiClaimPhysicalRun @ 0x1403416E0 (MiClaimPhysicalRun.c)
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiSufficientAvailablePages @ 0x14037A4B0 (MiSufficientAvailablePages.c)
 *     MiFreeContiguousPages @ 0x14038B910 (MiFreeContiguousPages.c)
 *     MiUpdateLargePageBitMap @ 0x14038D1D8 (MiUpdateLargePageBitMap.c)
 *     MiFindLargeNodePage @ 0x1403932CC (MiFindLargeNodePage.c)
 *     MiAdjustCachedStacks @ 0x1403B1C48 (MiAdjustCachedStacks.c)
 *     MiReferencePageRuns @ 0x1403BAA70 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x1403BAB84 (MiDereferencePageRuns.c)
 *     MiFindBestLargePageStealCandidates @ 0x14044D354 (MiFindBestLargePageStealCandidates.c)
 *     MiSetPfnOwnedAndActive @ 0x14045C318 (MiSetPfnOwnedAndActive.c)
 *     MiTrimNoStealPagesFromWorkingSets @ 0x1404B00D8 (MiTrimNoStealPagesFromWorkingSets.c)
 *     MiInitializeFoundLargeNodePage @ 0x1404F5EE8 (MiInitializeFoundLargeNodePage.c)
 *     qsort @ 0x1404FC5A0 (qsort.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiFindContiguousPagesEx(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        char a9,
        unsigned int a10,
        unsigned int a11,
        __int64 a12,
        __int64 a13,
        ULONG_PTR *a14)
{
  __int64 v15; // r13
  unsigned int v16; // r12d
  __int64 v18; // r15
  __int64 CurrentIrql; // rdi
  __int64 v20; // r9
  unsigned int *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r10
  unsigned int *v24; // r8
  unsigned int v25; // ebx
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  __int64 v28; // r14
  unsigned int v29; // edi
  _BYTE *v30; // r9
  int v31; // esi
  int *v32; // r8
  unsigned int v33; // eax
  __int64 v34; // rax
  unsigned int v35; // edi
  unsigned __int64 v36; // rsi
  _DWORD *v37; // r12
  unsigned __int64 v38; // r14
  ULONG_PTR v39; // r15
  unsigned __int64 v40; // rsi
  unsigned int v41; // edi
  unsigned __int64 v43; // rsi
  unsigned __int64 v44; // r12
  int v45; // r13d
  __int64 v46; // rax
  unsigned __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // r13
  __int64 v50; // r10
  __int64 v51; // rcx
  char *v52; // rsi
  int v53; // ecx
  int v54; // edi
  __int64 v55; // rbx
  __int64 v56; // rsi
  unsigned int v57; // r14d
  unsigned int v58; // ecx
  unsigned int j; // r9d
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // r8
  __int64 v62; // r8
  __int64 *v63; // rcx
  int v64; // r11d
  _DWORD *v65; // r10
  unsigned int i; // ecx
  __int64 v67; // rax
  __int64 LargeNodePage; // rax
  __int64 v69; // rdi
  unsigned __int8 v70; // r15
  unsigned int v71; // esi
  unsigned int v72; // r12d
  _DWORD *v73; // r13
  _DWORD *v74; // r15
  _DWORD *v75; // rsi
  _DWORD *v76; // rax
  bool v77; // cf
  __int64 v78; // rdi
  int v79; // ebx
  __int64 v80; // rdi
  __int16 v81; // r15
  ULONG_PTR v82; // rcx
  unsigned int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rcx
  unsigned int v86; // eax
  unsigned int v87; // edx
  __int64 v88; // r9
  __int64 v89; // rcx
  unsigned int v90; // eax
  unsigned int v91; // r8d
  unsigned __int64 v92; // rcx
  int v93; // edx
  __int64 v94; // rax
  __int64 v95; // r9
  ULONG_PTR v96; // rdi
  __int64 v97; // rdx
  _QWORD *v98; // rcx
  unsigned __int64 v99; // rax
  __int64 v100; // rcx
  unsigned int v101; // edx
  int v102; // [rsp+20h] [rbp-E0h]
  __int64 v103; // [rsp+20h] [rbp-E0h]
  signed int v104; // [rsp+28h] [rbp-D8h]
  int v105; // [rsp+50h] [rbp-B0h] BYREF
  int v106; // [rsp+54h] [rbp-ACh]
  __int64 v107; // [rsp+58h] [rbp-A8h]
  unsigned int v108; // [rsp+60h] [rbp-A0h]
  signed int v109; // [rsp+64h] [rbp-9Ch]
  int v110; // [rsp+68h] [rbp-98h]
  unsigned int v111; // [rsp+6Ch] [rbp-94h]
  unsigned __int64 v112; // [rsp+70h] [rbp-90h]
  _BYTE *v113; // [rsp+78h] [rbp-88h]
  int v114; // [rsp+80h] [rbp-80h]
  __int64 v115; // [rsp+88h] [rbp-78h]
  BOOL v116; // [rsp+90h] [rbp-70h]
  int v117; // [rsp+94h] [rbp-6Ch]
  __int64 v118; // [rsp+98h] [rbp-68h]
  __int64 v119; // [rsp+A0h] [rbp-60h]
  unsigned int v120; // [rsp+A8h] [rbp-58h]
  int *v121; // [rsp+B0h] [rbp-50h]
  int v122; // [rsp+B8h] [rbp-48h]
  int v123; // [rsp+BCh] [rbp-44h]
  _DWORD *v124; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v125; // [rsp+C8h] [rbp-38h]
  ULONG_PTR v126; // [rsp+D0h] [rbp-30h]
  __int64 v127; // [rsp+D8h] [rbp-28h]
  __int64 v128; // [rsp+E0h] [rbp-20h]
  __int64 v129; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v130; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v131; // [rsp+100h] [rbp+0h] BYREF
  __int64 v132; // [rsp+108h] [rbp+8h]
  unsigned __int64 v133; // [rsp+110h] [rbp+10h]
  unsigned __int64 v134; // [rsp+118h] [rbp+18h]
  __int64 v135; // [rsp+120h] [rbp+20h]
  __int64 v136; // [rsp+128h] [rbp+28h]
  _DWORD *v137; // [rsp+130h] [rbp+30h]
  __int64 v138; // [rsp+138h] [rbp+38h]
  ULONG_PTR v139; // [rsp+140h] [rbp+40h]
  ULONG_PTR *v140; // [rsp+148h] [rbp+48h]
  unsigned __int64 v141; // [rsp+150h] [rbp+50h]
  unsigned int *v142; // [rsp+158h] [rbp+58h]
  _BYTE *v143; // [rsp+160h] [rbp+60h]
  _QWORD v144[2]; // [rsp+170h] [rbp+70h] BYREF
  _DWORD *v145; // [rsp+180h] [rbp+80h]
  int v146; // [rsp+188h] [rbp+88h]
  int v147; // [rsp+18Ch] [rbp+8Ch]
  __int64 v148; // [rsp+190h] [rbp+90h]
  unsigned __int64 v149; // [rsp+198h] [rbp+98h]
  __int64 v150; // [rsp+1A0h] [rbp+A0h]
  __int64 v151; // [rsp+1A8h] [rbp+A8h]
  __int128 v152; // [rsp+1B0h] [rbp+B0h] BYREF
  _QWORD v153[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  _OWORD v154[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v155; // [rsp+1F0h] [rbp+F0h]
  __int128 v156; // [rsp+200h] [rbp+100h]
  _QWORD v157[2]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v158[128]; // [rsp+220h] [rbp+120h] BYREF

  v15 = a1;
  v16 = a10;
  v107 = a6;
  v120 = a7;
  v119 = a12;
  v125 = a3;
  v115 = a1;
  v140 = a14;
  v109 = a8;
  v106 = a10;
  v118 = a13;
  v152 = 0LL;
  memset_0(v158, 0, sizeof(v158));
  v18 = 0LL;
  v105 = 0;
  *(_QWORD *)&v156 = 0LL;
  DWORD2(v156) = 0;
  v129 = 0LL;
  v130 = 0LL;
  v132 = 0LL;
  v136 = 0LL;
  memset(v154, 0, sizeof(v154));
  v155 = 0LL;
  if ( (MiZeroCont & 1) != 0 )
    memset_0(MiCont, 0, 0x354uLL);
  if ( a13 )
    *(_DWORD *)(a13 + 12) = 0;
  CurrentIrql = KeGetCurrentIrql();
  v127 = CurrentIrql;
  if ( (unsigned __int8)CurrentIrql > 2u )
    return 3221225659LL;
  if ( a8 < (unsigned __int16)KeNumberNodes
    && !*(_QWORD *)(*(_QWORD *)(v15 + 16) + 57216LL * a8 + 14976)
    && (MiFlags & 0x30) != 0 )
  {
    return 3221225495LL;
  }
  if ( (_BYTE)CurrentIrql == 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
  {
    v16 = a10 | 8;
    v106 = a10 | 8;
  }
  if ( (v16 & 0x20000000) == 0 && (int)MiAcquireNonPagedResources(v15, v107, 0LL, 2LL) < 0 )
    return 3221225626LL;
  if ( v119 )
    v123 = v107 + (*(_DWORD *)(v119 + 40) >> 12);
  else
    v123 = 0;
  if ( (v16 & 0x40) != 0 )
  {
    if ( a2 == 0x100000 )
      v16 |= 0x8000u;
    v62 = !_bittest64(&KeFeatureBits, 0x25u);
    v63 = &MiPageSizes[v62];
    do
    {
      if ( v107 == *v63 )
        break;
      LODWORD(v62) = v62 + 1;
      ++v63;
    }
    while ( (unsigned int)v62 < 3 );
    v64 = (unsigned __int16)KeNumberNodes;
    if ( (((unsigned __int8)&v131 - 48) & 4) != 0 )
      LODWORD(v154[0]) = (unsigned __int16)KeNumberNodes;
    v65 = v154;
    if ( (((unsigned __int8)&v131 - 48) & 4) != 0 )
      v65 = (_DWORD *)v154 + 1;
    memset64(v65, (unsigned __int16)KeNumberNodes | ((unsigned __int64)(unsigned __int16)KeNumberNodes << 32), 1uLL);
    if ( (((unsigned __int8)&v131 - 48) & 4) == 0 )
      v65[2] = v64;
    for ( i = 0; ; ++i )
    {
      if ( i >= 3 )
        goto LABEL_130;
      v67 = i;
      if ( a4 == MiPageSizes[v67] )
        break;
    }
    v18 = MiDemandLargePageCoalesceTimeBounds[v67];
LABEL_130:
    v156 = 0LL;
    *((_QWORD *)&v155 + 1) = v18;
    LargeNodePage = MiFindLargeNodePage(v15, a8, v62, v62, v16, v120, (__int64)v154);
    v69 = LargeNodePage;
    if ( LargeNodePage )
    {
      MiGetPfnPageSizeIndex(LargeNodePage);
      MiInitializeFoundLargeNodePage(v69, v16, a11);
      v40 = v107;
      v96 = 0xAAAAAAAAAAAAAAABuLL * ((v69 + 0x220000000000LL) >> 4);
      if ( v96 + v107 - 1 <= v125 )
      {
        v97 = v119;
        *v140 = v96;
        if ( v97 )
        {
          v98 = (_QWORD *)(v97 + 8 * (((unsigned __int64)*(unsigned int *)(v97 + 40) >> 12) + 6));
          if ( v40 )
          {
            v99 = v40;
            do
            {
              *v98++ = v96++;
              --v99;
            }
            while ( v99 );
          }
          *(_DWORD *)(v97 + 40) += (_DWORD)v40 << 12;
        }
        return 0LL;
      }
      MiFreeContiguousPages(v96);
      v41 = -1073741801;
    }
    else
    {
      v40 = v107;
      v41 = -1073741801;
    }
    goto LABEL_54;
  }
  if ( (*(_DWORD *)(v15 + 4) & 0x10) == 0 && !(unsigned int)MiSufficientAvailablePages(v15, v107 + 160) )
  {
    v40 = v107;
    v41 = -1073741670;
    goto LABEL_54;
  }
  MiInitializePageColorBase(&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink, 3LL, 0LL, &v152);
  v20 = 4LL;
  if ( (_BYTE)CurrentIrql != 2 )
    v20 = 0LL;
  if ( !(unsigned int)MiCreateUltraThreadContext(v158, &v152, 8LL, v20) )
  {
    v40 = v107;
    v41 = -1073741670;
    goto LABEL_54;
  }
  v116 = 0;
  if ( (v16 & 0xB800008) == 0x8000000 )
    v116 = (MiFlags & 0x30) != 0;
  if ( a8 >= (unsigned __int16)KeNumberNodes )
    v109 = a8 | 0x80000000;
  v21 = (unsigned int *)MiReferencePageRuns(v15, 1LL);
  v23 = v118;
  v24 = v21;
  v121 = (int *)v21;
  v25 = -1;
  v137 = 0LL;
  v26 = *v21 + 1LL;
  v117 = -1;
  v128 = 0LL;
  v142 = &v21[4 * v26];
  v27 = 0LL;
  v131 = a2;
  if ( ((a4 - 1) & a4) == 0 )
    v27 = a4;
  v135 = 0LL;
  v133 = v27;
  v134 = v107;
  LOBYTE(v136) = (v16 & 0x2000) != 0;
  v114 = 0;
  v108 = 0;
  if ( !v118 )
  {
LABEL_26:
    v28 = *(_QWORD *)(v15 + 16);
    v138 = v28;
    v122 = v16 & 0x2000;
    while ( 1 )
    {
      while ( 1 )
      {
        v29 = (unsigned __int8)MmNumberOfChannels;
        v30 = 0LL;
        v113 = 0LL;
        if ( (unsigned __int8)MmNumberOfChannels > 1u )
        {
          v31 = v109;
          if ( v109 >= 0 )
          {
            v84 = 57216LL * (unsigned int)v109;
          }
          else
          {
            if ( v25 == -1 )
            {
              v82 = v125;
              if ( v125 > *(_QWORD *)(v15 + 18504) )
                v82 = *(_QWORD *)(v15 + 18504);
              v83 = MiPageToNode(v82);
              v22 = (unsigned __int16)KeNumberNodes;
              v25 = v83;
              v117 = v83;
              v30 = 0LL;
              v128 = qword_140E2D890 + 4LL * v83 * (unsigned __int16)KeNumberNodes;
              v137 = (_DWORD *)(v128 + 4LL * (unsigned __int16)KeNumberNodes);
            }
            v84 = 57216LL * v25;
          }
          v85 = v28 + v84;
          if ( (*(_DWORD *)(v85 + 15184) & 1) != 0 )
          {
            v30 = (_BYTE *)(v85 + 15235);
            v113 = (_BYTE *)(v85 + 15235);
            if ( !a9 )
            {
              v86 = 0;
              if ( (_BYTE)v29 )
              {
                do
                {
                  if ( !*v30 )
                    break;
                  ++v30;
                  ++v86;
                }
                while ( v86 < v29 );
                v113 = v30;
              }
              LOBYTE(v29) = 1;
            }
          }
        }
        else
        {
          v31 = v109;
        }
        v32 = v121;
        v143 = &v30[(unsigned __int8)v29];
        do
        {
          v132 = v125;
          v33 = *v32;
          v110 = 0;
LABEL_31:
          while ( v33 )
          {
            v34 = v33 - 1;
            v111 = v34;
            v35 = v142[2 * v34];
            v22 = LOBYTE(v142[2 * v34 + 1]);
            v34 *= 2LL;
            LODWORD(v124) = v35;
            v129 = *(_QWORD *)&v32[2 * v34 + 4];
            v130 = *(_QWORD *)&v32[2 * v34 + 6] + v129;
            if ( v131 >= v130 )
              break;
            if ( v31 >= 0 )
            {
              v33 = v111;
              if ( v35 != v31 )
                continue;
            }
            if ( v30 )
            {
              v33 = v111;
              if ( (_BYTE)v22 != *v30 )
                continue;
            }
            while ( 1 )
            {
              if ( !(unsigned int)MiCollapseRunTopDown(&v129, v22)
                || !*(_QWORD *)(*(_QWORD *)(v15 + 16) + 57216LL * v35 + 14976) && (MiFlags & 0x30) != 0 )
              {
                v32 = v121;
                v31 = v109;
                v30 = v113;
                v33 = v111;
                goto LABEL_31;
              }
              v36 = v130;
              v37 = (_DWORD *)v134;
              v112 = v134;
              if ( (_BYTE)v136 )
              {
                if ( v134 > v130 - v129 )
                  v37 = (_DWORD *)(v130 - v129);
                v112 = (unsigned __int64)v37;
              }
              v22 = v118;
              v38 = 0LL;
              v105 = 0;
              v39 = v130 - (_QWORD)v37;
              v139 = v130 - (_QWORD)v37;
              if ( v118 )
              {
                v58 = *(_DWORD *)(v118 + 4);
                if ( v58 )
                {
                  for ( j = v110; j < v58; v110 = j )
                  {
                    if ( v39 >= *(_QWORD *)(v22 + 8LL * j + 24) )
                    {
                      if ( v39 == *(_QWORD *)(v22 + 8LL * j + 24) )
                      {
                        v38 = v133;
                        v110 = j + 1;
                      }
                      break;
                    }
                    v22 = v118;
                    ++j;
                  }
                }
              }
              v126 = 48 * v39 - 0x220000000000LL;
              if ( !(_BYTE)v136 )
              {
                if ( v38 )
                  goto LABEL_44;
                v38 = MiPfnsWorthTrying(v15, 48 * (int)v39, v134, v106, (__int64)&v105);
              }
              if ( !v38 )
              {
                if ( (v105 & 1) != 0 )
                {
                  ++dword_140EF4C68;
                  MiAdjustCachedStacks(v15, 1LL);
                }
                v38 = (unsigned __int64)v37;
                v35 = (unsigned int)v124;
                v43 = v36 - (_QWORD)v37;
                v151 = v119;
                v144[1] = v158;
                v146 = v106;
                v150 = v132;
                v145 = v37;
                v44 = v126;
                v144[0] = v15;
                v149 = 0LL;
                v45 = 0;
                v105 = 0;
                v147 = 0;
                v25 = v117;
                v141 = v126 + 48 * v112;
                v148 = -1LL;
                do
                {
                  v46 = MiTradePage(v144, v43, &v105);
                  v47 = v46;
                  if ( v46 )
                  {
                    v145 = (_DWORD *)((char *)v145 - v46);
                    if ( !v145 )
                    {
                      ++dword_140EF4B7C;
                      v38 = 0LL;
                      goto LABEL_69;
                    }
                  }
                  else
                  {
                    v22 = v149;
                    v47 = 1LL;
                    if ( v149 > 1 )
                    {
                      if ( v43 == (v43 & ~(v149 - 1)) )
                        v47 = v149;
                      else
                        v47 = (~(v149 - 1) & (v43 + v149 - 1)) - v43;
                    }
                    if ( !v45 )
                    {
                      if ( v149 )
                        v38 = v39 + v112 - (v43 & ~(v149 - 1));
                      v45 = 1;
                    }
                    if ( !v122 )
                      goto LABEL_82;
                    if ( v47 >= v39 + v112 - v43 )
                      goto LABEL_69;
                  }
                  v148 = -1LL;
                  v43 += v47;
                  v44 += 48 * v47;
                }
                while ( v44 < v141 );
                if ( v122 )
                {
LABEL_69:
                  v48 = v119;
                  goto LABEL_70;
                }
LABEL_82:
                ++dword_140EF4C60;
                v52 = (char *)(v112 - (_QWORD)v145);
                dword_140EF4C64 = -1431655765 * ((__int64)(v44 + 0x220000000000LL) >> 4);
                v48 = v119;
                if ( v119 )
                  *(_DWORD *)(v119 + 40) += -4096 * (_DWORD)v52;
                if ( v52 )
                {
                  do
                  {
                    v44 -= 48LL;
                    MiReleaseFreshPage(v44);
                    --v52;
                  }
                  while ( v52 );
                  goto LABEL_69;
                }
LABEL_70:
                if ( v48 )
                {
                  v53 = *(_DWORD *)(v48 + 40) >> 12;
                  if ( v53 == v123 )
                    goto LABEL_91;
                  v134 = (unsigned int)(v123 - v53);
                }
                else if ( !v38 )
                {
                  goto LABEL_91;
                }
                v49 = v126;
                v50 = v115;
                if ( *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v126 + 40) >> 43) & 0x3FFLL)) != v115 )
                  goto LABEL_75;
                if ( !MiIsPageOnBadList(v126) )
                {
                  v114 = 1;
LABEL_75:
                  v36 = v130;
                  v15 = v50;
                  v37 = (_DWORD *)v112;
                  goto LABEL_44;
                }
                if ( (_BYTE)v127 == 2 )
                {
                  v70 = 17;
                  v71 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v49 + 24), 0x3FuLL) )
                  {
                    do
                    {
                      if ( (++v71 & HvlLongSpinCountMask) == 0
                        && (HvlEnlightenments & 0x40) != 0
                        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v51) )
                      {
                        HvlNotifyLongSpinWait(v71);
                      }
                      else
                      {
                        _mm_pause();
                      }
                    }
                    while ( *(__int64 *)(v49 + 24) < 0 );
                  }
                }
                else
                {
                  v70 = MiLockPageInline(v49);
                }
                if ( MiIsPageOnBadList(v49) )
                {
                  v16 = v106;
                  if ( (v106 & 0x10000000) != 0 )
                  {
                    MiUnlockPage(v49, v70);
                    v15 = v115;
                    v32 = v121;
                    v33 = 0;
                    v31 = v109;
                    v30 = v113;
                    v116 = 0;
                    goto LABEL_31;
                  }
                }
                else
                {
                  v114 = 1;
                }
                MiUnlockPage(v49, v70);
                v15 = v115;
                v36 = v130;
                v37 = (_DWORD *)v112;
              }
LABEL_44:
              if ( (v105 & 2) != 0 )
                v108 |= 1u;
              if ( v38 >= v36 - v129 || !(_BYTE)v136 && v36 - v129 - v38 < (unsigned __int64)v37 )
                v132 = v36 - v38 - 1;
              v16 = v106;
              v130 = v36 - v38;
            }
          }
          if ( !v30 )
            goto LABEL_51;
          v113 = ++v30;
        }
        while ( v30 < v143 );
        if ( v25 == -1 )
          break;
        v22 = v128 + 4;
        v128 = v22;
        if ( (_DWORD *)v22 == v137 )
          break;
        v25 = *(_DWORD *)v22;
        v28 = v138;
        v117 = *(_DWORD *)v22;
      }
LABEL_51:
      if ( !v116 || !v114 )
      {
        v40 = v107;
        goto LABEL_53;
      }
      v40 = v107;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x100000) != 0 )
      {
        v153[1] = 16LL;
        v100 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        v157[1] = v107 << 12;
        v157[0] = v100;
        v153[0] = v157;
        EtwTraceKernelEvent((unsigned int)v153, 1, 537919488, 625, 5249538);
      }
      ++dword_140EF4DAC;
      v101 = v108;
      if ( (v16 & 0x4000000) == 0 )
        v101 = v108 & 0xFFFFFFFE;
      if ( !(unsigned int)MiTrimNoStealPagesFromWorkingSets(v15, v101 | 2, v32) )
        break;
      v28 = v138;
      v25 = -1;
      v117 = -1;
      v116 = 0;
      v114 = 0;
      v108 = 0;
      v118 = 0LL;
    }
    v32 = v121;
LABEL_53:
    v41 = -1073741801;
    MiDereferencePageRuns(v32, v22);
LABEL_54:
    MiDeleteUltraThreadContext((__int64)v158);
    if ( (v16 & 0x20000000) == 0 )
      MiReleaseNonPagedResources(v15, v40);
    return v41;
  }
  if ( (v16 & 0x2000) != 0
    || MmNumberOfChannels != 1
    || v24 != *(unsigned int **)(v15 + 32)
    || *(_QWORD *)(v118 + 16) == -1LL && *(_DWORD *)(v118 + 8) >= *(_DWORD *)(v118 + 4) )
  {
    *(_QWORD *)(v118 + 4) = 0LL;
    goto LABEL_26;
  }
  if ( v107 == 16 )
  {
    v72 = 2;
    v73 = &unk_140EF4C98;
    v74 = &unk_140EF4C8C;
    v75 = &unk_140EF4CA4;
    v76 = &unk_140EF4CB0;
  }
  else if ( v107 == 512 )
  {
    v72 = 1;
    v73 = &unk_140EF4C94;
    v74 = &unk_140EF4C88;
    v75 = &unk_140EF4CA0;
    v76 = &unk_140EF4CAC;
  }
  else
  {
    v72 = 0;
    v73 = &unk_140EF4C90;
    v74 = &unk_140EF4C84;
    v75 = &unk_140EF4C9C;
    v76 = &unk_140EF4CA8;
  }
  v112 = (unsigned __int64)v76;
  v87 = 1;
  v124 = v74;
  v110 = 1;
  v88 = 4LL * v72;
  ++*(int *)((char *)&MiCont[123] + v88);
  LODWORD(v89) = *(_DWORD *)(v23 + 8);
  v90 = *(_DWORD *)(v23 + 4);
  v113 = (_BYTE *)v88;
  if ( (unsigned int)v89 < v90 )
  {
    if ( *(_QWORD *)(v23 + 16) != -1LL )
      v87 = 2;
    v110 = v87;
  }
  v91 = 0;
LABEL_178:
  v111 = v91;
  if ( v91 >= v87 )
  {
    ++MiCont[v72 + 141];
    qsort((void *)(v23 + 24), *(unsigned int *)(v23 + 4), 8uLL, MiSortBestStealCandidates);
    v15 = v115;
    v16 = v106;
    v114 = 1;
    goto LABEL_26;
  }
  if ( (_DWORD)v89 == v90 )
  {
    v92 = v125;
    ++*(int *)((char *)&MiCont[126] + v88);
    v93 = (int)v121;
    v104 = v109;
    v103 = v92;
    LODWORD(v92) = v115;
    *(_DWORD *)(v23 + 8) = 0;
    MiFindBestLargePageStealCandidates(v92, v93, v72, a2, v103, v104, v23);
    v23 = v118;
    v88 = (__int64)v113;
    if ( *(_DWORD *)(v118 + 4) )
      ++*v74;
    else
      ++*v73;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v89 = *(unsigned int *)(v23 + 8);
      v90 = *(_DWORD *)(v23 + 4);
      if ( (unsigned int)v89 >= v90 )
      {
        v74 = v124;
        v91 = v111 + 1;
        v87 = v110;
        goto LABEL_178;
      }
      v139 = *(_QWORD *)(v23 + 8 * v89 + 24);
      v39 = v139;
      *(_DWORD *)(v23 + 8) = v89 + 1;
      v126 = 48 * v39 - 0x220000000000LL;
      if ( !MiPfnsWorthTrying(v115, 48 * (int)v39, v107, v106, (__int64)&v105) )
        break;
      v88 = (__int64)v113;
      v23 = v118;
      ++*(int *)((char *)&MiCont[138] + (_QWORD)v113);
    }
    if ( (v105 & 1) != 0 )
    {
      ++dword_140EF4C68;
      MiAdjustCachedStacks(v115, 1LL);
    }
    if ( !MiClaimPhysicalRun(v115, v39, v107, v125, (__int64)v158, v106, 0, v119, 0LL, (__int64)&v105) )
      break;
    v88 = (__int64)v113;
    v23 = v118;
    ++*(_DWORD *)v112;
    if ( (v105 & 2) != 0 )
      v108 |= 1u;
  }
  v94 = v118;
  ++*v75;
  *(_DWORD *)(v94 + 12) = 1;
LABEL_91:
  MiDereferencePageRuns(v121, v22);
  MiDeleteUltraThreadContext((__int64)v158);
  v54 = v106;
  v55 = v107;
  if ( (v106 & 0x2000) != 0 )
  {
    v56 = v126;
    v57 = v120;
  }
  else
  {
    v60 = (v39 + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v61 = (v107 + v39) & 0xFFFFFFFFFFFFFE00uLL;
    if ( v60 < v61 && (v106 & 0x80001000) != 0x80001000 )
    {
      v95 = 7LL;
      if ( (_BYTE)v127 != 2 )
        v95 = 3LL;
      MiUpdateLargePageBitMap(v115, v60, v61 - v60, v95);
    }
    v56 = v126;
    v57 = v120;
    MiConvertContiguousPages(v126, v55, v120, (unsigned __int8)v127);
  }
  if ( (v54 & 0x40000000) == 0 )
  {
    v77 = (v54 & 0x100000) != 0;
    v78 = 3 * v55;
    v79 = a11 | 4;
    v80 = v56 + 16 * v78;
    v81 = v77 + 1;
    if ( (_BYTE)v127 != 2 )
      v79 = a11;
    do
    {
      LOWORD(v102) = v81;
      MiSetPfnOwnedAndActive(v56, v79, -8, v57, v102);
      v56 += 48LL;
    }
    while ( v56 != v80 );
    v39 = v139;
  }
  *v140 = v39;
  return 0LL;
}
