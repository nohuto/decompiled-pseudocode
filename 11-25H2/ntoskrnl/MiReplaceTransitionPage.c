/*
 * XREFs of MiReplaceTransitionPage @ 0x1402C6590
 * Callers:
 *     MiTradeTransitionPage @ 0x14022A82C (MiTradeTransitionPage.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiFinalizeImageHeaderPage @ 0x1404A1818 (MiFinalizeImageHeaderPage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1404C22F8 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiRepointPteAtExtendedStandby @ 0x1406795EC (MiRepointPteAtExtendedStandby.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068156C (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiAcquirePageListLock @ 0x1402122F0 (MiAcquirePageListLock.c)
 *     MiReplaceStandbyLookaside @ 0x140214750 (MiReplaceStandbyLookaside.c)
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MiSwizzleInvalidPte @ 0x14021A0C0 (MiSwizzleInvalidPte.c)
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiDetermineModifiedPageListHead @ 0x14021BAB0 (MiDetermineModifiedPageListHead.c)
 *     MI_NODE_FROM_PFN @ 0x14021CB00 (MI_NODE_FROM_PFN.c)
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReplaceSecondaryListStandbyPage @ 0x14023C950 (MiReplaceSecondaryListStandbyPage.c)
 *     MiIsDecayPfn @ 0x140241130 (MiIsDecayPfn.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiUpdateLargePageCandidateValue @ 0x14024FD70 (MiUpdateLargePageCandidateValue.c)
 *     MiClearPfnReuseFields @ 0x1402C4CC0 (MiClearPfnReuseFields.c)
 *     MiReleasePageListLock @ 0x1402C6160 (MiReleasePageListLock.c)
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     MiSetPfnTbFlushStamp @ 0x1402C7C70 (MiSetPfnTbFlushStamp.c)
 *     MiCopyPfnEntryEx @ 0x1402C7CF0 (MiCopyPfnEntryEx.c)
 *     MiUpdateTransitionPteFrame @ 0x1402D110C (MiUpdateTransitionPteFrame.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 *     MiDecreaseAvailablePages @ 0x1403BF2D0 (MiDecreaseAvailablePages.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     MiSetStandbyLookasideState @ 0x14041FA50 (MiSetStandbyLookasideState.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiReplaceTransitionPage(__int64 *BugCheckParameter2, unsigned __int64 a2, int a3, int a4)
{
  char v4; // bl
  unsigned int v8; // edi
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rbx
  unsigned int v17; // r13d
  char v18; // bl
  unsigned int v19; // ebx
  int PfnSlabType; // r13d
  int v21; // edx
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // r10d
  int v25; // ebx
  ULONG_PTR v26; // r11
  __int64 v27; // rcx
  __int64 v28; // r8
  ULONG_PTR v29; // r10
  ULONG_PTR v30; // rbx
  __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r8
  __int64 v34; // r9
  signed __int64 v35; // rdx
  signed __int64 v36; // r8
  signed __int64 v37; // rcx
  __int64 v38; // r10
  ULONG_PTR *v39; // r9
  __int64 v40; // rbx
  unsigned __int64 v41; // r14
  __int64 v42; // rax
  ULONG_PTR v43; // r13
  __int64 v44; // rbx
  int v45; // r12d
  __int64 v46; // rcx
  signed __int64 v47; // rdx
  signed __int64 v48; // r8
  signed __int64 v49; // rdx
  __int64 updated; // rax
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // r13
  __int64 v55; // rax
  volatile signed __int64 *v56; // rax
  int v57; // eax
  unsigned __int64 v58; // r9
  unsigned __int64 v59; // rdx
  volatile signed __int32 *v60; // r8
  unsigned int v61; // eax
  unsigned __int64 v62; // rcx
  signed __int32 v63[8]; // [rsp+0h] [rbp-128h] BYREF
  _BYTE *v64; // [rsp+20h] [rbp-108h]
  __int64 v65; // [rsp+30h] [rbp-F8h]
  int v66; // [rsp+38h] [rbp-F0h]
  ULONG_PTR v67; // [rsp+40h] [rbp-E8h]
  __int64 v68; // [rsp+48h] [rbp-E0h]
  __int64 v69; // [rsp+50h] [rbp-D8h]
  __int64 PfnPriority; // [rsp+58h] [rbp-D0h]
  __int64 v71; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v72[112]; // [rsp+70h] [rbp-B8h] BYREF

  v4 = a4;
  v66 = a4;
  v8 = 0;
  memset_0(v72, 0, 0x68uLL);
  LODWORD(PfnPriority) = 0xFFFFFF;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x44000000000LL) >> 4);
  v10 = ((unsigned __int64)BugCheckParameter2[5] >> 43) & 0x3FF;
  v67 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
  v11 = *((_QWORD *)qword_140E2FD48 + v10);
  v12 = *((_BYTE *)BugCheckParameter2 + 34) & 7;
  v69 = v11;
  v13 = *(_QWORD *)(v11 + 8 * v12 + 7136);
  v14 = (v4 & 2) == 0;
  v15 = v4 & 2;
  v65 = v13;
  LODWORD(v68) = v4 & 2;
  v16 = (volatile signed __int32 *)(a2 + 24);
  if ( v14 )
  {
    v17 = 0;
    while ( _interlockedbittestandset64(v16, 0x3FuLL) )
    {
      do
      {
        if ( (++v17 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v15) )
        {
          HvlNotifyLongSpinWait(v17);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v16 < 0 );
    }
    LODWORD(v15) = v68;
  }
  if ( (*(_DWORD *)(a2 + 32) & 0x40000000) == 0 )
  {
    if ( (*((_BYTE *)BugCheckParameter2 + 34) & 7) == 3 && (BugCheckParameter2[2] & 0x400) != 0 )
    {
      v18 = *((_BYTE *)BugCheckParameter2 + 36);
      *((_BYTE *)BugCheckParameter2 + 36) = v18 & 0xF0;
    }
    else
    {
      v18 = *(_BYTE *)(a2 + 36);
    }
    v19 = v18 & 0xF;
    PfnSlabType = MiGetPfnSlabType(a2);
    v21 = (unsigned __int8)BYTE2(*((_DWORD *)BugCheckParameter2 + 8)) >> 6;
    if ( (unsigned __int8)BYTE2(*(_DWORD *)(a2 + 32)) >> 6 != v21 )
      MiChangePageAttribute(a2, v21);
    MiSetPfnTbFlushStamp(a2, 0LL, 1LL);
    MiCopyPfnEntryEx(a2, BugCheckParameter2);
    *(_BYTE *)(a2 + 36) = v19 | *(_BYTE *)(a2 + 36) & 0xF0;
    if ( (BugCheckParameter2[5] & 0xFFFFFFFFFFLL) == v9 )
      MiSetPfnContainingFrame(a2, v67);
    MiCopyPage(v67, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x44000000000LL) >> 4), 6LL);
    _InterlockedOr(v63, 0);
    v14 = (v66 & 1) == 0;
    *(_QWORD *)(a2 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
    if ( !v14 )
      goto LABEL_44;
    v22 = v65;
    v23 = *(_DWORD *)(v65 + 12);
    if ( v23 == 2 )
    {
      if ( a3 < 9 )
      {
        if ( (BugCheckParameter2[4] & 0x8000000) != 0 )
        {
          MiUnlinkPageFromListEx((ULONG_PTR)BugCheckParameter2, 0);
          v8 = 4;
          LODWORD(v68) = *(_DWORD *)(a2 + 32);
          BYTE3(v68) &= ~8u;
          *(_DWORD *)(a2 + 32) = v68;
          goto LABEL_44;
        }
        PfnPriority = (unsigned int)MiGetPfnPriority((unsigned __int64)BugCheckParameter2);
        v65 = v69 + 3264 + 88 * PfnPriority;
      }
      else
      {
        PfnPriority = MiGetPfnPriority((unsigned __int64)BugCheckParameter2);
        v65 = 88LL * (unsigned int)PfnPriority + v69 + 3264;
        if ( a3 == 9 && (BugCheckParameter2[4] & 0x8000000) != 0 )
          v8 = v24;
      }
      v25 = MI_NODE_FROM_PFN((__int64)BugCheckParameter2);
      if ( v25 != (unsigned int)MI_NODE_FROM_PFN(a2)
        || a3 != PfnSlabType
        || (unsigned int)MiGetPfnSlabType((__int64)BugCheckParameter2) == 8
        && (*(_BYTE *)(qword_140E3CF00
                     + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x44000000000LL) >> 4)) >> 9)
                     + 1) & 0x7F) != (*(_BYTE *)(qword_140E3CF00
                                               + 2
                                               * ((0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4)) >> 9)
                                               + 1) & 0x7F) )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v65 + 32));
        MiReplaceStandbyLookaside(
          0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x44000000000LL) >> 4),
          0xFFFFFFFFFFFFFFFFuLL,
          a3,
          0);
        MiSetStandbyLookasideState(v67, 0LL);
LABEL_23:
        v27 = BugCheckParameter2[3];
        v28 = *BugCheckParameter2;
        v29 = *BugCheckParameter2 & 0xFFFFFFFFFFLL;
        v30 = v27 & 0xFFFFFFFFFFLL;
        v31 = *(_QWORD *)a2 ^ *BugCheckParameter2;
        v68 = v27 & 0xFFFFFFFFFFLL;
        v32 = v28 ^ v31 & 0xFFFFFF0000000000uLL;
        v33 = 0xFFFFFF0000000000uLL;
        *(_QWORD *)a2 = v32;
        *(_QWORD *)(a2 + 24) = v27 ^ (v27 ^ *(_QWORD *)(a2 + 24)) & 0xFFFFFF0000000000uLL;
        if ( v29 == 0x3FFFFFFFFFLL )
        {
          v38 = v65;
          *(_QWORD *)(v65 + 24) = v26;
        }
        else
        {
          v34 = 48 * v29 - 0x220000000000LL;
          if ( (_DWORD)PfnPriority != 0xFFFFFF && v8 == 2 && MiIsDecayPfn(v29) )
          {
            MiSetPfnContainingFrame(v34, v26);
            v26 = v67;
          }
          else
          {
            v35 = *(_QWORD *)(v34 + 24);
            v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 24), v26 ^ v33 & (v26 ^ v35), v35);
            if ( v35 != v36 )
            {
              do
              {
                v37 = v36;
                v36 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v34 + 24),
                        v26 ^ (v26 ^ v36) & 0xFFFFFF0000000000uLL,
                        v36);
              }
              while ( v37 != v36 );
              v30 = v68;
            }
          }
          v38 = v65;
          v33 = 0xFFFFFF0000000000uLL;
        }
        if ( v30 == 0x3FFFFFFFFFLL )
        {
          *(_QWORD *)(v38 + 16) = v26;
        }
        else
        {
          v39 = (ULONG_PTR *)(48 * v30 - 0x220000000000LL);
          if ( (_DWORD)PfnPriority != 0xFFFFFF && v8 == 2 && MiIsDecayPfn(v30) )
          {
            updated = MiUpdateTransitionPteFrame(v39[2], v26);
            *(_QWORD *)(v52 + 16) = updated;
            goto LABEL_33;
          }
          *v39 = v26 ^ v33 & (v26 ^ *v39);
        }
        if ( (_DWORD)PfnPriority == 0xFFFFFF )
          goto LABEL_38;
LABEL_33:
        if ( a3 >= 9 )
        {
          if ( PfnSlabType >= 9 )
          {
LABEL_37:
            MiReplaceSecondaryListStandbyPage((__int64)BugCheckParameter2, a2, a3, PfnSlabType, v72);
LABEL_38:
            v40 = v69;
            if ( a3 == 9 )
              MiUpdateLargePageCandidateValue(
                v69,
                0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x44000000000LL) >> 4),
                3,
                2,
                0LL);
            if ( PfnSlabType == 9 )
              MiUpdateLargePageCandidateValue(v40, v67, 3, 3, 0LL);
            if ( dword_140E2FE0C != 1 )
              goto LABEL_43;
            v58 = v9 & 0x1F;
            LOBYTE(v59) = 1;
            v60 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E2FE60 + 1) + 4 * (v9 >> 5));
            if ( v58 + 1 > 0x20 )
            {
              if ( (v9 & 0x1F) != 0 )
              {
                _InterlockedOr(v60++, ((1 << (32 - (v9 & 0x1F))) - 1) << v58);
                v59 = 1LL - (32 - (unsigned int)(v9 & 0x1F));
                if ( v59 >= 0x20 )
                {
                  v62 = v59 >> 5;
                  v59 += -32LL * (v59 >> 5);
                  do
                  {
                    *v60++ = -1;
                    --v62;
                  }
                  while ( v62 );
                }
                if ( !v59 )
                  goto LABEL_43;
              }
              v61 = (1 << v59) - 1;
            }
            else
            {
              v61 = 1 << v58;
            }
            _InterlockedOr(v60, v61);
LABEL_43:
            MiReleasePageListLock(v65, (__int64)v72);
LABEL_44:
            LODWORD(v68) = *((_DWORD *)BugCheckParameter2 + 8);
            BYTE2(v68) = BYTE2(v68) & 0xF8 | 5;
            *((_DWORD *)BugCheckParameter2 + 8) = v68;
            BugCheckParameter2[3] &= 0xFFFFFF0000000000uLL;
            _InterlockedOr(v63, 0);
            BugCheckParameter2[3] = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (BugCheckParameter2[3] ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
            if ( (BugCheckParameter2[5] & 0xFFFFFFFFFFLL) == v9 )
            {
              v41 = BugCheckParameter2[1] | 0x8000000000000000uLL;
            }
            else
            {
              v8 |= 1u;
              v41 = MiMapPageInHyperSpaceWorker(BugCheckParameter2[5] & 0xFFFFFFFFFFLL, 0LL, 0x80000000)
                  + 8 * (((unsigned __int64)BugCheckParameter2[1] >> 3) & 0x1FF);
            }
            v42 = MI_READ_PTE_LOCK_FREE(v41);
            if ( qword_140E2D940 )
            {
              if ( (v42 & 0x10) != 0 )
                v42 &= ~0x10uLL;
              else
                v42 &= ~qword_140E2D940;
            }
            v43 = v67;
            v71 = MiSwizzleInvalidPte(((v67 << 12) ^ v42) & 0xFFF0000000000FFFuLL ^ (v67 << 12));
            v44 = v71;
            v45 = 0;
            if ( MiPteInShadowRange(v41) )
            {
              v57 = MiSanitizeShadowPxe(v46, &v71);
              v44 = v71;
              v45 = v57;
            }
            *(_QWORD *)v41 = v44;
            if ( v45 )
              MiWritePteShadow(v41, v44);
            if ( (v8 & 1) != 0 )
            {
              *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
              *(_QWORD *)(((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
              v41 = BugCheckParameter2[1] | 0x8000000000000000uLL;
            }
            if ( BugCheckParameter2[5] >= 0 && (unsigned int)MiGetSystemRegionType(v41) == 4 )
            {
              v54 = v43 << 12;
              v55 = v54 | 2;
              if ( !KiFlushPcid )
                v55 = v54;
              *(_QWORD *)(v41 - 768) = v55;
            }
            if ( v8 >= 4 )
              MiInsertPageInList(a2, 0x800u);
            if ( (v66 & 2) == 0 )
              _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (v8 & 2) != 0 )
            {
              v66 = *((_DWORD *)BugCheckParameter2 + 8);
              HIBYTE(v66) &= ~8u;
              *((_DWORD *)BugCheckParameter2 + 8) = v66;
            }
            v47 = BugCheckParameter2[5];
            v48 = _InterlockedCompareExchange64(BugCheckParameter2 + 5, v47 & 0x8FFFFFFFFFFFFFFFuLL, v47);
            if ( v47 != v48 )
            {
              do
              {
                v49 = v48;
                v48 = _InterlockedCompareExchange64(BugCheckParameter2 + 5, v48 & 0x8FFFFFFFFFFFFFFFuLL, v48);
              }
              while ( v49 != v48 );
            }
            MiClearPfnReuseFields((__int64)BugCheckParameter2);
            return 1LL;
          }
          if ( a3 == 9 )
          {
            _InterlockedDecrement64((volatile signed __int64 *)v38);
            if ( BugCheckParameter2[5] < 0 )
              v56 = (volatile signed __int64 *)(v69 + 7232);
            else
              v56 = (volatile signed __int64 *)(v69 + 16320);
            _InterlockedDecrement64(v56);
            MiDecreaseAvailablePages(v69, 1LL, -1LL);
          }
        }
        if ( v8 >= 4 )
          goto LABEL_38;
        goto LABEL_37;
      }
      MiAcquirePageListLock(v65, (__int64)BugCheckParameter2, a3, 1, (__int64)v72);
      MiReplaceStandbyLookaside(
        0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x44000000000LL) >> 4),
        v67,
        a3,
        v72[0]);
    }
    else
    {
      if ( v23 == 3 )
      {
        if ( (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
          v53 = v69 + 88 * (v19 + 64LL);
        else
          v53 = MiDetermineModifiedPageListHead(a2, v69, 0);
        v65 = v53;
        v64 = v72;
        v22 = v53;
      }
      else
      {
        v64 = v72;
      }
      MiAcquirePageListLock(v22, (__int64)BugCheckParameter2, a3, 1, (__int64)v64);
    }
    v26 = v67;
    goto LABEL_23;
  }
  if ( !(_DWORD)v15 )
    _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
