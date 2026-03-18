/*
 * XREFs of MiUnlinkFreeOrZeroedPage @ 0x1402213E0
 * Callers:
 *     MiCoalesceFreeSmallPages @ 0x1402238B0 (MiCoalesceFreeSmallPages.c)
 *     MiTradePage @ 0x14022B650 (MiTradePage.c)
 *     MiPageFreeToZero @ 0x14026ABD0 (MiPageFreeToZero.c)
 *     MiGetPerfectColorHeadPage @ 0x1402F59B0 (MiGetPerfectColorHeadPage.c)
 *     MiLargeFreePageToMdl @ 0x14041F370 (MiLargeFreePageToMdl.c)
 *     MiDemoteLargeFreePage @ 0x14042F57C (MiDemoteLargeFreePage.c)
 *     MiLargePagePromote @ 0x1404316D4 (MiLargePagePromote.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1404A2E44 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiPurgeZeroListHead @ 0x1404C6774 (MiPurgeZeroListHead.c)
 *     MiTryUnlinkNodeLargePages @ 0x1406844A4 (MiTryUnlinkNodeLargePages.c)
 *     MiTransferPartitionPageRun @ 0x14068B4FC (MiTransferPartitionPageRun.c)
 *     MiScrubLargePage @ 0x14068DA04 (MiScrubLargePage.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x1402236D0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiIsFreeZeroPfnCold @ 0x14022418C (MiIsFreeZeroPfnCold.c)
 *     MiUpdateLargePageCandidateValue @ 0x140272210 (MiUpdateLargePageCandidateValue.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiObtainFreePages @ 0x1402D17D4 (MiObtainFreePages.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x1402D1890 (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x1402D19B0 (MiUpdateAvailableEventsAtDpc.c)
 *     MiRecordLargePageCandidate @ 0x1403096C4 (MiRecordLargePageCandidate.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiWakeLargePageRebuild @ 0x1403D3D0C (MiWakeLargePageRebuild.c)
 *     MiIncreaseAvailablePages @ 0x1403F66D0 (MiIncreaseAvailablePages.c)
 *     MiPageListCollision @ 0x14042FDFC (MiPageListCollision.c)
 *     MiSetFreeZeroPfnCold @ 0x1404319A0 (MiSetFreeZeroPfnCold.c)
 *     MiArePageContentsZero @ 0x1404CA060 (MiArePageContentsZero.c)
 */

