/*
 * XREFs of MiHandleForkTransitionPte @ 0x1402CF714
 * Callers:
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 * Callees:
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140208510 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1402343E0 (MiInvalidPteConforms.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiFinalizePageAttribute @ 0x14024DDE0 (MiFinalizePageAttribute.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     MiMakePrototypePteDirect @ 0x1402A69A0 (MiMakePrototypePteDirect.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1402CE0D4 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiTransferPageFileOwnership @ 0x1402CE0EC (MiTransferPageFileOwnership.c)
 *     MiGetCloneCharges @ 0x1402CF39C (MiGetCloneCharges.c)
 *     MiDuplicateCloneLeaf @ 0x1402D08F8 (MiDuplicateCloneLeaf.c)
 *     MiWriteUselessChildPte @ 0x1402D0FFC (MiWriteUselessChildPte.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1402D1090 (MiIncreaseUsedPtesInPfn.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14033F5DC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiReturnCloneCharges @ 0x14033FDD4 (MiReturnCloneCharges.c)
 *     MiWaitForFreePage @ 0x1403BFC64 (MiWaitForFreePage.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
  unsigned __int64 v30; // rcx
  __int64 v31; // rdi
  unsigned int v32; // ebx
  __int64 result; // rax
  __int64 v34; // r13
  __int64 v35; // r15
  __int64 v36; // rbx
  unsigned int v37; // edi
  __int64 v38; // r8
  unsigned __int32 v39; // eax
  unsigned int v40; // ebx
  __int64 Page; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rcx
  unsigned __int8 v45; // al
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // ecx
  __int64 v49; // rcx
  ULONG_PTR v50; // [rsp+30h] [rbp-98h]
  __int64 v51; // [rsp+38h] [rbp-90h]
  __int64 v52; // [rsp+40h] [rbp-88h]
  __int64 *v53; // [rsp+48h] [rbp-80h]
  __int64 v54; // [rsp+58h] [rbp-70h]
  __int64 *v55; // [rsp+60h] [rbp-68h]
  __int128 v56; // [rsp+68h] [rbp-60h] BYREF
  __int64 v57; // [rsp+D0h] [rbp+8h]
  unsigned int v58; // [rsp+D0h] [rbp+8h]
  __int64 v60; // [rsp+E0h] [rbp+18h]
  _QWORD *BugCheckParameter2; // [rsp+E8h] [rbp+20h]

  v2 = a1[9];
  v4 = *a1;
  v5 = a1[7];
  v6 = (__int64 *)a1[8];
  v56 = 0LL;
  v52 = v4;
  BugCheckParameter2 = (_QWORD *)v5;
  v53 = v6;
  v55 = (__int64 *)v2;
  v7 = CLFS_LSN_NULL_EXT;
  PrototypePteDirect = MiMakePrototypePteDirect(v2);
  v54 = PrototypePteDirect;
  v10 = 0;
  v50 = CLFS_LSN_NULL_EXT;
  v11 = *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(v9 + 1198));
  v60 = v11;
  v51 = *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(a1[1] + 1198));
  if ( v51 != v11 )
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
        if ( qword_140E2D940 )
        {
          if ( (v16 & 0x10) != 0 )
            v12 &= ~0x10uLL;
          else
            v12 = v16 & ~qword_140E2D940;
        }
        v13 = (v12 >> 12) & 0xFFFFFFFFFFLL;
        v14 = 48 * v13 - 0x220000000000LL;
        if ( v13 <= qword_140E2D9A0 && ((*(_QWORD *)(48 * v13 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
        {
          v17 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v17 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v13) )
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
            if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v14 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
            {
              v47 = MiLockSpecialPurposeMemoryCachedPage(v14, 0LL);
              v18 = 0;
              v14 = v47;
              if ( !v47 )
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
                  v50 = *v20;
                  if ( (*(_BYTE *)(v14 + 34) & 7) == 3 )
                  {
                    MiUnlinkPageFromListEx(v14, 0);
                    v48 = 1;
                  }
                  else
                  {
                    v48 = v22;
                  }
                  *(_QWORD *)(v14 + 16) = *v20 & 0xFFFFFFFFFFFFFFFDuLL;
                  if ( v48 )
                    MiInsertPageInList(v14, 8u);
                }
                *(_QWORD *)(v14 + 8) = v2;
                v24 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v14 + 40) >> 43) & 0x3FFLL));
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
                v57 = *(_QWORD *)(v14 + 40) & 0xFFFFFFFFFFLL;
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
                      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(0LL) )
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
                v30 = 0xFFFFDE0000000000uLL;
                *(_QWORD *)(v29 - 0x220000000000LL + 24) = (*(_QWORD *)(v29 - 0x21FFFFFFFFE8LL) + 1LL) ^ (*(_QWORD *)(v29 - 0x21FFFFFFFFE8LL) ^ (*(_QWORD *)(v29 - 0x21FFFFFFFFE8LL) + 1LL)) & 0xC000000000000000uLL;
                _InterlockedAnd64((volatile signed __int64 *)(v29 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
                *BugCheckParameter2 = PrototypePteDirect;
                _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( v7 )
                {
                  if ( (v7 & 4) != 0 )
                    v7 = v50 & 0xFFFFFFFFFFFFFFFBuLL;
                  MiReleasePageFileInfo(v60, v7, 1);
                }
                if ( (a1[3] & 1) != 0 && (_DWORD)v19 != 24 )
                  PrototypePteDirect |= 8uLL;
                v31 = a1[10];
                v32 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
                {
                  do
                  {
                    if ( (++v32 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v30) )
                    {
                      HvlNotifyLongSpinWait(v32);
                    }
                    else
                    {
                      _mm_pause();
                    }
                  }
                  while ( *(__int64 *)(v31 + 24) < 0 );
                }
                *v53 = PrototypePteDirect;
                MiIncreaseUsedPtesInPfn(a1[10], 1LL);
                _InterlockedAnd64((volatile signed __int64 *)(a1[10] + 24), 0x7FFFFFFFFFFFFFFFuLL);
                MiLockAndDecrementShareCount(48 * v57 - 0x220000000000LL, 2);
                _InterlockedDecrement64((volatile signed __int64 *)(v52 + 648));
                a1[9] += 32LL;
                goto LABEL_40;
              }
            }
            v34 = v52 + 1024;
            v58 = (unsigned __int8)BYTE2(*(_DWORD *)(v14 + 32)) >> 6;
            if ( *a2 != -1 )
            {
              v35 = v60;
              MiReturnCloneCharges(v60, v10);
              v10 = 0;
              v36 = 48 * *a2 - 0x220000000000LL;
              v37 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v37 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(0LL) )
                  {
                    HvlNotifyLongSpinWait(v37);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(v36 + 24) < 0 );
              }
              MiFinalizePageAttribute(v36, v58, 9LL);
              _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( (*(_BYTE *)(v14 + 34) & 0x20) == 0 )
                goto LABEL_106;
              v49 = a1[13];
              if ( v49 )
              {
                MiFlushTbList(v49, 0x7FFFFFFFFFFFFFFFLL, v38);
                MiReleaseProcessorFlushList();
                a1[13] = 0LL;
              }
              if ( (*(_BYTE *)(v14 + 34) & 8) != 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                MiUnlockWorkingSetExclusive(v34, *((_BYTE *)a1 + 28));
                KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
                *((_BYTE *)a1 + 28) = MiLockWorkingSetExclusive(v34);
              }
              else
              {
LABEL_106:
                if ( (unsigned int)MiDuplicateCloneLeaf(
                                     (_DWORD)BugCheckParameter2,
                                     (_DWORD)v53,
                                     *a2,
                                     a1[10],
                                     *((_BYTE *)a1 + 28)) )
                {
                  *a2 = -1LL;
                  ++a1[11];
                  goto LABEL_40;
                }
              }
              goto LABEL_71;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiInitializePageColorBase(v34, 3, v18, (__int64)&v56);
            v39 = _InterlockedExchangeAdd((volatile signed __int32 *)v56, 1u);
            v40 = DWORD2(v56) ^ (unsigned __int8)(BYTE8(v56) ^ (v39
                                                              % dword_140E2D980[(*((_QWORD *)&v56 + 1) >> 16) & 3LL]));
            Page = MiGetPage(v51, v40, 1u);
            *a2 = Page;
            if ( Page == -1 )
            {
              do
              {
                v44 = a1[13];
                if ( v44 )
                {
                  MiFlushTbList(v44, v42, v43);
                  MiReleaseProcessorFlushList();
                  a1[13] = 0LL;
                }
                MiUnlockWorkingSetExclusive(v34, *((_BYTE *)a1 + 28));
                MiWaitForFreePage(v51, 0LL);
                v45 = MiLockWorkingSetExclusive(v34);
                *((_BYTE *)a1 + 28) = v45;
                MiMakeSystemAddressValid((ULONG_PTR)BugCheckParameter2, 0, v45, 1);
                v46 = MiGetPage(v51, v40, 1u);
                *a2 = v46;
              }
              while ( v46 == -1 );
              v7 = CLFS_LSN_NULL_EXT;
              PrototypePteDirect = v54;
              v2 = (__int64)v55;
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
    v35 = v60;
LABEL_71:
    MiReturnCloneCharges(v35, v10);
    return 0LL;
  }
  MiWriteUselessChildPte(v6, a1[10]);
  *((_DWORD *)a1 + 24) = 1;
LABEL_40:
  result = 1LL;
  *(__m128i *)(a1 + 7) = _mm_add_epi64(
                           _mm_load_si128((const __m128i *)&_xmm),
                           _mm_loadu_si128((const __m128i *)(a1 + 7)));
  return result;
}
