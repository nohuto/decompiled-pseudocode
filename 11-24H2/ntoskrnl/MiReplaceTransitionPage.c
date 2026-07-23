/*
 * XREFs of MiReplaceTransitionPage @ 0x140251EC4
 * Callers:
 *     MiTradeTransitionPage @ 0x14033F5E8 (MiTradeTransitionPage.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14043BAD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiFinalizeImageHeaderPage @ 0x1404998B8 (MiFinalizeImageHeaderPage.c)
 *     MiRepointPteAtExtendedStandby @ 0x140685FA4 (MiRepointPteAtExtendedStandby.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068DF2C (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiReleasePageListLock @ 0x140218800 (MiReleasePageListLock.c)
 *     MiClearPfnReuseFields @ 0x140218960 (MiClearPfnReuseFields.c)
 *     MiReplaceStandbyLookaside @ 0x140222270 (MiReplaceStandbyLookaside.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402277A0 (MiUpdateLargePageCandidateValue.c)
 *     MiAcquirePageListLock @ 0x140240AB0 (MiAcquirePageListLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MI_NODE_FROM_PFN @ 0x140251340 (MI_NODE_FROM_PFN.c)
 *     MiCopyPfnEntryEx @ 0x140251B90 (MiCopyPfnEntryEx.c)
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     MiReplaceSecondaryListStandbyPage @ 0x1402568F0 (MiReplaceSecondaryListStandbyPage.c)
 *     MiDecreaseAvailablePages @ 0x140261500 (MiDecreaseAvailablePages.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSwizzleInvalidPte @ 0x1402FD620 (MiSwizzleInvalidPte.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiDetermineModifiedPageListHead @ 0x140300F80 (MiDetermineModifiedPageListHead.c)
 *     MiIsDecayPfn @ 0x1403028E0 (MiIsDecayPfn.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiUpdateTransitionPteFrame @ 0x14038F5E4 (MiUpdateTransitionPteFrame.c)
 *     MiSetStandbyLookasideState @ 0x140410EB0 (MiSetStandbyLookasideState.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiReplaceTransitionPage(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3, int a4)
{
  char v4; // bl
  int v5; // r13d
  unsigned int v8; // edi
  __int64 v9; // r9
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r14
  bool v15; // zf
  __int64 v16; // rcx
  volatile signed __int32 *v17; // rbx
  unsigned int v18; // r13d
  char v19; // cl
  int PfnSlabType; // eax
  int v21; // r8d
  unsigned int v22; // edx
  __int64 v23; // rbx
  int v24; // eax
  unsigned int v25; // r10d
  int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned __int64 v29; // r11
  __int64 v30; // r9
  __int64 v31; // rbx
  unsigned __int64 v32; // rdx
  unsigned int v33; // r10d
  unsigned __int64 v34; // rcx
  signed __int64 i; // rax
  int v36; // ebx
  __int64 v37; // rbx
  ULONG_PTR v38; // r13
  unsigned __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // rbx
  int v42; // r13d
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  signed __int64 v47; // rdx
  signed __int64 j; // rax
  __int64 updated; // rax
  unsigned __int64 v51; // r15
  int v52; // eax
  volatile signed __int64 *v53; // rax
  unsigned __int64 v54; // rdx
  unsigned int v55; // eax
  unsigned __int64 v56; // rcx
  signed __int32 v57[8]; // [rsp+0h] [rbp-128h] BYREF
  int v58; // [rsp+30h] [rbp-F8h]
  int v59; // [rsp+34h] [rbp-F4h]
  unsigned int PfnPriority; // [rsp+38h] [rbp-F0h]
  __int64 v61; // [rsp+40h] [rbp-E8h]
  unsigned int v62; // [rsp+48h] [rbp-E0h]
  ULONG_PTR BugCheckParameter2a; // [rsp+50h] [rbp-D8h]
  __int64 v64[3]; // [rsp+58h] [rbp-D0h] BYREF
  _BYTE v65[112]; // [rsp+70h] [rbp-B8h] BYREF

  v4 = a4;
  v58 = a3;
  v5 = a3;
  v59 = a4;
  v8 = 0;
  memset_0(v65, 0, 0x68uLL);
  v10 = 0xFFFFDE0000000000uLL;
  PfnPriority = 0xFFFFFF;
  v11 = 0xAAAAAAAAAAAAAAABuLL;
  BugCheckParameter2a = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4);
  v12 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
  v13 = *(_BYTE *)(BugCheckParameter2 + 34) & 7;
  v61 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
  v14 = *(_QWORD *)(v61 + 8 * v13 + 7136);
  v15 = (v4 & 2) == 0;
  v16 = v4 & 2;
  v17 = (volatile signed __int32 *)(a2 + 24);
  v62 = v16;
  if ( v15 )
  {
    v18 = 0;
    while ( _interlockedbittestandset64(v17, 0x3FuLL) )
    {
      do
      {
        if ( (++v18 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v16, v11, v10, v9) )
        {
          HvlNotifyLongSpinWait(v18);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v17 < 0 );
    }
    v5 = v58;
    LODWORD(v16) = v62;
  }
  if ( (*(_DWORD *)(a2 + 32) & 0x40000000) == 0 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 3 && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0 )
    {
      v19 = *(_BYTE *)(BugCheckParameter2 + 36);
      *(_BYTE *)(BugCheckParameter2 + 36) = v19 & 0xF0;
    }
    else
    {
      v19 = *(_BYTE *)(a2 + 36);
    }
    v62 = v19 & 0xF;
    PfnSlabType = MiGetPfnSlabType(a2);
    v21 = (unsigned __int8)BYTE2(*(_DWORD *)(a2 + 32)) >> 6;
    v22 = (unsigned __int8)BYTE2(*(_DWORD *)(BugCheckParameter2 + 32)) >> 6;
    v58 = PfnSlabType;
    if ( v21 != v22 )
      MiChangePageAttribute(a2, v22);
    *(_QWORD *)v17 &= 0xC7FFFFFFFFFFFFFFuLL;
    MiCopyPfnEntryEx(a2, BugCheckParameter2);
    v23 = v62;
    *(_BYTE *)(a2 + 36) = v62 | *(_BYTE *)(a2 + 36) & 0xF0;
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL) == BugCheckParameter2a )
      MiSetPfnContainingFrame(a2, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4));
    MiCopyPage(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4), BugCheckParameter2a, 6LL);
    _InterlockedOr(v57, 0);
    v15 = (v59 & 1) == 0;
    *(_QWORD *)(a2 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ *(_QWORD *)(a2 + 24)) & 0xC7FFFFFFFFFFFFFFuLL;
    if ( !v15 )
      goto LABEL_41;
    v24 = *(_DWORD *)(v14 + 12);
    if ( v24 == 2 )
    {
      if ( v5 < 9 && (*(_DWORD *)(BugCheckParameter2 + 32) & 0x8000000) != 0 )
      {
        MiUnlinkPageFromListEx(BugCheckParameter2);
        v8 = 4;
        v58 = *(_DWORD *)(a2 + 32);
        HIBYTE(v58) &= ~8u;
        *(_DWORD *)(a2 + 32) = v58;
        goto LABEL_41;
      }
      PfnPriority = MiGetPfnPriority(BugCheckParameter2);
      v14 = 88LL * PfnPriority + v61 + 3264;
      if ( v5 == 9 && (*(_DWORD *)(BugCheckParameter2 + 32) & 0x8000000) != 0 )
        v8 = v25;
      v26 = MI_NODE_FROM_PFN(BugCheckParameter2);
      if ( v26 == (unsigned int)MI_NODE_FROM_PFN(a2)
        && v5 == v58
        && ((unsigned int)MiGetPfnSlabType(BugCheckParameter2) != 8
         || (*(_BYTE *)(qword_140E3D280
                      + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4)) >> 9)
                      + 1) & 0x7F) == (*(_BYTE *)(qword_140E3D280
                                                + 2
                                                * ((0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4)) >> 9)
                                                + 1) & 0x7F)) )
      {
        MiAcquirePageListLock(v14, BugCheckParameter2, (unsigned int)v5, 1LL, (__int64)v65);
        MiReplaceStandbyLookaside(
          BugCheckParameter2a,
          0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4),
          v5,
          v65[0]);
      }
      else
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v14 + 32));
        MiReplaceStandbyLookaside(BugCheckParameter2a, 0xFFFFFFFFFFFFFFFFuLL, v5, 0);
        MiSetStandbyLookasideState(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4), 0LL);
      }
    }
    else
    {
      if ( v24 == 3 )
      {
        if ( (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
          v14 = v61 + 88 * (v23 + 64);
        else
          v14 = MiDetermineModifiedPageListHead(a2, v61, 0LL);
      }
      MiAcquirePageListLock(v14, BugCheckParameter2, (unsigned int)v5, 1LL, (__int64)v65);
    }
    v27 = *(_QWORD *)(BugCheckParameter2 + 24);
    v28 = *(_QWORD *)BugCheckParameter2;
    v29 = 0xFFFFFF0000000000uLL;
    v30 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFLL;
    v31 = v27 & 0xFFFFFFFFFFLL;
    v32 = *(_QWORD *)BugCheckParameter2 ^ (*(_QWORD *)a2 ^ *(_QWORD *)BugCheckParameter2) & 0xFFFFFF0000000000uLL;
    *(_QWORD *)a2 = v32;
    *(_QWORD *)(a2 + 24) = v27 ^ (v27 ^ *(_QWORD *)(a2 + 24)) & 0xFFFFFF0000000000uLL;
    if ( v30 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(v14 + 24) = v12;
    }
    else
    {
      v33 = PfnPriority;
      v28 = 48 * v30 - 0x220000000000LL;
      if ( PfnPriority == 0xFFFFFF || v8 != 2 || !(unsigned int)MiIsDecayPfn(v30, v32, v28, v30) )
      {
        v32 = *(_QWORD *)(v28 + 24);
        v34 = v32 ^ v12;
        for ( i = v32; ; v34 = i ^ v12 )
        {
          i = _InterlockedCompareExchange64((volatile signed __int64 *)(v28 + 24), v12 ^ v29 & v34, i);
          if ( v32 == i )
            break;
          v32 = i;
        }
LABEL_26:
        if ( v31 == 0x3FFFFFFFFFLL )
        {
          *(_QWORD *)(v14 + 16) = v12;
        }
        else
        {
          v30 = 48 * v31 - 0x220000000000LL;
          if ( v33 != 0xFFFFFF && v8 == 2 && (unsigned int)MiIsDecayPfn(v31, v32, v28, v30) )
          {
            updated = MiUpdateTransitionPteFrame(
                        *(_QWORD *)(v30 + 16),
                        0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4));
            *(_QWORD *)(v30 + 16) = updated;
            goto LABEL_30;
          }
          *(_QWORD *)v30 = v12 ^ v29 & (*(_QWORD *)v30 ^ v12);
        }
        if ( v33 == 0xFFFFFF )
          goto LABEL_35;
LABEL_30:
        v36 = v58;
        if ( v5 >= 9 )
        {
          if ( v58 >= 9 )
          {
LABEL_34:
            MiReplaceSecondaryListStandbyPage(BugCheckParameter2, a2, v5, v36, (__int64)v65);
LABEL_35:
            v37 = v61;
            v15 = v5 == 9;
            v38 = BugCheckParameter2a;
            if ( v15 )
              MiUpdateLargePageCandidateValue(v61, BugCheckParameter2a, 3, 2, 0LL);
            if ( v58 == 9 )
              MiUpdateLargePageCandidateValue(
                v37,
                0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4),
                3,
                3,
                0LL);
            if ( dword_140E3018C != 1 )
              goto LABEL_40;
            v30 = v38 & 0x1F;
            LOBYTE(v54) = 1;
            v28 = *((_QWORD *)&xmmword_140E301E0 + 1) + 4 * (v38 >> 5);
            if ( (unsigned __int64)(v30 + 1) > 0x20 )
            {
              if ( (v38 & 0x1F) != 0 )
              {
                _InterlockedOr((volatile signed __int32 *)v28, ((1 << (32 - (v38 & 0x1F))) - 1) << v30);
                v28 += 4LL;
                v54 = 1LL - (32 - (unsigned int)(v38 & 0x1F));
                if ( v54 >= 0x20 )
                {
                  v56 = v54 >> 5;
                  v54 += -32LL * (v54 >> 5);
                  do
                  {
                    *(_DWORD *)v28 = -1;
                    v28 += 4LL;
                    --v56;
                  }
                  while ( v56 );
                }
                if ( !v54 )
                  goto LABEL_40;
              }
              v55 = (1 << v54) - 1;
            }
            else
            {
              v55 = 1 << v30;
            }
            _InterlockedOr((volatile signed __int32 *)v28, v55);
LABEL_40:
            MiReleasePageListLock(v14, (__int64)v65, v28, v30);
LABEL_41:
            v58 = *(_DWORD *)(BugCheckParameter2 + 32);
            BYTE2(v58) = BYTE2(v58) & 0xF8 | 5;
            *(_DWORD *)(BugCheckParameter2 + 32) = v58;
            *(_QWORD *)(BugCheckParameter2 + 24) &= 0xFFFFFF0000000000uLL;
            _InterlockedOr(v57, 0);
            *(_QWORD *)(BugCheckParameter2 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (*(_QWORD *)(BugCheckParameter2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
            if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL) == BugCheckParameter2a )
            {
              v39 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
            }
            else
            {
              v8 |= 1u;
              v39 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000)
                  + 8 * ((*(_QWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FFLL);
            }
            v40 = MI_READ_PTE_LOCK_FREE(v39);
            if ( qword_140E2DCC0 )
            {
              if ( (v40 & 0x10) != 0 )
                v40 &= ~0x10uLL;
              else
                v40 &= ~qword_140E2DCC0;
            }
            v64[0] = MiSwizzleInvalidPte(
                       (0xAAAAAAAAAAAAB000uLL * ((__int64)(a2 + 0x220000000000LL) >> 4)) ^ (v40 ^ (0xAAAAAAAAAAAAB000uLL
                                                                                                 * ((__int64)(a2 + 0x220000000000LL) >> 4))) & 0xFFF0000000000FFFuLL,
                       0xAAAAAAAAAAAAB000uLL * ((__int64)(a2 + 0x220000000000LL) >> 4));
            v41 = v64[0];
            v42 = 0;
            if ( MiPteInShadowRange(v39) )
            {
              v52 = MiSanitizeShadowPxe(v44, (__int64)v64, v45);
              v41 = v64[0];
              v42 = v52;
            }
            *(_QWORD *)v39 = v41;
            if ( v42 )
              MiWritePteShadow(v39, v41, v45, v46);
            if ( (v8 & 1) != 0 )
            {
              *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
              *(_QWORD *)(((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
              v39 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
            }
            if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 && (unsigned int)MiGetSystemRegionType(v39, v43, v45) == 4 )
            {
              v51 = 0xAAAAAAAAAAAAB000uLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
              if ( KiFlushPcid )
                v51 |= 2uLL;
              *(_QWORD *)(v39 - 768) = v51;
            }
            if ( v8 >= 4 )
              MiInsertPageInList(a2, 2048LL);
            if ( (v59 & 2) == 0 )
              _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (v8 & 2) != 0 )
            {
              v59 = *(_DWORD *)(BugCheckParameter2 + 32);
              HIBYTE(v59) &= ~8u;
              *(_DWORD *)(BugCheckParameter2 + 32) = v59;
            }
            v47 = *(_QWORD *)(BugCheckParameter2 + 40);
            for ( j = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(BugCheckParameter2 + 40),
                        v47 & 0x8FFFFFFFFFFFFFFFuLL,
                        v47);
                  v47 != j;
                  j = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(BugCheckParameter2 + 40),
                        j & 0x8FFFFFFFFFFFFFFFuLL,
                        j) )
            {
              v47 = j;
            }
            MiClearPfnReuseFields(BugCheckParameter2);
            return 1LL;
          }
          if ( v5 == 9 )
          {
            _InterlockedDecrement64((volatile signed __int64 *)v14);
            if ( *(__int64 *)(BugCheckParameter2 + 40) < 0 )
              v53 = (volatile signed __int64 *)(v61 + 7232);
            else
              v53 = (volatile signed __int64 *)(v61 + 16320);
            _InterlockedDecrement64(v53);
            MiDecreaseAvailablePages(v61, 1LL, -1LL);
          }
        }
        if ( v8 >= 4 )
          goto LABEL_35;
        goto LABEL_34;
      }
      MiSetPfnContainingFrame(v28, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4));
      v29 = 0xFFFFFF0000000000uLL;
    }
    v33 = PfnPriority;
    goto LABEL_26;
  }
  if ( !(_DWORD)v16 )
    _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
