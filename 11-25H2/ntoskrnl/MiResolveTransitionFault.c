/*
 * XREFs of MiResolveTransitionFault @ 0x140233060
 * Callers:
 *     MiDispatchFault @ 0x14023F750 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140240060 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiRelinkStandbyPage @ 0x14021A0E8 (MiRelinkStandbyPage.c)
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x140233E80 (MiHandleTransitionFault.c)
 *     MiInvalidPteConforms @ 0x1402343E0 (MiInvalidPteConforms.c)
 *     MiMakeTransitionPteValid @ 0x140234420 (MiMakeTransitionPteValid.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiUpdateProtectionMask @ 0x140234CAC (MiUpdateProtectionMask.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiFreeInPageSupportBlock @ 0x14023B4B0 (MiFreeInPageSupportBlock.c)
 *     MiIsDecayPfn @ 0x140241130 (MiIsDecayPfn.c)
 *     MiAllocateWsle @ 0x14024B590 (MiAllocateWsle.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402BB160 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiClearPageFileReservation @ 0x1402CC084 (MiClearPageFileReservation.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiHandleCollidedFault @ 0x14033D7C8 (MiHandleCollidedFault.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14033F5DC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140388D44 (MiCanPfnOriginalPteBeLost.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     MiCheckWriteInProgressFault @ 0x140481D54 (MiCheckWriteInProgressFault.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1404C22F8 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiResolveTransitionFault(
        ULONG_PTR *a1,
        ULONG_PTR a2,
        volatile signed __int32 *a3,
        __int64 a4,
        _QWORD *a5)
{
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // r11
  __int64 v7; // r9
  __int64 v9; // r8
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r15
  __int64 result; // rax
  ULONG_PTR v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned int updated; // eax
  __int64 v22; // r8
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int8 v26; // cl
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  ULONG_PTR v30; // rbx
  int v31; // r13d
  _QWORD *v32; // r9
  unsigned int v33; // r13d
  ULONG_PTR v34; // rbx
  __int64 v35; // r8
  unsigned int v36; // r10d
  unsigned int v37; // r8d
  int v38; // edi
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  __int64 v41; // r13
  __int64 v42; // rax
  _QWORD *v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  ULONG_PTR v46; // rbx
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rcx
  unsigned int v49; // r15d
  __int64 v50; // rax
  int v51; // r14d
  char v52; // cl
  int v53; // eax
  unsigned int v54; // edx
  __int16 v55; // ax
  int v56; // edi
  _KPROCESS *v57; // rcx
  _KAB_UM_PROCESS_TREE *Trees; // rax
  char v59; // r11
  _KPROCESS *Process; // rcx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v62; // rax
  unsigned __int64 v63; // rcx
  __int64 v64; // rax
  ULONG_PTR v65; // rax
  int v66; // eax
  ULONG_PTR v67; // rbx
  _QWORD *v68; // r14
  _SLIST_ENTRY *v69; // rdi
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // [rsp+40h] [rbp-41h]
  __int64 v73; // [rsp+48h] [rbp-39h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+50h] [rbp-31h] BYREF
  __int64 v75; // [rsp+58h] [rbp-29h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-21h] BYREF
  ULONG_PTR v77; // [rsp+68h] [rbp-19h] BYREF
  __int64 v78; // [rsp+70h] [rbp-11h]
  ULONG_PTR v79; // [rsp+78h] [rbp-9h]
  unsigned int v80; // [rsp+E0h] [rbp+5Fh] BYREF
  ULONG_PTR v81; // [rsp+E8h] [rbp+67h]
  ULONG_PTR BugCheckParameter3; // [rsp+F0h] [rbp+6Fh] BYREF
  __int64 v83; // [rsp+F8h] [rbp+77h]

  v83 = a4;
  v81 = a2;
  v5 = a1[7];
  v6 = 0LL;
  v7 = a1[2];
  v9 = (__int64)a5;
  v80 = 0;
  v79 = v5;
  v75 = v7;
  *a5 = 0LL;
  ListEntry = 0LL;
  if ( !a3 )
  {
    while ( 1 )
    {
      v45 = MI_READ_PTE_LOCK_FREE(a2);
      v46 = v45;
      if ( (v45 & 0x800) == 0 )
        return 3221226548LL;
      if ( (unsigned int)MiInvalidPteConforms(v45) )
      {
        if ( qword_140E2D940 )
        {
          if ( (v46 & 0x10) != 0 )
            v47 &= ~0x10uLL;
          else
            v47 = v46 & ~qword_140E2D940;
        }
        v48 = (v47 >> 12) & 0xFFFFFFFFFFLL;
        v15 = 48 * v48 - 0x220000000000LL;
        if ( v48 <= qword_140E2D9A0 && (*(_QWORD *)(48 * v48 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
        {
          v49 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v49 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v48) )
              {
                HvlNotifyLongSpinWait(v49);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v15 + 24) < 0 );
          }
          if ( MI_READ_PTE_LOCK_FREE(a2) == v46 )
          {
            if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0
              || (v15 = MiLockSpecialPurposeMemoryCachedPage(v15, 2LL)) != 0 )
            {
              if ( (*(_QWORD *)(v15 + 8) | 0x8000000000000000uLL) != a2
                && (*(_QWORD *)(v15 + 40) & 0x10000000000LL) == 0 )
              {
                KeBugCheckEx(0x1Au, 0x411uLL, a2, v46, *(_QWORD *)(v15 + 8));
              }
              if ( v15 )
              {
                v50 = MI_READ_PTE_LOCK_FREE(a2);
                v9 = (__int64)a5;
                v12 = v50;
                v7 = v75;
                v6 = 0LL;
                v14 = 0xFFFFDE0000000000uLL;
                goto LABEL_7;
              }
            }
            return 3221226548LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
    }
  }
  v12 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (v12 & 1) != 0
    && ((v12 & 0x42) == 0 || (v12 & 0x20) == 0)
    && (MiFlags & 0x600000) != 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process->AddressPolicy != 1 )
    {
      KernelWaitTime = Process[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v62 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
        if ( (v62 & 0x20) != 0 )
          v12 |= 0x20uLL;
        v63 = v12;
        v12 |= 0x42uLL;
        if ( (v62 & 0x42) == 0 )
          v12 = v63;
      }
    }
  }
  v13 = v12;
  if ( qword_140E2D940 && (v12 & 0x10) == 0 )
    v13 = v12 & ~qword_140E2D940;
  v14 = 0xFFFFDE0000000000uLL;
  v15 = 48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
LABEL_7:
  if ( (*(_BYTE *)(v15 + 35) & 0x10) == 0 )
  {
    v16 = v7 & 1;
    if ( (v7 & 1) != 0 && *(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      v35 = *(unsigned int *)(v15 + 32);
      v36 = *(_DWORD *)((v7 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7;
      if ( (*(_DWORD *)(v15 + 32) & 0x8000000) != 0
        && (v15 < 0xFFFFDE0000000000uLL
         || v15 >= 48 * qword_140E2D9A0 - 0x21FFFFFFFFD0LL
         || (unsigned int)MiIsDecayPfn(
                            0xAAAAAAAAAAAAAAABuLL * ((__int64)(v15 + 0x220000000000LL) >> 4),
                            0xFFFFDE0000000000uLL,
                            v35)
         || (BYTE2(v35) & 7) != 6 && (unsigned int)MiGetPfnSlabType(v15) == 9) )
      {
        v37 = 5;
      }
      else
      {
        v37 = BYTE3(v35) & 7;
      }
      if ( v36 != v37 && v36 >= v37 )
      {
        if ( (*(_BYTE *)(v15 + 34) & 7) == 2 )
        {
          if ( v37
            || (*(_DWORD *)(v15 + 16) & 0x400LL) != 0
            || (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0
            || (v64 = *(_QWORD *)(v15 + 16), v14 = (unsigned __int8)v64, (v64 & 4) == 0)
            || (unsigned __int16)v64 >> 12 != *(_DWORD *)(*((_QWORD *)qword_140E2FD48
                                                          + ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL))
                                                        + 1204LL) )
          {
            MiRelinkStandbyPage(v15, v36);
            LODWORD(v6) = 0;
          }
        }
        else
        {
          LODWORD(a5) = *(_DWORD *)(v15 + 32);
          BYTE3(a5) = v36 | BYTE3(a5) & 0xF8;
          *(_DWORD *)(v15 + 32) = (_DWORD)a5;
        }
      }
      v38 = v6;
      goto LABEL_54;
    }
    if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0 )
    {
LABEL_10:
      __incgsdword(0x2E98u);
      v14 = *(unsigned __int8 *)(v15 + 34);
      if ( (v14 & 8) != 0 )
      {
        v38 = MiCheckWriteInProgressFault(v15, v14, v9);
        if ( v38 < 0 )
          goto LABEL_162;
      }
      if ( (v14 & 0x20) != 0 )
      {
        result = MiHandleCollidedFault((_DWORD)a1, a2, (_DWORD)a3, v15, v9, (__int64)&v80);
        if ( v80 <= 1 || (int)result < 0 )
          return result;
      }
      else
      {
        BugCheckParameter2 = v6;
        result = MiHandleTransitionFault(
                   (_DWORD)a1,
                   a2,
                   (void *)a3,
                   (void *)v15,
                   (__int64)&BugCheckParameter2,
                   v12,
                   (__int64)&ListEntry);
        if ( (int)result < 0 )
          return result;
        if ( BugCheckParameter2 )
          v15 = BugCheckParameter2;
      }
      v18 = a1[2];
      v72 = v83;
      v19 = v12;
      if ( (v18 & 1) != 0 && *(_BYTE *)(v18 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      {
        *(_QWORD *)a2 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        v19 = v12 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
      }
      if ( ((v19 >> 5) & 0x1F) == 0x18 )
      {
        v20 = MI_READ_PTE_LOCK_FREE(a2);
        updated = MiUpdateProtectionMask(1LL, (unsigned __int8)BYTE2(*(_DWORD *)(v15 + 32)) >> 6, v20);
        *(_QWORD *)a2 = (32LL * updated) ^ (v22 ^ (32LL * updated)) & 0xFFFFFFFFFFFFFC1FuLL;
      }
      v23 = CLFS_LSN_NULL_EXT;
      BugCheckParameter3 = MiMakeTransitionPteValid(a2);
      v24 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL));
      v25 = *(_QWORD *)(v15 + 16);
      v78 = v24;
      if ( (v25 & 0x400) == 0 && (v25 & 4) != 0 && (unsigned __int16)v25 >> 12 == *(_DWORD *)(v24 + 1204) )
      {
        v26 = *(_BYTE *)(v15 + 34);
        v23 = 0LL;
        if ( (v26 & 0x10) == 0 )
        {
          if ( (!_bittest64((const signed __int64 *)(v15 + 16), 0xAu) & (unsigned __int8)~(v26 >> 3)) != 0 )
          {
            v73 = *(_QWORD *)(v15 + 16);
            if ( (v73 & 4) != 0 )
            {
              *(_QWORD *)(v15 + 16) &= ~4uLL;
              MiClearPageFileReservation(&v73);
              v23 = v73;
            }
            else
            {
              v73 = 0LL;
            }
          }
          LODWORD(a5) = *(_DWORD *)(v15 + 32);
          v59 = BYTE2(a5);
          if ( (BYTE2(a5) & 8) != 0
            && (unsigned int)MiCanPfnOriginalPteBeLost(v15)
            && (((*(_QWORD *)(v15 + 16) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(v15 + 34) >> 4)) != 0 )
          {
            *(_QWORD *)(v15 + 16) &= ~4uLL;
          }
          BYTE2(a5) = v59 | 0x10;
          *(_DWORD *)(v15 + 32) = (_DWORD)a5;
        }
      }
      v27 = *(_QWORD *)(v15 + 16);
      if ( (v27 & 0x400) == 0 && (v27 & 0x4000000) != 0 )
      {
        MI_READ_PTE_LOCK_FREE((unsigned __int64)&BugCheckParameter3);
        MiWriteValidPteNewProtection((ULONG_PTR)&BugCheckParameter3);
      }
      if ( (BugCheckParameter3 & 0x800) == 0 )
        goto LABEL_31;
      if ( v83
        && *a1 <= 0x7FFFFFFEFFFFLL
        && ((v57 = KeGetCurrentThread()->ApcState.Process, (BugCheckParameter3 & 0x8000000000000000uLL) == 0LL)
         && (v57[1].DirectoryTableBase & 0x1000000000LL) != 0
         || (Trees = v57[4].AutoBoostState.Trees) != 0LL && (_KAB_UM_PROCESS_TREE *)Trees[1].Tree.Root != &Trees[1]) )
      {
        v28 = 0LL;
      }
      else
      {
        v28 = v72;
      }
      if ( (*(_BYTE *)(v15 + 34) & 0x10) != 0 )
      {
        if ( !v28 && *a1 < 0xFFFF800000000000uLL )
          goto LABEL_31;
      }
      else
      {
        if ( !v28 || *(__int64 *)(v15 + 40) < 0 )
          goto LABEL_31;
        v23 = MiCaptureDirtyBitToPfn(v15);
      }
      BugCheckParameter3 |= 0x42uLL;
LABEL_31:
      v29 = *(_QWORD *)(v15 + 40);
      if ( v29 < 0 )
      {
        v30 = BugCheckParameter3;
        v31 = 0;
        v77 = BugCheckParameter3;
        v32 = (_QWORD *)v81;
        if ( v81 >= 0xFFFFF6FB7DBED000uLL && v81 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v66 = MiSanitizeShadowPxe(v29, &v77);
          v32 = (_QWORD *)v81;
          v31 = v66;
          v30 = v77;
        }
        if ( _bittest64(&MiFlags, 0x24u) )
        {
          if ( (v30 & 0x20) == 0 )
          {
            v29 = 0xFFFFF6C000000000uLL;
            if ( (unsigned __int64)v32 >= 0xFFFFF6C000000000uLL )
            {
              MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v32, v30);
              v32 = (_QWORD *)v81;
            }
          }
        }
        *v32 = v30;
        if ( v31 )
          MiWritePteShadow(v32, v30);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( a3 )
      {
        v33 = 0;
        while ( _interlockedbittestandset64(a3 + 6, 0x3FuLL) )
        {
          do
          {
            if ( (++v33 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v29) )
            {
              HvlNotifyLongSpinWait(v33);
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
          v39 = *(_QWORD *)a3 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL;
          v40 = *(_QWORD *)(8 * v39);
          v41 = 8 * v39;
          if ( v40 == 8 * v39 )
          {
            v44 = *(_QWORD *)a3 & 0xFFFFF00000000001uLL;
          }
          else
          {
            v42 = *(_QWORD *)v40;
            if ( *(_QWORD *)(v40 + 8) != v41 || *(_QWORD *)(v42 + 8) != v40 )
              __fastfail(3u);
            *(_QWORD *)v41 = v42;
            *(_QWORD *)(v42 + 8) = v41;
            if ( *(_QWORD *)v41 == v41 )
            {
              *(_QWORD *)v40 = v40;
              v43 = (_QWORD *)v40;
            }
            else
            {
              *(_QWORD *)(*(_QWORD *)v41 + 8LL) = v40;
              v43 = *(_QWORD **)(v41 + 8);
              *v43 = v40;
            }
            *(_QWORD *)(v40 + 8) = v43;
            v44 = (v40 >> 3) ^ ((v40 >> 3) ^ *(_QWORD *)a3) & 0xFFFFF00000000001uLL;
          }
          *(_QWORD *)a3 = v44;
          MiRemoveLockedPageChargeAndDecRef(a3);
          *(_DWORD *)(v41 + 16) = 1;
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
      if ( v23 )
        MiReleasePageFileInfo(v78, v23, 1LL);
      v34 = BugCheckParameter3;
      if ( ListEntry )
      {
        v69 = ListEntry;
        if ( SLODWORD(ListEntry[11].Next) > 1 )
          KeSetEvent((PRKEVENT)(&ListEntry[3].Next + 1), 0, 0);
        MiFreeInPageSupportBlock(v69);
      }
      if ( *(__int64 *)(v15 + 40) < 0 )
      {
        result = MiCompleteProtoPteFault(
                   a1,
                   0xAAAAAAAAAAAAAAABuLL * ((__int64)(v15 + 0x220000000000LL) >> 4),
                   v83,
                   0,
                   v75);
        if ( (int)result < 0 )
          return result;
        return 272LL;
      }
      if ( v16 )
      {
        if ( *(_BYTE *)(v75 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
        {
          v67 = BugCheckParameter3;
          if ( !_bittest64(&MiFlags, 0x24u) || (BugCheckParameter3 & 0x20) != 0 )
          {
            v68 = (_QWORD *)v81;
          }
          else
          {
            v68 = (_QWORD *)v81;
            if ( v81 >= 0xFFFFF6C000000000uLL )
            {
              MiCheckLinearProtectedPteAccessedBit(v81, BugCheckParameter3);
              result = 272LL;
              *v68 = v67;
              return result;
            }
          }
          *v68 = BugCheckParameter3;
          return 272LL;
        }
        v16 = 0LL;
        if ( *(_BYTE *)(v75 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
        {
          v51 = 1;
        }
        else
        {
          v51 = 0;
          if ( *(_BYTE *)(v75 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
            v16 = v75 & 0xFFFFFFFFFFFFFFFEuLL;
        }
      }
      else
      {
        v51 = 0;
      }
      if ( (*((_BYTE *)a1 + 69) & 0x10) != 0 )
      {
        v65 = a1[2];
        if ( (v65 & 1) == 0 || *(_BYTE *)(v65 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
          v34 = BugCheckParameter3 & 0xFFFFFFFFFFFFFFDFuLL;
      }
      v52 = *((_BYTE *)a1 + 69);
      if ( (v52 & 9) != 8 || (v52 & 4) != 0 )
      {
LABEL_96:
        v56 = v51 | 0x10;
        if ( (*((_BYTE *)a1 + 69) & 1) == 0 )
          v56 = v51;
        if ( !(unsigned int)MiAllocateWsle(v79, v81, v15, 0, v34, v56, v16) )
        {
          MiLockAndDecrementShareCount(v15, 2);
          if ( (v56 & 4) != 0 )
            --*((_WORD *)a1 + 33);
          return 3221225495LL;
        }
        return 272LL;
      }
      v53 = *((unsigned __int16 *)a1 + 33);
      v54 = v81;
      if ( (_WORD)v53 )
      {
        if ( v53 + *((unsigned __int16 *)a1 + 32) != (((unsigned int)v81 >> 3) & 0x1FF) )
          goto LABEL_92;
        if ( *(__int64 *)(v15 + 40) < 0 )
        {
          if ( (*((_BYTE *)a1 + 69) & 2) == 0 )
            goto LABEL_93;
          goto LABEL_92;
        }
        if ( (*((_BYTE *)a1 + 69) & 2) == 0 )
        {
LABEL_92:
          MiEmptyDeferredWorkingSetEntries(a1 + 7, v81, 511LL);
          v54 = v81;
        }
      }
LABEL_93:
      v55 = *((_WORD *)a1 + 33);
      if ( v55 )
      {
        *((_WORD *)a1 + 33) = v55 + 1;
      }
      else
      {
        *((_WORD *)a1 + 33) = 1;
        *((_WORD *)a1 + 32) = (v54 >> 3) & 0x1FF;
        if ( *(__int64 *)(v15 + 40) >= 0 )
          *((_BYTE *)a1 + 69) |= 2u;
        else
          *((_BYTE *)a1 + 69) &= ~2u;
      }
      v51 |= 4u;
      goto LABEL_96;
    }
    v15 = MiHandleSpecialPurposeMemoryCachedFault(a1, *a1, a2, v15);
    if ( v15 )
    {
      v71 = MI_READ_PTE_LOCK_FREE(a2);
      v9 = (__int64)a5;
      v12 = v71;
      v6 = 0LL;
      goto LABEL_10;
    }
    if ( a3 )
    {
      LOBYTE(v70) = 17;
      MiUnlockProtoPoolPage(a3, v70);
    }
    return 3221226548LL;
  }
  if ( (*(_DWORD *)(v15 + 32) & 0x40000000) != 0 )
  {
    v38 = -1073740023;
    goto LABEL_54;
  }
  v38 = -1073741801;
LABEL_162:
  *((_DWORD *)a1 + 20) |= 4u;
LABEL_54:
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    LOBYTE(v14) = 17;
    MiUnlockProtoPoolPage(a3, v14);
  }
  return (unsigned int)v38;
}
