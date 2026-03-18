/*
 * XREFs of MiReplaceTransitionPage @ 0x140224B14
 * Callers:
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiTradeTransitionPage @ 0x1402F718C (MiTradeTransitionPage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140442B00 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiFinalizeImageHeaderPage @ 0x14049EAB8 (MiFinalizeImageHeaderPage.c)
 *     MiRepointPteAtExtendedStandby @ 0x140684E78 (MiRepointPteAtExtendedStandby.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068CDFC (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MI_NODE_FROM_PFN @ 0x1402245F0 (MI_NODE_FROM_PFN.c)
 *     MiCopyPfnEntryEx @ 0x1402247E0 (MiCopyPfnEntryEx.c)
 *     MiCopyPage @ 0x1402254C0 (MiCopyPage.c)
 *     MiReleasePageListLock @ 0x1402262E0 (MiReleasePageListLock.c)
 *     MiSwizzleInvalidPte @ 0x14022A3B0 (MiSwizzleInvalidPte.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiDetermineModifiedPageListHead @ 0x14022D670 (MiDetermineModifiedPageListHead.c)
 *     MiIsDecayPfn @ 0x14022EFD0 (MiIsDecayPfn.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiReplaceStandbyLookaside @ 0x14026CCE0 (MiReplaceStandbyLookaside.c)
 *     MiUpdateLargePageCandidateValue @ 0x140272210 (MiUpdateLargePageCandidateValue.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDecreaseAvailablePages @ 0x1402D1620 (MiDecreaseAvailablePages.c)
 *     MiAcquirePageListLock @ 0x1402DF1D0 (MiAcquirePageListLock.c)
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 *     MiReplaceSecondaryListStandbyPage @ 0x1402F0DB0 (MiReplaceSecondaryListStandbyPage.c)
 *     MiUpdateTransitionPteFrame @ 0x140395BFC (MiUpdateTransitionPteFrame.c)
 *     MiClearPfnReuseFields @ 0x1403A1D30 (MiClearPfnReuseFields.c)
 *     MiSetStandbyLookasideState @ 0x14041CE60 (MiSetStandbyLookasideState.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiReplaceTransitionPage(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3, int a4)
{
  char v4; // bl
  int v5; // r13d
  unsigned int v8; // edi
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r14
  bool v12; // zf
  __int64 v13; // rcx
  volatile signed __int32 *v14; // rbx
  unsigned int v15; // r13d
  char v16; // cl
  int PfnSlabType; // eax
  int v18; // r8d
  unsigned int v19; // edx
  __int64 v20; // rbx
  int v21; // eax
  unsigned int v22; // r10d
  int v23; // ebx
  __int64 v24; // rcx
  unsigned __int64 v25; // r11
  __int64 v26; // r9
  __int64 v27; // rbx
  unsigned int v28; // r10d
  __int64 v29; // r8
  signed __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  signed __int64 i; // rax
  unsigned __int64 *v33; // r9
  int v34; // ebx
  __int64 v35; // rbx
  ULONG_PTR v36; // r13
  unsigned __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // rbx
  int v40; // r13d
  __int64 v41; // rcx
  signed __int64 v42; // rdx
  signed __int64 j; // rax
  __int64 updated; // rax
  __int64 v46; // r9
  unsigned __int64 v47; // r15
  int v48; // eax
  volatile signed __int64 *v49; // rax
  ULONG_PTR v50; // r9
  unsigned __int64 v51; // rdx
  volatile signed __int32 *v52; // r8
  unsigned int v53; // eax
  unsigned __int64 v54; // rcx
  signed __int32 v55[8]; // [rsp+0h] [rbp-128h] BYREF
  __int64 v56; // [rsp+20h] [rbp-108h]
  int v57; // [rsp+30h] [rbp-F8h]
  int v58; // [rsp+34h] [rbp-F4h]
  unsigned int PfnPriority; // [rsp+38h] [rbp-F0h]
  __int64 v60; // [rsp+40h] [rbp-E8h]
  unsigned int v61; // [rsp+48h] [rbp-E0h]
  ULONG_PTR BugCheckParameter2a; // [rsp+50h] [rbp-D8h]
  __int64 v63[3]; // [rsp+58h] [rbp-D0h] BYREF
  _BYTE v64[112]; // [rsp+70h] [rbp-B8h] BYREF

  v4 = a4;
  v57 = a3;
  v5 = a3;
  v58 = a4;
  v8 = 0;
  memset_0(v64, 0, 0x68uLL);
  PfnPriority = 0xFFFFFF;
  BugCheckParameter2a = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4);
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
  v10 = *(_BYTE *)(BugCheckParameter2 + 34) & 7;
  v60 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
  v11 = *(_QWORD *)(v60 + 8 * v10 + 7136);
  v12 = (v4 & 2) == 0;
  v13 = v4 & 2;
  v14 = (volatile signed __int32 *)(a2 + 24);
  v61 = v13;
  if ( v12 )
  {
    v15 = 0;
    while ( _interlockedbittestandset64(v14, 0x3FuLL) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v13) )
        {
          HvlNotifyLongSpinWait(v15);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v14 < 0 );
    }
    v5 = v57;
    LODWORD(v13) = v61;
  }
  if ( (*(_DWORD *)(a2 + 32) & 0x40000000) == 0 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 3 && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0 )
    {
      v16 = *(_BYTE *)(BugCheckParameter2 + 36);
      *(_BYTE *)(BugCheckParameter2 + 36) = v16 & 0xF0;
    }
    else
    {
      v16 = *(_BYTE *)(a2 + 36);
    }
    v61 = v16 & 0xF;
    PfnSlabType = MiGetPfnSlabType(a2);
    v18 = (unsigned __int8)BYTE2(*(_DWORD *)(a2 + 32)) >> 6;
    v19 = (unsigned __int8)BYTE2(*(_DWORD *)(BugCheckParameter2 + 32)) >> 6;
    v57 = PfnSlabType;
    if ( v18 != v19 )
      MiChangePageAttribute(a2, v19);
    *(_QWORD *)v14 &= 0xC7FFFFFFFFFFFFFFuLL;
    MiCopyPfnEntryEx(a2, BugCheckParameter2);
    v20 = v61;
    *(_BYTE *)(a2 + 36) = v61 | *(_BYTE *)(a2 + 36) & 0xF0;
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL) == BugCheckParameter2a )
      MiSetPfnContainingFrame(a2, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4));
    MiCopyPage(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4), BugCheckParameter2a, 6LL);
    _InterlockedOr(v55, 0);
    v12 = (v58 & 1) == 0;
    *(_QWORD *)(a2 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ *(_QWORD *)(a2 + 24)) & 0xC7FFFFFFFFFFFFFFuLL;
    if ( !v12 )
      goto LABEL_41;
    v21 = *(_DWORD *)(v11 + 12);
    if ( v21 == 2 )
    {
      if ( v5 < 9 && (*(_DWORD *)(BugCheckParameter2 + 32) & 0x8000000) != 0 )
      {
        MiUnlinkPageFromListEx(BugCheckParameter2, 0);
        v8 = 4;
        v57 = *(_DWORD *)(a2 + 32);
        HIBYTE(v57) &= ~8u;
        *(_DWORD *)(a2 + 32) = v57;
        goto LABEL_41;
      }
      PfnPriority = MiGetPfnPriority(BugCheckParameter2);
      v11 = 88LL * PfnPriority + v60 + 3264;
      if ( v5 == 9 && (*(_DWORD *)(BugCheckParameter2 + 32) & 0x8000000) != 0 )
        v8 = v22;
      v23 = MI_NODE_FROM_PFN(BugCheckParameter2);
      if ( v23 == (unsigned int)MI_NODE_FROM_PFN(a2)
        && v5 == v57
        && ((unsigned int)MiGetPfnSlabType(BugCheckParameter2) != 8
         || (*(_BYTE *)(qword_140E3D140
                      + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4)) >> 9)
                      + 1) & 0x7F) == (*(_BYTE *)(qword_140E3D140
                                                + 2
                                                * ((0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4)) >> 9)
                                                + 1) & 0x7F)) )
      {
        MiAcquirePageListLock(v11, BugCheckParameter2, v5, 1, (__int64)v64);
        MiReplaceStandbyLookaside(BugCheckParameter2a);
      }
      else
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v11 + 32));
        MiReplaceStandbyLookaside(BugCheckParameter2a);
        MiSetStandbyLookasideState(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4), 0LL);
      }
    }
    else
    {
      if ( v21 == 3 )
      {
        if ( (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
          v11 = v60 + 88 * (v20 + 64);
        else
          v11 = MiDetermineModifiedPageListHead(a2, v60, 0LL);
      }
      MiAcquirePageListLock(v11, BugCheckParameter2, v5, 1, (__int64)v64);
    }
    v24 = *(_QWORD *)(BugCheckParameter2 + 24);
    v25 = 0xFFFFFF0000000000uLL;
    v26 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFLL;
    v27 = v24 & 0xFFFFFFFFFFLL;
    *(_QWORD *)a2 = *(_QWORD *)BugCheckParameter2 ^ (*(_QWORD *)a2 ^ *(_QWORD *)BugCheckParameter2) & 0xFFFFFF0000000000uLL;
    *(_QWORD *)(a2 + 24) = v24 ^ (v24 ^ *(_QWORD *)(a2 + 24)) & 0xFFFFFF0000000000uLL;
    if ( v26 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(v11 + 24) = v9;
    }
    else
    {
      v28 = PfnPriority;
      v29 = 48 * v26 - 0x220000000000LL;
      if ( PfnPriority == 0xFFFFFF || v8 != 2 || !(unsigned int)MiIsDecayPfn(v26) )
      {
        v30 = *(_QWORD *)(v29 + 24);
        v31 = v30 ^ v9;
        for ( i = v30; ; v31 = i ^ v9 )
        {
          i = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 24), v9 ^ v25 & v31, i);
          if ( v30 == i )
            break;
          v30 = i;
        }
LABEL_26:
        if ( v27 == 0x3FFFFFFFFFLL )
        {
          *(_QWORD *)(v11 + 16) = v9;
        }
        else
        {
          v33 = (unsigned __int64 *)(48 * v27 - 0x220000000000LL);
          if ( v28 != 0xFFFFFF && v8 == 2 && (unsigned int)MiIsDecayPfn(v27) )
          {
            updated = MiUpdateTransitionPteFrame(
                        v33[2],
                        0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4));
            *(_QWORD *)(v46 + 16) = updated;
            goto LABEL_30;
          }
          *v33 = v9 ^ v25 & (*v33 ^ v9);
        }
        if ( v28 == 0xFFFFFF )
          goto LABEL_35;
LABEL_30:
        v34 = v57;
        if ( v5 >= 9 )
        {
          if ( v57 >= 9 )
          {
LABEL_34:
            MiReplaceSecondaryListStandbyPage(BugCheckParameter2, a2, v5, v34, (__int64)v64);
LABEL_35:
            v35 = v60;
            v12 = v5 == 9;
            v36 = BugCheckParameter2a;
            if ( v12 )
            {
              v56 = 0LL;
              MiUpdateLargePageCandidateValue(v60, BugCheckParameter2a, 3LL);
            }
            if ( v57 == 9 )
            {
              v56 = 0LL;
              MiUpdateLargePageCandidateValue(v35, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4), 3LL);
            }
            if ( dword_140E3004C != 1 )
              goto LABEL_40;
            v50 = v36 & 0x1F;
            LOBYTE(v51) = 1;
            v52 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E300A0 + 1) + 4 * (v36 >> 5));
            if ( v50 + 1 > 0x20 )
            {
              if ( (v36 & 0x1F) != 0 )
              {
                _InterlockedOr(v52++, ((1 << (32 - (v36 & 0x1F))) - 1) << v50);
                v51 = 1LL - (32 - (unsigned int)(v36 & 0x1F));
                if ( v51 >= 0x20 )
                {
                  v54 = v51 >> 5;
                  v51 += -32LL * (v51 >> 5);
                  do
                  {
                    *v52++ = -1;
                    --v54;
                  }
                  while ( v54 );
                }
                if ( !v51 )
                  goto LABEL_40;
              }
              v53 = (1 << v51) - 1;
            }
            else
            {
              v53 = 1 << v50;
            }
            _InterlockedOr(v52, v53);
LABEL_40:
            MiReleasePageListLock(v11, v64);
LABEL_41:
            v57 = *(_DWORD *)(BugCheckParameter2 + 32);
            BYTE2(v57) = BYTE2(v57) & 0xF8 | 5;
            *(_DWORD *)(BugCheckParameter2 + 32) = v57;
            *(_QWORD *)(BugCheckParameter2 + 24) &= 0xFFFFFF0000000000uLL;
            _InterlockedOr(v55, 0);
            *(_QWORD *)(BugCheckParameter2 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (*(_QWORD *)(BugCheckParameter2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
            if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL) == BugCheckParameter2a )
            {
              v37 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
            }
            else
            {
              v8 |= 1u;
              v37 = MiMapPageInHyperSpaceWorker(
                      *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL,
                      0LL,
                      0x80000000LL)
                  + 8 * ((*(_QWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FFLL);
            }
            v38 = MI_READ_PTE_LOCK_FREE(v37);
            if ( qword_140E2DB80 )
            {
              if ( (v38 & 0x10) != 0 )
                v38 &= ~0x10uLL;
              else
                v38 &= ~qword_140E2DB80;
            }
            v63[0] = MiSwizzleInvalidPte((0xAAAAAAAAAAAAB000uLL * ((__int64)(a2 + 0x220000000000LL) >> 4)) ^ (v38 ^ (0xAAAAAAAAAAAAB000uLL * ((__int64)(a2 + 0x220000000000LL) >> 4))) & 0xFFF0000000000FFFuLL);
            v39 = v63[0];
            v40 = 0;
            if ( (unsigned int)MiPteInShadowRange(v37) )
            {
              v48 = MiSanitizeShadowPxe(v41, v63);
              v39 = v63[0];
              v40 = v48;
            }
            *(_QWORD *)v37 = v39;
            if ( v40 )
              MiWritePteShadow(v37, v39);
            if ( (v8 & 1) != 0 )
            {
              *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
              *(_QWORD *)(((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
              v37 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
            }
            if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 && (unsigned int)MiGetSystemRegionType(v37) == 4 )
            {
              v47 = 0xAAAAAAAAAAAAB000uLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
              if ( KiFlushPcid )
                v47 |= 2uLL;
              *(_QWORD *)(v37 - 768) = v47;
            }
            if ( v8 >= 4 )
              MiInsertPageInList(a2);
            if ( (v58 & 2) == 0 )
              _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (v8 & 2) != 0 )
            {
              v58 = *(_DWORD *)(BugCheckParameter2 + 32);
              HIBYTE(v58) &= ~8u;
              *(_DWORD *)(BugCheckParameter2 + 32) = v58;
            }
            v42 = *(_QWORD *)(BugCheckParameter2 + 40);
            for ( j = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(BugCheckParameter2 + 40),
                        v42 & 0x8FFFFFFFFFFFFFFFuLL,
                        v42);
                  v42 != j;
                  j = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(BugCheckParameter2 + 40),
                        j & 0x8FFFFFFFFFFFFFFFuLL,
                        j) )
            {
              v42 = j;
            }
            MiClearPfnReuseFields(BugCheckParameter2, v42, j, 0x8FFFFFFFFFFFFFFFuLL);
            return 1LL;
          }
          if ( v5 == 9 )
          {
            _InterlockedDecrement64((volatile signed __int64 *)v11);
            if ( *(__int64 *)(BugCheckParameter2 + 40) < 0 )
              v49 = (volatile signed __int64 *)(v60 + 7232);
            else
              v49 = (volatile signed __int64 *)(v60 + 16320);
            _InterlockedDecrement64(v49);
            MiDecreaseAvailablePages(v60, 1LL, -1LL);
          }
        }
        if ( v8 >= 4 )
          goto LABEL_35;
        goto LABEL_34;
      }
      MiSetPfnContainingFrame(v29, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4));
      v25 = 0xFFFFFF0000000000uLL;
    }
    v28 = PfnPriority;
    goto LABEL_26;
  }
  if ( !(_DWORD)v13 )
    _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
