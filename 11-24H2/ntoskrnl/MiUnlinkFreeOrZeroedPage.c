/*
 * XREFs of MiUnlinkFreeOrZeroedPage @ 0x14024E130
 * Callers:
 *     MiPageFreeToZero @ 0x140220160 (MiPageFreeToZero.c)
 *     MiCoalesceFreeSmallPages @ 0x140250600 (MiCoalesceFreeSmallPages.c)
 *     MiLargeFreePageToMdl @ 0x1402EF600 (MiLargeFreePageToMdl.c)
 *     MiDemoteLargeFreePage @ 0x1402EFE44 (MiDemoteLargeFreePage.c)
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 *     MiGetPerfectColorHeadPage @ 0x14033D740 (MiGetPerfectColorHeadPage.c)
 *     MiLargePagePromote @ 0x140423C14 (MiLargePagePromote.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x14049DD64 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiPurgeZeroListHead @ 0x1404BFBD4 (MiPurgeZeroListHead.c)
 *     MiTryUnlinkNodeLargePages @ 0x1406855D0 (MiTryUnlinkNodeLargePages.c)
 *     MiTransferPartitionPageRun @ 0x14068C62C (MiTransferPartitionPageRun.c)
 *     MiScrubLargePage @ 0x14068EB34 (MiScrubLargePage.c)
 * Callees:
 *     MiUpdateLargePageCandidateValue @ 0x1402277A0 (MiUpdateLargePageCandidateValue.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140250420 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiIsFreeZeroPfnCold @ 0x140250EDC (MiIsFreeZeroPfnCold.c)
 *     MiObtainFreePages @ 0x1402616B4 (MiObtainFreePages.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x140261770 (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x140261834 (MiUpdateAvailableEventsAtDpc.c)
 *     MiWakeLargePageRebuild @ 0x140261C8C (MiWakeLargePageRebuild.c)
 *     MiIncreaseAvailablePages @ 0x140263490 (MiIncreaseAvailablePages.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiRecordLargePageCandidate @ 0x1403135A4 (MiRecordLargePageCandidate.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiPageListCollision @ 0x1404218AC (MiPageListCollision.c)
 *     MiSetFreeZeroPfnCold @ 0x140423EE0 (MiSetFreeZeroPfnCold.c)
 *     MiArePageContentsZero @ 0x1404C33B0 (MiArePageContentsZero.c)
 */

