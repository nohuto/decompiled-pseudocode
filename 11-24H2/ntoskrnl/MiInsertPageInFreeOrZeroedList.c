/*
 * XREFs of MiInsertPageInFreeOrZeroedList @ 0x14024EF60
 * Callers:
 *     MiDeleteTransitionPte @ 0x140204FF0 (MiDeleteTransitionPte.c)
 *     MiDecommitFreePage @ 0x1402068E0 (MiDecommitFreePage.c)
 *     MiDeleteSectionCluster @ 0x140216B54 (MiDeleteSectionCluster.c)
 *     MiDiscardTransitionPteEx @ 0x1402188CC (MiDiscardTransitionPteEx.c)
 *     MiFreeSmallPageFromMdl @ 0x140218CC8 (MiFreeSmallPageFromMdl.c)
 *     MiFinishLargePageFree @ 0x14021B7C8 (MiFinishLargePageFree.c)
 *     MiDeleteShadowStackPtes @ 0x14021EA48 (MiDeleteShadowStackPtes.c)
 *     MiPageFreeToZero @ 0x140220160 (MiPageFreeToZero.c)
 *     MiWsleFree @ 0x140248D20 (MiWsleFree.c)
 *     MiCompletePrivateZeroFault @ 0x14024A090 (MiCompletePrivateZeroFault.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiPfnShareCountIsZero @ 0x14024D700 (MiPfnShareCountIsZero.c)
 *     MiPurgePartitionStandby @ 0x14024DAA0 (MiPurgePartitionStandby.c)
 *     MiReturnFreeZeroPage @ 0x14024EE00 (MiReturnFreeZeroPage.c)
 *     MiCoalesceFreeSmallPages @ 0x140250600 (MiCoalesceFreeSmallPages.c)
 *     MiFreeLargePageChain @ 0x1402648B8 (MiFreeLargePageChain.c)
 *     MiFreeLargeZeroPages @ 0x14026DAE0 (MiFreeLargeZeroPages.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiInsertDemotedPages @ 0x1402EF010 (MiInsertDemotedPages.c)
 *     MiWriteCompletePfn @ 0x1402FA874 (MiWriteCompletePfn.c)
 *     MiDrainZeroLookasides @ 0x1402FD2B0 (MiDrainZeroLookasides.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiRelinkStandbyPage @ 0x140300158 (MiRelinkStandbyPage.c)
 *     MiPfnReferenceCountIsZero @ 0x140300260 (MiPfnReferenceCountIsZero.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiReturnPhysicalPoolPages @ 0x14034B914 (MiReturnPhysicalPoolPages.c)
 *     MiDeleteClusterPage @ 0x14034E8B0 (MiDeleteClusterPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403D2314 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRebuildLargePage @ 0x1403F7120 (MiRebuildLargePage.c)
 *     MiPruneStandbyPages @ 0x1403F7714 (MiPruneStandbyPages.c)
 *     MiLargePagePromote @ 0x140423C14 (MiLargePagePromote.c)
 *     MiLockAndInsertPageInFreeList @ 0x14045BA98 (MiLockAndInsertPageInFreeList.c)
 *     MiDeleteEnclavePage @ 0x14046D37C (MiDeleteEnclavePage.c)
 *     MiMakePageBad @ 0x140477B64 (MiMakePageBad.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x14049DD64 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiFreePageFileHashPfn @ 0x1404A3400 (MiFreePageFileHashPfn.c)
 *     MiPurgeZeroListHead @ 0x1404BFBD4 (MiPurgeZeroListHead.c)
 *     MiDeleteSubsectionLargePages @ 0x1404C3EC4 (MiDeleteSubsectionLargePages.c)
 *     MiReturnEnclavePage @ 0x1404CE13C (MiReturnEnclavePage.c)
 *     MiFlushFileOnlyDeleteChain @ 0x1404F26E4 (MiFlushFileOnlyDeleteChain.c)
 *     MiEnableNewPfns @ 0x14066DC8C (MiEnableNewPfns.c)
 *     MiUnlinkBadPages @ 0x1406759CC (MiUnlinkBadPages.c)
 *     MiReturnPfnList @ 0x14067AC80 (MiReturnPfnList.c)
 *     MiInsertPossiblyBadPage @ 0x14068461C (MiInsertPossiblyBadPage.c)
 *     MiTransferPartitionPageRun @ 0x14068C62C (MiTransferPartitionPageRun.c)
 *     MiScrubLargePage @ 0x14068EB34 (MiScrubLargePage.c)
 *     MxInsertFreePages @ 0x140C54EE0 (MxInsertFreePages.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402277A0 (MiUpdateLargePageCandidateValue.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140250420 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiCoalesceFreeSmallPages @ 0x140250600 (MiCoalesceFreeSmallPages.c)
 *     MiFreePageToSlabAllocator @ 0x140250F18 (MiFreePageToSlabAllocator.c)
 *     MI_NODE_FROM_PFN @ 0x140251340 (MI_NODE_FROM_PFN.c)
 *     MiClearFileOnlyPfn @ 0x140251428 (MiClearFileOnlyPfn.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x140261770 (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x140261834 (MiUpdateAvailableEventsAtDpc.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiRecordLargePageCandidate @ 0x1403135A4 (MiRecordLargePageCandidate.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     VslRemoveProtectedPage @ 0x1403A9AF4 (VslRemoveProtectedPage.c)
 *     MiWakeZeroingThreads @ 0x140412F50 (MiWakeZeroingThreads.c)
 *     VslMakeProtectedPageExecutable @ 0x1404921E8 (VslMakeProtectedPageExecutable.c)
 *     MiArePageContentsZero @ 0x1404C33B0 (MiArePageContentsZero.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

int __fastcall MiInsertPageInFreeOrZeroedList(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  signed __int64 v2; // rdi
  __int64 v3; // r8
  PSLIST_ENTRY v5; // r14
  __int64 v6; // rax
  unsigned int v7; // r15d
  unsigned __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // r12
  unsigned int v12; // r13d
  char v13; // al
  signed __int64 v14; // rdx
  signed __int64 v15; // rax
  signed __int64 v16; // rdx
  char v17; // ecx^2
  __int64 v18; // rax
  int v19; // ecx
  signed __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rdi
  unsigned int v23; // eax
  __int16 v24; // r9
  BOOL v25; // r11d
  unsigned int v26; // edi
  __int64 v27; // r10
  _SLIST_ENTRY *v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // r8
  unsigned __int64 v33; // r12
  int v34; // eax
  __int64 v35; // r13
  __int64 v36; // r14
  __int64 v37; // rdi
  unsigned __int64 v38; // r12
  __int64 v39; // r10
  __int64 *v40; // rdx
  __int64 *v41; // r8
  __int64 v42; // r11
  __int64 v43; // r9
  __int64 *v44; // rsi
  __int64 v45; // r15
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // r8
  unsigned __int64 v49; // rsi
  __int64 v50; // r12
  unsigned __int64 v51; // r15
  unsigned __int64 v52; // r15
  __int64 v53; // r10
  __int64 v54; // r9
  __int64 v55; // r13
  __int64 v56; // rax
  __int64 v57; // rsi
  unsigned __int8 v58; // r12
  __int64 v59; // rdx
  __int64 v60; // rsi
  unsigned int v61; // r15d
  __int64 v62; // rdx
  unsigned __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rdx
  ULONG_PTR v66; // r12
  __int64 v67; // rax
  __int64 v68; // r14
  __int64 v69; // rcx
  struct _KEVENT *v70; // r13
  unsigned __int64 *v71; // r9
  __int64 v72; // rax
  __int64 v73; // rcx
  unsigned __int64 v74; // rax
  unsigned int v75; // r8d
  __int16 v76; // r14
  unsigned __int64 v77; // rcx
  __int64 v78; // r11
  unsigned __int64 v79; // r12
  unsigned __int64 v80; // r14
  unsigned __int64 v81; // rdi
  unsigned __int64 v82; // rcx
  unsigned __int64 v83; // rsi
  unsigned __int64 v84; // rdi
  unsigned __int64 v85; // r9
  signed __int64 *v86; // rdx
  __int64 *v87; // r8
  __int64 v88; // r10
  __int64 v89; // rcx
  unsigned __int64 v90; // rdx
  unsigned int v91; // eax
  __int64 v92; // r12
  __int64 v93; // r10
  _QWORD *v94; // r11
  unsigned int i; // r8d
  unsigned __int64 v96; // rcx
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // rdx
  unsigned int v99; // ebx
  __int64 v100; // rdi
  unsigned __int64 v101; // r10
  __int64 v102; // rdx
  volatile signed __int32 *v103; // r8
  __int64 v104; // r10
  signed __int64 v105; // rdx
  signed __int64 v106; // r8
  signed __int64 v107; // rcx
  __int64 v108; // rax
  unsigned __int64 v109; // r9
  __int64 *v110; // r8
  signed __int64 *v111; // rdx
  __int64 v112; // r10
  __int64 v113; // rcx
  volatile LONG *v114; // rcx
  KIRQL v115; // al
  __int64 v116; // rbx
  unsigned int v117; // eax
  unsigned __int64 v118; // rcx
  signed __int64 v119; // rtt
  unsigned __int64 v120; // rax
  unsigned __int64 v121; // r14
  unsigned __int64 v122; // rcx
  unsigned __int64 v123; // rax
  __int64 v124; // r8
  int v125; // eax
  ULONG_PTR v126; // rdi
  int v127; // eax
  int PagePrivilege; // eax
  ULONG_PTR v129; // rdi
  int v130; // eax
  int v131; // r12d
  __int64 v132; // rsi
  int v133; // ecx
  __int64 v134; // rax
  struct _KEVENT *v135; // rsi
  bool v136; // zf
  unsigned int v137; // r9d
  unsigned __int64 v138; // rcx
  signed __int32 v140[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v141; // [rsp+30h] [rbp-D0h]
  __int64 v142; // [rsp+38h] [rbp-C8h]
  __int64 v143; // [rsp+40h] [rbp-C0h]
  __int64 v144; // [rsp+48h] [rbp-B8h]
  struct _KEVENT *v145; // [rsp+50h] [rbp-B0h]
  __int64 v146; // [rsp+58h] [rbp-A8h]
  int v147; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned __int64 v148; // [rsp+68h] [rbp-98h]
  unsigned int v149; // [rsp+70h] [rbp-90h]
  volatile signed __int64 *v150; // [rsp+78h] [rbp-88h]
  __int64 v151; // [rsp+88h] [rbp-78h]
  PSLIST_ENTRY ListEntry; // [rsp+90h] [rbp-70h]
  __int128 v153; // [rsp+98h] [rbp-68h] BYREF
  __int128 v154; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v155; // [rsp+B8h] [rbp-48h]
  __int128 v156; // [rsp+C0h] [rbp-40h]
  __int128 v157; // [rsp+D0h] [rbp-30h]
  signed __int64 v158; // [rsp+E0h] [rbp-20h]
  __int128 v159; // [rsp+E8h] [rbp-18h]
  __int128 v160; // [rsp+F8h] [rbp-8h]
  __int128 v161; // [rsp+108h] [rbp+8h]
  void *retaddr; // [rsp+168h] [rbp+68h]
  int v164; // [rsp+170h] [rbp+70h]
  char v165; // [rsp+170h] [rbp+70h]
  int v166; // [rsp+170h] [rbp+70h]
  int v167; // [rsp+170h] [rbp+70h]
  int Next; // [rsp+170h] [rbp+70h]
  int v169; // [rsp+170h] [rbp+70h]
  unsigned int v170; // [rsp+178h] [rbp+78h]
  signed __int16 v171; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v172; // [rsp+188h] [rbp+88h]

  v170 = a2;
  v2 = 48 * BugCheckParameter2;
  v3 = (unsigned int)a2;
  v5 = (PSLIST_ENTRY)(48 * BugCheckParameter2 - 0x220000000000LL);
  v6 = *((_QWORD *)&v5[2].Next + 1);
  ListEntry = v5;
  if ( (v6 & 0x10000000000LL) != 0 )
  {
    v7 = 3 - ((HIDWORD(v5[2].Next) >> 27) & 3);
    if ( v7 == 3 )
      v7 = 3;
  }
  else
  {
    v7 = 3;
  }
  v8 = *((_QWORD *)&v5[2].Next + 1);
  v141 = v7;
  if ( (v8 & 0x20000000000000LL) != 0 )
  {
    v153 = 0LL;
    if ( ((v8 >> 60) & 7) == 3 )
    {
      PagePrivilege = MiGetPagePrivilege((ULONG_PTR)v5, 1, (unsigned __int64 *)&v153);
      if ( PagePrivilege )
      {
        v129 = 0xAAAAAAAAAAAAAAABuLL * (v2 >> 4);
        v130 = (PagePrivilege & 0x20) != 0
             ? VslMakeProtectedPageExecutable(v129, 0LL, 0LL)
             : VslRemoveProtectedPage(v129, &v153, 0LL);
        if ( v130 < 0 )
          KeBugCheckEx(0x1Au, 0x5150BuLL, v129, 0LL, 0LL);
      }
      MiSetPfnIdentity((__int64)v5, 0);
    }
    LODWORD(v20) = MiClearFileOnlyPfn(v5, a2, v3);
  }
  else
  {
    v9 = 0;
    v145 = 0LL;
    v10 = (*((_QWORD *)&v5[2].Next + 1) >> 43) & 0x3FFLL;
    v148 = MiPageSizes[v7];
    v11 = *((_QWORD *)qword_140E300C8 + v10);
    v143 = v11;
    if ( (a2 & 1) != 0 )
    {
      v150 = (volatile signed __int64 *)(v11 + 2880);
      if ( (MiFlags & 0x80u) != 0LL && (++dword_140E302B0 & MmPageValidationFrequency) == 0 )
      {
        MiArePageContentsZero(BugCheckParameter2);
        v3 = v170;
      }
      v12 = 0;
      v172 = 0;
    }
    else
    {
      if ( (a2 & 0x100) != 0 )
      {
        *((_QWORD *)&v5[1].Next + 1) &= ~0x4000000000000000uLL;
        Next = (int)v5[2].Next;
        BYTE2(Next) = BYTE2(Next) & 0xF8 | 5;
        LODWORD(v5[2].Next) = Next;
        v169 = (int)v5[2].Next;
        HIBYTE(v169) |= 0x10u;
        LODWORD(v5[2].Next) = v169;
        LODWORD(v20) = MiInsertPageInList(v5, 256LL);
        return v20;
      }
      v172 = 1;
      v150 = (volatile signed __int64 *)(v11 + 3008);
      v12 = 1;
    }
    v13 = (*((_QWORD *)&v5[2].Next + 1) >> 60) & 7;
    v154 = 0LL;
    if ( v13 == 3 )
    {
      v125 = MiGetPagePrivilege((ULONG_PTR)v5, 1, (unsigned __int64 *)&v154);
      if ( v125 )
      {
        v126 = 0xAAAAAAAAAAAAAAABuLL * (v2 >> 4);
        v127 = (v125 & 0x20) != 0
             ? VslMakeProtectedPageExecutable(v126, 0LL, 0LL)
             : VslRemoveProtectedPage(v126, &v154, 0LL);
        if ( v127 < 0 )
          KeBugCheckEx(0x1Au, 0x5150BuLL, v126, 0LL, 0LL);
      }
      MiSetPfnIdentity((__int64)v5, 0);
      v3 = v170;
    }
    *((_QWORD *)&v5[1].Next + 1) &= ~0x4000000000000000uLL;
    _InterlockedOr(v140, 0);
    *((_QWORD *)&v5[1].Next + 1) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (*((_QWORD *)&v5[1].Next
                                                                                                 + 1) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
    LODWORD(v142) = v5[2].Next;
    v155 = 0LL;
    BYTE3(v142) &= 0xF8u;
    LODWORD(v5[2].Next) = v142;
    *((_QWORD *)&v5->Next + 1) |= 0x8000000000000000uLL;
    v158 = *((_QWORD *)&v5[2].Next + 1);
    v14 = v158;
    v156 = 0LL;
    v157 = 0LL;
    v159 = 0LL;
    v160 = 0LL;
    v161 = 0LL;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)&v5[2].Next + 1, v158 & 0x8FFFFFFFFFFFFFFFuLL, v158);
    *((_QWORD *)&v161 + 1) = v15;
    if ( v14 != v15 )
    {
      do
      {
        v158 = v15;
        v16 = v15;
        v15 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)&v5[2].Next + 1,
                v15 & 0x8FFFFFFFFFFFFFFFuLL,
                v15);
        *((_QWORD *)&v161 + 1) = v15;
      }
      while ( v16 != v15 );
    }
    v18 = *((_QWORD *)&v5[2].Next + 1);
    LODWORD(v142) = v5[2].Next;
    v17 = BYTE2(v142);
    BYTE3(v142) &= 0xD7u;
    *((_QWORD *)&v5[2].Next + 1) = v18 & 0x7FFFFFFFFFFFFFFFLL;
    BYTE2(v142) = v17 & 0xC7;
    v19 = 0;
    LODWORD(v5[2].Next) = v142;
    if ( ((__int64)*(&v5[2].Next + 1) & 0x10000000000LL) != 0 )
      v19 = HIDWORD(v5[2].Next) & 0x18000000;
    HIDWORD(v5[2].Next) = v19;
    if ( (v3 & 0x1000) != 0 )
    {
      v167 = (int)v5[2].Next;
      BYTE2(v167) = BYTE2(v167) & 0xF8 | 5;
      LODWORD(v20) = v167;
      LODWORD(v5[2].Next) = v167;
      return v20;
    }
    if ( byte_140E3CC26 )
    {
      LODWORD(v20) = qword_140E3D280;
      v21 = (0xAAAAAAAAAAAAAAABuLL * ((__int64)&v5[0x22000000000LL] >> 4)) >> 9;
      v22 = *(unsigned __int8 *)(qword_140E3D280 + 2 * v21);
      if ( *(_BYTE *)(qword_140E3D280 + 2 * v21) )
      {
        if ( (_DWORD)v22 != 10 )
        {
          if ( (v3 & 0x800) == 0 )
          {
            v166 = (int)v5[2].Next;
            BYTE2(v166) = v12 | BYTE2(v166) & 0xF8;
            LODWORD(v5[2].Next) = v166;
            v116 = *((_QWORD *)qword_140E300C8 + ((*((_QWORD *)&v5[2].Next + 1) >> 43) & 0x3FFLL));
            v117 = MI_NODE_FROM_PFN(v5, 0x7FFFFFFFFFFFFFFFLL, v3, 0xAAAAAAAAAAAAAAABuLL);
            LODWORD(v20) = MiFreePageToSlabAllocator(57216LL * v117 + 15464 + 232 * v22 + *(_QWORD *)(v116 + 16), v5);
          }
          return v20;
        }
      }
    }
    if ( ((__int64)v5[2].Next & 0x40000000) != 0 )
    {
      LODWORD(v20) = MiInsertPageInList(v5, 32LL);
      return v20;
    }
    v23 = MI_PAGE_TO_FULL_COLOR(BugCheckParameter2);
    v24 = v170;
    v25 = 0;
    v26 = v23;
    LODWORD(v146) = v23;
    v27 = *(_QWORD *)(v11 + 16) + 57216LL * ((v23 >> 9) & 0x3F);
    v149 = (unsigned __int8)BYTE2(LODWORD(v5[2].Next)) >> 6;
    LODWORD(v142) = v5[2].Next;
    v144 = v27;
    BYTE2(v142) = v12 | BYTE2(v142) & 0xF8;
    LODWORD(v5[2].Next) = v142;
    v28 = v5[1].Next;
    if ( v28 )
    {
      if ( qword_140E2DCC0 )
      {
        if ( ((unsigned __int8)v28 & 0x10) != 0 )
          LODWORD(v28) = (unsigned int)v28 & 0xFFFFFFEF;
        else
          LODWORD(v28) = ~(_DWORD)qword_140E2DCC0 & (unsigned int)v28;
      }
    }
    else
    {
      LODWORD(v28) = 0;
    }
    v29 = (unsigned int)v28;
    v30 = (unsigned int)v28 | -(__int64)((v170 & 0x400) != 0) & 0xFFFFFFFD00000000uLL;
    if ( qword_140E2DCC0 )
    {
      if ( (qword_140E2DCC0 & v30) != 0 )
      {
        v31 = 0xFFFFFFFD00000010uLL;
        if ( (v170 & 0x400) == 0 )
          v31 = 16LL;
        v30 = v29 | v31;
      }
      else
      {
        v30 |= qword_140E2DCC0;
      }
    }
    v5[1].Next = (_SLIST_ENTRY *)v30;
    if ( (v170 & 0x40) != 0 || v7 != 3 )
      goto LABEL_58;
    if ( (v170 & 0x200) == 0 )
    {
      LODWORD(v20) = MiCoalesceFreeSmallPages(BugCheckParameter2, 1LL);
      if ( (v20 & 1) != 0 )
        return v20;
      v24 = v170;
      v25 = 0;
      v27 = v144;
    }
    if ( (v24 & 0x400) != 0
      || (v26 & 0x30000) != 0x30000
      || (v26 & 0xC0000) != 0x40000
      || (v32 = *(_QWORD *)(v27 + 14984), (*(_DWORD *)(v32 + 4) & 0x10) != 0)
      || (LODWORD(v142) = v26 >> 8,
          *(unsigned __int16 *)(*(_QWORD *)(v27 + 8LL * v12 + 14944) + 16LL * (unsigned __int8)v26) >= *(int *)(v32 + 16976)) )
    {
LABEL_58:
      v48 = 1LL;
    }
    else
    {
      v33 = 0LL;
      v34 = -16 * (v12 ^ 1);
      v35 = 0LL;
      v36 = v142 & 1;
      v151 = ((unsigned int)~v34 >> 4) & 1;
      v37 = v27 + 8 * (v36 + 116);
      do
      {
        if ( (unsigned __int8)MmNumberOfChannels > 1u )
          v38 = *(_QWORD *)(v27 + 8 * (v35 + 2 * v36) + 15152) + v33;
        else
          v38 = *(_QWORD *)(v27 + 8 * v35 + 3848) + v33;
        v39 = 0LL;
        v40 = MiPageSizes;
        v41 = (__int64 *)v37;
        v42 = 3LL;
        do
        {
          v43 = 0LL;
          v44 = v41;
          v45 = 2LL;
          do
          {
            v46 = *v44;
            v44 += 4;
            v43 += v46;
            --v45;
          }
          while ( v45 );
          v47 = v43 * *v40++;
          v41 += 160;
          v39 += v47;
          --v42;
        }
        while ( v42 );
        v33 = v39 + v38;
        ++v35;
        v27 = v144;
        v37 += 16LL;
      }
      while ( v35 <= v151 );
      v26 = v146;
      v5 = ListEntry;
      v7 = v141;
      v48 = 1LL;
      v12 = v172;
      v25 = v33 > 0x40;
      v11 = v143;
    }
    v5[1].Next = (_SLIST_ENTRY *)((unsigned __int64)v5[1].Next & 0xFFFFFFFFF7FFF3FFuLL);
    if ( !v25 )
    {
LABEL_60:
      v49 = v148;
      v50 = v143;
      if ( v148 == 1 )
      {
        v51 = _InterlockedIncrement64((volatile signed __int64 *)(v143 + 18688));
        if ( v51 <= 0x420 )
        {
          if ( v51 == 160 )
          {
            v134 = 1LL;
          }
          else if ( v51 == 1056 )
          {
            v134 = 2LL;
          }
          else
          {
            if ( v51 != 34 )
            {
              if ( v51 == 288 )
                MiSlabDemotionLowMemoryConditionUpdate(v50, 1LL);
              goto LABEL_62;
            }
            v134 = 0LL;
          }
          v135 = (struct _KEVENT *)(32 * v134 + v50);
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v50 + 16192));
          KeSetEvent(v135 + 675, 0, 0);
          ++v135[676].Header.LockNV;
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v50 + 16192));
        }
LABEL_62:
        v52 = v51 - 1;
        if ( v52 == *(_QWORD *)(v50 + 16640) || v52 == *(_QWORD *)(v50 + 16648) )
          MiUpdateAvailableEventsAtDpc(v50);
        v7 = v141;
        goto LABEL_65;
      }
      v120 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v143 + 18688), v148);
      v121 = v49 + v120;
      if ( v120 >= 0x420 )
      {
LABEL_181:
        v122 = *(_QWORD *)(v50 + 16648);
        if ( v121 > v122 && v121 - v49 <= v122 || (v123 = *(_QWORD *)(v50 + 16640), v121 > v123) && v121 - v49 <= v123 )
          MiUpdateAvailableEventsAtDpc(v50);
LABEL_65:
        v53 = v144;
        v54 = v172;
        v55 = v144 + 1280LL * v7;
        _InterlockedIncrement64((volatile signed __int64 *)(v55 + 8LL * v172 + 8));
        v56 = 0LL;
        v146 = 0LL;
        if ( BugCheckParameter2 < 0x100000 )
        {
          v146 = 0LL;
          if ( v7 != 3 )
          {
            v146 = 1LL;
            v56 = 1LL;
          }
        }
        v57 = v149;
        _InterlockedIncrement64((volatile signed __int64 *)(v55 + 8 * (v149 + 4 * v56) + 24));
        v58 = BYTE1(v26) & 1;
        if ( v7 == 3 )
        {
          if ( (unsigned __int8)MmNumberOfChannels > 1u )
            _InterlockedIncrement64((volatile signed __int64 *)(v53 + 8 * (v54 + 2LL * v58) + 15152));
          MiUpdateLargePageCandidateValue(v143, BugCheckParameter2, 3, 1, 0LL);
          v54 = v172;
          v53 = v144;
        }
        if ( (unsigned __int8)MmNumberOfChannels > 1u )
          v48 = v58;
        else
          LOBYTE(v48) = 0;
        v59 = v57
            + 4 * ((unsigned __int8)v48 + 2 * ((unsigned int)v54 + 2 * (((v26 >> 15) & 1) + 10LL * (HIWORD(v26) & 3))));
        v60 = *(_QWORD *)(v53 + 8 * v59 + 992) + 88LL * (unsigned __int8)v26;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v61 = 0;
          if ( _interlockedbittestandset((volatile signed __int32 *)(v60 + 32), 0x1Fu) )
          {
            LOBYTE(v59) = -1;
            v61 = ExpWaitForSpinLockExclusiveAndAcquire(v60 + 32, v59);
          }
          v62 = *(unsigned int *)(v60 + 32);
          v63 = v62 & 0xFFFFFFFFBFFFFFFFuLL;
          if ( (v62 & 0xBFFFFFFF) != 0x80000000 )
          {
            do
            {
              if ( (v62 & 0x40000000) == 0 )
                _InterlockedOr((volatile signed __int32 *)(v60 + 32), 0x40000000u);
              if ( (++v61 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v63, v62, v48, v54) )
              {
                HvlNotifyLongSpinWait(v61);
              }
              else
              {
                _mm_pause();
              }
              v62 = *(unsigned int *)(v60 + 32);
            }
            while ( (*(_DWORD *)(v60 + 32) & 0xBFFFFFFF) != 0x80000000 );
          }
          v7 = v141;
        }
        else
        {
          LOBYTE(v59) = -1;
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v60 + 32, v59);
        }
        if ( *(_QWORD *)(v60 + 16) == 0x3FFFFFFFFFLL )
          _InterlockedOr64(
            (volatile signed __int64 *)(*(_QWORD *)(v144
                                                  + 16
                                                  * (((*(_DWORD *)(v60 + 8) >> 20) & 1)
                                                   + 2
                                                   * (((*(_DWORD *)(v60 + 8) >> 18) & 3)
                                                    + 4
                                                    * (((*(_DWORD *)(v60 + 8) >> 15) & 1)
                                                     + 10LL * (HIWORD(*(_DWORD *)(v60 + 8)) & 3))))
                                                  + 136)
                                      + 8 * ((unsigned __int64)(unsigned __int8)*(_DWORD *)(v60 + 8) >> 6)),
            1LL << (*(_DWORD *)(v60 + 8) & 0x3F));
        if ( v7 == 3 )
        {
          v66 = BugCheckParameter2;
          goto LABEL_90;
        }
        v64 = v146;
        v65 = v172;
        _InterlockedIncrement64((volatile signed __int64 *)(v55 + 8 * (v58 + 2 * (v172 + 2 * (v146 + 29)))));
        _InterlockedIncrement64((volatile signed __int64 *)(v55 + 8 * (v65 + 2 * v64) + 896));
        v66 = BugCheckParameter2;
        v171 = 0;
        v147 = 0;
        v67 = (*(_QWORD *)(48 * BugCheckParameter2 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL;
        v68 = *((_QWORD *)qword_140E300C8 + v67);
        if ( *(_BYTE *)(v68 + 16102) )
        {
          v69 = *((_QWORD *)qword_140E300C8 + v67);
          if ( !v7 )
          {
            MiUpdateLargePageCandidateValue(v69, BugCheckParameter2, 0, 1, 0LL);
            v145 = 0LL;
            goto LABEL_90;
          }
          if ( v7 == 2 )
          {
            MiUpdateLargePageCandidateValue(v69, BugCheckParameter2, 2, 1, &v171);
            if ( (v171 & 0xFC00) != 0x8000LL )
            {
              v145 = 0LL;
LABEL_90:
              v70 = 0LL;
              goto LABEL_91;
            }
            v124 = 1LL;
          }
          else
          {
            MiUpdateLargePageCandidateValue(v69, BugCheckParameter2, v7, 1, (volatile signed __int16 *)&v147);
            if ( (v147 & 0x1FF80000) != 0x10000000LL )
            {
              v145 = 0LL;
              goto LABEL_90;
            }
            if ( !_bittest64(&KeFeatureBits, 0x25u) )
            {
              v145 = 0LL;
              goto LABEL_90;
            }
            v124 = 0LL;
          }
          v70 = (struct _KEVENT *)MiRecordLargePageCandidate(v68, BugCheckParameter2, v124, 8LL);
          v145 = v70;
LABEL_91:
          v71 = (unsigned __int64 *)(48 * v66 - 0x220000000000LL);
          v72 = *(_QWORD *)(v60 + 16);
          if ( v72 == 0x3FFFFFFFFFLL )
          {
            v71[3] = v71[3] & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
            *v71 = *v71 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
            *(_QWORD *)(v60 + 16) = v66;
            *(_QWORD *)(v60 + 24) = v66;
          }
          else
          {
            if ( *(_DWORD *)(v60 + 12) == 1 || (v170 & 0x400) != 0 )
            {
              v73 = 48LL * *(_QWORD *)(v60 + 24);
              v71[3] = (0xAAAAAAAAAAAAAAABuLL * (v73 >> 4)) ^ ((0xAAAAAAAAAAAAAAABuLL * (v73 >> 4)) ^ v71[3]) & 0xFFFFFF0000000000uLL;
              *(_QWORD *)(v73 - 0x220000000000LL) = v66 ^ (*(_QWORD *)(v73 - 0x220000000000LL) ^ v66) & 0xFFFFFF0000000000uLL;
              *(_QWORD *)(v60 + 24) = v66;
              v74 = *v71 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
            }
            else
            {
              v104 = 48 * v72 - 0x220000000000LL;
              v71[3] = v71[3] & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
              v105 = *(_QWORD *)(v104 + 24);
              v106 = _InterlockedCompareExchange64(
                       (volatile signed __int64 *)(v104 + 24),
                       v66 ^ (v66 ^ v105) & 0xFFFFFF0000000000uLL,
                       v105);
              if ( v105 != v106 )
              {
                do
                {
                  v107 = v106;
                  v106 = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)(v104 + 24),
                           v66 ^ (v66 ^ v106) & 0xFFFFFF0000000000uLL,
                           v106);
                }
                while ( v107 != v106 );
              }
              *(_QWORD *)(v60 + 16) = v66;
              v74 = (0xAAAAAAAAAAAAAAABuLL * ((48 * v72) >> 4)) ^ (*v71 ^ (0xAAAAAAAAAAAAAAABuLL * ((48 * v72) >> 4))) & 0xFFFFFF0000000000uLL;
            }
            *v71 = v74;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v60);
          v75 = v172;
          v76 = v170;
          if ( v172 || (v170 & 0x400) != 0 )
          {
            v77 = v148;
            if ( v148 == 1 )
            {
LABEL_97:
              LODWORD(v20) = (_DWORD)v150;
              _InterlockedIncrement64(v150);
LABEL_98:
              if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (LODWORD(v20) = PopHibernateInProgress) != 0 )
              {
                *(_DWORD *)(v60 + 32) = 0;
              }
              else
              {
                LODWORD(v20) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v60 + 32, retaddr);
                v75 = v172;
              }
              v78 = v144;
              if ( (v170 & 0x2000) != 0 )
              {
                v20 = *(_QWORD *)(v144 + 15200);
                do
                {
                  v118 = (v20 - 1) ^ ((v20 - 1) ^ v20) & 0xFFFFFFFFFFFF0000uLL;
                  if ( (_WORD)v20 == 1 )
                    v118 ^= (v118 ^ (v118 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
                  v119 = v20;
                  v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v78 + 15200), v118, v20);
                }
                while ( v119 != v20 );
              }
              if ( v75 != 1 )
                goto LABEL_51;
              LODWORD(v20) = *(_DWORD *)(v143 + 16944);
              if ( (_DWORD)v20 )
                goto LABEL_51;
              v79 = 64LL;
              v80 = 0LL;
              if ( v78 )
              {
                LODWORD(v20) = *(_DWORD *)(v143 + 4);
                if ( (v20 & 0x20) != 0 )
                {
LABEL_116:
                  v76 = v170;
LABEL_51:
                  if ( v70
                    && (v76 & 0x200) == 0
                    && (MiFlags & 0x30) != 0
                    && (v7 != 1 || _bittest64(&KeFeatureBits, 0x25u))
                    && !v70->Header.SignalState )
                  {
                    LODWORD(v20) = KeSetEvent(v70, 0, 0);
                  }
                  return v20;
                }
                v79 = 1024LL;
                v81 = v78 + 57216;
                v80 = 0x100000LL;
                v82 = v78;
              }
              else
              {
                LODWORD(v20) = (unsigned __int16)KeNumberNodes;
                v82 = *(_QWORD *)(v143 + 16);
                v81 = v82 + 57216LL * (unsigned __int16)KeNumberNodes;
              }
              if ( v82 < v81 )
              {
                v83 = v82 + 3856;
                v84 = (v81 - v82 - 1) / 0xDF80 + 1;
                do
                {
                  LODWORD(v20) = *(unsigned __int8 *)(v83 + 11440);
                  if ( !(_BYTE)v20 )
                  {
                    v85 = 0LL;
                    v86 = MiPageSizes;
                    v87 = (__int64 *)(v83 - 3840);
                    v88 = 3LL;
                    do
                    {
                      v20 = *v86++;
                      v89 = *v87;
                      v87 += 160;
                      v85 += v20 * v89;
                      --v88;
                    }
                    while ( v88 );
                    if ( !v78 )
                    {
                      v20 = *(_QWORD *)v83;
                      v85 += *(_QWORD *)v83;
                    }
                    if ( v85 >= v79 )
                    {
                      if ( !v80 )
                        goto LABEL_155;
                      v109 = 0LL;
                      v110 = (__int64 *)(v83 - 3848);
                      v111 = MiPageSizes;
                      v112 = 3LL;
                      do
                      {
                        v20 = *v111++;
                        v113 = *v110;
                        v110 += 160;
                        v109 += v20 * v113;
                        --v112;
                      }
                      while ( v112 );
                      if ( v109 < v80 )
                      {
LABEL_155:
                        v114 = (volatile LONG *)(v83 + 11424);
                        if ( v78 )
                        {
                          v165 = 17;
                          ExAcquireSpinLockExclusiveAtDpcLevel(v114);
                          v115 = 17;
                        }
                        else
                        {
                          v115 = ExAcquireSpinLockExclusive(v114);
                          v165 = v115;
                        }
                        if ( *(_QWORD *)(v83 + 11416) && !*(_BYTE *)(v83 + 11440) )
                        {
                          *(_BYTE *)(v83 + 11440) = 1;
                          MiWakeZeroingThreads();
                          v115 = v165;
                        }
                        LODWORD(v20) = MiReleaseSpinLockExclusive(v83 + 11424, v115);
                        v78 = v144;
                      }
                    }
                  }
                  v83 += 57216LL;
                  --v84;
                }
                while ( v84 );
                v70 = v145;
              }
              goto LABEL_116;
            }
          }
          else
          {
            v77 = v148;
            if ( v148 == 1 )
            {
              v108 = *(_QWORD *)(v144 + 8LL * ((v26 >> 18) & 3) + 5120);
              ++*(_QWORD *)(v108 + 8LL * (unsigned __int8)v26);
              goto LABEL_97;
            }
          }
          LODWORD(v20) = (_DWORD)v150;
          _InterlockedAdd64(v150, v77);
          goto LABEL_98;
        }
        v145 = 0LL;
        goto LABEL_90;
      }
      v131 = 4;
      if ( v121 < 0x420 )
        v131 = 0;
      if ( v120 < 0xA0 )
      {
        v133 = v131 | 2;
        if ( v121 < 0xA0 )
          v133 = v131;
        v131 = v133;
        if ( v120 < 0x22 && v121 >= 0x22 )
          v131 = v133 | 1;
      }
      else if ( v120 >= 0x120 )
      {
        v132 = v143;
LABEL_222:
        if ( v131 )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v132 + 16192));
          if ( (v131 & 1) != 0 )
          {
            KeSetEvent((PRKEVENT)(v132 + 16200), 0, 0);
            ++*(_DWORD *)(v132 + 16224);
            v132 = v143;
          }
          if ( (v131 & 2) != 0 )
          {
            KeSetEvent((PRKEVENT)(v132 + 16232), 0, 0);
            ++*(_DWORD *)(v132 + 16256);
          }
          v136 = (v131 & 4) == 0;
          v50 = v143;
          if ( !v136 )
          {
            KeSetEvent((PRKEVENT)(v143 + 16264), 0, 0);
            ++*(_DWORD *)(v50 + 16288);
          }
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v50 + 16192));
          v49 = v148;
        }
        else
        {
          v50 = v143;
          v49 = v148;
        }
        goto LABEL_181;
      }
      v132 = v143;
      if ( v121 >= 0x120 )
        MiSlabDemotionLowMemoryConditionUpdate(v143, 1LL);
      goto LABEL_222;
    }
    v90 = *(_QWORD *)(v11 + 18688);
    if ( v90 < 0x420 )
    {
      v91 = 0;
      v92 = *(_QWORD *)(v11 + 16) + 14944LL;
      while ( v91 < (unsigned __int16)KeNumberNodes )
      {
        v93 = 0LL;
        v94 = (_QWORD *)v92;
        while ( v93 <= 1 )
        {
          for ( i = 0; i < dword_140E2DD0C; ++i )
          {
            v90 += *(unsigned __int16 *)(*v94 + 16LL * i);
            if ( v90 >= 0x420 )
            {
              v12 = v172;
              goto LABEL_129;
            }
          }
          ++v93;
          ++v94;
        }
        v92 += 57216LL;
        ++v91;
      }
      v48 = 1LL;
      goto LABEL_60;
    }
LABEL_129:
    if ( (BYTE2(v5[2].Next) & 7) != 5 )
    {
      v164 = (int)v5[2].Next;
      BYTE2(v164) = BYTE2(v164) & 0xF8 | 5;
      LODWORD(v5[2].Next) = v164;
    }
    v96 = (unsigned __int64)v5[1].Next & 0xFFFFFFFFFFFF0FFFuLL | ((unsigned __int64)v12 << 12);
    if ( v96 )
    {
      v9 = (__int64)v5[1].Next & 0xFFFF0FFF | (v12 << 12);
      if ( qword_140E2DCC0 )
      {
        if ( ((__int64)v5[1].Next & 0x10) != 0 )
          v9 = (__int64)v5[1].Next & 0xFFFF0FEF | (v12 << 12);
        else
          v9 = v96 & ~(_DWORD)qword_140E2DCC0;
      }
    }
    v97 = v9 | 0xFFFFFFFE00000000uLL;
    if ( qword_140E2DCC0 )
    {
      v98 = v9 | 0xFFFFFFFE00000010uLL;
      if ( (qword_140E2DCC0 & v97) == 0 )
        v98 = v9 | (unsigned __int64)qword_140E2DCC0 | 0xFFFFFFFE00000000uLL;
      v97 = v98;
    }
    v99 = (unsigned __int8)v26;
    v100 = v144;
    v5[1].Next = (_SLIST_ENTRY *)v97;
    v20 = (signed __int64)RtlpInterlockedPushEntrySList(
                            (PSLIST_HEADER)(*(_QWORD *)(v100 + 8LL * v12 + 14944) + 16LL * v99),
                            v5);
    if ( !v20 )
    {
      LOBYTE(v101) = 1;
      v102 = (v99 % dword_140E2DD0C) & 0x1F;
      v103 = (volatile signed __int32 *)(*(_QWORD *)(v100 + 16LL * v12 + 14856)
                                       + 4 * ((unsigned __int64)(v99 % dword_140E2DD0C) >> 5));
      LODWORD(v20) = v102 + 1;
      if ( (unsigned __int64)(v102 + 1) > 0x20 )
      {
        if ( ((v99 % dword_140E2DD0C) & 0x1F) == 0 )
          goto LABEL_179;
        v137 = (v99 % dword_140E2DD0C) & 0x1F;
        _InterlockedOr(v103, ((1 << (32 - v137)) - 1) << ((v99 % dword_140E2DD0C) & 0x1F));
        v20 = 32 - v137;
        ++v103;
        v101 = 1 - v20;
        if ( (unsigned __int64)(1 - v20) >= 0x20 )
        {
          v138 = v101 >> 5;
          v20 = -32LL * (v101 >> 5);
          v101 += v20;
          do
          {
            *v103++ = -1;
            --v138;
          }
          while ( v138 );
        }
        if ( v101 )
LABEL_179:
          _InterlockedOr(v103, (1 << v101) - 1);
      }
      else
      {
        _InterlockedOr(v103, 1 << ((v99 % dword_140E2DD0C) & 0x1F));
      }
    }
  }
  return v20;
}