__int64 __fastcall MiUnlinkFreeOrZeroedPage(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int16 v4; // bx
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
  unsigned int v21; // ebx
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // r8
  int *v25; // r8
  signed __int8 v26; // cf
  unsigned int v27; // eax
  int v28; // edx
  __int64 v29; // rcx
  unsigned int v30; // ebx
  __int64 v31; // rax
  volatile signed __int64 *v32; // r11
  __int64 v33; // rdx
  signed __int64 v34; // r8
  signed __int64 v35; // rcx
  int v36; // ecx
  __int64 v37; // rcx
  _BOOL8 v38; // rax
  __int64 v39; // rdx
  ULONG_PTR v40; // rsi
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v45; // rax
  __int64 v46; // r11
  unsigned int v47; // eax
  __int64 *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  ULONG_PTR v52; // rax
  __int64 v53; // r8
  __int64 v54; // r9
  volatile signed __int64 *v55; // r9
  signed __int64 v56; // rax
  signed __int64 v57; // rtt
  __int64 v58; // r9
  volatile signed __int64 *v59; // r11
  signed __int64 v60; // r8
  signed __int64 v61; // rcx
  __int64 v62; // r11
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rcx
  unsigned __int64 v66; // rcx
  __int64 v67; // rax
  ULONG_PTR v68; // r9
  volatile signed __int32 *v69; // r11
  unsigned __int64 v70; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  int v72; // eax
  unsigned __int64 v73; // rdx
  signed __int32 v74[8]; // [rsp+0h] [rbp-D8h] BYREF
  __int16 *v75; // [rsp+20h] [rbp-B8h]
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
  __int16 v95; // [rsp+F8h] [rbp+20h] BYREF

  v3 = 0LL;
  v90 = 48 * a1;
  v4 = a3;
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
  v12 = *((_QWORD *)qword_140E2FF88 + v11);
  v82 = v12;
  if ( v10 == 1 )
  {
    v13 = _InterlockedDecrement64((volatile signed __int64 *)(v12 + 18688));
    if ( v13 == *(_QWORD *)(v12 + 16640) || v13 == *(_QWORD *)(v12 + 16648) )
      MiUpdateAvailableEventsAtDpc(v12, 1LL, a3);
    v80 = v13 + 1;
  }
  else
  {
    v64 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 18688), -v10);
    v65 = *(_QWORD *)(v12 + 16648);
    v13 = v64 - v10;
    v80 = v64;
    if ( v64 - v10 <= v65 && v64 > v65 || (v66 = *(_QWORD *)(v12 + 16640), v13 <= v66) && v64 > v66 )
      MiUpdateAvailableEventsAtDpc(v12, v10, a3);
  }
  if ( v13 <= 0x420 )
  {
    v67 = *(_QWORD *)(v12 + 17600);
    if ( !v67 || !*(_BYTE *)(v67 + 52) )
      MiObtainFreePages(v12, v10, a3);
    if ( v13 < 0xA0 && v80 >= 0xA0 )
    {
      MiSlabDemotionLowMemoryConditionUpdate(v12, 1LL, a3);
      if ( *(_DWORD *)(v12 + 1204) != -1 )
        KeSetEvent((PRKEVENT)(v12 + 1056), 0, 0);
    }
  }
  if ( v13 < 0x9F && (v4 & 0x200) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0xC) != 8 )
    {
      if ( (v72 = *(_DWORD *)(v12 + 4), v13 < 0x20) && (v72 & 4) != 0
        || ((*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0 || v13 < 0x21) && (v72 & 0x10) == 0 )
      {
        if ( (v4 & 0x100) != 0 )
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
  v20 = (v4 & 4) == 0;
  v81 = v18 + 1280 * v86;
  v21 = v76;
  if ( !v20 )
  {
    v54 = 15200LL;
    if ( v76 >= 2 )
      v54 = 15192LL;
    v55 = (volatile signed __int64 *)(v18 + v54);
    v56 = *v55;
    do
    {
      v57 = v56;
      v56 = _InterlockedCompareExchange64(v55, (v56 + 1) ^ (v56 ^ (v56 + 1)) & 0xFFFFFFFFFFFF0000uLL, v56);
    }
    while ( v57 != v56 );
    _InterlockedOr(v74, 0);
  }
  v22 = ((unsigned int)v16 >> 15) & 1;
  if ( (unsigned __int8)MmNumberOfChannels > 1u )
    v23 = ((unsigned int)v16 >> 8) & 1;
  else
    v23 = 0LL;
  v88 = v19;
  v86 = v22;
  v87 = (unsigned __int8)v16;
  v24 = *(_QWORD *)(v78 + 8 * (v19 + 4 * (v23 + 2 * (v77 + 2 * (v22 + 10LL * (WORD1(v16) & 3))))) + 992)
      + 88LL * (unsigned __int8)v16;
  v79 = v24;
  if ( !a2 )
  {
    v25 = (int *)(v24 + 32);
    v5 = 2;
    v80 = (unsigned __int64)v25;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v25, 0xFFu);
LABEL_23:
      v15 = v82;
      goto LABEL_24;
    }
    v26 = _interlockedbittestandset(v25, 0x1Fu);
    v84 = 0;
    if ( v26 )
    {
      v27 = ExpWaitForSpinLockExclusiveAndAcquire(v25, 0xFFu, (__int64)v25);
      v25 = (int *)v80;
      v15 = v82;
      v84 = v27;
    }
    v28 = *v25;
    v29 = (unsigned int)*v25;
    LODWORD(v29) = v29 & 0xBFFFFFFF;
    if ( (_DWORD)v29 == 0x80000000 )
    {
LABEL_24:
      v24 = v79;
      goto LABEL_25;
    }
    v30 = v84;
    while ( 1 )
    {
      if ( (v28 & 0x40000000) == 0 )
        _InterlockedOr(v25, 0x40000000u);
      if ( (++v30 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v29) )
        {
          HvlNotifyLongSpinWait(v30);
          v25 = (int *)v80;
          goto LABEL_21;
        }
        v25 = (int *)v80;
      }
      _mm_pause();
LABEL_21:
      v28 = *v25;
      if ( (*v25 & 0xBFFFFFFF) == 0x80000000 )
      {
        v21 = v76;
        goto LABEL_23;
      }
    }
  }
