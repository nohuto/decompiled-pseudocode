/*
 * XREFs of MiUnlinkFreeOrZeroedPage @ 0x140344B60
 * Callers:
 *     MiGetPerfectColorHeadPage @ 0x14022C2A0 (MiGetPerfectColorHeadPage.c)
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 *     MiCoalesceFreeSmallPages @ 0x140345720 (MiCoalesceFreeSmallPages.c)
 *     MiPageFreeToZero @ 0x1403478B0 (MiPageFreeToZero.c)
 *     MiLargePagePromote @ 0x1404384BC (MiLargePagePromote.c)
 *     MiDemoteLargeFreePage @ 0x14048BA98 (MiDemoteLargeFreePage.c)
 *     MiLargeFreePageToMdl @ 0x14049FBFC (MiLargeFreePageToMdl.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1404A8AC8 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiPurgeZeroListHead @ 0x1404C5F04 (MiPurgeZeroListHead.c)
 *     MiTryUnlinkNodeLargePages @ 0x140678C18 (MiTryUnlinkNodeLargePages.c)
 *     MiTransferPartitionPageRun @ 0x14067FC6C (MiTransferPartitionPageRun.c)
 *     MiScrubLargePage @ 0x140682174 (MiScrubLargePage.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402120E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402121B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiUpdateLargePageCandidateValue @ 0x14024FD70 (MiUpdateLargePageCandidateValue.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     MiIsFreeZeroPfnCold @ 0x1402C80AC (MiIsFreeZeroPfnCold.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140344980 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiRecordLargePageCandidate @ 0x14034FA14 (MiRecordLargePageCandidate.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiIncreaseAvailablePages @ 0x1403BCD40 (MiIncreaseAvailablePages.c)
 *     MiWakeLargePageRebuild @ 0x1403BDA30 (MiWakeLargePageRebuild.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x1403BEBFC (MiUpdateAvailableEventsAtDpc.c)
 *     MiObtainFreePages @ 0x1403BF484 (MiObtainFreePages.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x1403BF540 (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiSetFreeZeroPfnCold @ 0x140438788 (MiSetFreeZeroPfnCold.c)
 *     MiPageListCollision @ 0x14043ADFC (MiPageListCollision.c)
 *     MiArePageContentsZero @ 0x1404C9D90 (MiArePageContentsZero.c)
 */