__int64 __fastcall MiUnlinkFreeOrZeroedPage(ULONG_PTR a1, __int64 a2, __int16 a3)
{
  unsigned __int64 v3; // r14
  int v5; // esi
  __int64 v6; // r13
  __int64 v7; // r12
  unsigned int v8; // ecx
  __int64 *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // r10
  unsigned __int64 v16; // rdi
  unsigned int v17; // ebp
  __int64 v18; // rdx
  __int64 v19; // r8
  bool v20; // zf
  int v21; // ebx
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // r8
  volatile signed __int32 *v26; // r8
  signed __int8 v27; // cf
  unsigned int v28; // eax
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned int v31; // ebx
  __int64 v32; // rax
  volatile signed __int64 *v33; // r11
  __int64 v34; // rdx
  signed __int64 v35; // r8
  signed __int64 v36; // rcx
  int v37; // ecx
  __int64 v38; // rcx
  _BOOL8 v39; // rax
  __int64 v40; // rdx
  ULONG_PTR v41; // rsi
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v46; // rax
  __int64 v47; // r11
  unsigned int v48; // eax
  __int64 *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // r8
  __int64 v55; // r9
  volatile signed __int64 *v56; // r9
  signed __int64 v57; // rax
  signed __int64 v58; // rtt
  __int64 v59; // r9
  volatile signed __int64 *v60; // r11
  signed __int64 v61; // r8
  signed __int64 v62; // rcx
  __int64 v63; // r11
  __int64 v64; // rax
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // rcx
  __int64 v68; // rax
  ULONG_PTR v69; // r9
  volatile signed __int32 *v70; // r11
  unsigned __int64 v71; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  int v73; // eax
  unsigned __int64 v74; // rdx
  signed __int32 v75[8]; // [rsp+0h] [rbp-D8h] BYREF
  unsigned int v76; // [rsp+30h] [rbp-A8h]
  unsigned int v77; // [rsp+34h] [rbp-A4h]
  __int64 v78; // [rsp+38h] [rbp-A0h]
  __int64 v79; // [rsp+40h] [rbp-98h]
  unsigned __int64 v80; // [rsp+48h] [rbp-90h]
  __int64 v81; // [rsp+50h] [rbp-88h]
  __int64 v82; // [rsp+58h] [rbp-80h]
  unsigned __int64 v83; // [rsp+60h] [rbp-78h]
  unsigned int v84; // [rsp+68h] [rbp-70h]
  int v85; // [rsp+6Ch] [rbp-6Ch] BYREF
  __int64 v86; // [rsp+70h] [rbp-68h]
  __int64 v87; // [rsp+78h] [rbp-60h]
  __int64 v88; // [rsp+80h] [rbp-58h]
  unsigned __int64 v89; // [rsp+88h] [rbp-50h]
  __int64 v90; // [rsp+90h] [rbp-48h]
  void *retaddr; // [rsp+D8h] [rbp+0h]
  ULONG_PTR BugCheckParameter2a; // [rsp+E0h] [rbp+8h]
  signed __int16 v95; // [rsp+F8h] [rbp+20h] BYREF

  v3 = 0LL;
  v90 = 48 * a1;
  v5 = 0;
  v6 = 48 * a1 - 0x220000000000LL;
  v7 = 3LL;
  v8 = 3;
  if ( (*(_QWORD *)(v6 + 40) & 0x10000000000LL) != 0 )
  {
    v8 = 3 - ((*(_DWORD *)(v6 + 36) >> 27) & 3);
    if ( v8 == 3 )
      v8 = 3;
  }
  v9 = MiPageSizes;
  v86 = v8;
  v76 = v8;
  v10 = MiPageSizes[v8];
  v11 = (*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL;
  v83 = v10;
  v12 = *((_QWORD *)qword_140E300C8 + v11);
  v82 = v12;
  if ( v10 == 1 )
  {
    v13 = _InterlockedDecrement64((volatile signed __int64 *)(v12 + 18688));
    if ( v13 == *(_QWORD *)(v12 + 16640) || v13 == *(_QWORD *)(v12 + 16648) )
      MiUpdateAvailableEventsAtDpc(v12);
    v80 = v13 + 1;
  }
  else
  {
    v65 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 18688), -v10);
    v66 = *(_QWORD *)(v12 + 16648);
    v13 = v65 - v10;
    v80 = v65;
    if ( v65 - v10 <= v66 && v65 > v66 || (v67 = *(_QWORD *)(v12 + 16640), v13 <= v67) && v65 > v67 )
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
      if ( (v73 = *(_DWORD *)(v12 + 4), v13 < 0x20) && (v73 & 4) != 0
        || ((*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0 || v13 < 0x21) && (v73 & 0x10) == 0 )
      {
        if ( (a3 & 0x100) != 0 )
        {
          MiIncreaseAvailablePages(v12, v83);
          return 0LL;
        }
      }
    }
  }
  v77 = *(_BYTE *)(v6 + 34) & 7;
  v14 = MI_PAGE_TO_FULL_COLOR(a1);
  v15 = v82;
  v16 = v14;
  v17 = (v14 >> 9) & 0x3F;
  v18 = *(_QWORD *)(v82 + 16) + 57216LL * v17;
  v78 = v18;
  v19 = (unsigned __int8)BYTE2(*(_DWORD *)(v6 + 32)) >> 6;
  v20 = (a3 & 4) == 0;
  v81 = v18 + 1280 * v86;
  v21 = v76;
  if ( !v20 )
  {
    v55 = 15200LL;
    if ( v76 >= 2 )
      v55 = 15192LL;
    v56 = (volatile signed __int64 *)(v18 + v55);
    v57 = *v56;
    do
    {
      v58 = v57;
      v57 = _InterlockedCompareExchange64(v56, (v57 + 1) ^ (v57 ^ (v57 + 1)) & 0xFFFFFFFFFFFF0000uLL, v57);
    }
    while ( v58 != v57 );
    _InterlockedOr(v75, 0);
  }
  v22 = ((unsigned int)v16 >> 15) & 1;
  if ( (unsigned __int8)MmNumberOfChannels > 1u )
    v23 = ((unsigned int)v16 >> 8) & 1;
  else
    v23 = 0LL;
  v24 = (unsigned __int8)v16;
  v88 = v19;
  v86 = v22;
  v87 = (unsigned __int8)v16;
  v25 = *(_QWORD *)(v78 + 8 * (v19 + 4 * (v23 + 2 * (v77 + 2 * (v22 + 10LL * (WORD1(v16) & 3))))) + 992)
      + 88LL * (unsigned __int8)v16;
  v79 = v25;
  if ( !a2 )
  {
    v26 = (volatile signed __int32 *)(v25 + 32);
    v5 = 2;
    v80 = (unsigned __int64)v26;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
    {
      LOBYTE(v23) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v26, v23);
LABEL_23:
      v15 = v82;
      goto LABEL_24;
    }
    v27 = _interlockedbittestandset(v26, 0x1Fu);
    v84 = 0;
    if ( v27 )
    {
      LOBYTE(v23) = -1;
      v28 = ExpWaitForSpinLockExclusiveAndAcquire(v26, v23);
      v26 = (volatile signed __int32 *)v80;
      v15 = v82;
      v84 = v28;
    }
    v29 = *(unsigned int *)v26;
    v30 = v29 & 0xFFFFFFFFBFFFFFFFuLL;
    if ( (v29 & 0xBFFFFFFF) == 0x80000000 )
    {
LABEL_24:
      v25 = v79;
      goto LABEL_25;
    }
    v31 = v84;
    while ( 1 )
    {
      if ( (v29 & 0x40000000) == 0 )
        _InterlockedOr(v26, 0x40000000u);
      if ( (++v31 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v30, v29, v26, v24) )
        {
          HvlNotifyLongSpinWait(v31);
          v26 = (volatile signed __int32 *)v80;
          goto LABEL_21;
        }
        v26 = (volatile signed __int32 *)v80;
      }
      _mm_pause();
