/*
 * XREFs of MiResolveTransitionFault @ 0x140247040
 * Callers:
 *     MiDispatchFault @ 0x140333520 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140334760 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140204044 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14020C4A0 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiHandleTransitionFault @ 0x140247EF0 (MiHandleTransitionFault.c)
 *     MiMakeTransitionPteValid @ 0x140248450 (MiMakeTransitionPteValid.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiUpdateProtectionMask @ 0x140248CFC (MiUpdateProtectionMask.c)
 *     MiAllocateWsle @ 0x14024C6D0 (MiAllocateWsle.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCanPfnOriginalPteBeLost @ 0x1402EE318 (MiCanPfnOriginalPteBeLost.c)
 *     MiRelinkStandbyPage @ 0x140300158 (MiRelinkStandbyPage.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiIsDecayPfn @ 0x1403028E0 (MiIsDecayPfn.c)
 *     MiClearPageFileReservation @ 0x14030714C (MiClearPageFileReservation.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MiHandleCollidedFault @ 0x140426D4C (MiHandleCollidedFault.c)
 *     MiFreeInPageSupportBlock @ 0x140427430 (MiFreeInPageSupportBlock.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14043BAD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiCheckWriteInProgressFault @ 0x14047DD38 (MiCheckWriteInProgressFault.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  _QWORD *v27; // r9
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int8 v31; // cl
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned __int64 v37; // rdx
  ULONG_PTR v38; // rbx
  int v39; // r12d
  unsigned int v40; // r12d
  ULONG_PTR v41; // rbx
  unsigned __int64 v42; // r10
  __int64 v43; // r8
  unsigned int v44; // r10d
  __int64 v45; // r8
  int v46; // edi
  _KPROCESS *Process; // rcx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // r9
  ULONG_PTR v54; // rbx
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rcx
  __int64 v57; // rdx
  unsigned int v58; // r12d
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rcx
  __int64 v63; // r12
  __int64 v64; // rax
  _QWORD *v65; // rax
  int v66; // r14d
  char v67; // cl
  int v68; // eax
  unsigned int v69; // edx
  __int16 v70; // ax
  int v71; // edi
  __int64 v72; // r8
  __int64 v73; // r9
  _KPROCESS *v74; // rcx
  _KAB_UM_PROCESS_TREE *Trees; // rax
  char v76; // r11
  __int64 v77; // rax
  __int64 v78; // rax
  int v79; // eax
  ULONG_PTR v80; // rbx
  _QWORD *v81; // r14
  _SLIST_ENTRY *v82; // rdi
  ULONG_PTR v83; // rbx
  __int64 v84; // rdx
  __int64 v85; // [rsp+40h] [rbp-78h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+48h] [rbp-70h] BYREF
  __int64 v87; // [rsp+50h] [rbp-68h]
  ULONG_PTR v88; // [rsp+58h] [rbp-60h] BYREF
  ULONG_PTR v89; // [rsp+60h] [rbp-58h] BYREF
  __int64 v90; // [rsp+68h] [rbp-50h]
  int v91[18]; // [rsp+70h] [rbp-48h]
  unsigned int v92; // [rsp+C0h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+C8h] [rbp+10h]
  ULONG_PTR BugCheckParameter3; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v95; // [rsp+D8h] [rbp+20h]

  v95 = a4;
  BugCheckParameter2 = a2;
  v5 = *(_QWORD *)(a1 + 56);
  v6 = 0LL;
  v7 = (__int64)a5;
  v9 = *(_QWORD *)(a1 + 16);
  v92 = 0;
  *(_QWORD *)v91 = v5;
  v12 = 511LL;
  *a5 = 0LL;
  v87 = v9;
  ListEntry = 0LL;
  if ( !a3 )
  {
    while ( 1 )
    {
      v51 = MI_READ_PTE_LOCK_FREE(a2);
      v54 = v51;
      if ( (v51 & 0x800) == 0 )
        return 3221226548LL;
      if ( (v51 & 1) == 0 && (!v51 || !qword_140E2DCC0 || (qword_140E2DCC0 & v51) != 0) )
      {
        v55 = v51;
        if ( qword_140E2DCC0 )
        {
          if ( (v51 & 0x10) != 0 )
            v55 = v51 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v55 = v51 & ~qword_140E2DCC0;
        }
        v56 = (v55 >> 12) & 0xFFFFFFFFFFLL;
        v57 = 6 * v56;
        v16 = 48 * v56 - 0x220000000000LL;
        if ( v56 <= qword_140E2DD20 && (*(_QWORD *)(48 * v56 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
        {
          v58 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v58 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v56, v57, v52, v53) )
              {
                HvlNotifyLongSpinWait(v58);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v16 + 24) < 0 );
          }
          v59 = MI_READ_PTE_LOCK_FREE(a2);
          v7 = (__int64)a5;
          if ( v59 == v54 )
          {
            if ( (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0
              || (v16 = MiLockSpecialPurposeMemoryCachedPage(v16, 2)) != 0 )
            {
              if ( (*(_QWORD *)(v16 + 8) | 0x8000000000000000uLL) != a2
                && (*(_QWORD *)(v16 + 40) & 0x10000000000LL) == 0 )
              {
                KeBugCheckEx(0x1Au, 0x411uLL, a2, v54, *(_QWORD *)(v16 + 8));
              }
              if ( v16 )
              {
                v60 = MI_READ_PTE_LOCK_FREE(a2);
                v9 = v87;
                v13 = v60;
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
        v49 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
        if ( (v49 & 0x20) != 0 )
          v13 |= 0x20uLL;
        v50 = v13;
        v13 |= 0x42uLL;
        if ( (v49 & 0x42) == 0 )
          v13 = v50;
      }
    }
  }
  v14 = v13;
  if ( qword_140E2DCC0 && (v13 & 0x10) == 0 )
    v14 = v13 & ~qword_140E2DCC0;
  v15 = 0xFFFFDE0000000000uLL;
  v16 = 48 * ((v14 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
LABEL_10:
  if ( (*(_BYTE *)(v16 + 35) & 0x10) == 0 )
  {
    v17 = v9 & 1;
    if ( (v9 & 1) != 0 )
    {
      v42 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
      {
        v43 = *(unsigned int *)(v16 + 32);
        v44 = *(_DWORD *)(v42 + 80) & 7;
        if ( (*(_DWORD *)(v16 + 32) & 0x8000000) != 0
          && (v16 < 0xFFFFDE0000000000uLL
           || v16 >= 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL
           || (unsigned int)MiIsDecayPfn(
                              0xAAAAAAAAAAAAAAABuLL * ((__int64)(v16 + 0x220000000000LL) >> 4),
                              0xFFFFDE0000000000uLL,
                              v43,
                              v12)
           || (BYTE2(v43) & 7) != 6 && (unsigned int)MiGetPfnSlabType(v16) == 9) )
        {
          v45 = 5LL;
        }
        else
        {
          v45 = BYTE3(v43) & 7;
        }
        if ( v44 != (_DWORD)v45 && v44 >= (unsigned int)v45 )
        {
          if ( (*(_BYTE *)(v16 + 34) & 7) == 2 )
          {
            if ( (_DWORD)v45
              || (*(_DWORD *)(v16 + 16) & 0x400LL) != 0
              || (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0
              || (v77 = *(_QWORD *)(v16 + 16), v15 = (unsigned __int8)v77, (v77 & 4) == 0)
              || (v45 = (__int64)qword_140E300C8,
                  v12 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL)),
                  (unsigned __int16)v77 >> 12 != *(_DWORD *)(v12 + 1204)) )
            {
              MiRelinkStandbyPage(v16, v44, v45, v12);
              LODWORD(v6) = 0;
            }
          }
          else
          {
            LODWORD(a5) = *(_DWORD *)(v16 + 32);
            BYTE3(a5) = v44 | BYTE3(a5) & 0xF8;
            *(_DWORD *)(v16 + 32) = (_DWORD)a5;
          }
        }
        v46 = v6;
        goto LABEL_58;
      }
    }
    if ( (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0 )
    {
LABEL_13:
      __incgsdword(0x2E98u);
      v15 = *(unsigned __int8 *)(v16 + 34);
      if ( (v15 & 8) != 0 )
      {
        v46 = MiCheckWriteInProgressFault(v16, v15, v9, v12);
        if ( v46 < 0 )
          goto LABEL_165;
      }
      v18 = (_QWORD *)BugCheckParameter2;
      if ( (v15 & 0x20) != 0 )
      {
        result = MiHandleCollidedFault(a1, BugCheckParameter2, (_DWORD)a3, v16, v7, (__int64)&v92);
        if ( v92 <= 1 || (int)result < 0 )
          return result;
      }
      else
      {
        v88 = v6;
        result = MiHandleTransitionFault(
                   a1,
                   BugCheckParameter2,
                   (void *)a3,
                   (void *)v16,
                   (__int64)&v88,
                   v13,
                   (__int64)&ListEntry);
        if ( (int)result < 0 )
          return result;
        if ( v88 )
          v16 = v88;
      }
      v20 = *(_QWORD *)(a1 + 16);
      v21 = v13;
      v22 = v95;
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
      v28 = CLFS_LSN_NULL_EXT;
      BugCheckParameter3 = TransitionPteValid;
      v29 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL));
      v30 = *(_QWORD *)(v16 + 16);
      v90 = v29;
      if ( (v30 & 0x400) == 0 && (v30 & 4) != 0 && (unsigned __int16)v30 >> 12 == *(_DWORD *)(v29 + 1204) )
      {
        v31 = *(_BYTE *)(v16 + 34);
        v28 = 0LL;
        if ( (v31 & 0x10) == 0 )
        {
          if ( (!_bittest64((const signed __int64 *)(v16 + 16), 0xAu) & (unsigned __int8)~(v31 >> 3)) != 0 )
          {
            v85 = *(_QWORD *)(v16 + 16);
            if ( (v85 & 4) != 0 )
            {
              *(_QWORD *)(v16 + 16) &= ~4uLL;
              MiClearPageFileReservation(&v85);
              v28 = v85;
            }
            else
            {
              v85 = 0LL;
            }
          }
          LODWORD(a5) = *(_DWORD *)(v16 + 32);
          v76 = BYTE2(a5);
          if ( (BYTE2(a5) & 8) != 0
            && (unsigned int)MiCanPfnOriginalPteBeLost(v16)
            && (((*(_QWORD *)(v16 + 16) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(v16 + 34) >> 4)) != 0 )
          {
            *(_QWORD *)(v16 + 16) &= ~4uLL;
          }
          BYTE2(a5) = v76 | 0x10;
          *(_DWORD *)(v16 + 32) = (_DWORD)a5;
        }
      }
      v32 = *(_QWORD *)(v16 + 16);
      if ( (v32 & 0x400) == 0 && (v32 & 0x4000000) != 0 )
      {
        v33 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&BugCheckParameter3);
        MiWriteValidPteNewProtection((ULONG_PTR)&BugCheckParameter3, v33 | 0x40, v34);
      }
      if ( (BugCheckParameter3 & 0x800) == 0 )
        goto LABEL_33;
      if ( v95 && *(_QWORD *)a1 <= 0x7FFFFFFEFFFFuLL )
      {
        if ( (v74 = KeGetCurrentThread()->ApcState.Process, (BugCheckParameter3 & 0x8000000000000000uLL) == 0LL)
          && (v74[1].DirectoryTableBase & 0x1000000000LL) != 0
          || (Trees = v74[4].AutoBoostState.Trees) != 0LL && (_KAB_UM_PROCESS_TREE *)Trees[1].Tree.Root != &Trees[1] )
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
        v28 = MiCaptureDirtyBitToPfn(v16);
      }
      BugCheckParameter3 |= 0x42uLL;
LABEL_33:
      v35 = *(_QWORD *)(v16 + 40);
      v36 = 0x4000000000LL;
      v37 = 0xFFFFF68000000000uLL;
      if ( v35 < 0 )
      {
        v38 = BugCheckParameter3;
        v39 = 0;
        v89 = BugCheckParameter3;
        v27 = (_QWORD *)BugCheckParameter2;
        if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v79 = MiSanitizeShadowPxe(v35, (__int64)&v89, 0x4000000000LL);
          v27 = (_QWORD *)BugCheckParameter2;
          v39 = v79;
          v38 = v89;
          v36 = 0x4000000000LL;
          v37 = 0xFFFFF68000000000uLL;
        }
        if ( _bittest64(&MiFlags, 0x24u) )
        {
          if ( (v38 & 0x20) == 0 )
          {
            v35 = 0xFFFFF6C000000000uLL;
            if ( (unsigned __int64)v27 >= 0xFFFFF6C000000000uLL )
            {
              MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v27, v38, 128LL);
              v27 = (_QWORD *)BugCheckParameter2;
            }
          }
        }
        *v27 = v38;
        if ( v39 )
          MiWritePteShadow((__int64)v27, v38, v36, (__int64)v27);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( a3 )
      {
        v40 = 0;
        while ( _interlockedbittestandset64(a3 + 6, 0x3FuLL) )
        {
          do
          {
            if ( (++v40 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v35, v37, v36, v27) )
            {
              HvlNotifyLongSpinWait(v40);
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
          v61 = *(_QWORD *)a3 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL;
          v62 = *(_QWORD *)(8 * v61);
          v63 = 8 * v61;
          if ( v62 == 8 * v61 )
          {
            *(_QWORD *)a3 &= 0xFFFFF00000000001uLL;
          }
          else
          {
            v64 = *(_QWORD *)v62;
            if ( *(_QWORD *)(v62 + 8) != v63 || *(_QWORD *)(v64 + 8) != v62 )
              __fastfail(3u);
            *(_QWORD *)v63 = v64;
            *(_QWORD *)(v64 + 8) = v63;
            if ( *(_QWORD *)v63 == v63 )
            {
              *(_QWORD *)v62 = v62;
              v65 = (_QWORD *)v62;
            }
            else
            {
              *(_QWORD *)(*(_QWORD *)v63 + 8LL) = v62;
              v65 = *(_QWORD **)(v63 + 8);
              *v65 = v62;
            }
            *(_QWORD *)(v62 + 8) = v65;
            *(_QWORD *)a3 = (v62 >> 3) ^ (*(_QWORD *)a3 ^ (v62 >> 3)) & 0xFFFFF00000000001uLL;
          }
          MiRemoveLockedPageChargeAndDecRef(a3);
          *(_DWORD *)(v63 + 16) = 1;
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
      if ( v28 )
        MiReleasePageFileInfo(v90, v28, 1LL);
      v41 = BugCheckParameter3;
      if ( ListEntry )
      {
        v82 = ListEntry;
        if ( SLODWORD(ListEntry[11].Next) > 1 )
          KeSetEvent((PRKEVENT)(&ListEntry[3].Next + 1), 0, 0);
        MiFreeInPageSupportBlock(v82);
      }
      if ( *(__int64 *)(v16 + 40) < 0 )
      {
        result = MiCompleteProtoPteFault(
                   a1,
                   -1431655765 * (unsigned int)((__int64)(v16 + 0x220000000000LL) >> 4),
                   v95,
                   0,
                   v87);
        if ( (int)result < 0 )
          return result;
        return 272LL;
      }
      if ( v17 )
      {
        if ( *(_BYTE *)(v87 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
        {
          v80 = BugCheckParameter3;
          if ( !_bittest64(&MiFlags, 0x24u) || (BugCheckParameter3 & 0x20) != 0 )
          {
            v81 = (_QWORD *)BugCheckParameter2;
          }
          else
          {
            v81 = (_QWORD *)BugCheckParameter2;
            if ( BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
            {
              MiCheckLinearProtectedPteAccessedBit(BugCheckParameter2, BugCheckParameter3, 128LL);
              result = 272LL;
              *v81 = v80;
              return result;
            }
          }
          *v81 = BugCheckParameter3;
          return 272LL;
        }
        v17 = 0LL;
        if ( *(_BYTE *)(v87 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
        {
          v66 = 1;
        }
        else
        {
          v66 = 0;
          if ( *(_BYTE *)(v87 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
            v17 = v87 & 0xFFFFFFFFFFFFFFFEuLL;
        }
      }
      else
      {
        v66 = 0;
      }
      if ( (*(_BYTE *)(a1 + 69) & 0x10) != 0 )
      {
        v78 = *(_QWORD *)(a1 + 16);
        if ( (v78 & 1) == 0 || *(_BYTE *)(v78 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
          v41 = BugCheckParameter3 & 0xFFFFFFFFFFFFFFDFuLL;
      }
      v67 = *(_BYTE *)(a1 + 69);
      if ( (v67 & 9) != 8 || (v67 & 4) != 0 )
      {
LABEL_112:
        v71 = v66 | 0x10;
        if ( (*(_BYTE *)(a1 + 69) & 1) == 0 )
          v71 = v66;
        if ( !(unsigned int)MiAllocateWsle(v91[0], BugCheckParameter2, v16, 0, v41, v71, v17) )
        {
          MiLockAndDecrementShareCount(v16, 2LL, v72, v73);
          if ( (v71 & 4) != 0 )
            --*(_WORD *)(a1 + 66);
          return 3221225495LL;
        }
        return 272LL;
      }
      v68 = *(unsigned __int16 *)(a1 + 66);
      v69 = BugCheckParameter2;
      if ( (_WORD)v68 )
      {
        if ( v68 + *(unsigned __int16 *)(a1 + 64) != (((unsigned int)BugCheckParameter2 >> 3) & 0x1FF) )
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
          MiEmptyDeferredWorkingSetEntries((__int64 *)(a1 + 56));
          v69 = BugCheckParameter2;
        }
      }
LABEL_109:
      v70 = *(_WORD *)(a1 + 66);
      if ( v70 )
      {
        *(_WORD *)(a1 + 66) = v70 + 1;
      }
      else
      {
        *(_WORD *)(a1 + 66) = 1;
        *(_WORD *)(a1 + 64) = (v69 >> 3) & 0x1FF;
        if ( *(__int64 *)(v16 + 40) >= 0 )
          *(_BYTE *)(a1 + 69) |= 2u;
        else
          *(_BYTE *)(a1 + 69) &= ~2u;
      }
      v66 |= 4u;
      goto LABEL_112;
    }
    v83 = BugCheckParameter2;
    v16 = MiHandleSpecialPurposeMemoryCachedFault(a1, *(_QWORD *)a1, BugCheckParameter2, v16);
    if ( v16 )
    {
      v13 = MI_READ_PTE_LOCK_FREE(v83);
      v6 = 0LL;
      goto LABEL_13;
    }
    if ( a3 )
    {
      LOBYTE(v84) = 17;
      MiUnlockProtoPoolPage(a3, v84);
    }
    return 3221226548LL;
  }
  if ( (*(_DWORD *)(v16 + 32) & 0x40000000) != 0 )
  {
    v46 = -1073740023;
    goto LABEL_58;
  }
  v46 = -1073741801;
LABEL_165:
  *(_DWORD *)(a1 + 80) |= 4u;
LABEL_58:
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    LOBYTE(v15) = 17;
    MiUnlockProtoPoolPage(a3, v15);
  }
  return (unsigned int)v46;
}