__int64 __fastcall MiUnlinkFreeOrZeroedPage(ULONG_PTR BugCheckParameter2, __int64 a2, __int16 a3)
{
  unsigned __int64 v4; // r15
  int v6; // esi
  __int64 v7; // r14
  unsigned int v8; // ecx
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // rbx
  unsigned int v14; // eax
  unsigned __int64 v15; // rbx
  unsigned int v16; // ebp
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // ecx
  __int64 v20; // rdx
  unsigned int v21; // edi
  __int64 v22; // r12
  int v23; // ebp
  int i; // edx
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // r11
  __int64 v27; // rax
  volatile signed __int64 *v28; // r10
  volatile signed __int64 v29; // rdx
  signed __int64 v30; // r8
  signed __int64 v31; // rcx
  unsigned int v32; // edi
  __int64 v33; // r12
  _BOOL8 v34; // rax
  unsigned __int64 v35; // rcx
  ULONG_PTR v36; // rsi
  int v37; // edx
  __int64 v38; // rbx
  unsigned __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdi
  unsigned __int64 *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 *v49; // r9
  __int64 *v50; // r8
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r9
  volatile signed __int64 *v55; // r10
  volatile signed __int64 v56; // rdx
  signed __int64 v57; // r8
  signed __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rcx
  __int64 v64; // r9
  volatile signed __int64 *v65; // r9
  signed __int64 v66; // rax
  signed __int64 v67; // rtt
  __int64 v68; // rax
  unsigned __int64 v69; // rdx
  volatile signed __int32 *v70; // r10
  struct _KTHREAD *CurrentThread; // rcx
  int v72; // eax
  unsigned __int64 v73; // rcx
  signed __int32 v74[8]; // [rsp+0h] [rbp-D8h] BYREF
  unsigned int v75; // [rsp+30h] [rbp-A8h]
  unsigned int v76; // [rsp+34h] [rbp-A4h]
  unsigned int v77; // [rsp+38h] [rbp-A0h]
  __int64 v78; // [rsp+40h] [rbp-98h]
  __int64 v79; // [rsp+48h] [rbp-90h]
  unsigned __int64 v80; // [rsp+50h] [rbp-88h]
  int v81; // [rsp+58h] [rbp-80h] BYREF
  ULONG_PTR v82; // [rsp+60h] [rbp-78h]
  __int64 v83; // [rsp+68h] [rbp-70h]
  __int64 v84; // [rsp+78h] [rbp-60h]
  unsigned __int64 v85; // [rsp+80h] [rbp-58h]
  __int64 v86; // [rsp+88h] [rbp-50h]
  __int64 v87; // [rsp+90h] [rbp-48h]
  ULONG_PTR v88; // [rsp+98h] [rbp-40h]
  void *retaddr; // [rsp+D8h] [rbp+0h]
  ULONG_PTR BugCheckParameter2b; // [rsp+E0h] [rbp+8h]
  signed __int16 v93; // [rsp+F8h] [rbp+20h] BYREF

  v4 = 0LL;
  v6 = 0;
  v88 = 48 * BugCheckParameter2;
  v7 = 48 * BugCheckParameter2 - 0x220000000000LL;
  if ( (*(_QWORD *)(v7 + 40) & 0x10000000000LL) != 0 )
  {
    v8 = 3 - ((*(_DWORD *)(v7 + 36) >> 27) & 3);
    if ( v8 == 3 )
      v8 = 3;
  }
  else
  {
    v8 = 3;
  }
  v9 = v8;
  v75 = v8;
  v10 = MiPageSizes[v8];
  v11 = (*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL;
  v79 = v10;
  v12 = *((_QWORD *)qword_140E2FD48 + v11);
  if ( v10 == 1 )
  {
    v13 = _InterlockedDecrement64((volatile signed __int64 *)(v12 + 18688));
    if ( v13 == *(_QWORD *)(v12 + 16640) || v13 == *(_QWORD *)(v12 + 16648) )
      MiUpdateAvailableEventsAtDpc(v12);
    v80 = v13 + 1;
  }
  else
  {
    v61 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 18688), -v10);
    v62 = *(_QWORD *)(v12 + 16648);
    v13 = v61 - v10;
    v80 = v61;
    if ( v61 - v10 <= v62 && v61 > v62 || (v63 = *(_QWORD *)(v12 + 16640), v13 <= v63) && v61 > v63 )
      MiUpdateAvailableEventsAtDpc(v12);
  }
  if ( v13 <= 0x420 )
  {
    v68 = *(_QWORD *)(v12 + 17600);
    if ( !v68 || !*(_BYTE *)(v68 + 52) )
      MiObtainFreePages(v12);
    if ( v13 < 0xA0 && v80 >= 0xA0 )
    {
      MiSlabDemotionLowMemoryConditionUpdate(v12, 1LL);
      if ( *(_DWORD *)(v12 + 1204) != -1 )
        KeSetEvent((PRKEVENT)(v12 + 1056), 0, 0);
    }
  }
  if ( v13 < 0x9F && (a3 & 0x200) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0xC) != 8 )
    {
      if ( (v72 = *(_DWORD *)(v12 + 4), v13 < 0x20) && (v72 & 4) != 0
        || ((*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0 || v13 < 0x21) && (v72 & 0x10) == 0 )
      {
        if ( (a3 & 0x100) != 0 )
        {
          MiIncreaseAvailablePages(v12, v79);
          return 0LL;
        }
      }
    }
  }
  v77 = *(_BYTE *)(v7 + 34) & 7;
  v14 = MI_PAGE_TO_FULL_COLOR(BugCheckParameter2);
  v15 = v14;
  v16 = (v14 >> 9) & 0x3F;
  v17 = *(_QWORD *)(v12 + 16) + 57216LL * v16;
  v18 = (unsigned __int8)BYTE2(*(_DWORD *)(v7 + 32)) >> 6;
  v76 = v16;
  v78 = v17;
  v80 = v17 + 1280 * v9;
  if ( (a3 & 4) != 0 )
  {
    v64 = 15200LL;
    if ( v75 >= 2 )
      v64 = 15192LL;
    v65 = (volatile signed __int64 *)(v17 + v64);
    v66 = *v65;
    do
    {
      v67 = v66;
      v66 = _InterlockedCompareExchange64(v65, (v66 + 1) ^ (v66 ^ (v66 + 1)) & 0xFFFFFFFFFFFF0000uLL, v66);
    }
    while ( v67 != v66 );
    _InterlockedOr(v74, 0);
  }
  v19 = ((unsigned int)v15 >> 15) & 1;
  if ( (unsigned __int8)MmNumberOfChannels > 1u )
    v20 = ((unsigned int)v15 >> 8) & 1;
  else
    v20 = 0LL;
  v21 = v77;
  v87 = v18;
  v83 = v19;
  v86 = v77;
  v84 = (unsigned __int8)v15;
  v22 = *(_QWORD *)(v78 + 8 * (v18 + 4 * (v20 + 2 * (v77 + 2 * (v19 + 10LL * (WORD1(v15) & 3))))) + 992)
      + 88LL * (unsigned __int8)v15;
  if ( !a2 )
  {
    v6 = 2;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v23 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)(v22 + 32), 0x1Fu) )
        v23 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(v22 + 32), 0xFFu);
      for ( i = *(_DWORD *)(v22 + 32); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(v22 + 32) )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedOr((volatile signed __int32 *)(v22 + 32), 0x40000000u);
        if ( (++v23 & HvlLongSpinCountMask) == 0
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
      v16 = v76;
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(v22 + 32), 0xFFu);
    }
    v21 = v77;
  }
  v25 = v79;
  v26 = -v79;
  v85 = -v79;
  _InterlockedAdd64(*(volatile signed __int64 **)(v12 + 8LL * v21 + 7136), -v79);
  if ( dword_140E2FE0C == 1 )
  {
    v69 = v25;
    v70 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E2FE60 + 1) + 4 * (BugCheckParameter2 >> 5));
    v82 = BugCheckParameter2 & 0x1F;
    if ( v82 + v25 > 0x20 )
    {
      if ( (BugCheckParameter2 & 0x1F) != 0 )
      {
        _InterlockedOr(v70, ((1 << (32 - (BugCheckParameter2 & 0x1F))) - 1) << v82);
        v69 = v25 - (32 - (unsigned int)(BugCheckParameter2 & 0x1F));
        ++v70;
      }
      if ( v69 >= 0x20 )
      {
        v73 = v69 >> 5;
        v69 += -32LL * (v69 >> 5);
        do
        {
          *v70++ = -1;
          --v73;
        }
        while ( v73 );
      }
      if ( v69 )
        _InterlockedOr(v70, (1 << v69) - 1);
    }
    else if ( v25 == 32 )
    {
      *v70 = -1;
    }
    else
    {
      _InterlockedOr(v70, ((1 << v25) - 1) << v82);
    }
  }
  _InterlockedDecrement64((volatile signed __int64 *)v22);
  if ( *(_QWORD *)(v22 + 16) == BugCheckParameter2 )
  {
    v27 = *(_QWORD *)v7 & 0xFFFFFFFFFFLL;
    *(_QWORD *)(v22 + 16) = v27;
    if ( v27 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(v22 + 24) = 0x3FFFFFFFFFLL;
      _InterlockedAnd64(
        (volatile signed __int64 *)(*(_QWORD *)(v78
                                              + 16
                                              * (((*(_DWORD *)(v22 + 8) >> 20) & 1)
                                               + 2
                                               * (((*(_DWORD *)(v22 + 8) >> 18) & 3)
                                                + 4
                                                * (((*(_DWORD *)(v22 + 8) >> 15) & 1)
                                                 + 10LL * (HIWORD(*(_DWORD *)(v22 + 8)) & 3))))
                                              + 136)
                                  + 8 * ((unsigned __int64)(unsigned __int8)*(_DWORD *)(v22 + 8) >> 6)),
        ~(1LL << (*(_DWORD *)(v22 + 8) & 0x3F)));
    }
    else
    {
      v28 = (volatile signed __int64 *)(48 * v27 - 0x21FFFFFFFFE8LL);
      v29 = *v28;
      v30 = _InterlockedCompareExchange64(v28, *v28 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL, *v28);
      if ( v29 != v30 )
      {
        do
        {
          v31 = v30;
          v30 = _InterlockedCompareExchange64(v28, v30 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL, v30);
        }
        while ( v31 != v30 );
      }
    }
  }
  else
  {
    v44 = (unsigned __int64 *)(48 * (*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    *v44 = *(_QWORD *)v7 ^ (*v44 ^ *(_QWORD *)v7) & 0xFFFFFF0000000000uLL;
    v45 = *(_QWORD *)v7 & 0xFFFFFFFFFFLL;
    if ( v45 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(v22 + 24) = *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFLL;
    }
    else
    {
      v54 = *(_QWORD *)(v7 + 24);
      v55 = (volatile signed __int64 *)(48 * v45 - 0x21FFFFFFFFE8LL);
      v56 = *v55;
      v57 = _InterlockedCompareExchange64(v55, v54 ^ (v54 ^ *v55) & 0xFFFFFF0000000000uLL, *v55);
      if ( v56 != v57 )
      {
        do
        {
          v58 = v57;
          v57 = _InterlockedCompareExchange64(v55, v54 ^ (v54 ^ v57) & 0xFFFFFF0000000000uLL, v57);
        }
        while ( v58 != v57 );
        v16 = v76;
      }
    }
  }
  v76 = *(_DWORD *)(v7 + 32);
  BYTE2(v76) = BYTE2(v76) & 0xF8 | 5;
  *(_DWORD *)(v7 + 32) = v76;
  if ( !v21 && !(unsigned int)MiIsFreeZeroPfnCold(v7) && v75 == 3 )
  {
    v60 = *(_QWORD *)(v59 + 8 * ((v15 >> 18) & 3) + 5120);
    --*(_QWORD *)(v60 + 8 * v84);
  }
  v32 = v6 | 4;
  if ( !*(_BYTE *)(v12 + 16101) )
    v32 = v6;
  if ( (v32 & 2) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      *(_DWORD *)(v22 + 32) = 0;
    }
    else
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v22 + 32, retaddr);
      v26 = v85;
    }
  }
  v33 = v86;
  v34 = 0LL;
  v35 = v80;
  v36 = BugCheckParameter2;
  v37 = v75;
  _InterlockedDecrement64((volatile signed __int64 *)(v80 + 8 * v86 + 8));
  if ( BugCheckParameter2 < 0x100000 )
    v34 = v37 != 3;
  _InterlockedDecrement64((volatile signed __int64 *)(v35 + 8 * (v87 + 4 * v34) + 24));
  if ( (unsigned __int8)MmNumberOfChannels > 1u )
  {
    LOBYTE(v15) = BYTE1(v15) & 1;
    _InterlockedAdd64((volatile signed __int64 *)(v78 + 8 * (v33 + 2LL * (BYTE1(v15) & 1)) + 15152), v26);
    v35 = v80;
  }
  else
  {
    LOBYTE(v15) = 0;
  }
  if ( v37 != 3 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(v35 + 8 * (v33 + 2 * v83) + 896));
    v93 = 0;
    v81 = 0;
    v46 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v88 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
    BugCheckParameter2b = v46;
    if ( *(_BYTE *)(v46 + 16102) )
    {
      if ( !v37 )
      {
        MiUpdateLargePageCandidateValue(v46, v36, 0, 0, 0LL);
        goto LABEL_68;
      }
      if ( v37 != 2 )
      {
        MiUpdateLargePageCandidateValue(v46, v36, v37, 0, (volatile signed __int16 *)&v81);
        if ( (v81 & 0x1FF80000) != 0xFF80000LL || !_bittest64(&KeFeatureBits, 0x25u) )
          goto LABEL_68;
        v47 = 0LL;
        goto LABEL_67;
      }
      MiUpdateLargePageCandidateValue(v46, v36, 2, 0, &v93);
      if ( (v93 & 0xFC00) == 0x7C00LL )
      {
        v47 = 1LL;
LABEL_67:
        MiRecordLargePageCandidate(BugCheckParameter2b, v36, v47, 1LL);
      }
    }