LABEL_21:
      v29 = *(unsigned int *)v26;
      if ( (*v26 & 0xBFFFFFFF) == 0x80000000 )
      {
        v21 = v76;
        goto LABEL_23;
      }
    }
  }
LABEL_25:
  v89 = -(__int64)v83;
  _InterlockedAdd64(*(volatile signed __int64 **)(v15 + 8LL * v77 + 7136), -(__int64)v83);
  if ( dword_140E3018C == 1 )
  {
    v69 = a1 & 0x1F;
    v70 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E301E0 + 1) + 4 * (a1 >> 5));
    v71 = v83;
    if ( v69 + v83 > 0x20 )
    {
      if ( (a1 & 0x1F) != 0 )
      {
        _InterlockedOr(v70, ((1 << (32 - (a1 & 0x1F))) - 1) << v69);
        v71 = v83 - (32 - (unsigned int)(a1 & 0x1F));
        ++v70;
      }
      if ( v71 >= 0x20 )
      {
        v74 = v71 >> 5;
        v71 += -32LL * (v71 >> 5);
        do
        {
          *v70++ = -1;
          --v74;
        }
        while ( v74 );
      }
      if ( v71 )
        _InterlockedOr(v70, (1 << v71) - 1);
    }
    else if ( v83 == 32 )
    {
      *v70 = -1;
    }
    else
    {
      _InterlockedOr(v70, ((1 << v83) - 1) << v69);
    }
  }
  _InterlockedDecrement64((volatile signed __int64 *)v25);
  if ( *(_QWORD *)(v25 + 16) == a1 )
  {
    v32 = *(_QWORD *)v6 & 0xFFFFFFFFFFLL;
    *(_QWORD *)(v25 + 16) = v32;
    if ( v32 == 0x3FFFFFFFFFLL )
    {
      v47 = v78;
      *(_QWORD *)(v25 + 24) = 0x3FFFFFFFFFLL;
      v48 = *(_DWORD *)(v25 + 8);
      v34 = ((v48 >> 15) & 1) + 10LL * (HIWORD(v48) & 3);
      _InterlockedAnd64(
        (volatile signed __int64 *)(*(_QWORD *)(v47 + 16 * (((v48 >> 20) & 1) + 2 * (((v48 >> 18) & 3) + 4 * v34)) + 136)
                                  + 8 * ((unsigned __int64)(unsigned __int8)v48 >> 6)),
        ~(1LL << (v48 & 0x3F)));
      v15 = v82;
    }
    else
    {
      v33 = (volatile signed __int64 *)(48 * v32 - 0x21FFFFFFFFE8LL);
      v34 = *v33;
      v35 = _InterlockedCompareExchange64(v33, *v33 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL, *v33);
      if ( v34 != v35 )
      {
        v34 = 0xFFFFFF3FFFFFFFFFuLL;
        do
        {
          v36 = v35;
          v35 = _InterlockedCompareExchange64(v33, v35 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL, v35);
        }
        while ( v36 != v35 );
      }
    }
  }
  else
  {
    v34 = 48 * (*(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    *(_QWORD *)v34 = *(_QWORD *)v6 ^ (*(_QWORD *)v34 ^ *(_QWORD *)v6) & 0xFFFFFF0000000000uLL;
    v46 = *(_QWORD *)v6 & 0xFFFFFFFFFFLL;
    if ( v46 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(v25 + 24) = *(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFLL;
      goto LABEL_32;
    }
    v59 = *(_QWORD *)(v6 + 24);
    v60 = (volatile signed __int64 *)(48 * v46 - 0x21FFFFFFFFE8LL);
    v34 = *v60;
    v61 = _InterlockedCompareExchange64(v60, v59 ^ (v59 ^ *v60) & 0xFFFFFF0000000000uLL, *v60);
    if ( v34 != v61 )
    {
      do
      {
        v62 = v61;
        v61 = _InterlockedCompareExchange64(v60, v59 ^ (v59 ^ v61) & 0xFFFFFF0000000000uLL, v61);
      }
      while ( v62 != v61 );
      v21 = v76;
    }
  }
  v25 = v79;
LABEL_32:
  v76 = *(_DWORD *)(v6 + 32);
  BYTE2(v76) = BYTE2(v76) & 0xF8 | 5;
  *(_DWORD *)(v6 + 32) = v76;
  if ( !v77 && !(unsigned int)MiIsFreeZeroPfnCold(v6, v34, v25) && v21 == 3 )
  {
    v64 = *(_QWORD *)(v63 + 8 * ((v16 >> 18) & 3) + 5120);
    --*(_QWORD *)(v64 + 8 * v87);
  }
  v37 = v5 | 4;
  if ( !*(_BYTE *)(v15 + 16101) )
    v37 = v5;
  v76 = v37;
  if ( (v37 & 2) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      *(_DWORD *)(v25 + 32) = 0;
    }
    else
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v25 + 32, retaddr);
      v15 = v82;
    }
  }
  v38 = v77;
  v39 = 0LL;
  v40 = v81;
  v41 = a1;
  _InterlockedDecrement64((volatile signed __int64 *)(v81 + 8LL * v77 + 8));
  if ( a1 < 0x100000 )
    v39 = v21 != 3;
  _InterlockedDecrement64((volatile signed __int64 *)(v40 + 8 * (v88 + 4 * v39) + 24));
  if ( (unsigned __int8)MmNumberOfChannels > 1u )
  {
    LOBYTE(v16) = BYTE1(v16) & 1;
    _InterlockedAdd64((volatile signed __int64 *)(v78 + 8 * (v38 + 2LL * (BYTE1(v16) & 1)) + 15152), v89);
    v38 = v77;
  }
  else
  {
    LOBYTE(v16) = 0;
  }
  if ( v21 != 3 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(v40 + 8 * (v38 + 2 * v86) + 896));
    v95 = 0;
    v85 = 0;
    v53 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v90 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
    BugCheckParameter2a = v53;
    if ( !*(_BYTE *)(v53 + 16102) )
    {
LABEL_81:
      _InterlockedDecrement64((volatile signed __int64 *)(v40 + 8 * ((unsigned __int8)v16 + 2 * (v77 + 58LL + 2 * v86))));
      goto LABEL_44;
    }
    if ( !v21 )
    {
      MiUpdateLargePageCandidateValue(v53, v41, 0, 0, 0LL);
      goto LABEL_80;
    }
    if ( v21 == 2 )
    {
      MiUpdateLargePageCandidateValue(v53, v41, 2, 0, &v95);
      if ( (v95 & 0xFC00) != 0x7C00LL )
      {
LABEL_80:
        v40 = v81;
        goto LABEL_81;
      }
      v54 = 1LL;
    }
    else
    {
      MiUpdateLargePageCandidateValue(v53, v41, v21, 0, (volatile signed __int16 *)&v85);
      if ( (v85 & 0x1FF80000) != 0xFF80000LL || !_bittest64(&KeFeatureBits, 0x25u) )
        goto LABEL_80;
      v54 = 0LL;
    }
    MiRecordLargePageCandidate(BugCheckParameter2a, v41, v54, 1LL);
    goto LABEL_80;
  }
  MiUpdateLargePageCandidateValue(v15, a1, 3, 0, 0LL);
