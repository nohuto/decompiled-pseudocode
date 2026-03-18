/*
 * XREFs of MiResolveProtoPteFault @ 0x140214BB0
 * Callers:
 *     MiDispatchFault @ 0x1402142B0 (MiDispatchFault.c)
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiAccessCheck @ 0x140213E80 (MiAccessCheck.c)
 *     MiPteHasShadow @ 0x1402141A0 (MiPteHasShadow.c)
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MiLockOwnedProtoPage @ 0x1402158F0 (MiLockOwnedProtoPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiResolveTransitionFault @ 0x14021A2F0 (MiResolveTransitionFault.c)
 *     KeInvalidAccessAllowed @ 0x1402292D0 (KeInvalidAccessAllowed.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 *     MiIsPfnCommitNotCharged @ 0x14023C210 (MiIsPfnCommitNotCharged.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14023C31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiGetPagingFileOffset @ 0x1402E5A60 (MiGetPagingFileOffset.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     MiChargePartitionResidentAvailable @ 0x1402F6BC0 (MiChargePartitionResidentAvailable.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiResolveDemandZeroFault @ 0x1402FC600 (MiResolveDemandZeroFault.c)
 *     MiIsPrototypePteVadLookup @ 0x140303270 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiResolveProtoPteFault(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r8
  __int64 v6; // rdx
  __int64 *v7; // r13
  unsigned __int64 *v8; // rsi
  __int64 v9; // r9
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned int v14; // r14d
  unsigned __int64 v15; // rax
  __int64 CurrentPrcb; // rdx
  __int64 v17; // rax
  int v18; // ecx
  int v19; // eax
  PVOID v20; // rdx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // r14
  unsigned int v26; // esi
  unsigned __int64 v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // rbx
  unsigned __int64 v31; // rdx
  __int64 result; // rax
  char v33; // si
  __int64 v34; // r10
  ULONG *v35; // rbx
  signed __int32 v36; // eax
  signed __int32 v37; // ett
  __int64 v38; // rsi
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // r15
  __int16 v42; // ax
  unsigned __int64 v43; // r14
  _KPROCESS *v44; // rax
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v46; // rax
  unsigned __int64 v47; // rcx
  int IsPrototypePteVadLookup; // eax
  unsigned __int64 v49; // r15
  unsigned __int64 v50; // rbx
  char v51; // cl
  int v52; // r15d
  __int64 v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // rcx
  int v56; // eax
  unsigned int PfnPriority; // eax
  __int64 v58; // rdx
  unsigned int v59; // r10d
  unsigned int v60; // r12d
  int v61; // eax
  unsigned __int64 v62; // rbx
  unsigned __int64 v63; // r15
  __int64 Address; // rax
  __int64 v65; // rdx
  __int64 v66; // r15
  unsigned __int64 v67; // [rsp+30h] [rbp-68h]
  __int64 v68; // [rsp+38h] [rbp-60h]
  ULONG_PTR v69; // [rsp+40h] [rbp-58h]
  unsigned __int64 v70; // [rsp+48h] [rbp-50h]
  __int64 v71; // [rsp+50h] [rbp-48h]
  __int64 v72; // [rsp+58h] [rbp-40h]
  int v74; // [rsp+A0h] [rbp+8h]
  __int64 DemandZeroPte; // [rsp+B0h] [rbp+18h] BYREF
  int v77; // [rsp+B8h] [rbp+20h]

  DemandZeroPte = (__int64)a3;
  v71 = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)a1;
  v4 = *(_QWORD *)a1;
  *a3 = 0LL;
  v67 = v3;
  v5 = 0xFFFFF68000000000uLL;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = (__int64 *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v68 = v6;
  v72 = v6 & 1;
  if ( (v6 & 1) == 0 || (v70 = v6 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v70 = 0LL;
  v69 = *(_QWORD *)(a1 + 104);
  v8 = (unsigned __int64 *)(((v69 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  while ( 1 )
  {
    v9 = 0x40000000000000LL;
    while ( 1 )
    {
      v10 = *v8;
      if ( (*v8 & 1) == 0 || (v10 & 0x200) != 0 )
        return 3221225494LL;
      v11 = (v10 >> 12) & 0xFFFFFFFFFFLL;
      if ( v11 <= qword_140E2DBE0 )
      {
        v12 = 6 * v11;
        if ( (*(_QWORD *)(48 * v11 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
          break;
      }
    }
    v13 = 48 * v11 - 0x220000000000LL;
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v14 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v12) )
        {
          HvlNotifyLongSpinWait(v14);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v13 + 24) < 0 );
    }
    v15 = *v8;
    if ( (*v8 & 1) == 0 || (v15 & 0x200) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return 3221225494LL;
    }
    CurrentPrcb = 0xFFFFFFFFFFLL;
    if ( v11 == ((v15 >> 12) & 0xFFFFFFFFFFLL) )
      break;
    v5 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (*(_QWORD *)(v13 + 40) & 0x10000000000LL) != 0 || _bittest64((const signed __int64 *)(v13 + 40), 0x35u) )
    goto LABEL_21;
  CurrentPrcb = *(unsigned int *)(v13 + 32);
  v17 = *(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  v18 = 0;
  if ( (_WORD)CurrentPrcb )
  {
    if ( (_WORD)CurrentPrcb == 1 )
    {
      if ( v17 || (*(_BYTE *)(v13 + 34) & 8) != 0 )
        v18 = 1;
      if ( !v18 )
        goto LABEL_21;
    }
    else if ( (_WORD)CurrentPrcb != 2 || !v17 || (*(_BYTE *)(v13 + 34) & 8) == 0 )
    {
      goto LABEL_21;
    }
  }
  v33 = 0;
  if ( *(__int64 *)(v13 + 40) < 0 && (*(_DWORD *)(v13 + 16) & 0x400LL) != 0
    || (unsigned int)MiIsPfnCommitNotCharged(v13, CurrentPrcb, v5) )
  {
    v33 = 1;
    v35 = (ULONG *)*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v13 + 40) >> 43) & 0x3FFLL));
    if ( !(unsigned int)MiChargeCommit((__int64)v35, 1uLL, 4) )
      goto LABEL_22;
    v34 = 0xFFFFFFFFLL;
  }
  else
  {
    v35 = (ULONG *)*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v13 + 40) >> 43) & 0x3FFLL));
  }
  if ( v35 == &MiSystemPartition )
  {
    CurrentPrcb = (__int64)KeGetCurrentPrcb();
    v36 = *(_DWORD *)(CurrentPrcb + 35740);
    while ( (unsigned int)(v36 - 1) <= 0xFFFFFFFD )
    {
      v37 = v36;
      v36 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 35740), v36 - 1, v36);
      if ( v37 == v36 )
        goto LABEL_21;
    }
  }
  if ( !(unsigned int)MiChargePartitionResidentAvailable(v35, 1LL, v34) )
  {
    if ( v33 )
      MiReturnCommit(v35, 1LL, 0LL);
    goto LABEL_22;
  }
LABEL_21:
  v19 = *(_DWORD *)(v13 + 32);
  LOWORD(v19) = v19 + 1;
  v77 = v19;
  *(_DWORD *)(v13 + 32) = v19;
LABEL_22:
  MiLockOwnedProtoPage(v13, CurrentPrcb, v5, v9);
  while ( 1 )
  {
    while ( 1 )
    {
      v21 = *(_QWORD *)v69;
      v22 = *(_QWORD *)v69;
      if ( (*(_QWORD *)v69 & 1) != 0 )
        goto LABEL_30;
      if ( (*(_QWORD *)v69 & 0xC00LL) != 0x800 )
      {
        v25 = 0LL;
        goto LABEL_37;
      }
      if ( !v21 || !qword_140E2DB80 || (v21 & qword_140E2DB80) != 0 )
      {
        v22 = *(_QWORD *)v69;
        if ( qword_140E2DB80 )
        {
          if ( (v21 & 0x10) != 0 )
            v22 = v21 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v22 = v21 & ~qword_140E2DB80;
        }
LABEL_30:
        v23 = (v22 >> 12) & 0xFFFFFFFFFFLL;
        if ( v23 <= qword_140E2DBE0 )
        {
          v24 = 6 * v23;
          if ( (*(_QWORD *)(48 * v23 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
            break;
        }
      }
    }
    v25 = 48 * v23 - 0x220000000000LL;
    v26 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v26 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v24) )
        {
          HvlNotifyLongSpinWait(v26);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v25 + 24) < 0 );
    }
    if ( *(_QWORD *)v69 == v21 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v20 = qword_140E2FF88;
  if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v25 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
    v25 = MiLockSpecialPurposeMemoryCachedPage(v25, 2LL);
LABEL_37:
  v27 = *(_QWORD *)v69;
  if ( v69 < 0xFFFFF6FB7DBED000uLL || v69 > 0xFFFFF6FB7DBED7F8uLL )
  {
LABEL_41:
    if ( (v27 & 1) == 0 )
      goto LABEL_80;
    if ( v70 )
    {
      PfnPriority = MiGetPfnPriority(v25);
      if ( v59 > PfnPriority )
      {
        v74 = *(_DWORD *)(v25 + 32);
        HIBYTE(v74) = v59 | HIBYTE(v74) & 0xF8;
        *(_DWORD *)(v25 + 32) = v74;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      LOBYTE(v58) = 17;
      MiUnlockProtoPoolPage(v13, v58);
      return 0LL;
    }
    if ( *(__int64 *)(v25 + 40) < 0 )
    {
      v28 = *(_QWORD *)(v25 + 16);
      if ( (v28 & 0x400) != 0 && ((*(_QWORD *)(v25 + 40) >> 60) & 7) != 3 )
      {
        if ( qword_140E2DB80 && (v28 & 0x10) == 0 )
          v28 &= ~qword_140E2DB80;
        v29 = v28 >> 16;
        if ( (*(_DWORD *)(*(_QWORD *)v29 + 56LL) & 0x20) != 0 )
        {
          v30 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v29 + 96LL) & 0xFFFFFFFFFFFFFFF8uLL) + 40);
          if ( v30 )
          {
            if ( (v30 & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFFFFFFFFF8LL && (v30 & 3) != 2 )
            {
              if ( v67 < 0xFFFF800000000000uLL )
              {
                MiLockVadTree(1LL);
                Address = MiLocateAddress(v67);
                LOBYTE(v65) = 17;
                v66 = Address;
                MiUnlockVadTree(1LL, v65);
                if ( !v66 )
                  goto LABEL_146;
                v20 = (PVOID)*(unsigned int *)(v66 + 48);
                if ( (*(_DWORD *)(v66 + 48) & 0x70) != 0x20 )
                  goto LABEL_146;
                v20 = (PVOID)((unsigned __int16)v20 & 0xF80);
                if ( (_DWORD)v20 != 128
                  && ((*(_DWORD *)(v66 + 64) & 8) == 0 || (v30 & 4) != 0)
                  && ((MiFlags & 0x400) == 0 || (*(_DWORD *)(v29 + 32) & 0x20000) == 0) )
                {
                  goto LABEL_146;
                }
              }
              else if ( (MiFlags & 0x8000) != 0 && (*(_BYTE *)(v25 + 16) & 0x40) != 0 )
              {
LABEL_146:
                _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                LOBYTE(v20) = 17;
                MiUnlockProtoPoolPage(v13, v20);
                return 3221226536LL;
              }
            }
          }
        }
      }
    }
    v31 = (*(_QWORD *)(v25 + 24) + 1LL) ^ (*(_QWORD *)(v25 + 24) ^ (*(_QWORD *)(v25 + 24) + 1LL)) & 0xC000000000000000uLL;
    *(_QWORD *)(v25 + 24) = v31;
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v31) = 17;
    MiUnlockProtoPoolPage(v13, v31);
    __incgsdword(0x2E98u);
    result = MiCompleteProtoPteFault(
               a1,
               -1431655765 * (unsigned int)((__int64)(v25 + 0x220000000000LL) >> 4),
               a2,
               0,
               v68);
    if ( (int)result >= 0 )
      return 272LL;
    return result;
  }
  if ( (v27 & 1) != 0 )
  {
    if ( (v27 & 0x42) == 0 || (v27 & 0x20) == 0 )
    {
      v44 = MiPteHasShadow();
      if ( v44 )
      {
        KernelWaitTime = v44[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v46 = *(_QWORD *)(KernelWaitTime + 8 * ((v69 >> 3) & 0x1FF));
          if ( (v46 & 0x20) != 0 )
            v27 |= 0x20uLL;
          v47 = v27;
          v27 |= 0x42uLL;
          if ( (v46 & 0x42) == 0 )
            v27 = v47;
        }
      }
    }
    goto LABEL_41;
  }
LABEL_80:
  if ( !v27 )
    goto LABEL_154;
  LOBYTE(v38) = 0;
  v39 = MI_READ_PTE_LOCK_FREE(v7);
  v41 = v39;
  if ( (v39 & 0x400) == 0 )
    goto LABEL_133;
  if ( qword_140E2DB80 )
  {
    if ( (v39 & 0x10) != 0 )
      v39 &= ~0x10uLL;
    else
      v39 &= ~qword_140E2DB80;
  }
  if ( HIDWORD(v39) != 0xFFFFFFFF )
  {
LABEL_133:
    if ( (v41 & 8) != 0 )
      goto LABEL_87;
    v38 = (v27 >> 5) & 0x1F;
    if ( ((v27 >> 5) & 0x18) == 0x10 && (*(_BYTE *)(a1 + 69) & 0x10) != 0 )
    {
LABEL_157:
      LOBYTE(v40) = 17;
      MiUnlockProtoPoolPage(v13, v40);
      return 3221226548LL;
    }
    else
    {
      v60 = MiAccessCheck(v69, a2, 0, (v27 >> 5) & 0x1F, v68, 1);
      if ( !v60 )
        goto LABEL_87;
      if ( v25 )
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      LOBYTE(v40) = 17;
      MiUnlockProtoPoolPage(v13, v40);
      return v60;
    }
  }
  v38 = (v41 >> 5) & 0x1F;
  if ( ((v41 >> 5) & 0x18) == 0x10 && (*(_BYTE *)(a1 + 69) & 0x10) != 0 )
    goto LABEL_157;
LABEL_87:
  v42 = v27;
  if ( qword_140E2DB80 && (v27 & 0x10) == 0 )
    v42 = v27 & ~(_WORD)qword_140E2DB80;
  if ( (v42 & 0x400) != 0
    || (v42 & 0x800) != 0
    || (v42 & 4) != 0
    || (v38 & 5) != 5
    || !a2 && (((unsigned __int8)v27 >> 5) & 5) == 4
    || (*(_DWORD *)(v71 + 184) & 0xF) == 0 && KeGetCurrentThread()->ApcState.Process[1].IdealProcessorAssignmentBlock )
  {
    v43 = v67;
    goto LABEL_93;
  }
  v43 = v67;
  if ( (MiFlags & 0x8000) == 0 || v67 < 0xFFFF800000000000uLL || (v38 & 2) == 0 )
  {
    LOBYTE(v40) = 17;
    MiUnlockProtoPoolPage(v13, v40);
    if ( v72 )
    {
      if ( *(_BYTE *)(v68 & 0xFFFFFFFFFFFFFFFEuLL) != 1
        && *(_BYTE *)(v68 & 0xFFFFFFFFFFFFFFFEuLL) != 3
        && *(_BYTE *)(v68 & 0xFFFFFFFFFFFFFFFEuLL) != 6
        || *(_BYTE *)(v68 & 0xFFFFFFFFFFFFFFFEuLL) == 6 )
      {
        goto LABEL_115;
      }
    }
    else if ( !(unsigned __int8)KeInvalidAccessAllowed(v68, 0LL) )
    {
LABEL_115:
      IsPrototypePteVadLookup = MiIsPrototypePteVadLookup(v41);
      v49 = v41 >> 5;
      v50 = v27 >> 5;
      if ( !IsPrototypePteVadLookup )
        LOBYTE(v49) = v50;
      v51 = v49;
      v52 = v49 & 0x18;
      v53 = v51 & 2 | 4u;
      if ( v52 == 8 )
      {
        v53 = (unsigned int)v53 | 8;
      }
      else if ( v52 == 24 )
      {
        v53 = (unsigned int)v53 | 0x18;
      }
      DemandZeroPte = MiMakeDemandZeroPte(v53);
      v54 = DemandZeroPte;
      if ( (unsigned int)MiPteInShadowRange(v7) )
      {
        v56 = MiSanitizeShadowPxe(v55, &DemandZeroPte);
        v54 = DemandZeroPte;
      }
      else
      {
        v56 = 0;
      }
      *v7 = v54;
      if ( v56 )
        MiWritePteShadow(v7, v54);
      return MiResolveDemandZeroFault(a1, v7, 0LL, a2);
    }
    if ( v67 >= 0xFFFF800000000000uLL )
      return 3221225477LL;
    goto LABEL_115;
  }
LABEL_93:
  if ( (v27 & 0x400) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 69) & 0x10) != 0 )
      goto LABEL_157;
    return MiResolveMappedFileFault(a1, v69, v13, DemandZeroPte);
  }
  else
  {
    if ( (v27 & 0x800) != 0 )
      return MiResolveTransitionFault(a1, v69, v13, a2, DemandZeroPte);
    if ( (unsigned int)MiGetPagingFileOffset(v27) )
    {
      if ( (*(_BYTE *)(a1 + 69) & 0x10) != 0 )
        goto LABEL_157;
      return MiResolvePageFileFault(a1, v69, v13, DemandZeroPte);
    }
    else
    {
      if ( (v68 & 1) != 0 )
      {
        if ( (*(_BYTE *)(v68 & 0xFFFFFFFFFFFFFFFEuLL) == 1
           || *(_BYTE *)(v68 & 0xFFFFFFFFFFFFFFFEuLL) == 3
           || *(_BYTE *)(v68 & 0xFFFFFFFFFFFFFFFEuLL) == 6)
          && *(_BYTE *)(v68 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
        {
          goto LABEL_150;
        }
      }
      else
      {
        if ( !(unsigned __int8)KeInvalidAccessAllowed(v68, 0LL) )
          return MiResolveDemandZeroFault(a1, v69, v13, a2);
LABEL_150:
        if ( v43 >= 0xFFFF800000000000uLL )
        {
          v61 = MiIsPrototypePteVadLookup(v41);
          v62 = v27 >> 5;
          v63 = v41 >> 5;
          if ( v61 )
            LOBYTE(v62) = v63;
          if ( (v62 & 0x18) == 0x10 )
          {
LABEL_154:
            LOBYTE(v20) = 17;
            MiUnlockProtoPoolPage(v13, v20);
            return 3221225477LL;
          }
        }
      }
      return MiResolveDemandZeroFault(a1, v69, v13, a2);
    }
  }
}