LABEL_68:
    v48 = (unsigned __int8)v15;
    v38 = 3LL;
    _InterlockedDecrement64((volatile signed __int64 *)(v80 + 8 * (v48 + 2 * (v33 + 2 * (v83 + 29)))));
    goto LABEL_42;
  }
  v38 = 3LL;
  MiUpdateLargePageCandidateValue(v12, BugCheckParameter2, 3, 0, 0LL);
LABEL_42:
  if ( (*(_BYTE *)(v7 + 34) & 8) != 0 )
    MiPageListCollision(v7);
  *(_QWORD *)v7 = 0LL;
  *(_QWORD *)(v7 + 24) &= 0xFFFFFF0000000000uLL;
  v39 = *(_QWORD *)(v7 + 16);
  if ( qword_140E2D940 )
  {
    if ( (v39 & 0x10) != 0 )
      v39 &= ~0x10uLL;
    else
      v39 &= ~qword_140E2D940;
  }
  *(_QWORD *)(v7 + 16) = CLFS_LSN_NULL_EXT;
  if ( HIDWORD(v39) == 4294967293 )
    MiSetFreeZeroPfnCold(v7, 1LL);
  if ( v77 == 1 || v32 >= 4 )
  {
    v40 = *(_QWORD *)(v7 + 16);
    v41 = 128LL;
    if ( v40 )
    {
      v41 = v40 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    }
    else if ( qword_140E2D940 )
    {
      v41 = 144LL;
      if ( (qword_140E2D940 & 0x80u) == 0LL )
        v41 = qword_140E2D940 | 0x80;
    }
    v42 = v79;
    *(_QWORD *)(v7 + 16) = v41;
  }
  else
  {
    v42 = v79;
    if ( (MiFlags & 0x80u) != 0LL && (++dword_140E2FF28 & MmPageValidationFrequency) == 0 )
      MiArePageContentsZero(v36);
  }
  if ( v42 == 16 && (*(_DWORD *)(v12 + 4) & 0x10) == 0 )
  {
    v49 = MiPageSizes;
    v50 = (__int64 *)(v78 + 16);
    do
    {
      v51 = *(v50 - 1);
      v52 = *v50;
      v50 += 160;
      v53 = *v49++;
      v4 += (v52 + v51) * v53;
      --v38;
    }
    while ( v38 );
    if ( v4 <= 0x200 && (MiFlags & 0x30) != 0 )
      MiWakeLargePageRebuild(v12, v16, 0LL, v49);
  }
  return 1LL;
}