LABEL_44:
  if ( (*(_BYTE *)(v6 + 34) & 8) != 0 )
    MiPageListCollision(v6);
  *(_QWORD *)v6 = 0LL;
  *(_QWORD *)(v6 + 24) &= 0xFFFFFF0000000000uLL;
  v42 = *(_QWORD *)(v6 + 16);
  if ( qword_140E2DCC0 )
  {
    if ( (v42 & 0x10) != 0 )
      v42 &= ~0x10uLL;
    else
      v42 &= ~qword_140E2DCC0;
  }
  *(_QWORD *)(v6 + 16) = CLFS_LSN_NULL_EXT;
  if ( HIDWORD(v42) == 4294967293 )
    MiSetFreeZeroPfnCold(v6, 1LL);
  if ( v77 == 1 || v76 >= 4 )
  {
    v43 = *(_QWORD *)(v6 + 16);
    v44 = 128LL;
    if ( v43 )
    {
      v44 = v43 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    }
    else if ( qword_140E2DCC0 )
    {
      v44 = 144LL;
      if ( (qword_140E2DCC0 & 0x80u) == 0LL )
        v44 = qword_140E2DCC0 | 0x80;
    }
    *(_QWORD *)(v6 + 16) = v44;
  }
  else if ( (MiFlags & 0x80u) != 0LL && (++dword_140E302B0 & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero(v41);
  }
  if ( v83 == 16 && (*(_DWORD *)(v82 + 4) & 0x10) == 0 )
  {
    v49 = (__int64 *)(v78 + 16);
    do
    {
      v50 = *(v49 - 1);
      v51 = *v49;
      v49 += 160;
      v52 = *v9++;
      v3 += (v51 + v50) * v52;
      --v7;
    }
    while ( v7 );
    if ( v3 <= 0x200 && (MiFlags & 0x30) != 0 )
      MiWakeLargePageRebuild(v82, v17, 0LL);
  }
  return 1LL;
}
