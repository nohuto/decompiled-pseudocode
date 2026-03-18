/*
 * XREFs of MiFindContiguousPagesEx @ 0x140304960
 * Callers:
 *     MiWaitForInPageComplete @ 0x140398598 (MiWaitForInPageComplete.c)
 *     MiRebuildLargePage @ 0x1403D2BAC (MiRebuildLargePage.c)
 *     MiAllocateContiguousMemory @ 0x14041182C (MiAllocateContiguousMemory.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x140413798 (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiAllocateSkipPagesForMdl @ 0x140414774 (MiAllocateSkipPagesForMdl.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140674B50 (MmMarkPhysicalMemoryAsBad.c)
 *     MmRemovePhysicalMemory @ 0x1407EA5D0 (MmRemovePhysicalMemory.c)
 *     MiCreatePagefileMemoryExtents @ 0x1407FDE8C (MiCreatePagefileMemoryExtents.c)
 *     MiAllocateDriverPage @ 0x140A68CD8 (MiAllocateDriverPage.c)
 *     MiFindLargePageMemory @ 0x140A92A7C (MiFindLargePageMemory.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     MiDeleteUltraThreadContext @ 0x14020C870 (MiDeleteUltraThreadContext.c)
 *     MiAcquireNonPagedResources @ 0x140211200 (MiAcquireNonPagedResources.c)
 *     MiClaimPhysicalRun @ 0x14022B3F0 (MiClaimPhysicalRun.c)
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     MiConvertContiguousPages @ 0x140268C24 (MiConvertContiguousPages.c)
 *     MiAdjustCachedStacks @ 0x140269740 (MiAdjustCachedStacks.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSufficientAvailablePages @ 0x1402AA420 (MiSufficientAvailablePages.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiCreateUltraThreadContext @ 0x1402F3EF0 (MiCreateUltraThreadContext.c)
 *     MiIsPageOnBadList @ 0x14030492C (MiIsPageOnBadList.c)
 *     MiCollapseRunTopDown @ 0x1403057F0 (MiCollapseRunTopDown.c)
 *     MiPfnsWorthTrying @ 0x140305B00 (MiPfnsWorthTrying.c)
 *     MiGetPfnPageSizeIndex @ 0x1403070C0 (MiGetPfnPageSizeIndex.c)
 *     MiUpdateLargePageBitMap @ 0x1403A29EC (MiUpdateLargePageBitMap.c)
 *     MiFreeContiguousPages @ 0x1403A95E8 (MiFreeContiguousPages.c)
 *     MiFindLargeNodePage @ 0x1403D6288 (MiFindLargeNodePage.c)
 *     MiReferencePageRuns @ 0x1404401F0 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x1404473D0 (MiDereferencePageRuns.c)
 *     MiFindBestLargePageStealCandidates @ 0x14044CF10 (MiFindBestLargePageStealCandidates.c)
 *     MiSetPfnOwnedAndActive @ 0x14045B630 (MiSetPfnOwnedAndActive.c)
 *     MiTrimNoStealPagesFromWorkingSets @ 0x1404B10D8 (MiTrimNoStealPagesFromWorkingSets.c)
 *     MiInitializeFoundLargeNodePage @ 0x1404F869C (MiInitializeFoundLargeNodePage.c)
 *     qsort @ 0x1404FED20 (qsort.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiFindContiguousPagesEx(
        __int64 a1,
        _BYTE *a2,
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
  _BYTE *v14; // r13
  __int64 v15; // r14
  unsigned int v16; // r12d
  __int64 v18; // r15
  __int64 CurrentIrql; // rdi
  unsigned int v20; // r9d
  unsigned int *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r10
  unsigned int *v24; // r8
  unsigned int v25; // ebx
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // r13
  _DWORD *v29; // r12
  unsigned int v30; // edi
  _BYTE *v31; // r9
  int v32; // esi
  int *v33; // r8
  unsigned int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rdi
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // r12
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // r15
  __int64 v41; // r13
  unsigned __int64 v42; // rsi
  unsigned int v43; // edi
  unsigned int v45; // r14d
  int v46; // ecx
  __int64 v47; // rbx
  unsigned int v48; // esi
  unsigned int v49; // ecx
  unsigned int j; // r9d
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // r8
  __int64 v53; // r8
  __int64 *v54; // rcx
  int v55; // r11d
  _DWORD *v56; // r10
  unsigned int i; // ecx
  __int64 v58; // rax
  __int64 LargeNodePage; // rax
  __int64 v60; // rdi
  unsigned __int8 v61; // r15
  __int64 v62; // rdi
  int v63; // ebx
  __int64 v64; // rdi
  ULONG_PTR v65; // rcx
  unsigned int v66; // eax
  __int64 v67; // rcx
  _DWORD *v68; // rcx
  unsigned int v69; // eax
  __int64 v70; // r9
  ULONG_PTR v71; // rdi
  __int64 v72; // rdx
  _QWORD *v73; // rcx
  unsigned __int64 v74; // rax
  unsigned int v75; // r14d
  _DWORD *v76; // r12
  _DWORD *v77; // r15
  _DWORD *v78; // rsi
  _DWORD *v79; // rax
  unsigned int v80; // edx
  __int64 v81; // r9
  __int64 v82; // rcx
  unsigned int v83; // eax
  unsigned int v84; // r8d
  unsigned __int64 v85; // rcx
  int v86; // edx
  __int64 v87; // rax
  __int64 v88; // rcx
  unsigned int v89; // edx
  int v90; // [rsp+20h] [rbp-E0h]
  __int64 v91; // [rsp+20h] [rbp-E0h]
  signed int v92; // [rsp+28h] [rbp-D8h]
  int v93; // [rsp+50h] [rbp-B0h]
  int v94; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v95; // [rsp+58h] [rbp-A8h]
  unsigned int v96; // [rsp+60h] [rbp-A0h]
  signed int v97; // [rsp+64h] [rbp-9Ch]
  int v98; // [rsp+68h] [rbp-98h]
  unsigned int v99; // [rsp+6Ch] [rbp-94h]
  __int64 v100; // [rsp+70h] [rbp-90h]
  __int64 v101; // [rsp+78h] [rbp-88h]
  _BYTE *v102; // [rsp+80h] [rbp-80h]
  _DWORD *v103; // [rsp+88h] [rbp-78h]
  BOOL v104; // [rsp+90h] [rbp-70h]
  unsigned int v105; // [rsp+94h] [rbp-6Ch]
  int *v106; // [rsp+98h] [rbp-68h]
  _DWORD *v107; // [rsp+A0h] [rbp-60h]
  int v108; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v109; // [rsp+B0h] [rbp-50h]
  __int64 v110; // [rsp+B8h] [rbp-48h]
  __int64 v111; // [rsp+C0h] [rbp-40h]
  __int64 v112; // [rsp+C8h] [rbp-38h]
  _BYTE *v113; // [rsp+D0h] [rbp-30h]
  __int64 v114; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v115; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v116; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v117; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v118; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v119; // [rsp+108h] [rbp+8h]
  __int64 v120; // [rsp+110h] [rbp+10h]
  __int64 v121; // [rsp+118h] [rbp+18h]
  _DWORD *v122; // [rsp+120h] [rbp+20h]
  unsigned __int64 v123; // [rsp+128h] [rbp+28h]
  ULONG_PTR *v124; // [rsp+130h] [rbp+30h]
  unsigned int *v125; // [rsp+138h] [rbp+38h]
  __int128 v126; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v127[2]; // [rsp+150h] [rbp+50h] BYREF
  _OWORD v128[2]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v129; // [rsp+180h] [rbp+80h]
  __int128 v130; // [rsp+190h] [rbp+90h]
  _QWORD v131[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v132[128]; // [rsp+1B0h] [rbp+B0h] BYREF

  v14 = a2;
  v15 = a1;
  v16 = a10;
  v95 = a6;
  v105 = a7;
  v110 = a12;
  v109 = a3;
  v113 = a2;
  v101 = a1;
  v124 = a14;
  v97 = a8;
  v93 = a10;
  v100 = a13;
  v126 = 0LL;
  memset_0(v132, 0, sizeof(v132));
  v18 = 0LL;
  v94 = 0;
  *(_QWORD *)&v130 = 0LL;
  DWORD2(v130) = 0;
  v114 = 0LL;
  v115 = 0LL;
  v117 = 0LL;
  v121 = 0LL;
  memset(v128, 0, sizeof(v128));
  v129 = 0LL;
  if ( (MiZeroCont & 1) != 0 )
    memset_0(MiCont, 0, 0x354uLL);
  if ( a13 )
    *(_DWORD *)(a13 + 12) = 0;
  CurrentIrql = KeGetCurrentIrql();
  v111 = CurrentIrql;
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
    v93 = a10 | 8;
  }
  if ( (v16 & 0x20000000) == 0 && (int)MiAcquireNonPagedResources((ULONG *)v15, v95, 0LL, 2u) < 0 )
    return 3221225626LL;
  if ( v110 )
    v108 = v95 + (*(_DWORD *)(v110 + 40) >> 12);
  else
    v108 = 0;
  if ( (v16 & 0x40) != 0 )
  {
    if ( v14 == (_BYTE *)0x100000 )
      v16 |= 0x8000u;
    v53 = !_bittest64(&KeFeatureBits, 0x25u);
    v54 = &MiPageSizes[v53];
    do
    {
      if ( v95 == *v54 )
        break;
      LODWORD(v53) = v53 + 1;
      ++v54;
    }
    while ( (unsigned int)v53 < 3 );
    v55 = (unsigned __int16)KeNumberNodes;
    if ( (((unsigned __int8)&v118 + 96) & 4) != 0 )
      LODWORD(v128[0]) = (unsigned __int16)KeNumberNodes;
    v56 = v128;
    if ( (((unsigned __int8)&v118 + 96) & 4) != 0 )
      v56 = (_DWORD *)v128 + 1;
    memset64(v56, (unsigned __int16)KeNumberNodes | ((unsigned __int64)(unsigned __int16)KeNumberNodes << 32), 1uLL);
    if ( (((unsigned __int8)&v118 + 96) & 4) == 0 )
      v56[2] = v55;
    for ( i = 0; ; ++i )
    {
      if ( i >= 3 )
        goto LABEL_111;
      v58 = i;
      if ( a4 == MiPageSizes[v58] )
        break;
    }
    v18 = MiDemandLargePageCoalesceTimeBounds[v58];
LABEL_111:
    v130 = 0LL;
    *((_QWORD *)&v129 + 1) = v18;
    LargeNodePage = MiFindLargeNodePage(v15, a8, v53, v53, v16, v105, (__int64)v128);
    v60 = LargeNodePage;
    if ( LargeNodePage )
    {
      MiGetPfnPageSizeIndex(LargeNodePage);
      MiInitializeFoundLargeNodePage(v60, v16, a11);
      v42 = v95;
      v71 = 0xAAAAAAAAAAAAAAABuLL * ((v60 + 0x220000000000LL) >> 4);
      if ( v71 + v95 - 1 <= v109 )
      {
        v72 = v110;
        *v124 = v71;
        if ( v72 )
        {
          v73 = (_QWORD *)(v72 + 8 * (((unsigned __int64)*(unsigned int *)(v72 + 40) >> 12) + 6));
          if ( v42 )
          {
            v74 = v42;
            do
            {
              *v73++ = v71++;
              --v74;
            }
            while ( v74 );
          }
          *(_DWORD *)(v72 + 40) += (_DWORD)v42 << 12;
        }
        return 0LL;
      }
      MiFreeContiguousPages(v71);
      v43 = -1073741801;
    }
    else
    {
      v42 = v95;
      v43 = -1073741801;
    }
    goto LABEL_56;
  }
  if ( (*(_DWORD *)(v15 + 4) & 0x10) == 0 && !(unsigned int)MiSufficientAvailablePages(v15, v95 + 160) )
  {
    v42 = v95;
    v43 = -1073741670;
    goto LABEL_56;
  }
  MiInitializePageColorBase(
    (__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
    3,
    0,
    (__int64)&v126);
  v20 = 4;
  if ( (_BYTE)CurrentIrql != 2 )
    v20 = 0;
  if ( !(unsigned int)MiCreateUltraThreadContext((__int64)v132, (__int64)&v126, 8, v20) )
  {
    v42 = v95;
    v43 = -1073741670;
    goto LABEL_56;
  }
  v104 = 0;
  if ( (v16 & 0xB800008) == 0x8000000 )
    v104 = (MiFlags & 0x30) != 0;
  if ( a8 >= (unsigned __int16)KeNumberNodes )
    v97 = a8 | 0x80000000;
  v21 = (unsigned int *)MiReferencePageRuns(v15, 1LL);
  v23 = v100;
  v24 = v21;
  v106 = (int *)v21;
  v25 = -1;
  v122 = 0LL;
  v26 = *v21 + 1LL;
  v112 = 0LL;
  v116 = (unsigned __int64)v14;
  v125 = &v24[4 * v26];
  v27 = 0LL;
  v120 = 0LL;
  if ( ((a4 - 1) & a4) == 0 )
    v27 = a4;
  LODWORD(v103) = 0;
  v118 = v27;
  v119 = v95;
  LOBYTE(v121) = (v16 & 0x2000) != 0;
  v96 = 0;
  if ( !v100 )
    goto LABEL_26;
  if ( (v16 & 0x2000) != 0
    || MmNumberOfChannels != 1
    || v24 != *(unsigned int **)(v15 + 32)
    || *(_QWORD *)(v100 + 16) == -1LL && *(_DWORD *)(v100 + 8) >= *(_DWORD *)(v100 + 4) )
  {
    *(_QWORD *)(v100 + 4) = 0LL;
LABEL_26:
    v28 = v23;
    goto LABEL_27;
  }
  if ( v95 == 16 )
  {
    v75 = 2;
    v76 = &unk_140EF4F78;
    v77 = &unk_140EF4F6C;
    v78 = &unk_140EF4F84;
    v79 = &unk_140EF4F90;
  }
  else if ( v95 == 512 )
  {
    v75 = 1;
    v76 = &unk_140EF4F74;
    v77 = &unk_140EF4F68;
    v78 = &unk_140EF4F80;
    v79 = &unk_140EF4F8C;
  }
  else
  {
    v75 = 0;
    v76 = &unk_140EF4F70;
    v77 = &unk_140EF4F64;
    v78 = &unk_140EF4F7C;
    v79 = &unk_140EF4F88;
  }
  v103 = v79;
  v80 = 1;
  v107 = v77;
  v98 = 1;
  v81 = 4LL * v75;
  ++*(int *)((char *)&MiCont[123] + v81);
  LODWORD(v82) = *(_DWORD *)(v23 + 8);
  v83 = *(_DWORD *)(v23 + 4);
  v102 = (_BYTE *)v81;
  if ( (unsigned int)v82 < v83 )
  {
    if ( *(_QWORD *)(v23 + 16) != -1LL )
      v80 = 2;
    v98 = v80;
  }
  v84 = 0;
LABEL_176:
  v99 = v84;
  if ( v84 >= v80 )
  {
    v28 = v100;
    ++MiCont[v75 + 141];
    qsort((void *)(v28 + 24), *(unsigned int *)(v28 + 4), 8uLL, MiSortBestStealCandidates);
    v15 = v101;
    LODWORD(v103) = 1;
LABEL_27:
    v29 = *(_DWORD **)(v15 + 16);
    v107 = v29;
    while ( 1 )
    {
      while ( 1 )
      {
        v30 = (unsigned __int8)MmNumberOfChannels;
        v31 = 0LL;
        v102 = 0LL;
        if ( (unsigned __int8)MmNumberOfChannels > 1u )
        {
          v32 = v97;
          if ( v97 >= 0 )
          {
            v67 = 14304LL * (unsigned int)v97;
          }
          else
          {
            if ( v25 == -1 )
            {
              v65 = v109;
              if ( v109 > *(_QWORD *)(v15 + 18504) )
                v65 = *(_QWORD *)(v15 + 18504);
              v66 = MiPageToNode(v65);
              v22 = (unsigned __int16)KeNumberNodes;
              v25 = v66;
              v31 = 0LL;
              v112 = qword_140E2DAD0 + 4LL * v66 * (unsigned __int16)KeNumberNodes;
              v122 = (_DWORD *)(v112 + 4LL * (unsigned __int16)KeNumberNodes);
            }
            v67 = 14304LL * v25;
          }
          v68 = &v29[v67];
          if ( (v68[3796] & 1) != 0 )
          {
            v31 = (char *)v68 + 15235;
            v102 = (char *)v68 + 15235;
            if ( !a9 )
            {
              v69 = 0;
              if ( (_BYTE)v30 )
              {
                do
                {
                  if ( !*v31 )
                    break;
                  ++v31;
                  ++v69;
                }
                while ( v69 < v30 );
                v102 = v31;
              }
              LOBYTE(v30) = 1;
            }
          }
        }
        else
        {
          v32 = v97;
        }
        v33 = v106;
        v113 = &v31[(unsigned __int8)v30];
        do
        {
          v117 = v109;
          v34 = *v33;
          v98 = 0;
LABEL_32:
          while ( v34 )
          {
            v35 = v34 - 1;
            v99 = v35;
            v36 = v125[2 * v35];
            v22 = LOBYTE(v125[2 * v35 + 1]);
            v35 *= 2LL;
            v114 = *(_QWORD *)&v33[2 * v35 + 4];
            v115 = *(_QWORD *)&v33[2 * v35 + 6] + v114;
            if ( v116 >= v115 )
              break;
            if ( v32 >= 0 )
            {
              v34 = v99;
              if ( (_DWORD)v36 != v32 )
                continue;
            }
            if ( v31 )
            {
              v34 = v99;
              if ( (_BYTE)v22 != *v31 )
                continue;
            }
            while ( 1 )
            {
              if ( !(unsigned int)MiCollapseRunTopDown(&v114, v22)
                || !*(_QWORD *)(*(_QWORD *)(v15 + 16) + 57216 * v36 + 14976) && (MiFlags & 0x30) != 0 )
              {
                v33 = v106;
                v32 = v97;
                v31 = v102;
                v34 = v99;
                goto LABEL_32;
              }
              v37 = v115;
              v38 = v119;
              if ( (_BYTE)v121 && v119 > v115 - v114 )
                v38 = v115 - v114;
              v39 = 0LL;
              v94 = 0;
              v40 = v115 - v38;
              v123 = v115 - v38;
              if ( v28 )
              {
                v49 = *(_DWORD *)(v28 + 4);
                if ( v49 )
                {
                  for ( j = v98; j < v49; v98 = j )
                  {
                    if ( v40 >= *(_QWORD *)(v28 + 8LL * j + 24) )
                    {
                      if ( v40 == *(_QWORD *)(v28 + 8LL * j + 24) )
                      {
                        v39 = v118;
                        v98 = j + 1;
                      }
                      break;
                    }
                    ++j;
                  }
                }
              }
              v41 = 48 * v40 - 0x220000000000LL;
              if ( !(_BYTE)v121 )
              {
                if ( v39 )
                  goto LABEL_45;
                v39 = MiPfnsWorthTrying(v101, 48 * (int)v40, v119, v93, (__int64)&v94);
              }
              if ( !v39 )
              {
                if ( (v94 & 1) != 0 )
                {
                  ++dword_140EF4F48;
                  MiAdjustCachedStacks(v101, 1);
                }
                v45 = 0;
                v39 = MiClaimPhysicalRun(v101, v40, v38, v117, (__int64)v132, v93, 0, v110, 0LL, &v94);
                if ( v110 )
                {
                  v46 = *(_DWORD *)(v110 + 40) >> 12;
                  if ( v46 == v108 )
                    goto LABEL_73;
                  v119 = (unsigned int)(v108 - v46);
                }
                else if ( !v39 )
                {
                  goto LABEL_73;
                }
                if ( *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v41 + 40) >> 43) & 0x3FFLL)) != v101 )
                  goto LABEL_71;
                if ( !MiIsPageOnBadList(48 * v40 - 0x220000000000LL) )
                {
                  LODWORD(v103) = 1;
LABEL_71:
                  v37 = v115;
                  goto LABEL_45;
                }
                if ( (_BYTE)v111 == 2 )
                {
                  v61 = 17;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
                  {
                    do
                    {
                      if ( (++v45 & HvlLongSpinCountMask) == 0
                        && (HvlEnlightenments & 0x40) != 0
                        && KiCheckVpBackingLongSpinWaitHypercall() )
                      {
                        HvlNotifyLongSpinWait(v45);
                      }
                      else
                      {
                        _mm_pause();
                      }
                    }
                    while ( *(__int64 *)(v41 + 24) < 0 );
                  }
                }
                else
                {
                  v61 = MiLockPageInline(48 * v40 - 0x220000000000LL);
                }
                if ( MiIsPageOnBadList(v41) )
                {
                  if ( (v93 & 0x10000000) != 0 )
                  {
                    MiUnlockPage(v41, v61);
                    v15 = v101;
                    v28 = v100;
                    v34 = 0;
                    v33 = v106;
                    v32 = v97;
                    v31 = v102;
                    v104 = 0;
                    goto LABEL_32;
                  }
                }
                else
                {
                  LODWORD(v103) = 1;
                }
                MiUnlockPage(v41, v61);
                v37 = v115;
              }
LABEL_45:
              if ( (v94 & 2) != 0 )
                v96 |= 1u;
              if ( v39 >= v37 - v114 || !(_BYTE)v121 && v37 - v114 - v39 < v38 )
                v117 = v37 - v39 - 1;
              v28 = v100;
              v115 = v37 - v39;
              v15 = v101;
            }
          }
          if ( !v31 )
            goto LABEL_53;
          v102 = ++v31;
        }
        while ( v31 < v113 );
        if ( v25 == -1 )
          break;
        v22 = v112 + 4;
        v112 = v22;
        if ( (_DWORD *)v22 == v122 )
          break;
        v25 = *(_DWORD *)v22;
        v29 = v107;
      }
LABEL_53:
      if ( !v104 || !(_DWORD)v103 )
      {
        v16 = v93;
        v42 = v95;
        goto LABEL_55;
      }
      v42 = v95;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x100000) != 0 )
      {
        v127[1] = 16LL;
        v88 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        v131[1] = v95 << 12;
        v131[0] = v88;
        v127[0] = v131;
        EtwTraceKernelEvent((int)v127, 1, 0x20100000u, 625, 5249538);
      }
      ++dword_140EF508C;
      v16 = v93;
      v89 = v96;
      if ( (v93 & 0x4000000) == 0 )
        v89 = v96 & 0xFFFFFFFE;
      if ( !(unsigned int)MiTrimNoStealPagesFromWorkingSets(v15, v89 | 2, v33) )
        break;
      v29 = v107;
      v25 = -1;
      v104 = 0;
      v28 = 0LL;
      LODWORD(v103) = 0;
      v96 = 0;
      v100 = 0LL;
    }
    v33 = v106;
LABEL_55:
    v43 = -1073741801;
    MiDereferencePageRuns(v33, v22);
LABEL_56:
    MiDeleteUltraThreadContext((__int64)v132);
    if ( (v16 & 0x20000000) == 0 )
      MiReleaseNonPagedResources(v15, v42);
    return v43;
  }
  if ( (_DWORD)v82 == v83 )
  {
    v85 = v109;
    ++*(int *)((char *)&MiCont[126] + v81);
    v86 = (int)v106;
    v92 = v97;
    v91 = v85;
    LODWORD(v85) = v101;
    *(_DWORD *)(v23 + 8) = 0;
    MiFindBestLargePageStealCandidates(v85, v86, v75, (_DWORD)v14, v91, v92, v23);
    v23 = v100;
    v81 = (__int64)v102;
    if ( *(_DWORD *)(v100 + 4) )
      ++*v77;
    else
      ++*v76;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v82 = *(unsigned int *)(v23 + 8);
      v83 = *(_DWORD *)(v23 + 4);
      if ( (unsigned int)v82 >= v83 )
      {
        v77 = v107;
        v84 = v99 + 1;
        v80 = v98;
        LODWORD(v14) = (_DWORD)v113;
        goto LABEL_176;
      }
      v123 = *(_QWORD *)(v23 + 8 * v82 + 24);
      v40 = v123;
      *(_DWORD *)(v23 + 8) = v82 + 1;
      v41 = 48 * v40 - 0x220000000000LL;
      if ( !MiPfnsWorthTrying(v101, 48 * (int)v40, v95, v93, (__int64)&v94) )
        break;
      v81 = (__int64)v102;
      v23 = v100;
      ++*(int *)((char *)&MiCont[138] + (_QWORD)v102);
    }
    if ( (v94 & 1) != 0 )
    {
      ++dword_140EF4F48;
      MiAdjustCachedStacks(v101, 1);
    }
    if ( !MiClaimPhysicalRun(v101, v40, v95, v109, (__int64)v132, v93, 0, v110, 0LL, &v94) )
      break;
    v81 = (__int64)v102;
    v23 = v100;
    ++*v103;
    if ( (v94 & 2) != 0 )
      v96 |= 1u;
  }
  v87 = v100;
  ++*v78;
  *(_DWORD *)(v87 + 12) = 1;
LABEL_73:
  MiDereferencePageRuns(v106, v22);
  MiDeleteUltraThreadContext((__int64)v132);
  v47 = v95;
  if ( (v93 & 0x2000) != 0 )
  {
    v48 = v105;
  }
  else
  {
    v51 = (v40 + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v52 = (v95 + v40) & 0xFFFFFFFFFFFFFE00uLL;
    if ( v51 < v52 && (v93 & 0x80001000) != 0x80001000 )
    {
      v70 = 7LL;
      if ( (_BYTE)v111 != 2 )
        v70 = 3LL;
      MiUpdateLargePageBitMap(v101, v51, v52 - v51, v70);
    }
    v48 = v105;
    MiConvertContiguousPages((__int64 *)v41, v47, v105, v111);
  }
  if ( (v93 & 0x40000000) == 0 )
  {
    v62 = 3 * v47;
    v63 = a11 | 4;
    v64 = v41 + 16 * v62;
    if ( (_BYTE)v111 != 2 )
      v63 = a11;
    do
    {
      LOWORD(v90) = ((v93 & 0x100000) != 0) + 1;
      MiSetPfnOwnedAndActive(v41, v63, -8, v48, v90);
      v41 += 48LL;
    }
    while ( v41 != v64 );
    v40 = v123;
  }
  *v124 = v40;
  return 0LL;
}