LABEL_25:
  v89 = -(__int64)v83;
  _InterlockedAdd64(*(volatile signed __int64 **)(v15 + 8LL * v77 + 7136), -(__int64)v83);
  if ( dword_140E3004C == 1 )
  {
    v68 = a1 & 0x1F;
    v69 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E300A0 + 1) + 4 * (a1 >> 5));
    v70 = v83;
    if ( v68 + v83 > 0x20 )
    {
      if ( (a1 & 0x1F) != 0 )
      {
        _InterlockedOr(v69, ((1 << (32 - (a1 & 0x1F))) - 1) << v68);
        v70 = v83 - (32 - (unsigned int)(a1 & 0x1F));
        ++v69;
      }
      if ( v70 >= 0x20 )
      {
        v73 = v70 >> 5;
        v70 += -32LL * (v70 >> 5);
        do
        {
          *v69++ = -1;
          --v73;
        }
        while ( v73 );
      }
      if ( v70 )
        _InterlockedOr(v69, (1 << v70) - 1);
    }
    else if ( v83 == 32 )
    {
      *v69 = -1;
    }
    else
    {
      _InterlockedOr(v69, ((1 << v83) - 1) << v68);
    }
  }
  _InterlockedDecrement64((volatile signed __int64 *)v24);
  if ( *(_QWORD *)(v24 + 16) == a1 )
  {
    v31 = *(_QWORD *)v6 & 0xFFFFFFFFFFLL;
    *(_QWORD *)(v24 + 16) = v31;
    if ( v31 == 0x3FFFFFFFFFLL )
    {
      v46 = v78;
      *(_QWORD *)(v24 + 24) = 0x3FFFFFFFFFLL;
      v47 = *(_DWORD *)(v24 + 8);
      v33 = ((v47 >> 15) & 1) + 10LL * (HIWORD(v47) & 3);
      _InterlockedAnd64(
        (volatile signed __int64 *)(*(_QWORD *)(v46 + 16 * (((v47 >> 20) & 1) + 2 * (((v47 >> 18) & 3) + 4 * v33)) + 136)
                                  + 8 * ((unsigned __int64)(unsigned __int8)v47 >> 6)),
        ~(1LL << (v47 & 0x3F)));
      v15 = v82;
    }
    else
    {
      v32 = (volatile signed __int64 *)(48 * v31 - 0x21FFFFFFFFE8LL);
      v33 = *v32;
      v34 = _InterlockedCompareExchange64(v32, *v32 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL, *v32);
      if ( v33 != v34 )
      {
        v33 = 0xFFFFFF3FFFFFFFFFuLL;
        do
        {
          v35 = v34;
          v34 = _InterlockedCompareExchange64(v32, v34 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL, v34);
        }
        while ( v35 != v34 );
      }
    }
  }
  else
  {
    v33 = 48 * (*(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    *(_QWORD *)v33 = *(_QWORD *)v6 ^ (*(_QWORD *)v33 ^ *(_QWORD *)v6) & 0xFFFFFF0000000000uLL;
    v45 = *(_QWORD *)v6 & 0xFFFFFFFFFFLL;
    if ( v45 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(v24 + 24) = *(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFLL;
      goto LABEL_32;
    }
    v58 = *(_QWORD *)(v6 + 24);
    v59 = (volatile signed __int64 *)(48 * v45 - 0x21FFFFFFFFE8LL);
    v33 = *v59;
    v60 = _InterlockedCompareExchange64(v59, v58 ^ (v58 ^ *v59) & 0xFFFFFF0000000000uLL, *v59);
    if ( v33 != v60 )
    {
      do
      {
        v61 = v60;
        v60 = _InterlockedCompareExchange64(v59, v58 ^ (v58 ^ v60) & 0xFFFFFF0000000000uLL, v60);
      }
      while ( v61 != v60 );
      v21 = v76;
    }
  }
  v24 = v79;
LABEL_32:
  v76 = *(_DWORD *)(v6 + 32);
  BYTE2(v76) = BYTE2(v76) & 0xF8 | 5;
  *(_DWORD *)(v6 + 32) = v76;
  if ( !v77 && !(unsigned int)MiIsFreeZeroPfnCold(v6, v33, v24) && v21 == 3 )
  {
    v63 = *(_QWORD *)(v62 + 8 * ((v16 >> 18) & 3) + 5120);
    --*(_QWORD *)(v63 + 8 * v87);
  }
  v36 = v5 | 4;
  if ( !*(_BYTE *)(v15 + 16101) )
    v36 = v5;
  v76 = v36;
  if ( (v36 & 2) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      *(_DWORD *)(v24 + 32) = 0;
    }
    else
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v24 + 32, retaddr);
      v15 = v82;
    }
  }
  v37 = v77;
  v38 = 0LL;
  v39 = v81;
  v40 = a1;
  _InterlockedDecrement64((volatile signed __int64 *)(v81 + 8LL * v77 + 8));
  if ( a1 < 0x100000 )
    v38 = v21 != 3;
  _InterlockedDecrement64((volatile signed __int64 *)(v39 + 8 * (v88 + 4 * v38) + 24));
  if ( (unsigned __int8)MmNumberOfChannels > 1u )
  {
    LOBYTE(v16) = BYTE1(v16) & 1;
    _InterlockedAdd64((volatile signed __int64 *)(v78 + 8 * (v37 + 2LL * (BYTE1(v16) & 1)) + 15152), v89);
    v37 = v77;
  }
  else
  {
    LOBYTE(v16) = 0;
  }
  if ( v21 != 3 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(v39 + 8 * (v37 + 2 * v86) + 896));
    v95 = 0;
    v85 = 0;
    v52 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v90 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
    BugCheckParameter2a = v52;
    if ( !*(_BYTE *)(v52 + 16102) )
    {
LABEL_81:
      _InterlockedDecrement64((volatile signed __int64 *)(v39 + 8 * ((unsigned __int8)v16 + 2 * (v77 + 58LL + 2 * v86))));
      goto LABEL_44;
    }
    if ( !v21 )
    {
      v75 = 0LL;
      MiUpdateLargePageCandidateValue(v52, v40, 0LL);
      goto LABEL_80;
    }
    if ( v21 == 2 )
    {
      v75 = &v95;
      MiUpdateLargePageCandidateValue(v52, v40, 2LL);
      if ( (v95 & 0xFC00) != 0x7C00LL )
      {
LABEL_80:
        v39 = v81;
        goto LABEL_81;
      }
      v53 = 1LL;
    }
    else
    {
      v75 = (__int16 *)&v85;
      MiUpdateLargePageCandidateValue(v52, v40, v21);
      if ( (v85 & 0x1FF80000) != 0xFF80000LL || !_bittest64(&KeFeatureBits, 0x25u) )
        goto LABEL_80;
      v53 = 0LL;
    }
    MiRecordLargePageCandidate(BugCheckParameter2a, v40, v53, 1LL);
    goto LABEL_80;
  }
  v75 = 0LL;
  MiUpdateLargePageCandidateValue(v15, a1, 3LL);
