/*
 * XREFs of MiResolveTransitionFault @ 0x14021A2F0
 * Callers:
 *     MiDispatchFault @ 0x1402142B0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140214BB0 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiClearPageFileReservation @ 0x140213DEC (MiClearPageFileReservation.c)
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiHandleTransitionFault @ 0x14021B1A0 (MiHandleTransitionFault.c)
 *     MiMakeTransitionPteValid @ 0x14021B700 (MiMakeTransitionPteValid.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiUpdateProtectionMask @ 0x14021BFAC (MiUpdateProtectionMask.c)
 *     MiAllocateWsle @ 0x14021F980 (MiAllocateWsle.c)
 *     MiRelinkStandbyPage @ 0x14022C848 (MiRelinkStandbyPage.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiIsDecayPfn @ 0x14022EFD0 (MiIsDecayPfn.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiHandleCollidedFault @ 0x14023B504 (MiHandleCollidedFault.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14023C31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402E1B00 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     MiFreeInPageSupportBlock @ 0x1402EEC40 (MiFreeInPageSupportBlock.c)
 *     MiCanPfnOriginalPteBeLost @ 0x14039E1D0 (MiCanPfnOriginalPteBeLost.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140442B00 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiCheckWriteInProgressFault @ 0x140482B40 (MiCheckWriteInProgressFault.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiResolveTransitionFault(
        __int64 a1,
        ULONG_PTR a2,
        volatile signed __int32 *a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // rax
  ULONG_PTR v6; // r11
  __int64 v7; // r12
  __int64 v9; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r15
  _QWORD *v18; // rdi
  __int64 result; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rax
  unsigned int updated; // eax
  __int64 v25; // r8
  ULONG_PTR TransitionPteValid; // rax
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int8 v30; // cl
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  ULONG_PTR v34; // rbx
  int v35; // r12d
  _QWORD *v36; // r9
  unsigned int v37; // r12d
  ULONG_PTR v38; // rbx
  unsigned __int64 v39; // r10
  unsigned int v40; // r8d
  unsigned int v41; // r10d
  unsigned int v42; // r8d
  int v43; // edi
  _KPROCESS *Process; // rcx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  ULONG_PTR v49; // rbx
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rcx
  unsigned int v52; // r12d
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  __int64 v57; // r12
  __int64 v58; // rax
  _QWORD *v59; // rax
  int v60; // r14d
  char v61; // cl
  int v62; // eax
  unsigned int v63; // edx
  __int16 v64; // ax
  int v65; // edi
  _KPROCESS *v66; // rcx
  _KAB_UM_PROCESS_TREE *Trees; // rax
  char v68; // r11
  __int64 v69; // rax
  __int64 v70; // rax
  int v71; // eax
  ULONG_PTR v72; // rbx
  _QWORD *v73; // r14
  struct _SLIST_ENTRY *v74; // rdi
  ULONG_PTR v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // [rsp+40h] [rbp-78h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+48h] [rbp-70h] BYREF
  __int64 v79; // [rsp+50h] [rbp-68h]
  ULONG_PTR v80; // [rsp+58h] [rbp-60h] BYREF
  ULONG_PTR v81; // [rsp+60h] [rbp-58h] BYREF
  __int64 v82; // [rsp+68h] [rbp-50h]
  __int64 v83; // [rsp+70h] [rbp-48h]
  unsigned int v84; // [rsp+C0h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+C8h] [rbp+10h]
  ULONG_PTR BugCheckParameter3; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v87; // [rsp+D8h] [rbp+20h]

  v87 = a4;
  BugCheckParameter2 = a2;
  v5 = *(_QWORD *)(a1 + 56);
  v6 = 0LL;
  v7 = (__int64)a5;
  v9 = *(_QWORD *)(a1 + 16);
  v84 = 0;
  v83 = v5;
  v12 = 511LL;
  *a5 = 0LL;
  v79 = v9;
  ListEntry = 0LL;
  if ( !a3 )
  {
    while ( 1 )
    {
      v48 = MI_READ_PTE_LOCK_FREE(a2);
      v49 = v48;
      if ( (v48 & 0x800) == 0 )
        return 3221226548LL;
      if ( (v48 & 1) == 0 && (!v48 || !qword_140E2DB80 || (qword_140E2DB80 & v48) != 0) )
      {
        v50 = v48;
        if ( qword_140E2DB80 )
        {
          if ( (v48 & 0x10) != 0 )
            v50 = v48 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v50 = v48 & ~qword_140E2DB80;
        }
        v51 = (v50 >> 12) & 0xFFFFFFFFFFLL;
        v16 = 48 * v51 - 0x220000000000LL;
        if ( v51 <= qword_140E2DBE0 && (*(_QWORD *)(48 * v51 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
        {
          v52 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v52 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v51) )
              {
                HvlNotifyLongSpinWait(v52);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v16 + 24) < 0 );
          }
          v53 = MI_READ_PTE_LOCK_FREE(a2);
          v7 = (__int64)a5;
          if ( v53 == v49 )
          {
            if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0
              || (v16 = MiLockSpecialPurposeMemoryCachedPage(v16, 2LL)) != 0 )
            {
              if ( (*(_QWORD *)(v16 + 8) | 0x8000000000000000uLL) != a2
                && (*(_QWORD *)(v16 + 40) & 0x10000000000LL) == 0 )
              {
                KeBugCheckEx(0x1Au, 0x411uLL, a2, v49, *(_QWORD *)(v16 + 8));
              }
              if ( v16 )
              {
                v54 = MI_READ_PTE_LOCK_FREE(a2);
                v9 = v79;
                v13 = v54;
                v15 = 0xFFFFDE0000000000uLL;
                v6 = 0LL;
                goto LABEL_10;
              }
            }
            return 3221226548LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
    }
  }
  v13 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (v13 & 1) != 0
    && ((v13 & 0x42) == 0 || (v13 & 0x20) == 0)
    && (MiFlags & 0x600000) != 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process->AddressPolicy != 1 )
    {
      KernelWaitTime = Process[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v46 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
        if ( (v46 & 0x20) != 0 )
          v13 |= 0x20uLL;
        v47 = v13;
        v13 |= 0x42uLL;
        if ( (v46 & 0x42) == 0 )
          v13 = v47;
      }
    }
  }
  v14 = v13;
  if ( qword_140E2DB80 && (v13 & 0x10) == 0 )
    v14 = v13 & ~qword_140E2DB80;
  v15 = 0xFFFFDE0000000000uLL;
  v16 = 48 * ((v14 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
LABEL_10:
  if ( (*(_BYTE *)(v16 + 35) & 0x10) == 0 )
  {
    v17 = v9 & 1;
    if ( (v9 & 1) != 0 )
    {
      v39 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
      {
        v40 = *(_DWORD *)(v16 + 32);
        v41 = *(_DWORD *)(v39 + 80) & 7;
        if ( (v40 & 0x8000000) != 0
          && (v16 < 0xFFFFDE0000000000uLL
           || v16 >= 48 * qword_140E2DBE0 - 0x21FFFFFFFFD0LL
           || (unsigned int)MiIsDecayPfn(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v16 + 0x220000000000LL) >> 4))
           || (BYTE2(v40) & 7) != 6 && (unsigned int)MiGetPfnSlabType(v16) == 9) )
        {
          v42 = 5;
        }
        else
        {
          v42 = HIBYTE(v40) & 7;
        }
        if ( v41 != v42 && v41 >= v42 )
        {
          if ( (*(_BYTE *)(v16 + 34) & 7) == 2 )
          {
            if ( v42
              || (*(_DWORD *)(v16 + 16) & 0x400LL) != 0
              || (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0
              || (v69 = *(_QWORD *)(v16 + 16), v15 = (unsigned __int8)v69, (v69 & 4) == 0)
              || (unsigned __int16)v69 >> 12 != *(_DWORD *)(*((_QWORD *)qword_140E2FF88
                                                            + ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL))
                                                          + 1204LL) )
            {
              MiRelinkStandbyPage(v16);
              LODWORD(v6) = 0;
            }
          }
          else
          {
            LODWORD(a5) = *(_DWORD *)(v16 + 32);
            BYTE3(a5) = v41 | BYTE3(a5) & 0xF8;
            *(_DWORD *)(v16 + 32) = (_DWORD)a5;
          }
        }
        v43 = v6;
        goto LABEL_58;
      }
    }
    if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0 )
    {
LABEL_13:
      __incgsdword(0x2E98u);
      v15 = *(unsigned __int8 *)(v16 + 34);
      if ( (v15 & 8) != 0 )
      {
        v43 = MiCheckWriteInProgressFault(v16, v15, v9, v12);
        if ( v43 < 0 )
          goto LABEL_165;
      }
      v18 = (_QWORD *)BugCheckParameter2;
      if ( (v15 & 0x20) != 0 )
      {
        result = MiHandleCollidedFault(a1, BugCheckParameter2, (_DWORD)a3, v16, v7, (__int64)&v84);
        if ( v84 <= 1 || (int)result < 0 )
          return result;
      }
      else
      {
        v80 = v6;
        result = MiHandleTransitionFault(
                   a1,
                   BugCheckParameter2,
                   (void *)a3,
                   (void *)v16,
                   (__int64)&v80,
                   v13,
                   (__int64)&ListEntry);
        if ( (int)result < 0 )
          return result;
        if ( v80 )
          v16 = v80;
      }
      v20 = *(_QWORD *)(a1 + 16);
      v21 = v13;
      v22 = v87;
      if ( (v20 & 1) != 0 && *(_BYTE *)(v20 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      {
        *v18 = *v18 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        v21 = v13 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
      }
      if ( ((v21 >> 5) & 0x1F) == 0x18 )
      {
        v23 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v18);
        updated = MiUpdateProtectionMask(1LL, (unsigned __int8)BYTE2(*(_DWORD *)(v16 + 32)) >> 6, v23);
        *v18 = (32LL * updated) ^ (v25 ^ (32LL * updated)) & 0xFFFFFFFFFFFFFC1FuLL;
      }
      TransitionPteValid = MiMakeTransitionPteValid(v18);
      v27 = CLFS_LSN_NULL_EXT;
      BugCheckParameter3 = TransitionPteValid;
      v28 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL));
      v29 = *(_QWORD *)(v16 + 16);
      v82 = v28;
      if ( (v29 & 0x400) == 0 && (v29 & 4) != 0 && (unsigned __int16)v29 >> 12 == *(_DWORD *)(v28 + 1204) )
      {
        v30 = *(_BYTE *)(v16 + 34);
        v27 = 0LL;
        if ( (v30 & 0x10) == 0 )
        {
          if ( (!_bittest64((const signed __int64 *)(v16 + 16), 0xAu) & (unsigned __int8)~(v30 >> 3)) != 0 )
          {
            v77 = *(_QWORD *)(v16 + 16);
            if ( (v77 & 4) != 0 )
            {
              *(_QWORD *)(v16 + 16) &= ~4uLL;
              MiClearPageFileReservation(&v77);
              v27 = v77;
            }
            else
            {
              v77 = 0LL;
            }
          }
          LODWORD(a5) = *(_DWORD *)(v16 + 32);
          v68 = BYTE2(a5);
          if ( (BYTE2(a5) & 8) != 0
            && (unsigned int)MiCanPfnOriginalPteBeLost(v16)
            && (((*(_QWORD *)(v16 + 16) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(v16 + 34) >> 4)) != 0 )
          {
            *(_QWORD *)(v16 + 16) &= ~4uLL;
          }
          BYTE2(a5) = v68 | 0x10;
          *(_DWORD *)(v16 + 32) = (_DWORD)a5;
        }
      }
      v31 = *(_QWORD *)(v16 + 16);
      if ( (v31 & 0x400) == 0 && (v31 & 0x4000000) != 0 )
      {
        v32 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&BugCheckParameter3);
        MiWriteValidPteNewProtection((ULONG_PTR)&BugCheckParameter3, v32 | 0x40);
      }
      if ( (BugCheckParameter3 & 0x800) == 0 )
        goto LABEL_33;
      if ( v87 && *(_QWORD *)a1 <= 0x7FFFFFFEFFFFuLL )
      {
        if ( (v66 = KeGetCurrentThread()->ApcState.Process, (BugCheckParameter3 & 0x8000000000000000uLL) == 0LL)
          && (v66[1].DirectoryTableBase & 0x1000000000LL) != 0
          || (Trees = v66[4].AutoBoostState.Trees) != 0LL && (_KAB_UM_PROCESS_TREE *)Trees[1].Tree.Root != &Trees[1] )
        {
          v22 = 0LL;
        }
      }
      if ( (*(_BYTE *)(v16 + 34) & 0x10) != 0 )
      {
        if ( !v22 && *(_QWORD *)a1 < 0xFFFF800000000000uLL )
          goto LABEL_33;
      }
      else
      {
        if ( !v22 || *(__int64 *)(v16 + 40) < 0 )
          goto LABEL_33;
        v27 = MiCaptureDirtyBitToPfn(v16);
      }
      BugCheckParameter3 |= 0x42uLL;
LABEL_33:
      v33 = *(_QWORD *)(v16 + 40);
      if ( v33 < 0 )
      {
        v34 = BugCheckParameter3;
        v35 = 0;
        v81 = BugCheckParameter3;
        v36 = (_QWORD *)BugCheckParameter2;
        if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v71 = MiSanitizeShadowPxe(v33, &v81);
          v36 = (_QWORD *)BugCheckParameter2;
          v35 = v71;
          v34 = v81;
        }
        if ( _bittest64(&MiFlags, 0x24u) )
        {
          if ( (v34 & 0x20) == 0 )
          {
            v33 = 0xFFFFF6C000000000uLL;
            if ( (unsigned __int64)v36 >= 0xFFFFF6C000000000uLL )
            {
              MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v36, v34);
              v36 = (_QWORD *)BugCheckParameter2;
            }
          }
        }
        *v36 = v34;
        if ( v35 )
          MiWritePteShadow(v36, v34);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( a3 )
      {
        v37 = 0;
        while ( _interlockedbittestandset64(a3 + 6, 0x3FuLL) )
        {
          do
          {
            if ( (++v37 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v33) )
            {
              HvlNotifyLongSpinWait(v37);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *((__int64 *)a3 + 3) < 0 );
        }
        if ( (*(_QWORD *)a3 & 0xFFFFFFFFFFELL) != 0 )
        {
          v55 = *(_QWORD *)a3 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL;
          v56 = *(_QWORD *)(8 * v55);
          v57 = 8 * v55;
          if ( v56 == 8 * v55 )
          {
            *(_QWORD *)a3 &= 0xFFFFF00000000001uLL;
          }
          else
          {
            v58 = *(_QWORD *)v56;
            if ( *(_QWORD *)(v56 + 8) != v57 || *(_QWORD *)(v58 + 8) != v56 )
              __fastfail(3u);
            *(_QWORD *)v57 = v58;
            *(_QWORD *)(v58 + 8) = v57;
            if ( *(_QWORD *)v57 == v57 )
            {
              *(_QWORD *)v56 = v56;
              v59 = (_QWORD *)v56;
            }
            else
            {
              *(_QWORD *)(*(_QWORD *)v57 + 8LL) = v56;
              v59 = *(_QWORD **)(v57 + 8);
              *v59 = v56;
            }
            *(_QWORD *)(v56 + 8) = v59;
            *(_QWORD *)a3 = (v56 >> 3) ^ (*(_QWORD *)a3 ^ (v56 >> 3)) & 0xFFFFF00000000001uLL;
          }
          MiRemoveLockedPageChargeAndDecRef(a3);
          *(_DWORD *)(v57 + 16) = 1;
        }
        else
        {
          LODWORD(a5) = *((_DWORD *)a3 + 8);
          BYTE2(a5) &= ~0x20u;
          *((_DWORD *)a3 + 8) = (_DWORD)a5;
          MiRemoveLockedPageChargeAndDecRef(a3);
        }
        _InterlockedAnd64((volatile signed __int64 *)a3 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      }
      if ( v27 )
        MiReleasePageFileInfo(v82, v27, 1LL);
      v38 = BugCheckParameter3;
      if ( ListEntry )
      {
        v74 = ListEntry;
        if ( SLODWORD(ListEntry[11].Next) > 1 )
          KeSetEvent((PRKEVENT)(&ListEntry[3].Next + 1), 0, 0);
        MiFreeInPageSupportBlock(v74);
      }
      if ( *(__int64 *)(v16 + 40) < 0 )
      {
        result = MiCompleteProtoPteFault(
                   a1,
                   -1431655765 * (unsigned int)((__int64)(v16 + 0x220000000000LL) >> 4),
                   v87,
                   0,
                   v79);
        if ( (int)result < 0 )
          return result;
        return 272LL;
      }
      if ( v17 )
      {
        if ( *(_BYTE *)(v79 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
        {
          v72 = BugCheckParameter3;
          if ( !_bittest64(&MiFlags, 0x24u) || (BugCheckParameter3 & 0x20) != 0 )
          {
            v73 = (_QWORD *)BugCheckParameter2;
          }
          else
          {
            v73 = (_QWORD *)BugCheckParameter2;
            if ( BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
            {
              MiCheckLinearProtectedPteAccessedBit(BugCheckParameter2, BugCheckParameter3);
              result = 272LL;
              *v73 = v72;
              return result;
            }
          }
          *v73 = BugCheckParameter3;
          return 272LL;
        }
        v17 = 0LL;
        if ( *(_BYTE *)(v79 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
        {
          v60 = 1;
        }
        else
        {
          v60 = 0;
          if ( *(_BYTE *)(v79 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
            v17 = v79 & 0xFFFFFFFFFFFFFFFEuLL;
        }
      }
      else
      {
        v60 = 0;
      }
      if ( (*(_BYTE *)(a1 + 69) & 0x10) != 0 )
      {
        v70 = *(_QWORD *)(a1 + 16);
        if ( (v70 & 1) == 0 || *(_BYTE *)(v70 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
          v38 = BugCheckParameter3 & 0xFFFFFFFFFFFFFFDFuLL;
      }
      v61 = *(_BYTE *)(a1 + 69);
      if ( (v61 & 9) != 8 || (v61 & 4) != 0 )
      {
LABEL_112:
        v65 = v60 | 0x10;
        if ( (*(_BYTE *)(a1 + 69) & 1) == 0 )
          v65 = v60;
        if ( !(unsigned int)MiAllocateWsle(v83, BugCheckParameter2, v16, 0, v38, v65, v17) )
        {
          MiLockAndDecrementShareCount(v16);
          if ( (v65 & 4) != 0 )
            --*(_WORD *)(a1 + 66);
          return 3221225495LL;
        }
        return 272LL;
      }
      v62 = *(unsigned __int16 *)(a1 + 66);
      v63 = BugCheckParameter2;
      if ( (_WORD)v62 )
      {
        if ( v62 + *(unsigned __int16 *)(a1 + 64) != (((unsigned int)BugCheckParameter2 >> 3) & 0x1FF) )
          goto LABEL_108;
        if ( *(__int64 *)(v16 + 40) < 0 )
        {
          if ( (*(_BYTE *)(a1 + 69) & 2) == 0 )
            goto LABEL_109;
          goto LABEL_108;
        }
        if ( (*(_BYTE *)(a1 + 69) & 2) == 0 )
        {
LABEL_108:
          MiEmptyDeferredWorkingSetEntries(a1 + 56, BugCheckParameter2, 511LL);
          v63 = BugCheckParameter2;
        }
      }
LABEL_109:
      v64 = *(_WORD *)(a1 + 66);
      if ( v64 )
      {
        *(_WORD *)(a1 + 66) = v64 + 1;
      }
      else
      {
        *(_WORD *)(a1 + 66) = 1;
        *(_WORD *)(a1 + 64) = (v63 >> 3) & 0x1FF;
        if ( *(__int64 *)(v16 + 40) >= 0 )
          *(_BYTE *)(a1 + 69) |= 2u;
        else
          *(_BYTE *)(a1 + 69) &= ~2u;
      }
      v60 |= 4u;
      goto LABEL_112;
    }
    v75 = BugCheckParameter2;
    v16 = MiHandleSpecialPurposeMemoryCachedFault(a1, *(_QWORD *)a1, BugCheckParameter2, v16);
    if ( v16 )
    {
      v13 = MI_READ_PTE_LOCK_FREE(v75);
      v6 = 0LL;
      goto LABEL_13;
    }
    if ( a3 )
    {
      LOBYTE(v76) = 17;
      MiUnlockProtoPoolPage(a3, v76);
    }
    return 3221226548LL;
  }
  if ( (*(_DWORD *)(v16 + 32) & 0x40000000) != 0 )
  {
    v43 = -1073740023;
    goto LABEL_58;
  }
  v43 = -1073741801;
LABEL_165:
  *(_DWORD *)(a1 + 80) |= 4u;
LABEL_58:
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    LOBYTE(v15) = 17;
    MiUnlockProtoPoolPage(a3, v15);
  }
  return (unsigned int)v43;
}
