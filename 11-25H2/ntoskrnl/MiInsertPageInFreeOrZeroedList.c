/*
 * XREFs of MiInsertPageInFreeOrZeroedList @ 0x140343510
 * Callers:
 *     MiWriteCompletePfn @ 0x14020D42C (MiWriteCompletePfn.c)
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiRelinkStandbyPage @ 0x14021A0E8 (MiRelinkStandbyPage.c)
 *     MiPfnReferenceCountIsZero @ 0x14021ADE0 (MiPfnReferenceCountIsZero.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiLockAndInsertPageInFreeList @ 0x140223D04 (MiLockAndInsertPageInFreeList.c)
 *     MiDeleteSectionCluster @ 0x140229404 (MiDeleteSectionCluster.c)
 *     MiWsleFree @ 0x14022FD60 (MiWsleFree.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiReturnPhysicalPoolPages @ 0x1402C4578 (MiReturnPhysicalPoolPages.c)
 *     MiDeleteClusterPage @ 0x1402C48B0 (MiDeleteClusterPage.c)
 *     MiDiscardTransitionPteEx @ 0x1402C5640 (MiDiscardTransitionPteEx.c)
 *     MiPruneStandbyPages @ 0x1402C622C (MiPruneStandbyPages.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033D068 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteTransitionPte @ 0x140340900 (MiDeleteTransitionPte.c)
 *     MiPfnShareCountIsZero @ 0x140342440 (MiPfnShareCountIsZero.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     MiPurgePartitionStandby @ 0x140342C30 (MiPurgePartitionStandby.c)
 *     MiReturnFreeZeroPage @ 0x1403433B0 (MiReturnFreeZeroPage.c)
 *     MiCoalesceFreeSmallPages @ 0x140345720 (MiCoalesceFreeSmallPages.c)
 *     MiPageFreeToZero @ 0x1403478B0 (MiPageFreeToZero.c)
 *     MiInsertDemotedPages @ 0x140386CE0 (MiInsertDemotedPages.c)
 *     MiFreeSmallPageFromMdl @ 0x14038C9A8 (MiFreeSmallPageFromMdl.c)
 *     MiFinishLargePageFree @ 0x14038D7E8 (MiFinishLargePageFree.c)
 *     MiFreeLargeZeroPages @ 0x14038FA8C (MiFreeLargeZeroPages.c)
 *     MiRebuildLargePage @ 0x1403BC60C (MiRebuildLargePage.c)
 *     MiDeleteEnclavePage @ 0x1403FC8BC (MiDeleteEnclavePage.c)
 *     MiLargePagePromote @ 0x1404384BC (MiLargePagePromote.c)
 *     MiDrainZeroLookasides @ 0x140448904 (MiDrainZeroLookasides.c)
 *     MiMakePageBad @ 0x14047BA9C (MiMakePageBad.c)
 *     MiDeleteShadowStackPtes @ 0x14049C92C (MiDeleteShadowStackPtes.c)
 *     MiFreePageFileHashPfn @ 0x1404A8010 (MiFreePageFileHashPfn.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1404A8AC8 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiFreeLargePageChain @ 0x1404AE044 (MiFreeLargePageChain.c)
 *     MiPurgeZeroListHead @ 0x1404C5F04 (MiPurgeZeroListHead.c)
 *     MiDeleteSubsectionLargePages @ 0x1404CAC68 (MiDeleteSubsectionLargePages.c)
 *     MiReturnEnclavePage @ 0x1404D558C (MiReturnEnclavePage.c)
 *     MiFlushFileOnlyDeleteChain @ 0x1404F0DD4 (MiFlushFileOnlyDeleteChain.c)
 *     MiEnableNewPfns @ 0x140660F7C (MiEnableNewPfns.c)
 *     MiUnlinkBadPages @ 0x140668D9C (MiUnlinkBadPages.c)
 *     MiReturnPfnList @ 0x14066E1F4 (MiReturnPfnList.c)
 *     MiInsertPossiblyBadPage @ 0x140677C6C (MiInsertPossiblyBadPage.c)
 *     MiTransferPartitionPageRun @ 0x14067FC6C (MiTransferPartitionPageRun.c)
 *     MiScrubLargePage @ 0x140682174 (MiScrubLargePage.c)
 *     MxInsertFreePages @ 0x140C41B20 (MxInsertFreePages.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402120E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402121B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MI_NODE_FROM_PFN @ 0x14021CB00 (MI_NODE_FROM_PFN.c)
 *     MiSetPfnIdentity @ 0x1402293B0 (MiSetPfnIdentity.c)
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MiUpdateLargePageCandidateValue @ 0x14024FD70 (MiUpdateLargePageCandidateValue.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiClearPfnImageVerified @ 0x1402CC5F0 (MiClearPfnImageVerified.c)
 *     VslRemoveProtectedPage @ 0x1402CE210 (VslRemoveProtectedPage.c)
 *     VslMakeProtectedPageExecutable @ 0x1402CF124 (VslMakeProtectedPageExecutable.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140344980 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiCoalesceFreeSmallPages @ 0x140345720 (MiCoalesceFreeSmallPages.c)
 *     MiRecordLargePageCandidate @ 0x14034FA14 (MiRecordLargePageCandidate.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiFreePageToSlabAllocator @ 0x1403B7474 (MiFreePageToSlabAllocator.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x1403BEBFC (MiUpdateAvailableEventsAtDpc.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x1403BF540 (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiWakeZeroingThreads @ 0x140437060 (MiWakeZeroingThreads.c)
 *     MiArePageContentsZero @ 0x1404C9D90 (MiArePageContentsZero.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MiClearFileOnlyPfn @ 0x14066EDA0 (MiClearFileOnlyPfn.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiInsertPageInFreeOrZeroedList(ULONG_PTR BugCheckParameter2, __int16 a2)
{
  signed __int64 v2; // rdi
  ULONG_PTR v5; // r14
  unsigned int v6; // r15d
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // r12
  unsigned int v10; // r13d
  char v11; // al
  signed __int64 v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rdx
  char v15; // ecx^2
  __int64 v16; // rax
  int v17; // ecx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdi
  unsigned int v20; // edi
  BOOL v21; // r10d
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // r8
  int v28; // eax
  unsigned __int64 v29; // r12
  __int64 v30; // r13
  __int64 v31; // r15
  __int64 v32; // rdx
  unsigned __int64 v33; // r12
  __int64 v34; // rsi
  __int64 *v35; // r10
  __int64 *v36; // r11
  __int64 v37; // rbp
  __int64 v38; // rax
  __int64 *v39; // rdx
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // r8
  bool v43; // cf
  bool v44; // zf
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // r14
  unsigned __int64 v47; // r14
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // r12
  __int64 v51; // r13
  __int64 v52; // rax
  __int64 v53; // rsi
  int v54; // ebp
  unsigned __int8 v55; // r15
  unsigned __int8 v56; // r8
  __int64 v57; // rsi
  int v58; // ebp
  int i; // ecx
  __int64 v60; // r8
  int v61; // r13d
  __int64 v62; // rax
  __int64 v63; // rbp
  __int64 v64; // rcx
  struct _KEVENT *v65; // r15
  unsigned __int64 *v66; // r9
  __int64 v67; // rax
  __int64 v68; // rcx
  unsigned __int64 v69; // rax
  __int16 v70; // bp
  unsigned __int64 v71; // rcx
  __int64 v72; // r11
  unsigned __int64 v73; // rdx
  unsigned int v74; // eax
  __int64 v75; // rbp
  __int64 v76; // r10
  _QWORD *v77; // r11
  unsigned int j; // r8d
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rdx
  unsigned int v82; // ebx
  __int64 v83; // rdi
  unsigned __int64 v84; // rbp
  unsigned __int64 v85; // r14
  unsigned __int64 v86; // rdi
  unsigned __int64 v87; // rcx
  unsigned __int64 v88; // rsi
  unsigned __int64 v89; // rdi
  unsigned __int64 v90; // r9
  __int64 *v91; // rdx
  __int64 *v92; // r8
  __int64 v93; // r10
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rbx
  unsigned int v97; // eax
  __int64 v98; // r10
  signed __int64 v99; // rdx
  signed __int64 v100; // r8
  signed __int64 v101; // rcx
  __int64 v102; // rax
  unsigned __int64 v103; // r10
  volatile signed __int32 *v104; // r8
  unsigned __int64 v105; // r9
  __int64 *v106; // r8
  __int64 *v107; // rdx
  __int64 v108; // r10
  __int64 v109; // rax
  __int64 v110; // rcx
  volatile LONG *v111; // rcx
  KIRQL v112; // r12
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // rbp
  unsigned __int64 v115; // rcx
  unsigned __int64 v116; // rax
  signed __int64 v117; // rax
  unsigned __int64 v118; // rcx
  signed __int64 v119; // rtt
  int PagePrivilege; // eax
  unsigned __int64 v121; // rdi
  int v122; // eax
  __int64 v123; // r8
  __int64 v124; // rax
  int v125; // r14d
  int v126; // ecx
  __int64 v127; // rax
  struct _KEVENT *v128; // rsi
  unsigned int v129; // r9d
  unsigned __int64 v130; // rcx
  signed __int32 v131[8]; // [rsp+0h] [rbp-148h] BYREF
  unsigned int v132; // [rsp+30h] [rbp-118h]
  __int64 v133; // [rsp+38h] [rbp-110h]
  __int64 v134; // [rsp+40h] [rbp-108h]
  struct _KEVENT *v135; // [rsp+48h] [rbp-100h]
  int v136; // [rsp+54h] [rbp-F4h] BYREF
  unsigned int v137; // [rsp+58h] [rbp-F0h]
  unsigned __int64 v138; // [rsp+60h] [rbp-E8h]
  unsigned int v139; // [rsp+68h] [rbp-E0h]
  volatile signed __int64 *v140; // [rsp+70h] [rbp-D8h]
  __int64 v141; // [rsp+78h] [rbp-D0h]
  __int64 v142; // [rsp+88h] [rbp-C0h]
  __int128 v143; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v144; // [rsp+A0h] [rbp-A8h]
  __int128 v145; // [rsp+A8h] [rbp-A0h]
  __int128 v146; // [rsp+B8h] [rbp-90h]
  signed __int64 v147; // [rsp+C8h] [rbp-80h]
  __int128 v148; // [rsp+D0h] [rbp-78h]
  __int128 v149; // [rsp+E0h] [rbp-68h]
  __int128 v150; // [rsp+F0h] [rbp-58h]
  void *retaddr; // [rsp+148h] [rbp+0h]
  int v153; // [rsp+150h] [rbp+8h]
  int v154; // [rsp+150h] [rbp+8h]
  int v155; // [rsp+150h] [rbp+8h]
  int v156; // [rsp+150h] [rbp+8h]
  int v157; // [rsp+150h] [rbp+8h]
  signed __int16 v159; // [rsp+160h] [rbp+18h] BYREF
  unsigned int v160; // [rsp+168h] [rbp+20h]

  v2 = 48 * BugCheckParameter2;
  v5 = 48 * BugCheckParameter2 - 0x220000000000LL;
  if ( (*(_QWORD *)(v5 + 40) & 0x10000000000LL) != 0 )
  {
    v6 = 3 - ((*(_DWORD *)(v5 + 36) >> 27) & 3);
    if ( v6 == 3 )
      v6 = 3;
  }
  else
  {
    v6 = 3;
  }
  v132 = v6;
  if ( _bittest64((const signed __int64 *)(v5 + 40), 0x35u) )
  {
    MiClearPfnImageVerified(v5, 12);
    MiClearFileOnlyPfn(v5);
    return;
  }
  v7 = 0;
  v135 = 0LL;
  v8 = (*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL;
  v138 = MiPageSizes[v6];
  v9 = *((_QWORD *)qword_140E2FD48 + v8);
  v141 = v9;
  if ( (a2 & 1) != 0 )
  {
    v140 = (volatile signed __int64 *)(v9 + 2880);
    if ( (MiFlags & 0x80u) != 0LL && (++dword_140E2FF28 & MmPageValidationFrequency) == 0 )
      MiArePageContentsZero(BugCheckParameter2);
    v10 = 0;
    v160 = 0;
  }
  else
  {
    if ( (a2 & 0x100) != 0 )
    {
      *(_QWORD *)(v5 + 24) &= ~0x4000000000000000uLL;
      v156 = *(_DWORD *)(v5 + 32);
      BYTE2(v156) = BYTE2(v156) & 0xF8 | 5;
      *(_DWORD *)(v5 + 32) = v156;
      v157 = *(_DWORD *)(v5 + 32);
      HIBYTE(v157) |= 0x10u;
      *(_DWORD *)(v5 + 32) = v157;
      MiInsertPageInList(v5, 0x100u);
      return;
    }
    v160 = 1;
    v140 = (volatile signed __int64 *)(v9 + 3008);
    v10 = 1;
  }
  v11 = (*(_QWORD *)(v5 + 40) >> 60) & 7;
  v143 = 0LL;
  if ( v11 == 3 )
  {
    PagePrivilege = MiGetPagePrivilege(v5, 1, (unsigned __int64 *)&v143);
    if ( PagePrivilege )
    {
      v121 = 0xAAAAAAAAAAAAAAABuLL * (v2 >> 4);
      v122 = (PagePrivilege & 0x20) != 0
           ? VslMakeProtectedPageExecutable(v121, 0LL, 0)
           : VslRemoveProtectedPage(v121, &v143, 0);
      if ( v122 < 0 )
        KeBugCheckEx(0x1Au, 0x5150BuLL, v121, 0LL, 0LL);
    }
    MiSetPfnIdentity(v5, 0);
  }
  *(_QWORD *)(v5 + 24) &= ~0x4000000000000000uLL;
  _InterlockedOr(v131, 0);
  *(_QWORD *)(v5 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (*(_QWORD *)(v5 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
  LODWORD(v133) = *(_DWORD *)(v5 + 32);
  v144 = 0LL;
  BYTE3(v133) &= 0xF8u;
  *(_DWORD *)(v5 + 32) = v133;
  *(_QWORD *)(v5 + 8) |= 0x8000000000000000uLL;
  v147 = *(_QWORD *)(v5 + 40);
  v12 = v147;
  v145 = 0LL;
  v146 = 0LL;
  v148 = 0LL;
  v149 = 0LL;
  v150 = 0LL;
  v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 40), v147 & 0x8FFFFFFFFFFFFFFFuLL, v147);
  *((_QWORD *)&v150 + 1) = v13;
  if ( v12 != v13 )
  {
    do
    {
      v147 = v13;
      v14 = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 40), v13 & 0x8FFFFFFFFFFFFFFFuLL, v13);
      *((_QWORD *)&v150 + 1) = v13;
    }
    while ( v14 != v13 );
  }
  v16 = *(_QWORD *)(v5 + 40);
  LODWORD(v133) = *(_DWORD *)(v5 + 32);
  v15 = BYTE2(v133);
  BYTE3(v133) &= 0xD7u;
  *(_QWORD *)(v5 + 40) = v16 & 0x7FFFFFFFFFFFFFFFLL;
  BYTE2(v133) = v15 & 0xC7;
  v17 = 0;
  *(_DWORD *)(v5 + 32) = v133;
  if ( (*(_QWORD *)(v5 + 40) & 0x10000000000LL) != 0 )
    v17 = *(_DWORD *)(v5 + 36) & 0x18000000;
  *(_DWORD *)(v5 + 36) = v17;
  if ( (a2 & 0x1000) != 0 )
  {
    v155 = *(_DWORD *)(v5 + 32);
    BYTE2(v155) = BYTE2(v155) & 0xF8 | 5;
    *(_DWORD *)(v5 + 32) = v155;
    return;
  }
  if ( byte_140E3C8A6 )
  {
    v18 = (0xAAAAAAAAAAAAAAABuLL * ((__int64)(v5 + 0x220000000000LL) >> 4)) >> 9;
    v19 = *(unsigned __int8 *)(qword_140E3CF00 + 2 * v18);
    if ( *(_BYTE *)(qword_140E3CF00 + 2 * v18) )
    {
      if ( (_DWORD)v19 != 10 )
      {
        if ( (a2 & 0x800) == 0 )
        {
          v154 = *(_DWORD *)(v5 + 32);
          BYTE2(v154) = v10 | BYTE2(v154) & 0xF8;
          *(_DWORD *)(v5 + 32) = v154;
          v96 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL));
          v97 = MI_NODE_FROM_PFN(v5);
          MiFreePageToSlabAllocator(57216LL * v97 + 15464 + 232 * v19 + *(_QWORD *)(v96 + 16), v5);
        }
        return;
      }
    }
  }
  if ( (*(_DWORD *)(v5 + 32) & 0x40000000) != 0 )
  {
    MiInsertPageInList(v5, 0x20u);
    return;
  }
  v20 = MI_PAGE_TO_FULL_COLOR(BugCheckParameter2);
  v21 = 0;
  v139 = (unsigned __int8)BYTE2(*(_DWORD *)(v5 + 32)) >> 6;
  LODWORD(v133) = *(_DWORD *)(v5 + 32);
  v137 = v20;
  BYTE2(v133) = v10 | BYTE2(v133) & 0xF8;
  v22 = *(_QWORD *)(v9 + 16) + 57216LL * ((v20 >> 9) & 0x3F);
  *(_DWORD *)(v5 + 32) = v133;
  v23 = *(_QWORD *)(v5 + 16);
  v134 = v22;
  if ( v23 )
  {
    if ( qword_140E2D940 )
    {
      if ( (v23 & 0x10) != 0 )
        LODWORD(v23) = v23 & 0xFFFFFFEF;
      else
        LODWORD(v23) = ~(_DWORD)qword_140E2D940 & v23;
    }
  }
  else
  {
    LODWORD(v23) = 0;
  }
  v24 = (unsigned int)v23;
  v25 = (unsigned int)v23 | -(__int64)((a2 & 0x400) != 0) & 0xFFFFFFFD00000000uLL;
  if ( qword_140E2D940 )
  {
    if ( (qword_140E2D940 & v25) != 0 )
    {
      v26 = 0xFFFFFFFD00000010uLL;
      if ( (a2 & 0x400) == 0 )
        v26 = 16LL;
      v25 = v24 | v26;
    }
    else
    {
      v25 |= qword_140E2D940;
    }
  }
  *(_QWORD *)(v5 + 16) = v25;
  if ( (a2 & 0x40) == 0 && v6 == 3 )
  {
    if ( (a2 & 0x200) == 0 )
    {
      if ( (MiCoalesceFreeSmallPages(BugCheckParameter2, 1LL) & 1) != 0 )
        return;
      v22 = v134;
      v21 = 0;
    }
    if ( (a2 & 0x400) == 0 && (v20 & 0x30000) == 0x30000 && (v20 & 0xC0000) == 0x40000 )
    {
      v27 = *(_QWORD *)(v22 + 14984);
      if ( (*(_DWORD *)(v27 + 4) & 0x10) == 0 )
      {
        LODWORD(v133) = v20 >> 8;
        if ( *(unsigned __int16 *)(*(_QWORD *)(v22 + 8LL * v10 + 14944) + 16LL * (unsigned __int8)v20) < *(int *)(v27 + 16976) )
        {
          v28 = -16 * (v10 ^ 1);
          v29 = 0LL;
          v30 = 0LL;
          v31 = v133 & 1;
          v142 = ((unsigned int)~v28 >> 4) & 1;
          v32 = v134 + 928 + 8 * v31;
          v133 = v32;
          do
          {
            if ( (unsigned __int8)MmNumberOfChannels > 1u )
              v33 = *(_QWORD *)(v134 + 8 * (v30 + 2 * v31) + 15152) + v29;
            else
              v33 = *(_QWORD *)(v134 + 8 * v30 + 3848) + v29;
            v34 = 0LL;
            v35 = MiPageSizes;
            v36 = (__int64 *)v32;
            v37 = 3LL;
            do
            {
              v38 = 0LL;
              v39 = v36;
              v40 = 2LL;
              do
              {
                v41 = *v39;
                v39 += 4;
                v38 += v41;
                --v40;
              }
              while ( v40 );
              v42 = v38 * *v35++;
              v36 += 160;
              v34 += v42;
              --v37;
            }
            while ( v37 );
            v29 = v34 + v33;
            v32 = v133 + 16;
            ++v30;
            v133 += 16LL;
          }
          while ( v30 <= v142 );
          v20 = v137;
          v43 = v29 < 0x40;
          v44 = v29 == 64;
          v6 = v132;
          v10 = v160;
          v9 = v141;
          v21 = !v43 && !v44;
        }
      }
    }
  }
  *(_QWORD *)(v5 + 16) &= 0xFFFFFFFFF7FFF3FFuLL;
  if ( !v21 )
  {
LABEL_49:
    v45 = v138;
    if ( v138 == 1 )
    {
      v46 = _InterlockedIncrement64((volatile signed __int64 *)(v9 + 18688));
      if ( v46 > 0x420 )
        goto LABEL_51;
      if ( v46 == 160 )
      {
        v127 = 1LL;
      }
      else if ( v46 == 1056 )
      {
        v127 = 2LL;
      }
      else
      {
        if ( v46 != 34 )
        {
          if ( v46 == 288 )
            MiSlabDemotionLowMemoryConditionUpdate(v9, 1LL);
LABEL_51:
          v47 = v46 - 1;
          if ( v47 != *(_QWORD *)(v9 + 16640) && v47 != *(_QWORD *)(v9 + 16648) )
            goto LABEL_53;
          goto LABEL_172;
        }
        v127 = 0LL;
      }
      v128 = (struct _KEVENT *)(32 * v127 + v9);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 16192));
      KeSetEvent(v128 + 675, 0, 0);
      ++v128[676].Header.LockNV;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 16192));
      goto LABEL_51;
    }
    v113 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 18688), v138);
    v114 = v45 + v113;
    if ( v113 >= 0x420 )
    {
LABEL_168:
      v115 = *(_QWORD *)(v9 + 16648);
      if ( v114 <= v115 || v114 - v45 > v115 )
      {
        v116 = *(_QWORD *)(v9 + 16640);
        if ( v114 <= v116 || v114 - v45 > v116 )
        {
LABEL_53:
          v48 = v134;
          v49 = v10;
          v50 = v134 + 1280LL * v6;
          _InterlockedIncrement64((volatile signed __int64 *)(v50 + 8LL * v10 + 8));
          v51 = 0LL;
          v52 = 0LL;
          if ( BugCheckParameter2 < 0x100000 && v6 != 3 )
          {
            v52 = 1LL;
            v51 = 1LL;
          }
          v53 = v139;
          _InterlockedIncrement64((volatile signed __int64 *)(v50 + 8 * (v139 + 4 * v52) + 24));
          v54 = v132;
          v55 = BYTE1(v20) & 1;
          if ( v132 == 3 )
          {
            if ( (unsigned __int8)MmNumberOfChannels > 1u )
              _InterlockedIncrement64((volatile signed __int64 *)(v48 + 8 * (v49 + 2LL * v55) + 15152));
            MiUpdateLargePageCandidateValue(v141, BugCheckParameter2, 3, 1, 0LL);
            v48 = v134;
          }
          if ( (unsigned __int8)MmNumberOfChannels > 1u )
            v56 = BYTE1(v20) & 1;
          else
            v56 = 0;
          v57 = *(_QWORD *)(v48
                          + 8 * (v53 + 4 * (v56 + 2 * (v160 + 2 * (((v20 >> 15) & 1) + 10LL * (HIWORD(v20) & 3)))))
                          + 992)
              + 88LL * (unsigned __int8)v20;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
          {
            v58 = 0;
            if ( _interlockedbittestandset((volatile signed __int32 *)(v57 + 32), 0x1Fu) )
              v58 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(v57 + 32), 0xFFu);
            for ( i = *(_DWORD *)(v57 + 32); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(v57 + 32) )
            {
              if ( (i & 0x40000000) == 0 )
                _InterlockedOr((volatile signed __int32 *)(v57 + 32), 0x40000000u);
              if ( (++v58 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait();
              }
              else
              {
                _mm_pause();
              }
            }
            v54 = v132;
          }
          else
          {
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(v57 + 32), 0xFFu);
          }
          if ( *(_QWORD *)(v57 + 16) == 0x3FFFFFFFFFLL )
            _InterlockedOr64(
              (volatile signed __int64 *)(*(_QWORD *)(v134
                                                    + 16
                                                    * (((*(_DWORD *)(v57 + 8) >> 20) & 1)
                                                     + 2
                                                     * (((*(_DWORD *)(v57 + 8) >> 18) & 3)
                                                      + 4
                                                      * (((*(_DWORD *)(v57 + 8) >> 15) & 1)
                                                       + 10LL * (HIWORD(*(_DWORD *)(v57 + 8)) & 3))))
                                                    + 136)
                                        + 8 * ((unsigned __int64)(unsigned __int8)*(_DWORD *)(v57 + 8) >> 6)),
              1LL << (*(_DWORD *)(v57 + 8) & 0x3F));
          if ( v54 != 3 )
          {
            v60 = v160;
            _InterlockedIncrement64((volatile signed __int64 *)(v50 + 8 * (v55 + 2 * (v160 + 58LL + 2 * v51))));
            _InterlockedIncrement64((volatile signed __int64 *)(v50 + 8 * (v60 + 2 * v51) + 896));
            v159 = 0;
            v136 = 0;
            v61 = v132;
            v62 = (*(_QWORD *)(48 * BugCheckParameter2 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL;
            v63 = *((_QWORD *)qword_140E2FD48 + v62);
            if ( !*(_BYTE *)(v63 + 16102) )
            {
              v135 = 0LL;
              goto LABEL_79;
            }
            v64 = *((_QWORD *)qword_140E2FD48 + v62);
            if ( !v132 )
            {
              MiUpdateLargePageCandidateValue(v64, BugCheckParameter2, 0, 1, 0LL);
              v135 = 0LL;
              goto LABEL_78;
            }
            if ( v132 == 2 )
            {
              MiUpdateLargePageCandidateValue(v64, BugCheckParameter2, 2, 1, &v159);
              if ( (v159 & 0xFC00) != 0x8000LL )
              {
                v135 = 0LL;
LABEL_78:
                LODWORD(v60) = v160;
LABEL_79:
                v65 = 0LL;
                goto LABEL_80;
              }
              v123 = 1LL;
            }
            else
            {
              MiUpdateLargePageCandidateValue(v64, BugCheckParameter2, v132, 1, (volatile signed __int16 *)&v136);
              if ( (v136 & 0x1FF80000) != 0x10000000LL )
              {
                v135 = 0LL;
                goto LABEL_78;
              }
              if ( !_bittest64(&KeFeatureBits, 0x25u) )
              {
                v135 = 0LL;
                goto LABEL_78;
              }
              v123 = 0LL;
            }
            v124 = MiRecordLargePageCandidate(v63, BugCheckParameter2, v123, 8LL);
            LODWORD(v60) = v160;
            v65 = (struct _KEVENT *)v124;
            v135 = (struct _KEVENT *)v124;
LABEL_80:
            v66 = (unsigned __int64 *)(48 * BugCheckParameter2 - 0x220000000000LL);
            v67 = *(_QWORD *)(v57 + 16);
            if ( v67 == 0x3FFFFFFFFFLL )
            {
              v66[3] = v66[3] & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
              *v66 = *v66 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
              *(_QWORD *)(v57 + 16) = BugCheckParameter2;
              *(_QWORD *)(v57 + 24) = BugCheckParameter2;
            }
            else
            {
              if ( *(_DWORD *)(v57 + 12) == 1 || (a2 & 0x400) != 0 )
              {
                v68 = 48LL * *(_QWORD *)(v57 + 24);
                v66[3] = (0xAAAAAAAAAAAAAAABuLL * (v68 >> 4)) ^ ((0xAAAAAAAAAAAAAAABuLL * (v68 >> 4)) ^ v66[3]) & 0xFFFFFF0000000000uLL;
                *(_QWORD *)(v68 - 0x220000000000LL) = BugCheckParameter2 ^ (*(_QWORD *)(v68 - 0x220000000000LL) ^ BugCheckParameter2) & 0xFFFFFF0000000000uLL;
                *(_QWORD *)(v57 + 24) = BugCheckParameter2;
                v69 = *v66 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
              }
              else
              {
                v98 = 48 * v67 - 0x220000000000LL;
                v66[3] = v66[3] & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
                v99 = *(_QWORD *)(v98 + 24);
                v100 = _InterlockedCompareExchange64(
                         (volatile signed __int64 *)(v98 + 24),
                         BugCheckParameter2 ^ (BugCheckParameter2 ^ v99) & 0xFFFFFF0000000000uLL,
                         v99);
                if ( v99 != v100 )
                {
                  do
                  {
                    v101 = v100;
                    v100 = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)(v98 + 24),
                             BugCheckParameter2 ^ (BugCheckParameter2 ^ v100) & 0xFFFFFF0000000000uLL,
                             v100);
                  }
                  while ( v101 != v100 );
                }
                *(_QWORD *)(v57 + 16) = BugCheckParameter2;
                LODWORD(v60) = v160;
                v69 = (0xAAAAAAAAAAAAAAABuLL * ((48 * v67) >> 4)) ^ (*v66 ^ (0xAAAAAAAAAAAAAAABuLL * ((48 * v67) >> 4))) & 0xFFFFFF0000000000uLL;
              }
              *v66 = v69;
            }
            _InterlockedIncrement64((volatile signed __int64 *)v57);
            v70 = a2;
            if ( (_DWORD)v60 || (a2 & 0x400) != 0 )
            {
              v71 = v138;
              if ( v138 == 1 )
              {
LABEL_86:
                _InterlockedIncrement64(v140);
LABEL_87:
                if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
                {
                  *(_DWORD *)(v57 + 32) = 0;
                }
                else
                {
                  ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v57 + 32, retaddr);
                  LODWORD(v60) = v160;
                }
                v72 = v134;
                if ( (a2 & 0x2000) != 0 )
                {
                  v117 = *(_QWORD *)(v134 + 15200);
                  do
                  {
                    v118 = (v117 - 1) ^ ((v117 - 1) ^ v117) & 0xFFFFFFFFFFFF0000uLL;
                    if ( (_WORD)v117 == 1 )
                      v118 ^= (v118 ^ (v118 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
                    v119 = v117;
                    v117 = _InterlockedCompareExchange64((volatile signed __int64 *)(v72 + 15200), v118, v117);
                  }
                  while ( v119 != v117 );
                }
                if ( (_DWORD)v60 != 1 || *(_DWORD *)(v141 + 16944) )
                  goto LABEL_91;
                v84 = 64LL;
                v85 = 0LL;
                if ( v72 )
                {
                  if ( (*(_DWORD *)(v141 + 4) & 0x20) != 0 )
                  {
LABEL_131:
                    v70 = a2;
LABEL_91:
                    if ( v65
                      && (v70 & 0x200) == 0
                      && (MiFlags & 0x30) != 0
                      && (v61 != 1 || _bittest64(&KeFeatureBits, 0x25u))
                      && !v65->Header.SignalState )
                    {
                      KeSetEvent(v65, 0, 0);
                    }
                    return;
                  }
                  v84 = 1024LL;
                  v86 = v72 + 57216;
                  v85 = 0x100000LL;
                  v87 = v72;
                }
                else
                {
                  v87 = *(_QWORD *)(v141 + 16);
                  v86 = v87 + 57216LL * (unsigned __int16)KeNumberNodes;
                }
                if ( v87 < v86 )
                {
                  v88 = v87 + 3856;
                  v89 = (v86 - v87 - 1) / 0xDF80 + 1;
                  do
                  {
                    if ( !*(_BYTE *)(v88 + 11440) )
                    {
                      v90 = 0LL;
                      v91 = MiPageSizes;
                      v92 = (__int64 *)(v88 - 3840);
                      v93 = 3LL;
                      do
                      {
                        v94 = *v91++;
                        v95 = *v92;
                        v92 += 160;
                        v90 += v94 * v95;
                        --v93;
                      }
                      while ( v93 );
                      if ( !v72 )
                        v90 += *(_QWORD *)v88;
                      if ( v90 >= v84 )
                      {
                        if ( !v85 )
                          goto LABEL_159;
                        v105 = 0LL;
                        v106 = (__int64 *)(v88 - 3848);
                        v107 = MiPageSizes;
                        v108 = 3LL;
                        do
                        {
                          v109 = *v107++;
                          v110 = *v106;
                          v106 += 160;
                          v105 += v109 * v110;
                          --v108;
                        }
                        while ( v108 );
                        if ( v105 < v85 )
                        {
LABEL_159:
                          v111 = (volatile LONG *)(v88 + 11424);
                          if ( v72 )
                          {
                            v112 = 17;
                            ExAcquireSpinLockExclusiveAtDpcLevel(v111);
                          }
                          else
                          {
                            v112 = ExAcquireSpinLockExclusive(v111);
                          }
                          if ( *(_QWORD *)(v88 + 11416) && !*(_BYTE *)(v88 + 11440) )
                          {
                            *(_BYTE *)(v88 + 11440) = 1;
                            MiWakeZeroingThreads();
                          }
                          MiReleaseSpinLockExclusive((_DWORD *)(v88 + 11424), v112);
                          v72 = v134;
                        }
                      }
                    }
                    v88 += 57216LL;
                    --v89;
                  }
                  while ( v89 );
                  v65 = v135;
                }
                goto LABEL_131;
              }
            }
            else
            {
              v71 = v138;
              if ( v138 == 1 )
              {
                v102 = *(_QWORD *)(v134 + 8LL * ((v20 >> 18) & 3) + 5120);
                ++*(_QWORD *)(v102 + 8LL * (unsigned __int8)v20);
                goto LABEL_86;
              }
            }
            _InterlockedAdd64(v140, v71);
            goto LABEL_87;
          }
          v61 = v132;
          goto LABEL_78;
        }
      }
LABEL_172:
      MiUpdateAvailableEventsAtDpc(v9);
      goto LABEL_53;
    }
    v125 = 4;
    if ( v114 < 0x420 )
      v125 = 0;
    if ( v113 < 0xA0 )
    {
      v126 = v125 | 2;
      if ( v114 < 0xA0 )
        v126 = v125;
      v125 = v126;
      if ( v113 < 0x22 && v114 >= 0x22 )
        v125 = v126 | 1;
    }
    else if ( v113 >= 0x120 )
    {
LABEL_212:
      if ( v125 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 16192));
        if ( (v125 & 1) != 0 )
        {
          KeSetEvent((PRKEVENT)(v9 + 16200), 0, 0);
          ++*(_DWORD *)(v9 + 16224);
        }
        if ( (v125 & 2) != 0 )
        {
          KeSetEvent((PRKEVENT)(v9 + 16232), 0, 0);
          ++*(_DWORD *)(v9 + 16256);
        }
        if ( (v125 & 4) != 0 )
        {
          KeSetEvent((PRKEVENT)(v9 + 16264), 0, 0);
          ++*(_DWORD *)(v9 + 16288);
        }
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 16192));
      }
      goto LABEL_168;
    }
    if ( v114 >= 0x120 )
      MiSlabDemotionLowMemoryConditionUpdate(v9, 1LL);
    goto LABEL_212;
  }
  v73 = *(_QWORD *)(v9 + 18688);
  if ( v73 < 0x420 )
  {
    v74 = 0;
    v75 = *(_QWORD *)(v9 + 16) + 14944LL;
    while ( v74 < (unsigned __int16)KeNumberNodes )
    {
      v76 = 0LL;
      v77 = (_QWORD *)v75;
      while ( v76 <= 1 )
      {
        for ( j = 0; j < dword_140E2D98C; ++j )
        {
          v73 += *(unsigned __int16 *)(*v77 + 16LL * j);
          if ( v73 >= 0x420 )
            goto LABEL_105;
        }
        ++v76;
        ++v77;
      }
      v75 += 57216LL;
      ++v74;
    }
    v6 = v132;
    goto LABEL_49;
  }
LABEL_105:
  if ( (*(_BYTE *)(v5 + 34) & 7) != 5 )
  {
    v153 = *(_DWORD *)(v5 + 32);
    BYTE2(v153) = BYTE2(v153) & 0xF8 | 5;
    *(_DWORD *)(v5 + 32) = v153;
  }
  v79 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFF0FFFuLL | ((unsigned __int64)v10 << 12);
  if ( v79 )
  {
    v7 = *(_DWORD *)(v5 + 16) & 0xFFFF0FFF | (v10 << 12);
    if ( qword_140E2D940 )
    {
      if ( (*(_BYTE *)(v5 + 16) & 0x10) != 0 )
        v7 = *(_DWORD *)(v5 + 16) & 0xFFFF0FEF | (v10 << 12);
      else
        v7 = v79 & ~(_DWORD)qword_140E2D940;
    }
  }
  v80 = v7 | 0xFFFFFFFE00000000uLL;
  if ( qword_140E2D940 )
  {
    v81 = v7 | 0xFFFFFFFE00000010uLL;
    if ( (qword_140E2D940 & v80) == 0 )
      v81 = qword_140E2D940 | v7 | 0xFFFFFFFE00000000uLL;
    v80 = v81;
  }
  *(_QWORD *)(v5 + 16) = v80;
  v82 = (unsigned __int8)v20;
  v83 = v134;
  if ( !RtlpInterlockedPushEntrySList(
          (PSLIST_HEADER)(*(_QWORD *)(v134 + 8LL * v10 + 14944) + 16LL * v82),
          (PSLIST_ENTRY)v5) )
  {
    LOBYTE(v103) = 1;
    v104 = (volatile signed __int32 *)(*(_QWORD *)(v83 + 16LL * v10 + 14856)
                                     + 4 * ((unsigned __int64)(v82 % dword_140E2D98C) >> 5));
    if ( (unsigned __int64)((v82 % dword_140E2D98C) & 0x1F) + 1 > 0x20 )
    {
      if ( ((v82 % dword_140E2D98C) & 0x1F) == 0 )
        goto LABEL_177;
      v129 = (v82 % dword_140E2D98C) & 0x1F;
      _InterlockedOr(v104++, ((1 << (32 - v129)) - 1) << ((v82 % dword_140E2D98C) & 0x1F));
      v103 = 1LL - (32 - v129);
      if ( v103 >= 0x20 )
      {
        v130 = v103 >> 5;
        v103 += -32LL * (v103 >> 5);
        do
        {
          *v104++ = -1;
          --v130;
        }
        while ( v130 );
      }
      if ( v103 )
LABEL_177:
        _InterlockedOr(v104, (1 << v103) - 1);
    }
    else
    {
      _InterlockedOr(v104, 1 << ((v82 % dword_140E2D98C) & 0x1F));
    }
  }
}
