/*
 * XREFs of MiFindContiguousPagesEx @ 0x14030E840
 * Callers:
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x14021C6C4 (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiWaitForInPageComplete @ 0x140350CE8 (MiWaitForInPageComplete.c)
 *     MiAllocateContiguousMemory @ 0x140395A6C (MiAllocateContiguousMemory.c)
 *     MiAllocateSkipPagesForMdl @ 0x1403968B8 (MiAllocateSkipPagesForMdl.c)
 *     MiRebuildLargePage @ 0x1403F7120 (MiRebuildLargePage.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140675D20 (MmMarkPhysicalMemoryAsBad.c)
 *     MmRemovePhysicalMemory @ 0x1407EABA0 (MmRemovePhysicalMemory.c)
 *     MiCreatePagefileMemoryExtents @ 0x1407FE5FC (MiCreatePagefileMemoryExtents.c)
 *     MiAllocateDriverPage @ 0x140A62088 (MiAllocateDriverPage.c)
 *     MiFindLargePageMemory @ 0x140A8F22C (MiFindLargePageMemory.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140219EE0 (MiUpdateLargePageBitMap.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAdjustCachedStacks @ 0x1402AF604 (MiAdjustCachedStacks.c)
 *     MiClaimPhysicalRun @ 0x1402FED00 (MiClaimPhysicalRun.c)
 *     MiIsPageOnBadList @ 0x14030E80C (MiIsPageOnBadList.c)
 *     MiCollapseRunTopDown @ 0x14030F6D0 (MiCollapseRunTopDown.c)
 *     MiPfnsWorthTrying @ 0x14030F9E0 (MiPfnsWorthTrying.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiDeleteUltraThreadContext @ 0x140335BD0 (MiDeleteUltraThreadContext.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiCreateUltraThreadContext @ 0x14033BC80 (MiCreateUltraThreadContext.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiSufficientAvailablePages @ 0x1403526D0 (MiSufficientAvailablePages.c)
 *     MiConvertContiguousPages @ 0x1403932BC (MiConvertContiguousPages.c)
 *     MiFreeContiguousPages @ 0x140398278 (MiFreeContiguousPages.c)
 *     MiDereferencePageRuns @ 0x1403F89A4 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x1403F8A50 (MiReferencePageRuns.c)
 *     MiFindBestLargePageStealCandidates @ 0x140443E10 (MiFindBestLargePageStealCandidates.c)
 *     MiSetPfnOwnedAndActive @ 0x140450A30 (MiSetPfnOwnedAndActive.c)
 *     MiTrimNoStealPagesFromWorkingSets @ 0x1404AB968 (MiTrimNoStealPagesFromWorkingSets.c)
 *     MiFindLargeNodePage @ 0x1404CB09C (MiFindLargeNodePage.c)
 *     MiInitializeFoundLargeNodePage @ 0x1404F5F7C (MiInitializeFoundLargeNodePage.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiFindContiguousPagesEx(
        unsigned __int64 a1,
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
  unsigned __int64 v15; // r14
  unsigned int v16; // r12d
  __int64 v18; // r15
  __int64 CurrentIrql; // rdi
  __int64 v20; // r9
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
  __int64 v42; // rsi
  unsigned int v43; // edi
  unsigned int v45; // r14d
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // ecx
  __int64 v49; // rbx
  unsigned int v50; // esi
  unsigned int v51; // ecx
  unsigned int j; // r9d
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // r8
  __int64 v55; // r8
  __int64 *v56; // rcx
  int v57; // r11d
  _DWORD *v58; // r10
  unsigned int i; // ecx
  __int64 v60; // rax
  __int64 LargeNodePage; // rax
  __int64 v62; // rdi
  unsigned __int8 v63; // r15
  __int64 v64; // rdi
  int v65; // ebx
  __int64 v66; // rdi
  ULONG_PTR v67; // rcx
  unsigned int v68; // eax
  __int64 v69; // rcx
  _DWORD *v70; // rcx
  unsigned int v71; // eax
  char v72; // r9
  ULONG_PTR v73; // rdi
  __int64 v74; // rdx
  _QWORD *v75; // rcx
  __int64 v76; // rax
  unsigned int v77; // r14d
  _DWORD *v78; // r12
  _DWORD *v79; // r15
  _DWORD *v80; // rsi
  _DWORD *v81; // rax
  unsigned int v82; // edx
  __int64 v83; // r9
  __int64 v84; // rcx
  unsigned int v85; // eax
  unsigned int v86; // r8d
  unsigned __int64 v87; // rcx
  int v88; // edx
  __int64 v89; // rax
  __int64 v90; // rcx
  unsigned int v91; // edx
  int v92; // [rsp+20h] [rbp-E0h]
  __int64 v93; // [rsp+20h] [rbp-E0h]
  signed int v94; // [rsp+28h] [rbp-D8h]
  int v95; // [rsp+50h] [rbp-B0h]
  int v96; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v97; // [rsp+58h] [rbp-A8h]
  unsigned int v98; // [rsp+60h] [rbp-A0h]
  signed int v99; // [rsp+64h] [rbp-9Ch]
  int v100; // [rsp+68h] [rbp-98h]
  unsigned int v101; // [rsp+6Ch] [rbp-94h]
  __int64 v102; // [rsp+70h] [rbp-90h]
  unsigned __int64 v103; // [rsp+78h] [rbp-88h]
  _BYTE *v104; // [rsp+80h] [rbp-80h]
  _DWORD *v105; // [rsp+88h] [rbp-78h]
  BOOL v106; // [rsp+90h] [rbp-70h]
  unsigned int v107; // [rsp+94h] [rbp-6Ch]
  int *v108; // [rsp+98h] [rbp-68h]
  _DWORD *v109; // [rsp+A0h] [rbp-60h]
  int v110; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v111; // [rsp+B0h] [rbp-50h]
  __int64 v112; // [rsp+B8h] [rbp-48h]
  __int64 v113; // [rsp+C0h] [rbp-40h]
  __int64 v114; // [rsp+C8h] [rbp-38h]
  _BYTE *v115; // [rsp+D0h] [rbp-30h]
  __int64 v116; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v117; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v118; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v119; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v120; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v121; // [rsp+108h] [rbp+8h]
  __int64 v122; // [rsp+110h] [rbp+10h]
  __int64 v123; // [rsp+118h] [rbp+18h]
  __int64 v124; // [rsp+120h] [rbp+20h]
  unsigned __int64 v125; // [rsp+128h] [rbp+28h]
  ULONG_PTR *v126; // [rsp+130h] [rbp+30h]
  unsigned int *v127; // [rsp+138h] [rbp+38h]
  __int128 v128; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v129[2]; // [rsp+150h] [rbp+50h] BYREF
  _OWORD v130[2]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v131; // [rsp+180h] [rbp+80h]
  __int128 v132; // [rsp+190h] [rbp+90h]
  _QWORD v133[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v134[128]; // [rsp+1B0h] [rbp+B0h] BYREF

  v14 = a2;
  v15 = a1;
  v16 = a10;
  v97 = a6;
  v107 = a7;
  v112 = a12;
  v111 = a3;
  v115 = a2;
  v103 = a1;
  v126 = a14;
  v99 = a8;
  v95 = a10;
  v102 = a13;
  v128 = 0LL;
  memset_0(v134, 0, sizeof(v134));
  v18 = 0LL;
  v96 = 0;
  *(_QWORD *)&v132 = 0LL;
  DWORD2(v132) = 0;
  v116 = 0LL;
  v117 = 0LL;
  v119 = 0LL;
  v123 = 0LL;
  memset(v130, 0, sizeof(v130));
  v131 = 0LL;
  if ( (MiZeroCont & 1) != 0 )
    memset_0(MiCont, 0, 0x354uLL);
  if ( a13 )
    *(_DWORD *)(a13 + 12) = 0;
  CurrentIrql = KeGetCurrentIrql();
  v113 = CurrentIrql;
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
    v95 = a10 | 8;
  }
  if ( (v16 & 0x20000000) == 0 && (int)MiAcquireNonPagedResources(v15, v97, 0LL, 2LL) < 0 )
    return 3221225626LL;
  if ( v112 )
    v110 = v97 + (*(_DWORD *)(v112 + 40) >> 12);
  else
    v110 = 0;
  if ( (v16 & 0x40) != 0 )
  {
    if ( v14 == (_BYTE *)0x100000 )
      v16 |= 0x8000u;
    v55 = !_bittest64(&KeFeatureBits, 0x25u);
    v56 = &MiPageSizes[v55];
    do
    {
      if ( v97 == *v56 )
        break;
      LODWORD(v55) = v55 + 1;
      ++v56;
    }
    while ( (unsigned int)v55 < 3 );
    v57 = (unsigned __int16)KeNumberNodes;
    if ( (((unsigned __int8)&v120 + 96) & 4) != 0 )
      LODWORD(v130[0]) = (unsigned __int16)KeNumberNodes;
    v58 = v130;
    if ( (((unsigned __int8)&v120 + 96) & 4) != 0 )
      v58 = (_DWORD *)v130 + 1;
    memset64(v58, (unsigned __int16)KeNumberNodes | ((unsigned __int64)(unsigned __int16)KeNumberNodes << 32), 1uLL);
    if ( (((unsigned __int8)&v120 + 96) & 4) == 0 )
      v58[2] = v57;
    for ( i = 0; ; ++i )
    {
      if ( i >= 3 )
        goto LABEL_111;
      v60 = i;
      if ( a4 == MiPageSizes[v60] )
        break;
    }
    v18 = MiDemandLargePageCoalesceTimeBounds[v60];
LABEL_111:
    v132 = 0LL;
    *((_QWORD *)&v131 + 1) = v18;
    LargeNodePage = MiFindLargeNodePage(v15, a8, v55, v55, v16, v107, (__int64)v130);
    v62 = LargeNodePage;
    if ( LargeNodePage )
    {
      MiGetPfnPageSizeIndex(LargeNodePage);
      MiInitializeFoundLargeNodePage(v62, v16, a11);
      v42 = v97;
      v73 = 0xAAAAAAAAAAAAAAABuLL * ((v62 + 0x220000000000LL) >> 4);
      if ( v73 + v97 - 1 <= v111 )
      {
        v74 = v112;
        *v126 = v73;
        if ( v74 )
        {
          v75 = (_QWORD *)(v74 + 8 * (((unsigned __int64)*(unsigned int *)(v74 + 40) >> 12) + 6));
          if ( v42 )
          {
            v76 = v42;
            do
            {
              *v75++ = v73++;
              --v76;
            }
            while ( v76 );
          }
          *(_DWORD *)(v74 + 40) += (_DWORD)v42 << 12;
        }
        return 0LL;
      }
      MiFreeContiguousPages(v73);
      v43 = -1073741801;
    }
    else
    {
      v42 = v97;
      v43 = -1073741801;
    }
    goto LABEL_56;
  }
  if ( (*(_DWORD *)(v15 + 4) & 0x10) == 0 && !(unsigned int)MiSufficientAvailablePages(v15, v97 + 160) )
  {
    v42 = v97;
    v43 = -1073741670;
    goto LABEL_56;
  }
  MiInitializePageColorBase(&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink, 3LL, 0LL, &v128);
  v20 = 4LL;
  if ( (_BYTE)CurrentIrql != 2 )
    v20 = 0LL;
  if ( !(unsigned int)MiCreateUltraThreadContext(v134, &v128, 8LL, v20) )
  {
    v42 = v97;
    v43 = -1073741670;
    goto LABEL_56;
  }
  v106 = 0;
  if ( (v16 & 0xB800008) == 0x8000000 )
    v106 = (MiFlags & 0x30) != 0;
  if ( a8 >= (unsigned __int16)KeNumberNodes )
    v99 = a8 | 0x80000000;
  v21 = (unsigned int *)MiReferencePageRuns(v15, 1LL);
  v23 = v102;
  v24 = v21;
  v108 = (int *)v21;
  v25 = -1;
  v124 = 0LL;
  v26 = *v21 + 1LL;
  v114 = 0LL;
  v118 = (unsigned __int64)v14;
  v127 = &v24[4 * v26];
  v27 = 0LL;
  v122 = 0LL;
  if ( ((a4 - 1) & a4) == 0 )
    v27 = a4;
  LODWORD(v105) = 0;
  v120 = v27;
  v121 = v97;
  LOBYTE(v123) = (v16 & 0x2000) != 0;
  v98 = 0;
  if ( !v102 )
    goto LABEL_26;
  if ( (v16 & 0x2000) != 0
    || MmNumberOfChannels != 1
    || v24 != *(unsigned int **)(v15 + 32)
    || *(_QWORD *)(v102 + 16) == -1LL && *(_DWORD *)(v102 + 8) >= *(_DWORD *)(v102 + 4) )
  {
    *(_QWORD *)(v102 + 4) = 0LL;
LABEL_26:
    v28 = v23;
    goto LABEL_27;
  }
  if ( v97 == 16 )
  {
    v77 = 2;
    v78 = &unk_140EF5198;
    v79 = &unk_140EF518C;
    v80 = &unk_140EF51A4;
    v81 = &unk_140EF51B0;
  }
  else if ( v97 == 512 )
  {
    v77 = 1;
    v78 = &unk_140EF5194;
    v79 = &unk_140EF5188;
    v80 = &unk_140EF51A0;
    v81 = &unk_140EF51AC;
  }
  else
  {
    v77 = 0;
    v78 = &unk_140EF5190;
    v79 = &unk_140EF5184;
    v80 = &unk_140EF519C;
    v81 = &unk_140EF51A8;
  }
  v105 = v81;
  v82 = 1;
  v109 = v79;
  v100 = 1;
  v83 = 4LL * v77;
  ++*(int *)((char *)&MiCont[123] + v83);
  LODWORD(v84) = *(_DWORD *)(v23 + 8);
  v85 = *(_DWORD *)(v23 + 4);
  v104 = (_BYTE *)v83;
  if ( (unsigned int)v84 < v85 )
  {
    if ( *(_QWORD *)(v23 + 16) != -1LL )
      v82 = 2;
    v100 = v82;
  }
  v86 = 0;
LABEL_176:
  v101 = v86;
  if ( v86 >= v82 )
  {
    v28 = v102;
    ++MiCont[v77 + 141];
    qsort((void *)(v28 + 24), *(unsigned int *)(v28 + 4), 8uLL, MiSortBestStealCandidates);
    v15 = v103;
    LODWORD(v105) = 1;
LABEL_27:
    v29 = *(_DWORD **)(v15 + 16);
    v109 = v29;
    while ( 1 )
    {
      while ( 1 )
      {
        v30 = (unsigned __int8)MmNumberOfChannels;
        v31 = 0LL;
        v104 = 0LL;
        if ( (unsigned __int8)MmNumberOfChannels > 1u )
        {
          v32 = v99;
          if ( v99 >= 0 )
          {
            v69 = 14304LL * (unsigned int)v99;
          }
          else
          {
            if ( v25 == -1 )
            {
              v67 = v111;
              if ( v111 > *(_QWORD *)(v15 + 18504) )
                v67 = *(_QWORD *)(v15 + 18504);
              v68 = MiPageToNode(v67);
              v22 = (unsigned __int16)KeNumberNodes;
              v25 = v68;
              v31 = 0LL;
              v114 = qword_140E2DC10 + 4LL * v68 * (unsigned __int16)KeNumberNodes;
              v124 = v114 + 4LL * (unsigned __int16)KeNumberNodes;
            }
            v69 = 14304LL * v25;
          }
          v70 = &v29[v69];
          if ( (v70[3796] & 1) != 0 )
          {
            v31 = (char *)v70 + 15235;
            v104 = (char *)v70 + 15235;
            if ( !a9 )
            {
              v71 = 0;
              if ( (_BYTE)v30 )
              {
                do
                {
                  if ( !*v31 )
                    break;
                  ++v31;
                  ++v71;
                }
                while ( v71 < v30 );
                v104 = v31;
              }
              LOBYTE(v30) = 1;
            }
          }
        }
        else
        {
          v32 = v99;
        }
        v33 = v108;
        v115 = &v31[(unsigned __int8)v30];
        do
        {
          v119 = v111;
          v34 = *v33;
          v100 = 0;
LABEL_32:
          while ( v34 )
          {
            v35 = v34 - 1;
            v101 = v35;
            v36 = v127[2 * v35];
            v22 = LOBYTE(v127[2 * v35 + 1]);
            v35 *= 2LL;
            v116 = *(_QWORD *)&v33[2 * v35 + 4];
            v117 = *(_QWORD *)&v33[2 * v35 + 6] + v116;
            if ( v118 >= v117 )
              break;
            if ( v32 >= 0 )
            {
              v34 = v101;
              if ( (_DWORD)v36 != v32 )
                continue;
            }
            if ( v31 )
            {
              v34 = v101;
              if ( (_BYTE)v22 != *v31 )
                continue;
            }
            while ( 1 )
            {
              if ( !(unsigned int)MiCollapseRunTopDown(&v116, v22)
                || !*(_QWORD *)(*(_QWORD *)(v15 + 16) + 57216 * v36 + 14976) && (MiFlags & 0x30) != 0 )
              {
                v33 = v108;
                v32 = v99;
                v31 = v104;
                v34 = v101;
                goto LABEL_32;
              }
              v37 = v117;
              v38 = v121;
              if ( (_BYTE)v123 && v121 > v117 - v116 )
                v38 = v117 - v116;
              v39 = 0LL;
              v96 = 0;
              v40 = v117 - v38;
              v125 = v117 - v38;
              if ( v28 )
              {
                v51 = *(_DWORD *)(v28 + 4);
                if ( v51 )
                {
                  for ( j = v100; j < v51; v100 = j )
                  {
                    if ( v40 >= *(_QWORD *)(v28 + 8LL * j + 24) )
                    {
                      if ( v40 == *(_QWORD *)(v28 + 8LL * j + 24) )
                      {
                        v39 = v120;
                        v100 = j + 1;
                      }
                      break;
                    }
                    ++j;
                  }
                }
              }
              v41 = 48 * v40 - 0x220000000000LL;
              if ( !(_BYTE)v123 )
              {
                if ( v39 )
                  goto LABEL_45;
                v39 = MiPfnsWorthTrying(v103, 48 * (int)v40, v121, v95, (__int64)&v96);
              }
              if ( !v39 )
              {
                if ( (v96 & 1) != 0 )
                {
                  ++dword_140EF5168;
                  MiAdjustCachedStacks(v103, 1);
                }
                v45 = 0;
                v39 = MiClaimPhysicalRun(v103, v40, v38, v119, (__int64)v134, v95, 0, v112, 0LL, &v96);
                if ( v112 )
                {
                  v48 = *(_DWORD *)(v112 + 40) >> 12;
                  if ( v48 == v110 )
                    goto LABEL_73;
                  v121 = (unsigned int)(v110 - v48);
                }
                else if ( !v39 )
                {
                  goto LABEL_73;
                }
                if ( *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v41 + 40) >> 43) & 0x3FFLL)) != v103 )
                  goto LABEL_71;
                if ( !MiIsPageOnBadList(48 * v40 - 0x220000000000LL) )
                {
                  LODWORD(v105) = 1;
LABEL_71:
                  v37 = v117;
                  goto LABEL_45;
                }
                if ( (_BYTE)v113 == 2 )
                {
                  v63 = 17;
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
                  v63 = MiLockPageInline(48 * v40 - 0x220000000000LL, v22, v46, v47);
                }
                if ( MiIsPageOnBadList(v41) )
                {
                  if ( (v95 & 0x10000000) != 0 )
                  {
                    MiUnlockPage(v41, v63);
                    v15 = v103;
                    v28 = v102;
                    v34 = 0;
                    v33 = v108;
                    v32 = v99;
                    v31 = v104;
                    v106 = 0;
                    goto LABEL_32;
                  }
                }
                else
                {
                  LODWORD(v105) = 1;
                }
                MiUnlockPage(v41, v63);
                v37 = v117;
              }
LABEL_45:
              if ( (v96 & 2) != 0 )
                v98 |= 1u;
              if ( v39 >= v37 - v116 || !(_BYTE)v123 && v37 - v116 - v39 < v38 )
                v119 = v37 - v39 - 1;
              v28 = v102;
              v117 = v37 - v39;
              v15 = v103;
            }
          }
          if ( !v31 )
            goto LABEL_53;
          v104 = ++v31;
        }
        while ( v31 < v115 );
        if ( v25 == -1 )
          break;
        v22 = v114 + 4;
        v114 = v22;
        if ( v22 == v124 )
          break;
        v25 = *(_DWORD *)v22;
        v29 = v109;
      }
LABEL_53:
      if ( !v106 || !(_DWORD)v105 )
      {
        v16 = v95;
        v42 = v97;
        goto LABEL_55;
      }
      v42 = v97;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x100000) != 0 )
      {
        v129[1] = 16LL;
        v90 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        v133[1] = v97 << 12;
        v133[0] = v90;
        v129[0] = v133;
        EtwTraceKernelEvent((int)v129, 1, 0x20100000u, 625, 5249538);
      }
      ++dword_140EF52AC;
      v16 = v95;
      v91 = v98;
      if ( (v95 & 0x4000000) == 0 )
        v91 = v98 & 0xFFFFFFFE;
      if ( !(unsigned int)MiTrimNoStealPagesFromWorkingSets(v15, v91 | 2, v33) )
        break;
      v29 = v109;
      v25 = -1;
      v106 = 0;
      v28 = 0LL;
      LODWORD(v105) = 0;
      v98 = 0;
      v102 = 0LL;
    }
    v33 = v108;
LABEL_55:
    v43 = -1073741801;
    MiDereferencePageRuns(v33, v22);
LABEL_56:
    MiDeleteUltraThreadContext(v134);
    if ( (v16 & 0x20000000) == 0 )
      MiReleaseNonPagedResources(v15, v42);
    return v43;
  }
  if ( (_DWORD)v84 == v85 )
  {
    v87 = v111;
    ++*(int *)((char *)&MiCont[126] + v83);
    v88 = (int)v108;
    v94 = v99;
    v93 = v87;
    LODWORD(v87) = v103;
    *(_DWORD *)(v23 + 8) = 0;
    MiFindBestLargePageStealCandidates(v87, v88, v77, (_DWORD)v14, v93, v94, v23);
    v23 = v102;
    v83 = (__int64)v104;
    if ( *(_DWORD *)(v102 + 4) )
      ++*v79;
    else
      ++*v78;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v84 = *(unsigned int *)(v23 + 8);
      v85 = *(_DWORD *)(v23 + 4);
      if ( (unsigned int)v84 >= v85 )
      {
        v79 = v109;
        v86 = v101 + 1;
        v82 = v100;
        LODWORD(v14) = (_DWORD)v115;
        goto LABEL_176;
      }
      v125 = *(_QWORD *)(v23 + 8 * v84 + 24);
      v40 = v125;
      *(_DWORD *)(v23 + 8) = v84 + 1;
      v41 = 48 * v40 - 0x220000000000LL;
      if ( !MiPfnsWorthTrying(v103, 48 * (int)v40, v97, v95, (__int64)&v96) )
        break;
      v83 = (__int64)v104;
      v23 = v102;
      ++*(int *)((char *)&MiCont[138] + (_QWORD)v104);
    }
    if ( (v96 & 1) != 0 )
    {
      ++dword_140EF5168;
      MiAdjustCachedStacks(v103, 1);
    }
    if ( !MiClaimPhysicalRun(v103, v40, v97, v111, (__int64)v134, v95, 0, v112, 0LL, &v96) )
      break;
    v83 = (__int64)v104;
    v23 = v102;
    ++*v105;
    if ( (v96 & 2) != 0 )
      v98 |= 1u;
  }
  v89 = v102;
  ++*v80;
  *(_DWORD *)(v89 + 12) = 1;
LABEL_73:
  MiDereferencePageRuns(v108, v22);
  MiDeleteUltraThreadContext(v134);
  v49 = v97;
  if ( (v95 & 0x2000) != 0 )
  {
    v50 = v107;
  }
  else
  {
    v53 = (v40 + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v54 = (v97 + v40) & 0xFFFFFFFFFFFFFE00uLL;
    if ( v53 < v54 && (v95 & 0x80001000) != 0x80001000 )
    {
      v72 = 7;
      if ( (_BYTE)v113 != 2 )
        v72 = 3;
      MiUpdateLargePageBitMap(v103, v53, v54 - v53, v72);
    }
    v50 = v107;
    MiConvertContiguousPages(v41, v49, v107, (unsigned __int8)v113);
  }
  if ( (v95 & 0x40000000) == 0 )
  {
    v64 = 3 * v49;
    v65 = a11 | 4;
    v66 = v41 + 16 * v64;
    if ( (_BYTE)v113 != 2 )
      v65 = a11;
    do
    {
      LOWORD(v92) = ((v95 & 0x100000) != 0) + 1;
      MiSetPfnOwnedAndActive(v41, v65, -8, v50, v92);
      v41 += 48LL;
    }
    while ( v41 != v66 );
    v40 = v125;
  }
  *v126 = v40;
  return 0LL;
}
