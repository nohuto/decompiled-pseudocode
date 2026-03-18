/*
 * XREFs of MiInsertPageInFreeOrZeroedList @ 0x140222210
 * Callers:
 *     MiWsleFree @ 0x14021BFD0 (MiWsleFree.c)
 *     MiCompletePrivateZeroFault @ 0x14021D340 (MiCompletePrivateZeroFault.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiPfnShareCountIsZero @ 0x1402209B0 (MiPfnShareCountIsZero.c)
 *     MiPurgePartitionStandby @ 0x140220D50 (MiPurgePartitionStandby.c)
 *     MiReturnFreeZeroPage @ 0x1402220B0 (MiReturnFreeZeroPage.c)
 *     MiCoalesceFreeSmallPages @ 0x1402238B0 (MiCoalesceFreeSmallPages.c)
 *     MiPruneStandbyPages @ 0x140225F84 (MiPruneStandbyPages.c)
 *     MiDrainZeroLookasides @ 0x14022A040 (MiDrainZeroLookasides.c)
 *     MiMigratePfn @ 0x14022C0A0 (MiMigratePfn.c)
 *     MiRelinkStandbyPage @ 0x14022C848 (MiRelinkStandbyPage.c)
 *     MiPfnReferenceCountIsZero @ 0x14022C950 (MiPfnReferenceCountIsZero.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiDeleteTransitionPte @ 0x14023D260 (MiDeleteTransitionPte.c)
 *     MiDecommitFreePage @ 0x14023E790 (MiDecommitFreePage.c)
 *     MiDeleteShadowStackPtes @ 0x140269284 (MiDeleteShadowStackPtes.c)
 *     MiPageFreeToZero @ 0x14026ABD0 (MiPageFreeToZero.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiReturnPhysicalPoolPages @ 0x1402EA2D4 (MiReturnPhysicalPoolPages.c)
 *     MiDeleteClusterPage @ 0x1402ED270 (MiDeleteClusterPage.c)
 *     MiWriteCompletePfn @ 0x14039D574 (MiWriteCompletePfn.c)
 *     MiDeleteSectionCluster @ 0x1403A0124 (MiDeleteSectionCluster.c)
 *     MiDiscardTransitionPteEx @ 0x1403A1C98 (MiDiscardTransitionPteEx.c)
 *     MiFreeSmallPageFromMdl @ 0x1403A2098 (MiFreeSmallPageFromMdl.c)
 *     MiFinishLargePageFree @ 0x1403A3D48 (MiFinishLargePageFree.c)
 *     MiFreeLargeZeroPages @ 0x1403A67F0 (MiFreeLargeZeroPages.c)
 *     MiDeleteEnclavePage @ 0x1403D1B2C (MiDeleteEnclavePage.c)
 *     MiRebuildLargePage @ 0x1403D2BAC (MiRebuildLargePage.c)
 *     MiFreeLargePageChain @ 0x1403D5A54 (MiFreeLargePageChain.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403E4774 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiInsertDemotedPages @ 0x14042F7AC (MiInsertDemotedPages.c)
 *     MiLargePagePromote @ 0x1404316D4 (MiLargePagePromote.c)
 *     MiLockAndInsertPageInFreeList @ 0x1404653B4 (MiLockAndInsertPageInFreeList.c)
 *     MiMakePageBad @ 0x14047C9DC (MiMakePageBad.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1404A2E44 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiFreePageFileHashPfn @ 0x1404A8FE0 (MiFreePageFileHashPfn.c)
 *     MiPurgeZeroListHead @ 0x1404C6774 (MiPurgeZeroListHead.c)
 *     MiDeleteSubsectionLargePages @ 0x1404CA9A4 (MiDeleteSubsectionLargePages.c)
 *     MiReturnEnclavePage @ 0x1404D4E64 (MiReturnEnclavePage.c)
 *     MiFlushFileOnlyDeleteChain @ 0x1404F4DE4 (MiFlushFileOnlyDeleteChain.c)
 *     MiEnableNewPfns @ 0x14066CABC (MiEnableNewPfns.c)
 *     MiUnlinkBadPages @ 0x1406747FC (MiUnlinkBadPages.c)
 *     MiReturnPfnList @ 0x140679AA0 (MiReturnPfnList.c)
 *     MiInsertPossiblyBadPage @ 0x140683470 (MiInsertPossiblyBadPage.c)
 *     MiTransferPartitionPageRun @ 0x14068B4FC (MiTransferPartitionPageRun.c)
 *     MiScrubLargePage @ 0x14068DA04 (MiScrubLargePage.c)
 *     MxInsertFreePages @ 0x140C52D50 (MxInsertFreePages.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x1402236D0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiCoalesceFreeSmallPages @ 0x1402238B0 (MiCoalesceFreeSmallPages.c)
 *     MiFreePageToSlabAllocator @ 0x1402241C8 (MiFreePageToSlabAllocator.c)
 *     MI_NODE_FROM_PFN @ 0x1402245F0 (MI_NODE_FROM_PFN.c)
 *     MiClearFileOnlyPfn @ 0x1402246D8 (MiClearFileOnlyPfn.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     VslRemoveProtectedPage @ 0x14026638C (VslRemoveProtectedPage.c)
 *     MiUpdateLargePageCandidateValue @ 0x140272210 (MiUpdateLargePageCandidateValue.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x1402D1890 (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x1402D19B0 (MiUpdateAvailableEventsAtDpc.c)
 *     MiRecordLargePageCandidate @ 0x1403096C4 (MiRecordLargePageCandidate.c)
 *     VslMakeProtectedPageExecutable @ 0x14036C2C0 (VslMakeProtectedPageExecutable.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiSetPfnIdentity @ 0x1403A00D0 (MiSetPfnIdentity.c)
 *     MiWakeZeroingThreads @ 0x1403C7310 (MiWakeZeroingThreads.c)
 *     MiArePageContentsZero @ 0x1404CA060 (MiArePageContentsZero.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
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
  unsigned __int64 v29; // rdx
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
  __int64 *v40; // r8
  __int64 v41; // r11
  __int64 v42; // r9
  __int64 *v43; // rsi
  __int64 v44; // r15
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // r8
  unsigned __int64 v48; // rsi
  __int64 v49; // r12
  unsigned __int64 v50; // r15
  unsigned __int64 v51; // r15
  __int64 v52; // r10
  __int64 v53; // r9
  __int64 v54; // r13
  __int64 v55; // rax
  __int64 v56; // rsi
  unsigned __int8 v57; // r12
  __int64 v58; // rsi
  unsigned int v59; // r15d
  unsigned int v60; // edx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rdx
  ULONG_PTR v64; // r12
  __int64 v65; // rax
  __int64 v66; // r14
  __int64 v67; // rcx
  struct _KEVENT *v68; // r13
  unsigned __int64 *v69; // r9
  __int64 v70; // rax
  __int64 v71; // rcx
  unsigned __int64 v72; // rax
  unsigned int v73; // r8d
  __int16 v74; // r14
  unsigned __int64 v75; // rcx
  __int64 v76; // r11
  unsigned __int64 v77; // r12
  unsigned __int64 v78; // r14
  unsigned __int64 v79; // rdi
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // rsi
  unsigned __int64 v82; // rdi
  unsigned __int64 v83; // r9
  signed __int64 *v84; // rdx
  __int64 *v85; // r8
  __int64 v86; // r10
  __int64 v87; // rcx
  unsigned int v88; // eax
  __int64 v89; // r12
  __int64 v90; // r10
  _QWORD *v91; // r11
  unsigned int i; // r8d
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // rdx
  unsigned int v96; // ebx
  __int64 v97; // rdi
  unsigned __int64 v98; // r10
  __int64 v99; // rdx
  volatile signed __int32 *v100; // r8
  __int64 v101; // r10
  signed __int64 v102; // rdx
  signed __int64 v103; // r8
  signed __int64 v104; // rcx
  __int64 v105; // rax
  unsigned __int64 v106; // r9
  __int64 *v107; // r8
  signed __int64 *v108; // rdx
  __int64 v109; // r10
  __int64 v110; // rcx
  volatile LONG *v111; // rcx
  KIRQL v112; // al
  __int64 v113; // rbx
  unsigned int v114; // eax
  unsigned __int64 v115; // rcx
  signed __int64 v116; // rtt
  unsigned __int64 v117; // rax
  unsigned __int64 v118; // r14
  unsigned __int64 v119; // rcx
  unsigned __int64 v120; // rax
  __int64 v121; // r8
  int v122; // eax
  ULONG_PTR v123; // rdi
  int v124; // eax
  int PagePrivilege; // eax
  ULONG_PTR v126; // rdi
  int v127; // eax
  int v128; // r12d
  __int64 v129; // rsi
  int v130; // ecx
  __int64 v131; // rax
  struct _KEVENT *v132; // rsi
  bool v133; // zf
  unsigned int v134; // r9d
  unsigned __int64 v135; // rcx
  signed __int32 v137[8]; // [rsp+0h] [rbp-100h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  unsigned int v139; // [rsp+30h] [rbp-D0h]
  __int64 v140; // [rsp+38h] [rbp-C8h]
  __int64 v141; // [rsp+40h] [rbp-C0h]
  __int64 v142; // [rsp+48h] [rbp-B8h]
  struct _KEVENT *v143; // [rsp+50h] [rbp-B0h]
  __int64 v144; // [rsp+58h] [rbp-A8h]
  int v145; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned __int64 v146; // [rsp+68h] [rbp-98h]
  unsigned int v147; // [rsp+70h] [rbp-90h]
  volatile signed __int64 *v148; // [rsp+78h] [rbp-88h]
  __int64 v149; // [rsp+88h] [rbp-78h]
  PSLIST_ENTRY ListEntry; // [rsp+90h] [rbp-70h]
  __int128 v151; // [rsp+98h] [rbp-68h] BYREF
  __int128 v152; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v153; // [rsp+B8h] [rbp-48h]
  __int128 v154; // [rsp+C0h] [rbp-40h]
  __int128 v155; // [rsp+D0h] [rbp-30h]
  signed __int64 v156; // [rsp+E0h] [rbp-20h]
  __int128 v157; // [rsp+E8h] [rbp-18h]
  __int128 v158; // [rsp+F8h] [rbp-8h]
  __int128 v159; // [rsp+108h] [rbp+8h]
  void *retaddr; // [rsp+168h] [rbp+68h]
  int v162; // [rsp+170h] [rbp+70h]
  char v163; // [rsp+170h] [rbp+70h]
  int v164; // [rsp+170h] [rbp+70h]
  int v165; // [rsp+170h] [rbp+70h]
  int Next; // [rsp+170h] [rbp+70h]
  int v167; // [rsp+170h] [rbp+70h]
  unsigned int v168; // [rsp+178h] [rbp+78h]
  __int16 v169; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v170; // [rsp+188h] [rbp+88h]

  v168 = a2;
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
  v139 = v7;
  if ( (v8 & 0x20000000000000LL) != 0 )
  {
    v151 = 0LL;
    if ( ((v8 >> 60) & 7) == 3 )
    {
      PagePrivilege = MiGetPagePrivilege((ULONG_PTR)v5, 1, (unsigned __int64 *)&v151);
      if ( PagePrivilege )
      {
        v126 = 0xAAAAAAAAAAAAAAABuLL * (v2 >> 4);
        v127 = (PagePrivilege & 0x20) != 0
             ? VslMakeProtectedPageExecutable(v126, 0LL, 0LL)
             : VslRemoveProtectedPage(v126, &v151, 0LL);
        if ( v127 < 0 )
          KeBugCheckEx(0x1Au, 0x5150BuLL, v126, 0LL, 0LL);
      }
      MiSetPfnIdentity(v5, 0LL);
    }
    LODWORD(v20) = MiClearFileOnlyPfn(v5, a2, v3);
  }
  else
  {
    v9 = 0;
    v143 = 0LL;
    v10 = (*((_QWORD *)&v5[2].Next + 1) >> 43) & 0x3FFLL;
    v146 = MiPageSizes[v7];
    v11 = *((_QWORD *)qword_140E2FF88 + v10);
    v141 = v11;
    if ( (a2 & 1) != 0 )
    {
      v148 = (volatile signed __int64 *)(v11 + 2880);
      if ( (MiFlags & 0x80u) != 0LL && (++dword_140E30170 & MmPageValidationFrequency) == 0 )
      {
        MiArePageContentsZero(BugCheckParameter2);
        v3 = v168;
      }
      v12 = 0;
      v170 = 0;
    }
    else
    {
      if ( (a2 & 0x100) != 0 )
      {
        *((_QWORD *)&v5[1].Next + 1) &= ~0x4000000000000000uLL;
        Next = (int)v5[2].Next;
        BYTE2(Next) = BYTE2(Next) & 0xF8 | 5;
        LODWORD(v5[2].Next) = Next;
        v167 = (int)v5[2].Next;
        HIBYTE(v167) |= 0x10u;
        LODWORD(v5[2].Next) = v167;
        LODWORD(v20) = MiInsertPageInList((ULONG_PTR)v5);
        return v20;
      }
      v170 = 1;
      v148 = (volatile signed __int64 *)(v11 + 3008);
      v12 = 1;
    }
    v13 = (*((_QWORD *)&v5[2].Next + 1) >> 60) & 7;
    v152 = 0LL;
    if ( v13 == 3 )
    {
      v122 = MiGetPagePrivilege((ULONG_PTR)v5, 1, (unsigned __int64 *)&v152);
      if ( v122 )
      {
        v123 = 0xAAAAAAAAAAAAAAABuLL * (v2 >> 4);
        v124 = (v122 & 0x20) != 0
             ? VslMakeProtectedPageExecutable(v123, 0LL, 0LL)
             : VslRemoveProtectedPage(v123, &v152, 0LL);
        if ( v124 < 0 )
          KeBugCheckEx(0x1Au, 0x5150BuLL, v123, 0LL, 0LL);
      }
      MiSetPfnIdentity(v5, 0LL);
      v3 = v168;
    }
    *((_QWORD *)&v5[1].Next + 1) &= ~0x4000000000000000uLL;
    _InterlockedOr(v137, 0);
    *((_QWORD *)&v5[1].Next + 1) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (*((_QWORD *)&v5[1].Next
                                                                                                 + 1) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
    LODWORD(v140) = v5[2].Next;
    v153 = 0LL;
    BYTE3(v140) &= 0xF8u;
    LODWORD(v5[2].Next) = v140;
    *((_QWORD *)&v5->Next + 1) |= 0x8000000000000000uLL;
    v156 = *((_QWORD *)&v5[2].Next + 1);
    v14 = v156;
    v154 = 0LL;
    v155 = 0LL;
    v157 = 0LL;
    v158 = 0LL;
    v159 = 0LL;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)&v5[2].Next + 1, v156 & 0x8FFFFFFFFFFFFFFFuLL, v156);
    *((_QWORD *)&v159 + 1) = v15;
    if ( v14 != v15 )
    {
      do
      {
        v156 = v15;
        v16 = v15;
        v15 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)&v5[2].Next + 1,
                v15 & 0x8FFFFFFFFFFFFFFFuLL,
                v15);
        *((_QWORD *)&v159 + 1) = v15;
      }
      while ( v16 != v15 );
    }
    v18 = *((_QWORD *)&v5[2].Next + 1);
    LODWORD(v140) = v5[2].Next;
    v17 = BYTE2(v140);
    BYTE3(v140) &= 0xD7u;
    *((_QWORD *)&v5[2].Next + 1) = v18 & 0x7FFFFFFFFFFFFFFFLL;
    BYTE2(v140) = v17 & 0xC7;
    v19 = 0;
    LODWORD(v5[2].Next) = v140;
    if ( ((__int64)*(&v5[2].Next + 1) & 0x10000000000LL) != 0 )
      v19 = HIDWORD(v5[2].Next) & 0x18000000;
    HIDWORD(v5[2].Next) = v19;
    if ( (v3 & 0x1000) != 0 )
    {
      v165 = (int)v5[2].Next;
      BYTE2(v165) = BYTE2(v165) & 0xF8 | 5;
      LODWORD(v20) = v165;
      LODWORD(v5[2].Next) = v165;
      return v20;
    }
    if ( byte_140E3CAE6 )
    {
      LODWORD(v20) = qword_140E3D140;
      v21 = (0xAAAAAAAAAAAAAAABuLL * ((__int64)&v5[0x22000000000LL] >> 4)) >> 9;
      v22 = *(unsigned __int8 *)(qword_140E3D140 + 2 * v21);
      if ( *(_BYTE *)(qword_140E3D140 + 2 * v21) )
      {
        if ( (_DWORD)v22 != 10 )
        {
          if ( (v3 & 0x800) == 0 )
          {
            v164 = (int)v5[2].Next;
            BYTE2(v164) = v12 | BYTE2(v164) & 0xF8;
            LODWORD(v5[2].Next) = v164;
            v113 = *((_QWORD *)qword_140E2FF88 + ((*((_QWORD *)&v5[2].Next + 1) >> 43) & 0x3FFLL));
            v114 = MI_NODE_FROM_PFN(v5, 0x7FFFFFFFFFFFFFFFLL, v3, 0xAAAAAAAAAAAAAAABuLL);
            LODWORD(v20) = MiFreePageToSlabAllocator(57216LL * v114 + 15464 + 232 * v22 + *(_QWORD *)(v113 + 16), v5);
          }
          return v20;
        }
      }
    }
    if ( ((__int64)v5[2].Next & 0x40000000) != 0 )
    {
      LODWORD(v20) = MiInsertPageInList((ULONG_PTR)v5);
      return v20;
    }
    v23 = MI_PAGE_TO_FULL_COLOR(BugCheckParameter2);
    v24 = v168;
    v25 = 0;
    v26 = v23;
    LODWORD(v144) = v23;
    v27 = *(_QWORD *)(v11 + 16) + 57216LL * ((v23 >> 9) & 0x3F);
    v147 = (unsigned __int8)BYTE2(LODWORD(v5[2].Next)) >> 6;
    LODWORD(v140) = v5[2].Next;
    v142 = v27;
    BYTE2(v140) = v12 | BYTE2(v140) & 0xF8;
    LODWORD(v5[2].Next) = v140;
    v28 = v5[1].Next;
    if ( v28 )
    {
      if ( qword_140E2DB80 )
      {
        if ( ((unsigned __int8)v28 & 0x10) != 0 )
          LODWORD(v28) = (unsigned int)v28 & 0xFFFFFFEF;
        else
          LODWORD(v28) = ~(_DWORD)qword_140E2DB80 & (unsigned int)v28;
      }
    }
    else
    {
      LODWORD(v28) = 0;
    }
    v29 = (unsigned int)v28;
    v30 = (unsigned int)v28 | -(__int64)((v168 & 0x400) != 0) & 0xFFFFFFFD00000000uLL;
    if ( qword_140E2DB80 )
    {
      if ( (qword_140E2DB80 & v30) != 0 )
      {
        v31 = 0xFFFFFFFD00000010uLL;
        if ( (v168 & 0x400) == 0 )
          v31 = 16LL;
        v30 = v29 | v31;
      }
      else
      {
        v30 |= qword_140E2DB80;
      }
    }
    v5[1].Next = (_SLIST_ENTRY *)v30;
    if ( (v168 & 0x40) != 0 || v7 != 3 )
      goto LABEL_58;
    if ( (v168 & 0x200) == 0 )
    {
      LODWORD(v20) = MiCoalesceFreeSmallPages(BugCheckParameter2, 1LL);
      if ( (v20 & 1) != 0 )
        return v20;
      v24 = v168;
      v25 = 0;
      v27 = v142;
    }
    if ( (v24 & 0x400) != 0
      || (v26 & 0x30000) != 0x30000
      || (v26 & 0xC0000) != 0x40000
      || (v32 = *(_QWORD *)(v27 + 14984), (*(_DWORD *)(v32 + 4) & 0x10) != 0)
      || (v29 = v12,
          LODWORD(v140) = v26 >> 8,
          *(unsigned __int16 *)(*(_QWORD *)(v27 + 8LL * v12 + 14944) + 16LL * (unsigned __int8)v26) >= *(int *)(v32 + 16976)) )
    {
LABEL_58:
      v47 = 1LL;
    }
    else
    {
      v33 = 0LL;
      v34 = -16 * (v12 ^ 1);
      v35 = 0LL;
      v36 = v140 & 1;
      v149 = ((unsigned int)~v34 >> 4) & 1;
      v37 = v27 + 8 * (v36 + 116);
      do
      {
        if ( (unsigned __int8)MmNumberOfChannels > 1u )
          v38 = *(_QWORD *)(v27 + 8 * (v35 + 2 * v36) + 15152) + v33;
        else
          v38 = *(_QWORD *)(v27 + 8 * v35 + 3848) + v33;
        v39 = 0LL;
        v29 = (unsigned __int64)MiPageSizes;
        v40 = (__int64 *)v37;
        v41 = 3LL;
        do
        {
          v42 = 0LL;
          v43 = v40;
          v44 = 2LL;
          do
          {
            v45 = *v43;
            v43 += 4;
            v42 += v45;
            --v44;
          }
          while ( v44 );
          v46 = v42 * *(_QWORD *)v29;
          v29 += 8LL;
          v40 += 160;
          v39 += v46;
          --v41;
        }
        while ( v41 );
        v33 = v39 + v38;
        ++v35;
        v27 = v142;
        v37 += 16LL;
      }
      while ( v35 <= v149 );
      v26 = v144;
      v5 = ListEntry;
      v7 = v139;
      v47 = 1LL;
      v12 = v170;
      v25 = v33 > 0x40;
      v11 = v141;
    }
    v5[1].Next = (_SLIST_ENTRY *)((unsigned __int64)v5[1].Next & 0xFFFFFFFFF7FFF3FFuLL);
    if ( !v25 )
    {
LABEL_60:
      v48 = v146;
      v49 = v141;
      if ( v146 == 1 )
      {
        v50 = _InterlockedIncrement64((volatile signed __int64 *)(v141 + 18688));
        if ( v50 <= 0x420 )
        {
          if ( v50 == 160 )
          {
            v131 = 1LL;
          }
          else if ( v50 == 1056 )
          {
            v131 = 2LL;
          }
          else
          {
            if ( v50 != 34 )
            {
              if ( v50 == 288 )
                MiSlabDemotionLowMemoryConditionUpdate(v49, 1LL, 1LL);
              goto LABEL_62;
            }
            v131 = 0LL;
          }
          v132 = (struct _KEVENT *)(32 * v131 + v49);
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v49 + 16192));
          KeSetEvent(v132 + 675, 0, 0);
          ++v132[676].Header.LockNV;
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v49 + 16192));
        }
LABEL_62:
        v51 = v50 - 1;
        if ( v51 == *(_QWORD *)(v49 + 16640) || v51 == *(_QWORD *)(v49 + 16648) )
          MiUpdateAvailableEventsAtDpc(v49, v29, v47);
        v7 = v139;
        goto LABEL_65;
      }
      v117 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v141 + 18688), v146);
      v118 = v48 + v117;
      if ( v117 >= 0x420 )
      {
LABEL_181:
        v119 = *(_QWORD *)(v49 + 16648);
        if ( v118 > v119 && v118 - v48 <= v119 || (v120 = *(_QWORD *)(v49 + 16640), v118 > v120) && v118 - v48 <= v120 )
          MiUpdateAvailableEventsAtDpc(v49, v29, v47);
LABEL_65:
        v52 = v142;
        v53 = v170;
        v54 = v142 + 1280LL * v7;
        _InterlockedIncrement64((volatile signed __int64 *)(v54 + 8LL * v170 + 8));
        v55 = 0LL;
        v144 = 0LL;
        if ( BugCheckParameter2 < 0x100000 )
        {
          v144 = 0LL;
          if ( v7 != 3 )
          {
            v144 = 1LL;
            v55 = 1LL;
          }
        }
        v56 = v147;
        _InterlockedIncrement64((volatile signed __int64 *)(v54 + 8 * (v147 + 4 * v55) + 24));
        v57 = BYTE1(v26) & 1;
        if ( v7 == 3 )
        {
          if ( (unsigned __int8)MmNumberOfChannels > 1u )
            _InterlockedIncrement64((volatile signed __int64 *)(v52 + 8 * (v53 + 2LL * v57) + 15152));
          BugCheckParameter4 = 0LL;
          MiUpdateLargePageCandidateValue(v141, BugCheckParameter2, 3LL);
          LODWORD(v53) = v170;
          v52 = v142;
        }
        if ( (unsigned __int8)MmNumberOfChannels > 1u )
          v47 = v57;
        else
          LOBYTE(v47) = 0;
        v58 = *(_QWORD *)(v52
                        + 8
                        * (v56
                         + 4
                         * ((unsigned __int8)v47
                          + 2 * ((unsigned int)v53 + 2 * (((v26 >> 15) & 1) + 10LL * (HIWORD(v26) & 3)))))
                        + 992)
            + 88LL * (unsigned __int8)v26;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v59 = 0;
          if ( _interlockedbittestandset((volatile signed __int32 *)(v58 + 32), 0x1Fu) )
            v59 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(v58 + 32), 0xFFu, v47);
          v60 = *(_DWORD *)(v58 + 32);
          v61 = v60;
          for ( LODWORD(v61) = v60 & 0xBFFFFFFF; (v60 & 0xBFFFFFFF) != 0x80000000; v60 = *(_DWORD *)(v58 + 32) )
          {
            if ( (v60 & 0x40000000) == 0 )
              _InterlockedOr((volatile signed __int32 *)(v58 + 32), 0x40000000u);
            if ( (++v59 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v61) )
            {
              HvlNotifyLongSpinWait(v59);
            }
            else
            {
              _mm_pause();
            }
          }
          v7 = v139;
        }
        else
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(v58 + 32), 0xFFu);
        }
        if ( *(_QWORD *)(v58 + 16) == 0x3FFFFFFFFFLL )
          _InterlockedOr64(
            (volatile signed __int64 *)(*(_QWORD *)(v142
                                                  + 16
                                                  * (((*(_DWORD *)(v58 + 8) >> 20) & 1)
                                                   + 2
                                                   * (((*(_DWORD *)(v58 + 8) >> 18) & 3)
                                                    + 4
                                                    * (((*(_DWORD *)(v58 + 8) >> 15) & 1)
                                                     + 10LL * (HIWORD(*(_DWORD *)(v58 + 8)) & 3))))
                                                  + 136)
                                      + 8 * ((unsigned __int64)(unsigned __int8)*(_DWORD *)(v58 + 8) >> 6)),
            1LL << (*(_DWORD *)(v58 + 8) & 0x3F));
        if ( v7 == 3 )
        {
          v64 = BugCheckParameter2;
          goto LABEL_90;
        }
        v62 = v144;
        v63 = v170;
        _InterlockedIncrement64((volatile signed __int64 *)(v54 + 8 * (v57 + 2 * (v170 + 2 * (v144 + 29)))));
        _InterlockedIncrement64((volatile signed __int64 *)(v54 + 8 * (v63 + 2 * v62) + 896));
        v64 = BugCheckParameter2;
        v169 = 0;
        v145 = 0;
        v65 = (*(_QWORD *)(48 * BugCheckParameter2 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL;
        v66 = *((_QWORD *)qword_140E2FF88 + v65);
        if ( *(_BYTE *)(v66 + 16102) )
        {
          v67 = *((_QWORD *)qword_140E2FF88 + v65);
          if ( !v7 )
          {
            BugCheckParameter4 = 0LL;
            MiUpdateLargePageCandidateValue(v67, BugCheckParameter2, 0LL);
            v143 = 0LL;
            goto LABEL_90;
          }
          if ( v7 == 2 )
          {
            BugCheckParameter4 = (ULONG_PTR)&v169;
            MiUpdateLargePageCandidateValue(v67, BugCheckParameter2, 2LL);
            if ( (v169 & 0xFC00) != 0x8000LL )
            {
              v143 = 0LL;
LABEL_90:
              v68 = 0LL;
              goto LABEL_91;
            }
            v121 = 1LL;
          }
          else
          {
            BugCheckParameter4 = (ULONG_PTR)&v145;
            MiUpdateLargePageCandidateValue(v67, BugCheckParameter2, v7);
            if ( (v145 & 0x1FF80000) != 0x10000000LL )
            {
              v143 = 0LL;
              goto LABEL_90;
            }
            if ( !_bittest64(&KeFeatureBits, 0x25u) )
            {
              v143 = 0LL;
              goto LABEL_90;
            }
            v121 = 0LL;
          }
          v68 = (struct _KEVENT *)MiRecordLargePageCandidate(v66, BugCheckParameter2, v121, 8LL);
          v143 = v68;
LABEL_91:
          v69 = (unsigned __int64 *)(48 * v64 - 0x220000000000LL);
          v70 = *(_QWORD *)(v58 + 16);
          if ( v70 == 0x3FFFFFFFFFLL )
          {
            v69[3] = v69[3] & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
            *v69 = *v69 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
            *(_QWORD *)(v58 + 16) = v64;
            *(_QWORD *)(v58 + 24) = v64;
          }
          else
          {
            if ( *(_DWORD *)(v58 + 12) == 1 || (v168 & 0x400) != 0 )
            {
              v71 = 48LL * *(_QWORD *)(v58 + 24);
              v69[3] = (0xAAAAAAAAAAAAAAABuLL * (v71 >> 4)) ^ ((0xAAAAAAAAAAAAAAABuLL * (v71 >> 4)) ^ v69[3]) & 0xFFFFFF0000000000uLL;
              *(_QWORD *)(v71 - 0x220000000000LL) = v64 ^ (*(_QWORD *)(v71 - 0x220000000000LL) ^ v64) & 0xFFFFFF0000000000uLL;
              *(_QWORD *)(v58 + 24) = v64;
              v72 = *v69 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
            }
            else
            {
              v101 = 48 * v70 - 0x220000000000LL;
              v69[3] = v69[3] & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
              v102 = *(_QWORD *)(v101 + 24);
              v103 = _InterlockedCompareExchange64(
                       (volatile signed __int64 *)(v101 + 24),
                       v64 ^ (v64 ^ v102) & 0xFFFFFF0000000000uLL,
                       v102);
              if ( v102 != v103 )
              {
                do
                {
                  v104 = v103;
                  v103 = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)(v101 + 24),
                           v64 ^ (v64 ^ v103) & 0xFFFFFF0000000000uLL,
                           v103);
                }
                while ( v104 != v103 );
              }
              *(_QWORD *)(v58 + 16) = v64;
              v72 = (0xAAAAAAAAAAAAAAABuLL * ((48 * v70) >> 4)) ^ (*v69 ^ (0xAAAAAAAAAAAAAAABuLL * ((48 * v70) >> 4))) & 0xFFFFFF0000000000uLL;
            }
            *v69 = v72;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v58);
          v73 = v170;
          v74 = v168;
          if ( v170 || (v168 & 0x400) != 0 )
          {
            v75 = v146;
            if ( v146 == 1 )
            {
LABEL_97:
              LODWORD(v20) = (_DWORD)v148;
              _InterlockedIncrement64(v148);
LABEL_98:
              if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (LODWORD(v20) = PopHibernateInProgress) != 0 )
              {
                *(_DWORD *)(v58 + 32) = 0;
              }
              else
              {
                LODWORD(v20) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v58 + 32, retaddr);
                v73 = v170;
              }
              v76 = v142;
              if ( (v168 & 0x2000) != 0 )
              {
                v20 = *(_QWORD *)(v142 + 15200);
                do
                {
                  v115 = (v20 - 1) ^ ((v20 - 1) ^ v20) & 0xFFFFFFFFFFFF0000uLL;
                  if ( (_WORD)v20 == 1 )
                    v115 ^= (v115 ^ (v115 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
                  v116 = v20;
                  v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v76 + 15200), v115, v20);
                }
                while ( v116 != v20 );
              }
              if ( v73 != 1 )
                goto LABEL_51;
              LODWORD(v20) = *(_DWORD *)(v141 + 16944);
              if ( (_DWORD)v20 )
                goto LABEL_51;
              v77 = 64LL;
              v78 = 0LL;
              if ( v76 )
              {
                LODWORD(v20) = *(_DWORD *)(v141 + 4);
                if ( (v20 & 0x20) != 0 )
                {
LABEL_116:
                  v74 = v168;
LABEL_51:
                  if ( v68
                    && (v74 & 0x200) == 0
                    && (MiFlags & 0x30) != 0
                    && (v7 != 1 || _bittest64(&KeFeatureBits, 0x25u))
                    && !v68->Header.SignalState )
                  {
                    LODWORD(v20) = KeSetEvent(v68, 0, 0);
                  }
                  return v20;
                }
                v77 = 1024LL;
                v79 = v76 + 57216;
                v78 = 0x100000LL;
                v80 = v76;
              }
              else
              {
                LODWORD(v20) = (unsigned __int16)KeNumberNodes;
                v80 = *(_QWORD *)(v141 + 16);
                v79 = v80 + 57216LL * (unsigned __int16)KeNumberNodes;
              }
              if ( v80 < v79 )
              {
                v81 = v80 + 3856;
                v82 = (v79 - v80 - 1) / 0xDF80 + 1;
                do
                {
                  LODWORD(v20) = *(unsigned __int8 *)(v81 + 11440);
                  if ( !(_BYTE)v20 )
                  {
                    v83 = 0LL;
                    v84 = MiPageSizes;
                    v85 = (__int64 *)(v81 - 3840);
                    v86 = 3LL;
                    do
                    {
                      v20 = *v84++;
                      v87 = *v85;
                      v85 += 160;
                      v83 += v20 * v87;
                      --v86;
                    }
                    while ( v86 );
                    if ( !v76 )
                    {
                      v20 = *(_QWORD *)v81;
                      v83 += *(_QWORD *)v81;
                    }
                    if ( v83 >= v77 )
                    {
                      if ( !v78 )
                        goto LABEL_155;
                      v106 = 0LL;
                      v107 = (__int64 *)(v81 - 3848);
                      v108 = MiPageSizes;
                      v109 = 3LL;
                      do
                      {
                        v20 = *v108++;
                        v110 = *v107;
                        v107 += 160;
                        v106 += v20 * v110;
                        --v109;
                      }
                      while ( v109 );
                      if ( v106 < v78 )
                      {
LABEL_155:
                        v111 = (volatile LONG *)(v81 + 11424);
                        if ( v76 )
                        {
                          v163 = 17;
                          ExAcquireSpinLockExclusiveAtDpcLevel(v111);
                          v112 = 17;
                        }
                        else
                        {
                          v112 = ExAcquireSpinLockExclusive(v111);
                          v163 = v112;
                        }
                        if ( *(_QWORD *)(v81 + 11416) && !*(_BYTE *)(v81 + 11440) )
                        {
                          *(_BYTE *)(v81 + 11440) = 1;
                          MiWakeZeroingThreads();
                          v112 = v163;
                        }
                        LODWORD(v20) = MiReleaseSpinLockExclusive(v81 + 11424, v112);
                        v76 = v142;
                      }
                    }
                  }
                  v81 += 57216LL;
                  --v82;
                }
                while ( v82 );
                v68 = v143;
              }
              goto LABEL_116;
            }
          }
          else
          {
            v75 = v146;
            if ( v146 == 1 )
            {
              v105 = *(_QWORD *)(v142 + 8LL * ((v26 >> 18) & 3) + 5120);
              ++*(_QWORD *)(v105 + 8LL * (unsigned __int8)v26);
              goto LABEL_97;
            }
          }
          LODWORD(v20) = (_DWORD)v148;
          _InterlockedAdd64(v148, v75);
          goto LABEL_98;
        }
        v143 = 0LL;
        goto LABEL_90;
      }
      v128 = 4;
      if ( v118 < 0x420 )
        v128 = 0;
      if ( v117 < 0xA0 )
      {
        v130 = v128 | 2;
        if ( v118 < 0xA0 )
          v130 = v128;
        v128 = v130;
        if ( v117 < 0x22 && v118 >= 0x22 )
          v128 = v130 | 1;
      }
      else if ( v117 >= 0x120 )
      {
        v129 = v141;
LABEL_222:
        if ( v128 )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v129 + 16192));
          if ( (v128 & 1) != 0 )
          {
            KeSetEvent((PRKEVENT)(v129 + 16200), 0, 0);
            ++*(_DWORD *)(v129 + 16224);
            v129 = v141;
          }
          if ( (v128 & 2) != 0 )
          {
            KeSetEvent((PRKEVENT)(v129 + 16232), 0, 0);
            ++*(_DWORD *)(v129 + 16256);
          }
          v133 = (v128 & 4) == 0;
          v49 = v141;
          if ( !v133 )
          {
            KeSetEvent((PRKEVENT)(v141 + 16264), 0, 0);
            ++*(_DWORD *)(v49 + 16288);
          }
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v49 + 16192));
          v48 = v146;
        }
        else
        {
          v49 = v141;
          v48 = v146;
        }
        goto LABEL_181;
      }
      v129 = v141;
      if ( v118 >= 0x120 )
        MiSlabDemotionLowMemoryConditionUpdate(v141, 1LL, 1LL);
      goto LABEL_222;
    }
    v29 = *(_QWORD *)(v11 + 18688);
    if ( v29 < 0x420 )
    {
      v88 = 0;
      v89 = *(_QWORD *)(v11 + 16) + 14944LL;
      while ( v88 < (unsigned __int16)KeNumberNodes )
      {
        v90 = 0LL;
        v91 = (_QWORD *)v89;
        while ( v90 <= 1 )
        {
          for ( i = 0; i < dword_140E2DBCC; ++i )
          {
            v29 += *(unsigned __int16 *)(*v91 + 16LL * i);
            if ( v29 >= 0x420 )
            {
              v12 = v170;
              goto LABEL_129;
            }
          }
          ++v90;
          ++v91;
        }
        v89 += 57216LL;
        ++v88;
      }
      v47 = 1LL;
      goto LABEL_60;
    }
LABEL_129:
    if ( (BYTE2(v5[2].Next) & 7) != 5 )
    {
      v162 = (int)v5[2].Next;
      BYTE2(v162) = BYTE2(v162) & 0xF8 | 5;
      LODWORD(v5[2].Next) = v162;
    }
    v93 = (unsigned __int64)v5[1].Next & 0xFFFFFFFFFFFF0FFFuLL | ((unsigned __int64)v12 << 12);
    if ( v93 )
    {
      v9 = (__int64)v5[1].Next & 0xFFFF0FFF | (v12 << 12);
      if ( qword_140E2DB80 )
      {
        if ( ((__int64)v5[1].Next & 0x10) != 0 )
          v9 = (__int64)v5[1].Next & 0xFFFF0FEF | (v12 << 12);
        else
          v9 = v93 & ~(_DWORD)qword_140E2DB80;
      }
    }
    v94 = v9 | 0xFFFFFFFE00000000uLL;
    if ( qword_140E2DB80 )
    {
      v95 = v9 | 0xFFFFFFFE00000010uLL;
      if ( (qword_140E2DB80 & v94) == 0 )
        v95 = v9 | (unsigned __int64)qword_140E2DB80 | 0xFFFFFFFE00000000uLL;
      v94 = v95;
    }
    v96 = (unsigned __int8)v26;
    v97 = v142;
    v5[1].Next = (_SLIST_ENTRY *)v94;
    v20 = (signed __int64)RtlpInterlockedPushEntrySList(
                            (PSLIST_HEADER)(*(_QWORD *)(v97 + 8LL * v12 + 14944) + 16LL * v96),
                            v5);
    if ( !v20 )
    {
      LOBYTE(v98) = 1;
      v99 = (v96 % dword_140E2DBCC) & 0x1F;
      v100 = (volatile signed __int32 *)(*(_QWORD *)(v97 + 16LL * v12 + 14856)
                                       + 4 * ((unsigned __int64)(v96 % dword_140E2DBCC) >> 5));
      LODWORD(v20) = v99 + 1;
      if ( (unsigned __int64)(v99 + 1) > 0x20 )
      {
        if ( ((v96 % dword_140E2DBCC) & 0x1F) == 0 )
          goto LABEL_179;
        v134 = (v96 % dword_140E2DBCC) & 0x1F;
        _InterlockedOr(v100, ((1 << (32 - v134)) - 1) << ((v96 % dword_140E2DBCC) & 0x1F));
        v20 = 32 - v134;
        ++v100;
        v98 = 1 - v20;
        if ( (unsigned __int64)(1 - v20) >= 0x20 )
        {
          v135 = v98 >> 5;
          v20 = -32LL * (v98 >> 5);
          v98 += v20;
          do
          {
            *v100++ = -1;
            --v135;
          }
          while ( v135 );
        }
        if ( v98 )
LABEL_179:
          _InterlockedOr(v100, (1 << v98) - 1);
      }
      else
      {
        _InterlockedOr(v100, 1 << ((v96 % dword_140E2DBCC) & 0x1F));
      }
    }
  }
  return v20;
}
