/*
 * XREFs of MiResolveProtoPteFault @ 0x140240060
 * Callers:
 *     MiDispatchFault @ 0x14023F750 (MiDispatchFault.c)
 * Callees:
 *     MiResolveMappedFileFault @ 0x1402276BC (MiResolveMappedFileFault.c)
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MiResolveDemandZeroFault @ 0x140241160 (MiResolveDemandZeroFault.c)
 *     MiIsPrototypePteVadLookup @ 0x140246860 (MiIsPrototypePteVadLookup.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14033F5DC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiGetPagingFileOffset @ 0x14037C4CC (MiGetPagingFileOffset.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiAccessCheck @ 0x1403E1820 (MiAccessCheck.c)
 *     KeInvalidAccessAllowed @ 0x1403E2860 (KeInvalidAccessAllowed.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 */

__int64 __fastcall MiResolveProtoPteFault(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rdi
  unsigned __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned __int64 *v8; // r14
  ULONG_PTR v9; // r13
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r15
  unsigned int v15; // r13d
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rbx
  __int64 v20; // r13
  unsigned __int64 v21; // rax
  __int64 v22; // r8
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rcx
  __int16 v25; // ax
  unsigned __int64 v26; // r15
  __int64 result; // rax
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rdx
  unsigned __int64 v32; // r8
  char v33; // cl
  int v34; // ebx
  __int64 v35; // rcx
  unsigned __int64 v36; // rbx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rdx
  unsigned int PfnPriority; // eax
  __int64 v41; // r8
  unsigned __int64 v42; // r9
  unsigned int v43; // r10d
  unsigned __int64 v44; // r14
  unsigned __int64 v45; // r8
  unsigned __int64 v46; // r9
  __int64 v47; // r8
  __int64 Address; // rax
  __int64 v49; // rdx
  __int64 v50; // r14
  int v51; // ecx
  volatile signed __int32 *v52; // [rsp+30h] [rbp-58h]
  __int64 v53; // [rsp+38h] [rbp-50h]
  unsigned __int64 v54; // [rsp+40h] [rbp-48h]
  __int64 v55; // [rsp+48h] [rbp-40h]
  unsigned __int64 v56; // [rsp+90h] [rbp+8h]
  unsigned int v57; // [rsp+90h] [rbp+8h]
  int v60; // [rsp+A0h] [rbp+18h]
  unsigned __int64 DemandZeroPte; // [rsp+A8h] [rbp+20h] BYREF

  v55 = *(_QWORD *)(a1 + 56);
  DemandZeroPte = *(_QWORD *)a1;
  v4 = (DemandZeroPte >> 9) & 0x7FFFFFFFF8LL;
  *a3 = 0LL;
  v5 = (unsigned __int64 *)(v4 - 0x98000000000LL);
  v6 = *(_QWORD *)(a1 + 16);
  v53 = v6;
  v7 = v6 & 1;
  if ( (v6 & 1) == 0 || (v56 = v6 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v56 = 0LL;
  v8 = *(unsigned __int64 **)(a1 + 104);
  v52 = (volatile signed __int32 *)MiLockProtoPoolPage(v8, 0LL);
  v9 = (ULONG_PTR)v52;
  if ( !v52 )
    return 3221225494LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = *v8;
      v11 = *v8;
      if ( (*v8 & 1) != 0 )
        goto LABEL_11;
      if ( (*v8 & 0xC00) != 0x800 )
      {
        v14 = 0LL;
        goto LABEL_18;
      }
      if ( !v10 || !qword_140E2D940 || (qword_140E2D940 & v10) != 0 )
      {
        v11 = *v8;
        if ( qword_140E2D940 )
        {
          if ( (v10 & 0x10) != 0 )
            v11 = v10 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v11 = v10 & ~qword_140E2D940;
        }
LABEL_11:
        v12 = (v11 >> 12) & 0xFFFFFFFFFFLL;
        if ( v12 <= qword_140E2D9A0 )
        {
          v13 = 6 * v12;
          if ( (*(_QWORD *)(48 * v12 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
            break;
        }
      }
    }
    v14 = 48 * v12 - 0x220000000000LL;
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
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
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
    v9 = (ULONG_PTR)v52;
    if ( *v8 == v10 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v14 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
    v14 = MiLockSpecialPurposeMemoryCachedPage(v14, 2LL);
LABEL_18:
  v16 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v8);
  v19 = v16;
  if ( (v16 & 1) != 0 )
  {
    if ( v56 )
    {
      PfnPriority = MiGetPfnPriority(v14);
      if ( v43 > PfnPriority )
      {
        v60 = *(_DWORD *)(v14 + 32);
        HIBYTE(v60) = v43 | HIBYTE(v60) & 0xF8;
        *(_DWORD *)(v14 + 32) = v60;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockProtoPoolPage(v9, 0x11u, v41, v42);
      return 0LL;
    }
    if ( *(__int64 *)(v14 + 40) < 0 )
    {
      v28 = *(_QWORD *)(v14 + 16);
      if ( (v28 & 0x400) != 0 && ((*(_QWORD *)(v14 + 40) >> 60) & 7) != 3 )
      {
        if ( qword_140E2D940 && (v28 & 0x10) == 0 )
          v28 &= ~qword_140E2D940;
        v29 = v28 >> 16;
        if ( (*(_DWORD *)(*(_QWORD *)v29 + 56LL) & 0x20) != 0 )
        {
          v30 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v29 + 96LL) & 0xFFFFFFFFFFFFFFF8uLL) + 40);
          if ( v30 )
          {
            if ( (v30 & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFFFFFFFFF8LL && (v30 & 3) != 2 )
            {
              v44 = DemandZeroPte;
              if ( DemandZeroPte < 0xFFFF800000000000uLL )
              {
                MiLockVadTree(1LL);
                Address = MiLocateAddress(v44);
                LOBYTE(v49) = 17;
                v50 = Address;
                MiUnlockVadTree(1LL, v49);
                if ( !v50 )
                  goto LABEL_96;
                v51 = *(_DWORD *)(v50 + 48);
                if ( (v51 & 0x70) != 0x20 )
                  goto LABEL_96;
                if ( (v51 & 0xF80) != 0x80
                  && ((*(_DWORD *)(v50 + 64) & 8) == 0 || (v30 & 4) != 0)
                  && ((MiFlags & 0x400) == 0 || (*(_DWORD *)(v29 + 32) & 0x20000) == 0) )
                {
                  goto LABEL_96;
                }
              }
              else if ( (MiFlags & 0x8000) != 0 && (*(_BYTE *)(v14 + 16) & 0x40) != 0 )
              {
LABEL_96:
                _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                MiUnlockProtoPoolPage(v9, 0x11u, v17, v18);
                return 3221226536LL;
              }
            }
          }
        }
      }
    }
    *(_QWORD *)(v14 + 24) = (*(_QWORD *)(v14 + 24) + 1LL) ^ (*(_QWORD *)(v14 + 24) ^ (*(_QWORD *)(v14 + 24) + 1LL)) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockProtoPoolPage(v9, 0x11u, v17, v18);
    __incgsdword(0x2E98u);
    result = MiCompleteProtoPteFault(
               (ULONG_PTR *)a1,
               0xAAAAAAAAAAAAAAABuLL * ((__int64)(v14 + 0x220000000000LL) >> 4),
               a2,
               0,
               v53);
    if ( (int)result >= 0 )
      return 272LL;
    return result;
  }
  if ( !v16 )
  {
    MiUnlockProtoPoolPage(v9, 0x11u, v17, v18);
    return 3221225477LL;
  }
  LOBYTE(v20) = 0;
  v21 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v5);
  v54 = v21;
  v24 = v21;
  if ( (v21 & 0x400) == 0 )
    goto LABEL_85;
  if ( qword_140E2D940 )
  {
    if ( (v21 & 0x10) != 0 )
      v21 &= ~0x10uLL;
    else
      v21 &= ~qword_140E2D940;
  }
  if ( HIDWORD(v21) != 0xFFFFFFFF )
  {
LABEL_85:
    if ( (v24 & 8) != 0 )
      goto LABEL_26;
    v20 = (v19 >> 5) & 0x1F;
    if ( ((v19 >> 5) & 0x18) == 0x10 && (*(_BYTE *)(a1 + 69) & 0x10) != 0 )
    {
LABEL_109:
      MiUnlockProtoPoolPage((ULONG_PTR)v52, 0x11u, v22, v23);
      return 3221226548LL;
    }
    else
    {
      v57 = MiAccessCheck((ULONG_PTR)v8, v53, 1);
      if ( !v57 )
        goto LABEL_26;
      if ( v14 )
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockProtoPoolPage((ULONG_PTR)v52, 0x11u, v22, v23);
      return v57;
    }
  }
  v20 = (v24 >> 5) & 0x1F;
  if ( ((v24 >> 5) & 0x18) == 0x10 && (*(_BYTE *)(a1 + 69) & 0x10) != 0 )
    goto LABEL_109;
LABEL_26:
  v25 = v19;
  if ( qword_140E2D940 )
  {
    if ( (v19 & 0x10) != 0 )
      v25 = v19 & 0xFFEF;
    else
      v25 = v19 & ~(_WORD)qword_140E2D940;
  }
  if ( (v25 & 0x400) != 0
    || (v25 & 0x800) != 0
    || (v25 & 4) != 0
    || (v20 & 5) != 5
    || !a2 && (((unsigned __int8)v19 >> 5) & 5) == 4
    || (*(_DWORD *)(v55 + 184) & 0xF) == 0 && KeGetCurrentThread()->ApcState.Process[1].IdealProcessorAssignmentBlock )
  {
    v26 = DemandZeroPte;
    goto LABEL_32;
  }
  v26 = DemandZeroPte;
  if ( (MiFlags & 0x8000) == 0 || DemandZeroPte < 0xFFFF800000000000uLL || (v20 & 2) == 0 )
  {
    MiUnlockProtoPoolPage((ULONG_PTR)v52, 0x11u, v22, v23);
    if ( v7 )
    {
      v31 = *(unsigned __int8 *)(v53 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (_BYTE)v31 != 1 && (_BYTE)v31 != 3 && *(_BYTE *)(v53 & 0xFFFFFFFFFFFFFFFEuLL) != 6
        || *(_BYTE *)(v53 & 0xFFFFFFFFFFFFFFFEuLL) == 6 )
      {
        goto LABEL_60;
      }
    }
    else if ( !(unsigned __int8)KeInvalidAccessAllowed(v53, 0LL) )
    {
LABEL_60:
      if ( (unsigned int)MiIsPrototypePteVadLookup(v54, v31, v54) )
        v19 = v32;
      v33 = v19 >> 5;
      v34 = v33 & 0x18;
      v35 = v33 & 2 | 4u;
      if ( v34 == 8 )
      {
        v35 = (unsigned int)v35 | 8;
      }
      else if ( v34 == 24 )
      {
        v35 = (unsigned int)v35 | 0x18;
      }
      DemandZeroPte = MiMakeDemandZeroPte(v35);
      v36 = DemandZeroPte;
      if ( (unsigned int)MiPteInShadowRange(v5) )
      {
        v38 = MiSanitizeShadowPxe(v37, &DemandZeroPte);
        v36 = DemandZeroPte;
      }
      else
      {
        v38 = 0;
      }
      *v5 = v36;
      if ( v38 )
        MiWritePteShadow(v5, v36);
      return MiResolveDemandZeroFault(a1, v5, 0LL, a2);
    }
    if ( v26 >= 0xFFFF800000000000uLL )
      return 3221225477LL;
    goto LABEL_60;
  }
LABEL_32:
  if ( (v19 & 0x400) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 69) & 0x10) != 0 )
      goto LABEL_109;
    return MiResolveMappedFileFault(a1, v8, (__int64)v52, a3);
  }
  else
  {
    if ( (v19 & 0x800) != 0 )
      return MiResolveTransitionFault((ULONG_PTR *)a1, (ULONG_PTR)v8, v52, a2, a3);
    if ( (unsigned int)MiGetPagingFileOffset(v19) )
    {
      if ( (*(_BYTE *)(a1 + 69) & 0x10) != 0 )
        goto LABEL_109;
      return MiResolvePageFileFault(a1, v8, v52, a3);
    }
    else
    {
      if ( (v53 & 1) != 0 )
      {
        if ( (*(_BYTE *)(v53 & 0xFFFFFFFFFFFFFFFEuLL) == 1
           || *(_BYTE *)(v53 & 0xFFFFFFFFFFFFFFFEuLL) == 3
           || *(_BYTE *)(v53 & 0xFFFFFFFFFFFFFFFEuLL) == 6)
          && *(_BYTE *)(v53 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
        {
          goto LABEL_99;
        }
      }
      else
      {
        if ( !(unsigned __int8)KeInvalidAccessAllowed(v53, 0LL) )
          return MiResolveDemandZeroFault(a1, v8, v52, a2);
LABEL_99:
        if ( v26 >= 0xFFFF800000000000uLL )
        {
          if ( !(unsigned int)MiIsPrototypePteVadLookup(v54, v39, v54) )
            v45 = v19;
          v47 = v45 >> 5;
          LOBYTE(v47) = v47 & 0x18;
          if ( (_BYTE)v47 == 16 )
          {
            MiUnlockProtoPoolPage((ULONG_PTR)v52, 0x11u, v47, v46);
            return 3221225477LL;
          }
        }
      }
      return MiResolveDemandZeroFault(a1, v8, v52, a2);
    }
  }
}
