/*
 * XREFs of MiResolveProtoPteFault @ 0x140334760
 * Callers:
 *     MiDispatchFault @ 0x140333520 (MiDispatchFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140204044 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeInvalidAccessAllowed @ 0x1402FC4D0 (KeInvalidAccessAllowed.c)
 *     MiAccessCheck @ 0x1403071E0 (MiAccessCheck.c)
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x14030D150 (MiIsPrototypePteVadLookup.c)
 *     MiLockOwnedProtoPage @ 0x1403354A0 (MiLockOwnedProtoPage.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x14033ECD0 (MiChargePartitionResidentAvailable.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     MiResolveDemandZeroFault @ 0x140342E30 (MiResolveDemandZeroFault.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiIsPfnCommitNotCharged @ 0x140345F70 (MiIsPfnCommitNotCharged.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiResolveProtoPteFault(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r8
  __int64 v6; // rdx
  __int64 **v7; // r13
  unsigned __int64 *v8; // rsi
  __int64 v9; // r9
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned int v13; // r14d
  unsigned __int64 v14; // rax
  __int64 CurrentPrcb; // rdx
  __int64 v16; // rax
  int v17; // ecx
  int v18; // eax
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // r14
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
  unsigned __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 v43; // r15
  __int16 v44; // ax
  unsigned __int64 v45; // r14
  _KPROCESS *v46; // rax
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v48; // rax
  unsigned __int64 v49; // rcx
  BOOL IsPrototypePteVadLookup; // eax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned __int64 v54; // r15
  unsigned __int64 v55; // rbx
  char v56; // cl
  int v57; // r15d
  __int64 v58; // rcx
  __int64 *v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // eax
  unsigned int PfnPriority; // eax
  unsigned __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  unsigned int v68; // r10d
  unsigned int v69; // r12d
  BOOL v70; // eax
  unsigned __int64 v71; // rbx
  unsigned __int64 v72; // r15
  __int64 Address; // r15
  unsigned __int64 v74; // [rsp+30h] [rbp-68h]
  __int64 v75; // [rsp+38h] [rbp-60h]
  ULONG_PTR v76; // [rsp+40h] [rbp-58h]
  unsigned __int64 v77; // [rsp+48h] [rbp-50h]
  __int64 v78; // [rsp+50h] [rbp-48h]
  __int64 v79; // [rsp+58h] [rbp-40h]
  int v81; // [rsp+A0h] [rbp+8h]
  __int64 *DemandZeroPte; // [rsp+B0h] [rbp+18h] BYREF
  int v84; // [rsp+B8h] [rbp+20h]

  DemandZeroPte = a3;
  v78 = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)a1;
  v4 = *(_QWORD *)a1;
  *a3 = 0LL;
  v74 = v3;
  v5 = 0xFFFFF68000000000uLL;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = (__int64 **)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v75 = v6;
  v79 = v6 & 1;
  if ( (v6 & 1) == 0 || (v77 = v6 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v77 = 0LL;
  v76 = *(_QWORD *)(a1 + 104);
  v8 = (unsigned __int64 *)(((v76 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  while ( 1 )
  {
    v9 = 0x40000000000000LL;
    do
    {
      v10 = *v8;
      if ( (*v8 & 1) == 0 || (v10 & 0x200) != 0 )
        return 3221225494LL;
      v11 = (v10 >> 12) & 0xFFFFFFFFFFLL;
    }
    while ( v11 > qword_140E2DD20 || (*(_QWORD *)(48 * v11 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 );
    v12 = 48 * v11 - 0x220000000000LL;
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v13 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v13);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    v14 = *v8;
    if ( (*v8 & 1) == 0 || (v14 & 0x200) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return 3221225494LL;
    }
    CurrentPrcb = 0xFFFFFFFFFFLL;
    if ( v11 == ((v14 >> 12) & 0xFFFFFFFFFFLL) )
      break;
    v5 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (*(_QWORD *)(v12 + 40) & 0x10000000000LL) != 0 || _bittest64((const signed __int64 *)(v12 + 40), 0x35u) )
    goto LABEL_21;
  CurrentPrcb = *(unsigned int *)(v12 + 32);
  v16 = *(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  v17 = 0;
  if ( (_WORD)CurrentPrcb )
  {
    if ( (_WORD)CurrentPrcb == 1 )
    {
      if ( v16 || (*(_BYTE *)(v12 + 34) & 8) != 0 )
        v17 = 1;
      if ( !v17 )
        goto LABEL_21;
    }
    else if ( (_WORD)CurrentPrcb != 2 || !v16 || (*(_BYTE *)(v12 + 34) & 8) == 0 )
    {
      goto LABEL_21;
    }
  }
  v33 = 0;
  if ( *(__int64 *)(v12 + 40) < 0 && (*(_DWORD *)(v12 + 16) & 0x400LL) != 0
    || (unsigned int)MiIsPfnCommitNotCharged(v12) )
  {
    v33 = 1;
    v35 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL));
    if ( !(unsigned int)MiChargeCommit(v35, 1LL, 4LL, v9) )
      goto LABEL_22;
    v34 = 0xFFFFFFFFLL;
  }
  else
  {
    v35 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL));
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
  if ( !(unsigned int)MiChargePartitionResidentAvailable(v35, 1LL, v34, v9) )
  {
    if ( v33 )
      MiReturnCommit((__int64)v35, 1LL, 0);
    goto LABEL_22;
  }
LABEL_21:
  v18 = *(_DWORD *)(v12 + 32);
  LOWORD(v18) = v18 + 1;
  v84 = v18;
  *(_DWORD *)(v12 + 32) = v18;
LABEL_22:
  MiLockOwnedProtoPage(v12, CurrentPrcb, v5, v9);
  while ( 1 )
  {
    while ( 1 )
    {
      v22 = *(_QWORD *)v76;
      v23 = *(_QWORD *)v76;
      if ( (*(_QWORD *)v76 & 1) != 0 )
        goto LABEL_30;
      if ( (*(_QWORD *)v76 & 0xC00LL) != 0x800 )
      {
        v25 = 0LL;
        goto LABEL_37;
      }
      if ( !v22 || !qword_140E2DCC0 || (v22 & qword_140E2DCC0) != 0 )
      {
        v23 = *(_QWORD *)v76;
        if ( qword_140E2DCC0 )
        {
          if ( (v22 & 0x10) != 0 )
            v23 = v22 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v23 = v22 & ~qword_140E2DCC0;
        }
LABEL_30:
        v24 = (v23 >> 12) & 0xFFFFFFFFFFLL;
        if ( v24 <= qword_140E2DD20 && (*(_QWORD *)(48 * v24 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
          break;
      }
    }
    v25 = 48 * v24 - 0x220000000000LL;
    v26 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v26 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
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
    if ( *(_QWORD *)v76 == v22 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v19 = (unsigned __int64)qword_140E300C8;
  if ( (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v25 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
    v25 = MiLockSpecialPurposeMemoryCachedPage(v25, 2);
LABEL_37:
  v27 = *(_QWORD *)v76;
  if ( v76 < 0xFFFFF6FB7DBED000uLL || v76 > 0xFFFFF6FB7DBED7F8uLL )
  {
LABEL_41:
    if ( (v27 & 1) == 0 )
      goto LABEL_80;
    if ( v77 )
    {
      PfnPriority = MiGetPfnPriority(v25);
      if ( v68 > PfnPriority )
      {
        v81 = *(_DWORD *)(v25 + 32);
        HIBYTE(v81) = v68 | HIBYTE(v81) & 0xF8;
        *(_DWORD *)(v25 + 32) = v81;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      LOBYTE(v65) = 17;
      MiUnlockProtoPoolPage(v12, v65, v66, v67);
      return 0LL;
    }
    if ( *(__int64 *)(v25 + 40) < 0 )
    {
      v28 = *(_QWORD *)(v25 + 16);
      if ( (v28 & 0x400) != 0 && ((*(_QWORD *)(v25 + 40) >> 60) & 7) != 3 )
      {
        if ( qword_140E2DCC0 && (v28 & 0x10) == 0 )
          v28 &= ~qword_140E2DCC0;
        v29 = v28 >> 16;
        if ( (*(_DWORD *)(*(_QWORD *)v29 + 56LL) & 0x20) != 0 )
        {
          v30 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v29 + 96LL) & 0xFFFFFFFFFFFFFFF8uLL) + 40);
          if ( v30 )
          {
            if ( (v30 & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFFFFFFFFF8LL && (v30 & 3) != 2 )
            {
              if ( v74 < 0xFFFF800000000000uLL )
              {
                MiLockVadTree(1, v19, v20, v21);
                Address = MiLocateAddress(v74);
                MiUnlockVadTree(1, 0x11u);
                if ( !Address )
                  goto LABEL_146;
                v19 = *(unsigned int *)(Address + 48);
                if ( (*(_DWORD *)(Address + 48) & 0x70) != 0x20 )
                  goto LABEL_146;
                v19 &= 0xF80u;
                if ( (_DWORD)v19 != 128
                  && ((*(_DWORD *)(Address + 64) & 8) == 0 || (v30 & 4) != 0)
                  && ((MiFlags & 0x400) == 0 || (*(_DWORD *)(v29 + 32) & 0x20000) == 0) )
                {
                  goto LABEL_146;
                }
              }
              else if ( (MiFlags & 0x8000) != 0 && (*(_BYTE *)(v25 + 16) & 0x40) != 0 )
              {
LABEL_146:
                _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                LOBYTE(v19) = 17;
                MiUnlockProtoPoolPage(v12, v19, v20, v21);
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
    MiUnlockProtoPoolPage(v12, v31, v20, v21);
    __incgsdword(0x2E98u);
    result = MiCompleteProtoPteFault(a1, -1431655765 * (unsigned int)((v25 + 0x220000000000LL) >> 4), a2, 0, v75);
    if ( (int)result >= 0 )
      return 272LL;
    return result;
  }
  if ( (v27 & 1) != 0 )
  {
    if ( (v27 & 0x42) == 0 || (v27 & 0x20) == 0 )
    {
      v46 = MiPteHasShadow();
      if ( v46 )
      {
        KernelWaitTime = v46[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v48 = *(_QWORD *)(KernelWaitTime + 8 * ((v76 >> 3) & 0x1FF));
          if ( (v48 & 0x20) != 0 )
            v27 |= 0x20uLL;
          v49 = v27;
          v27 |= 0x42uLL;
          if ( (v48 & 0x42) == 0 )
            v27 = v49;
        }
      }
    }
    goto LABEL_41;
  }
LABEL_80:
  if ( !v27 )
    goto LABEL_154;
  LOBYTE(v38) = 0;
  v39 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v7);
  v43 = v39;
  if ( (v39 & 0x400) == 0 )
    goto LABEL_133;
  if ( qword_140E2DCC0 )
  {
    if ( (v39 & 0x10) != 0 )
      v39 &= ~0x10uLL;
    else
      v39 &= ~qword_140E2DCC0;
  }
  if ( HIDWORD(v39) != 0xFFFFFFFF )
  {
LABEL_133:
    if ( (v43 & 8) != 0 )
      goto LABEL_87;
    v38 = (v27 >> 5) & 0x1F;
    if ( ((v27 >> 5) & 0x18) == 0x10 && (*(_BYTE *)(a1 + 69) & 0x10) != 0 )
    {
LABEL_157:
      LOBYTE(v40) = 17;
      MiUnlockProtoPoolPage(v12, v40, v41, v42);
      return 3221226548LL;
    }
    else
    {
      v69 = MiAccessCheck(v76, a2, 0LL, (v27 >> 5) & 0x1F, v75, 1);
      if ( !v69 )
        goto LABEL_87;
      if ( v25 )
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      LOBYTE(v40) = 17;
      MiUnlockProtoPoolPage(v12, v40, v41, v42);
      return v69;
    }
  }
  v38 = (v43 >> 5) & 0x1F;
  if ( ((v43 >> 5) & 0x18) == 0x10 && (*(_BYTE *)(a1 + 69) & 0x10) != 0 )
    goto LABEL_157;
LABEL_87:
  v44 = v27;
  if ( qword_140E2DCC0 && (v27 & 0x10) == 0 )
    v44 = v27 & ~(_WORD)qword_140E2DCC0;
  if ( (v44 & 0x400) != 0
    || (v44 & 0x800) != 0
    || (v44 & 4) != 0
    || (v38 & 5) != 5
    || !a2 && (((unsigned __int8)v27 >> 5) & 5) == 4
    || (*(_DWORD *)(v78 + 184) & 0xF) == 0 && KeGetCurrentThread()->ApcState.Process[1].IdealProcessorAssignmentBlock )
  {
    v45 = v74;
    goto LABEL_93;
  }
  v45 = v74;
  if ( (MiFlags & 0x8000) == 0 || v74 < 0xFFFF800000000000uLL || (v38 & 2) == 0 )
  {
    LOBYTE(v40) = 17;
    MiUnlockProtoPoolPage(v12, v40, v41, v42);
    if ( v79 )
    {
      if ( *(_BYTE *)(v75 & 0xFFFFFFFFFFFFFFFEuLL) != 1
        && *(_BYTE *)(v75 & 0xFFFFFFFFFFFFFFFEuLL) != 3
        && *(_BYTE *)(v75 & 0xFFFFFFFFFFFFFFFEuLL) != 6
        || *(_BYTE *)(v75 & 0xFFFFFFFFFFFFFFFEuLL) == 6 )
      {
        goto LABEL_115;
      }
    }
    else if ( !KeInvalidAccessAllowed(v75, 0) )
    {
LABEL_115:
      IsPrototypePteVadLookup = MiIsPrototypePteVadLookup(v43);
      v54 = v43 >> 5;
      v55 = v27 >> 5;
      if ( !IsPrototypePteVadLookup )
        LOBYTE(v54) = v55;
      v56 = v54;
      v57 = v54 & 0x18;
      v58 = v56 & 2 | 4u;
      if ( v57 == 8 )
      {
        v58 = (unsigned int)v58 | 8;
      }
      else if ( v57 == 24 )
      {
        v58 = (unsigned int)v58 | 0x18;
      }
      DemandZeroPte = (__int64 *)MiMakeDemandZeroPte(v58, v51, v52, v53);
      v59 = DemandZeroPte;
      if ( MiPteInShadowRange((unsigned __int64)v7) )
      {
        v63 = MiSanitizeShadowPxe(v60, (__int64)&DemandZeroPte, v61);
        v59 = DemandZeroPte;
      }
      else
      {
        v63 = 0;
      }
      *v7 = v59;
      if ( v63 )
        MiWritePteShadow((__int64)v7, (__int64)v59, v61, v62);
      return MiResolveDemandZeroFault(a1, v7, 0LL, a2);
    }
    if ( v74 >= 0xFFFF800000000000uLL )
      return 3221225477LL;
    goto LABEL_115;
  }
LABEL_93:
  if ( (v27 & 0x400) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 69) & 0x10) != 0 )
      goto LABEL_157;
    return MiResolveMappedFileFault(a1, (unsigned __int64 *)v76, v12, DemandZeroPte);
  }
  else
  {
    if ( (v27 & 0x800) != 0 )
      return MiResolveTransitionFault(a1, v76, (volatile signed __int32 *)v12, a2, DemandZeroPte);
    if ( (unsigned int)MiGetPagingFileOffset(v27) )
    {
      if ( (*(_BYTE *)(a1 + 69) & 0x10) != 0 )
        goto LABEL_157;
      return MiResolvePageFileFault(a1, v76, v12, DemandZeroPte);
    }
    else
    {
      if ( (v75 & 1) != 0 )
      {
        if ( (*(_BYTE *)(v75 & 0xFFFFFFFFFFFFFFFEuLL) == 1
           || *(_BYTE *)(v75 & 0xFFFFFFFFFFFFFFFEuLL) == 3
           || *(_BYTE *)(v75 & 0xFFFFFFFFFFFFFFFEuLL) == 6)
          && *(_BYTE *)(v75 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
        {
          goto LABEL_150;
        }
      }
      else
      {
        if ( !KeInvalidAccessAllowed(v75, 0) )
          return MiResolveDemandZeroFault(a1, v76, v12, a2);
LABEL_150:
        if ( v45 >= 0xFFFF800000000000uLL )
        {
          v70 = MiIsPrototypePteVadLookup(v43);
          v71 = v27 >> 5;
          v72 = v43 >> 5;
          if ( v70 )
            LOBYTE(v71) = v72;
          if ( (v71 & 0x18) == 0x10 )
          {
LABEL_154:
            LOBYTE(v19) = 17;
            MiUnlockProtoPoolPage(v12, v19, v20, v21);
            return 3221225477LL;
          }
        }
      }
      return MiResolveDemandZeroFault(a1, v76, v12, a2);
    }
  }
}
