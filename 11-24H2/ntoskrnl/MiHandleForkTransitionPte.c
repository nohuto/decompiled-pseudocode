/*
 * XREFs of MiHandleForkTransitionPte @ 0x14036D640
 * Callers:
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiFinalizePageAttribute @ 0x14021F4F0 (MiFinalizePageAttribute.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiMakePrototypePteDirect @ 0x1402331F0 (MiMakePrototypePteDirect.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14023C31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiReturnCloneCharges @ 0x14023EE80 (MiReturnCloneCharges.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1402C63C8 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiTransferPageFileOwnership @ 0x1402C63E0 (MiTransferPageFileOwnership.c)
 *     MiWaitForFreePage @ 0x1402CF708 (MiWaitForFreePage.c)
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiInvalidPteConforms @ 0x140302590 (MiInvalidPteConforms.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     MiGetCloneCharges @ 0x14036E068 (MiGetCloneCharges.c)
 *     MiDuplicateCloneLeaf @ 0x140396854 (MiDuplicateCloneLeaf.c)
 *     MiWriteUselessChildPte @ 0x140396F60 (MiWriteUselessChildPte.c)
 *     MiIncreaseUsedPtesInPfn @ 0x140396FF4 (MiIncreaseUsedPtesInPfn.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140397A50 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiHandleForkTransitionPte(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r15
  __int64 v4; // rdx
  unsigned __int64 v5; // r13
  __int64 *v6; // rbx
  ULONG_PTR v7; // rdi
  __int64 PrototypePteDirect; // rsi
  __int64 v9; // rdx
  unsigned int v10; // r12d
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rax
  ULONG_PTR v16; // rbx
  unsigned int v17; // r13d
  int v18; // r10d
  __int64 v19; // r13
  ULONG_PTR *v20; // rbx
  __int64 v21; // rdx
  int v22; // r10d
  __int64 v23; // rax
  __int64 v24; // rdx
  volatile signed __int64 *v25; // rax
  volatile signed __int64 *v26; // rcx
  unsigned __int64 v27; // rbx
  unsigned int v28; // r12d
  __int64 v29; // rbx
  __int64 v30; // rdi
  unsigned int v31; // ebx
  __int64 result; // rax
  __int64 v33; // r13
  __int64 v34; // r15
  __int64 v35; // rbx
  unsigned int v36; // edi
  ULONG_PTR v37; // rax
  unsigned __int32 v38; // eax
  unsigned int v39; // ebx
  __int64 Page; // rax
  __int64 v41; // rcx
  unsigned __int8 v42; // al
  __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // rcx
  ULONG_PTR v46; // [rsp+30h] [rbp-98h]
  __int64 v47; // [rsp+38h] [rbp-90h]
  __int64 v48; // [rsp+40h] [rbp-88h]
  __int64 *v49; // [rsp+48h] [rbp-80h]
  __int64 v50; // [rsp+58h] [rbp-70h]
  __int64 *v51; // [rsp+60h] [rbp-68h]
  __int128 v52; // [rsp+68h] [rbp-60h] BYREF
  __int64 v53; // [rsp+D0h] [rbp+8h]
  unsigned int v54; // [rsp+D0h] [rbp+8h]
  __int64 v56; // [rsp+E0h] [rbp+18h]
  _QWORD *BugCheckParameter2; // [rsp+E8h] [rbp+20h]

  v2 = a1[9];
  v4 = *a1;
  v5 = a1[7];
  v6 = (__int64 *)a1[8];
  v52 = 0LL;
  v48 = v4;
  BugCheckParameter2 = (_QWORD *)v5;
  v49 = v6;
  v51 = (__int64 *)v2;
  v7 = CLFS_LSN_NULL_EXT;
  PrototypePteDirect = MiMakePrototypePteDirect(v2);
  v50 = PrototypePteDirect;
  v10 = 0;
  v46 = CLFS_LSN_NULL_EXT;
  v11 = *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(v9 + 1198));
  v56 = v11;
  v47 = *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(a1[1] + 1198));
  if ( v47 != v11 )
  {
    v10 = 5;
    *(_QWORD *)(v2 + 8) = 1LL;
  }
  if ( (a1[3] & 1) != 0 )
  {
    v10 |= 2u;
    *(_QWORD *)(v2 + 16) = *(_QWORD *)(v2 + 16) & 0xF00000000000001FuLL | 0x20;
  }
  if ( !v10 || (unsigned int)MiGetCloneCharges(v11, v10) )
  {
    while ( 1 )
    {
      v15 = MI_READ_PTE_LOCK_FREE(v5);
      v16 = v15;
      if ( (v15 & 0x800) == 0 )
        break;
      if ( MiInvalidPteConforms(v15) )
      {
        if ( qword_140E2DB80 )
        {
          if ( (v16 & 0x10) != 0 )
            v12 &= ~0x10uLL;
          else
            v12 = v16 & ~qword_140E2DB80;
        }
        v13 = (v12 >> 12) & 0xFFFFFFFFFFLL;
        v14 = 48 * v13 - 0x220000000000LL;
        if ( v13 <= qword_140E2DBE0 && ((*(_QWORD *)(48 * v13 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
        {
          v17 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v17 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v17);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v14 + 24) < 0 );
          }
          v5 = (unsigned __int64)BugCheckParameter2;
          if ( MI_READ_PTE_LOCK_FREE((unsigned __int64)BugCheckParameter2) == v16 )
          {
            if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v14 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
            {
              v37 = MiLockSpecialPurposeMemoryCachedPage(v14, 0);
              v18 = 0;
              v14 = v37;
              if ( !v37 )
                break;
            }
            else
            {
              v18 = 0;
            }
            if ( (_QWORD *)(*(_QWORD *)(v14 + 8) | 0x8000000000000000uLL) != BugCheckParameter2
              && (*(_QWORD *)(v14 + 40) & 0x10000000000LL) == 0 )
            {
              KeBugCheckEx(0x1Au, 0x411uLL, (ULONG_PTR)BugCheckParameter2, v16, *(_QWORD *)(v14 + 8));
            }
            if ( !v14 )
              break;
            v19 = (*BugCheckParameter2 >> 5) & 0x1FLL;
            if ( !(unsigned __int16)*(_DWORD *)(v14 + 32) && ((*BugCheckParameter2 >> 5) & 0x18) != 0x10 )
            {
              v20 = (ULONG_PTR *)(v14 + 16);
              if ( !(unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(*(_QWORD *)(v14 + 16)) )
              {
                *(_QWORD *)v2 = v21;
                MI_MAKE_PROTECT_WRITE_COPY((__int64 *)v2);
                v23 = *(_QWORD *)(v2 + 16);
                if ( (a1[3] & 1) != 0 )
                  ++a1[4];
                *(_QWORD *)(v2 + 16) = (unsigned int)v19 | v23 & 0xFFFFFFFFFFFFFFE0uLL;
                if ( (*v20 & 2) != 0 )
                {
                  v7 = *v20;
                  v46 = *v20;
                  if ( (*(_BYTE *)(v14 + 34) & 7) == 3 )
                  {
                    MiUnlinkPageFromListEx(v14, 0);
                    v44 = 1;
                  }
                  else
                  {
                    v44 = v22;
                  }
                  *(_QWORD *)(v14 + 16) = *v20 & 0xFFFFFFFFFFFFFFFDuLL;
                  if ( v44 )
                    MiInsertPageInList(v14, 8u);
                }
                *(_QWORD *)(v14 + 8) = v2;
                v24 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v14 + 40) >> 43) & 0x3FFLL));
                v25 = (volatile signed __int64 *)(v24 + 16320);
                v26 = (volatile signed __int64 *)(v24 + 7232);
                if ( *(__int64 *)(v14 + 40) < 0 )
                  v25 = (volatile signed __int64 *)(v24 + 7232);
                _InterlockedDecrement64(v25);
                *(_QWORD *)(v14 + 40) |= 0x8000000000000000uLL;
                if ( *(__int64 *)(v14 + 40) >= 0 )
                  v26 = (volatile signed __int64 *)(v24 + 16320);
                _InterlockedIncrement64(v26);
                MI_MAKE_PROTECT_WRITE_COPY((__int64 *)(v14 + 16));
                v53 = *(_QWORD *)(v14 + 40) & 0xFFFFFFFFFFLL;
                v27 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((((unsigned __int64)v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
                MiSetPfnContainingFrame(v14, v27);
                MiTransferPageFileOwnership(v14, (__int64)BugCheckParameter2);
                v28 = 0;
                v29 = 48 * v27;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
                {
                  do
                  {
                    if ( (++v28 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && KiCheckVpBackingLongSpinWaitHypercall() )
                    {
                      HvlNotifyLongSpinWait(v28);
                    }
                    else
                    {
                      _mm_pause();
                    }
                  }
                  while ( *(__int64 *)(v29 - 0x21FFFFFFFFE8LL) < 0 );
                }
                *(_QWORD *)(v29 - 0x220000000000LL + 24) = (*(_QWORD *)(v29 - 0x21FFFFFFFFE8LL) + 1LL) ^ (*(_QWORD *)(v29 - 0x21FFFFFFFFE8LL) ^ (*(_QWORD *)(v29 - 0x21FFFFFFFFE8LL) + 1LL)) & 0xC000000000000000uLL;
                _InterlockedAnd64((volatile signed __int64 *)(v29 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
                *BugCheckParameter2 = PrototypePteDirect;
                _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( v7 )
                {
                  if ( (v7 & 4) != 0 )
                    v7 = v46 & 0xFFFFFFFFFFFFFFFBuLL;
                  MiReleasePageFileInfo(v56, v7, 1LL);
                }
                if ( (a1[3] & 1) != 0 && (_DWORD)v19 != 24 )
                  PrototypePteDirect |= 8uLL;
                v30 = a1[10];
                v31 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
                {
                  do
                  {
                    if ( (++v31 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && KiCheckVpBackingLongSpinWaitHypercall() )
                    {
                      HvlNotifyLongSpinWait(v31);
                    }
                    else
                    {
                      _mm_pause();
                    }
                  }
                  while ( *(__int64 *)(v30 + 24) < 0 );
                }
                *v49 = PrototypePteDirect;
                MiIncreaseUsedPtesInPfn(a1[10], 1LL);
                _InterlockedAnd64((volatile signed __int64 *)(a1[10] + 24), 0x7FFFFFFFFFFFFFFFuLL);
                MiLockAndDecrementShareCount(48 * v53 - 0x220000000000LL);
                _InterlockedDecrement64((volatile signed __int64 *)(v48 + 648));
                a1[9] += 32LL;
                goto LABEL_42;
              }
            }
            v33 = v48 + 1024;
            v54 = (unsigned __int8)BYTE2(*(_DWORD *)(v14 + 32)) >> 6;
            if ( *a2 != -1 )
            {
              v34 = v56;
              MiReturnCloneCharges(v56, v10);
              LOBYTE(v10) = 0;
              v35 = 48 * *a2 - 0x220000000000LL;
              v36 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v36 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait(v36);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(v35 + 24) < 0 );
              }
              MiFinalizePageAttribute(v35, v54, 9LL);
              _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( (*(_BYTE *)(v14 + 34) & 0x20) == 0 )
                goto LABEL_106;
              v45 = a1[13];
              if ( v45 )
              {
                MiFlushTbList(v45);
                MiReleaseProcessorFlushList();
                a1[13] = 0LL;
              }
              if ( (*(_BYTE *)(v14 + 34) & 8) != 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                MiUnlockWorkingSetExclusive(v33, *((_BYTE *)a1 + 28));
                KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
                *((_BYTE *)a1 + 28) = MiLockWorkingSetExclusive(v33);
              }
              else
              {
LABEL_106:
                if ( (unsigned int)MiDuplicateCloneLeaf(
                                     (_DWORD)BugCheckParameter2,
                                     (_DWORD)v49,
                                     *a2,
                                     a1[10],
                                     *((_BYTE *)a1 + 28)) )
                {
                  *a2 = -1LL;
                  ++a1[11];
                  goto LABEL_42;
                }
              }
              goto LABEL_65;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiInitializePageColorBase(v33, 3, v18, (__int64)&v52);
            v38 = _InterlockedExchangeAdd((volatile signed __int32 *)v52, 1u);
            v39 = DWORD2(v52) ^ (unsigned __int8)(BYTE8(v52) ^ (v38
                                                              % dword_140E2DBC0[(*((_QWORD *)&v52 + 1) >> 16) & 3LL]));
            Page = MiGetPage(v47, v39, 1u);
            *a2 = Page;
            if ( Page == -1 )
            {
              do
              {
                v41 = a1[13];
                if ( v41 )
                {
                  MiFlushTbList(v41);
                  MiReleaseProcessorFlushList();
                  a1[13] = 0LL;
                }
                MiUnlockWorkingSetExclusive(v33, *((_BYTE *)a1 + 28));
                MiWaitForFreePage(v47, 0);
                v42 = MiLockWorkingSetExclusive(v33);
                *((_BYTE *)a1 + 28) = v42;
                MiMakeSystemAddressValid((ULONG_PTR)BugCheckParameter2, 0, v42, 1);
                v43 = MiGetPage(v47, v39, 1u);
                *a2 = v43;
              }
              while ( v43 == -1 );
              v7 = CLFS_LSN_NULL_EXT;
              PrototypePteDirect = v50;
              v2 = (__int64)v51;
            }
            v5 = (unsigned __int64)BugCheckParameter2;
            if ( (*BugCheckParameter2 & 0x401LL) != 0 )
              break;
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
      }
    }
    v34 = v56;
LABEL_65:
    MiReturnCloneCharges(v34, v10);
    return 0LL;
  }
  MiWriteUselessChildPte(v6, a1[10]);
  *((_DWORD *)a1 + 24) = 1;
LABEL_42:
  result = 1LL;
  *(__m128i *)(a1 + 7) = _mm_add_epi64(
                           _mm_load_si128((const __m128i *)&_xmm),
                           _mm_loadu_si128((const __m128i *)(a1 + 7)));
  return result;
}