LABEL_44:
  if ( (*(_BYTE *)(v6 + 34) & 8) != 0 )
    MiPageListCollision(v6);
  *(_QWORD *)v6 = 0LL;
  *(_QWORD *)(v6 + 24) &= 0xFFFFFF0000000000uLL;
  v41 = *(_QWORD *)(v6 + 16);
  if ( qword_140E2DB80 )
  {
    if ( (v41 & 0x10) != 0 )
      v41 &= ~0x10uLL;
    else
      v41 &= ~qword_140E2DB80;
  }
  *(_QWORD *)(v6 + 16) = CLFS_LSN_NULL_EXT;
  if ( HIDWORD(v41) == 4294967293 )
    MiSetFreeZeroPfnCold(v6, 1LL);
  if ( v77 == 1 || v76 >= 4 )
  {
    v42 = *(_QWORD *)(v6 + 16);
    v43 = 128LL;
    if ( v42 )
    {
      v43 = v42 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    }
    else if ( qword_140E2DB80 )
    {
      v43 = 144LL;
      if ( (qword_140E2DB80 & 0x80u) == 0LL )
        v43 = qword_140E2DB80 | 0x80;
    }
    *(_QWORD *)(v6 + 16) = v43;
  }
  else if ( (MiFlags & 0x80u) != 0LL && (++dword_140E30170 & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero(v40);
  }
  if ( v83 == 16 && (*(_DWORD *)(v82 + 4) & 0x10) == 0 )
  {
    v48 = (__int64 *)(v78 + 16);
    do
    {
      v49 = *(v48 - 1);
      v50 = *v48;
      v48 += 160;
      v51 = *v9++;
      v3 += (v50 + v49) * v51;
      --v7;
    }
    while ( v7 );
    if ( v3 <= 0x200 && (MiFlags & 0x30) != 0 )
      MiWakeLargePageRebuild(v82, v17, 0LL);
  }
  return 1LL;
}
