/*
 * XREFs of MiHandleForkTransitionPte @ 0x1402678C4
 * Callers:
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 * Callees:
 *     MiMakePrototypePteDirect @ 0x140203600 (MiMakePrototypePteDirect.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140204044 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiReturnCloneCharges @ 0x140206FD0 (MiReturnCloneCharges.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiFinalizePageAttribute @ 0x14024C240 (MiFinalizePageAttribute.c)
 *     MiWaitForFreePage @ 0x140260F64 (MiWaitForFreePage.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1402697B0 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiTransferPageFileOwnership @ 0x1402697C8 (MiTransferPageFileOwnership.c)
 *     MiGetCloneCharges @ 0x140269B50 (MiGetCloneCharges.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiInvalidPteConforms @ 0x1403461F0 (MiInvalidPteConforms.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x1403517B0 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiDuplicateCloneLeaf @ 0x14038FAFC (MiDuplicateCloneLeaf.c)
 *     MiWriteUselessChildPte @ 0x140391668 (MiWriteUselessChildPte.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1403916FC (MiIncreaseUsedPtesInPfn.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiHandleForkTransitionPte(__int64 *a1, __int64 *a2)
{
  unsigned __int64 v2; // r15
  __int64 v4; // rdx
  unsigned __int64 v5; // r13
  __int64 *v6; // rbx
  ULONG_PTR v7; // rdi
  __int64 PrototypePteDirect; // rsi
  __int64 v9; // rdx
  unsigned int v10; // r12d
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbp
  __int64 v18; // rax
  ULONG_PTR v19; // rbx
  unsigned int v20; // r13d
  unsigned int v21; // r10d
  __int64 v22; // r13
  ULONG_PTR *v23; // rbx
  __int64 v24; // rdx
  int v25; // r10d
  __int64 v26; // rax
  __int64 v27; // rdx
  volatile signed __int64 *v28; // rax
  volatile signed __int64 *v29; // rcx
  unsigned __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r9
  unsigned int v33; // r12d
  __int64 v34; // rbx
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // rdi
  unsigned int v39; // ebx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 result; // rax
  __int64 v43; // r13
  __int64 v44; // r15
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rbx
  unsigned int v49; // edi
  __int64 v50; // rax
  unsigned __int32 v51; // eax
  unsigned int v52; // ebx
  __int64 Page; // rax
  __int64 v54; // rcx
  unsigned __int8 v55; // al
  __int64 v56; // r9
  __int64 v57; // rax
  int v58; // ecx
  __int64 v59; // rcx
  ULONG_PTR v60; // [rsp+30h] [rbp-98h]
  __int64 v61; // [rsp+38h] [rbp-90h]
  __int64 v62; // [rsp+40h] [rbp-88h]
  __int64 *v63; // [rsp+48h] [rbp-80h]
  __int64 v64; // [rsp+58h] [rbp-70h]
  unsigned __int64 v65; // [rsp+60h] [rbp-68h]
  __int128 v66; // [rsp+68h] [rbp-60h] BYREF
  __int64 v67; // [rsp+D0h] [rbp+8h]
  unsigned int v68; // [rsp+D0h] [rbp+8h]
  __int64 v70; // [rsp+E0h] [rbp+18h]
  _QWORD *BugCheckParameter2; // [rsp+E8h] [rbp+20h]

  v2 = a1[9];
  v4 = *a1;
  v5 = a1[7];
  v6 = (__int64 *)a1[8];
  v66 = 0LL;
  v62 = v4;
  BugCheckParameter2 = (_QWORD *)v5;
  v63 = v6;
  v65 = v2;
  v7 = CLFS_LSN_NULL_EXT;
  PrototypePteDirect = MiMakePrototypePteDirect(v2);
  v64 = PrototypePteDirect;
  v10 = 0;
  v60 = CLFS_LSN_NULL_EXT;
  v11 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(v9 + 1198));
  v70 = v11;
  v61 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a1[1] + 1198));
  if ( v61 != v11 )
  {
    v10 = 5;
    *(_QWORD *)(v2 + 8) = 1LL;
  }
  if ( (a1[3] & 1) != 0 )
  {
    v10 |= 2u;
    *(_QWORD *)(v2 + 16) = *(_QWORD *)(v2 + 16) & 0xF00000000000001FuLL | 0x20;
  }
  if ( v10 && !(unsigned int)MiGetCloneCharges(v11, v10) )
  {
    MiWriteUselessChildPte(v6, a1[10]);
    *((_DWORD *)a1 + 24) = 1;
    goto LABEL_42;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v18 = MI_READ_PTE_LOCK_FREE(v5);
        v19 = v18;
        if ( (v18 & 0x800) == 0 )
        {
LABEL_64:
          v44 = v70;
LABEL_65:
          MiReturnCloneCharges(v44, v10);
          return 0LL;
        }
        if ( (unsigned int)MiInvalidPteConforms(v18) )
        {
          if ( qword_140E2DCC0 )
          {
            if ( (v19 & 0x10) != 0 )
              v12 &= ~0x10uLL;
            else
              v12 = v19 & ~qword_140E2DCC0;
          }
          v15 = (v12 >> 12) & 0xFFFFFFFFFFLL;
          v16 = 6 * v15;
          v17 = 48 * v15 - 0x220000000000LL;
          if ( v15 <= qword_140E2DD20 && ((*(_QWORD *)(48 * v15 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
            break;
        }
      }
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v20 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v15, v16, v13, v14) )
          {
            HvlNotifyLongSpinWait(v20);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v17 + 24) < 0 );
      }
      v5 = (unsigned __int64)BugCheckParameter2;
      if ( MI_READ_PTE_LOCK_FREE((unsigned __int64)BugCheckParameter2) == v19 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
    {
      v50 = MiLockSpecialPurposeMemoryCachedPage(v17, 0);
      v21 = 0;
      v17 = v50;
      if ( !v50 )
        goto LABEL_64;
    }
    else
    {
      v21 = 0;
    }
    if ( (_QWORD *)(*(_QWORD *)(v17 + 8) | 0x8000000000000000uLL) != BugCheckParameter2
      && (*(_QWORD *)(v17 + 40) & 0x10000000000LL) == 0 )
    {
      KeBugCheckEx(0x1Au, 0x411uLL, (ULONG_PTR)BugCheckParameter2, v19, *(_QWORD *)(v17 + 8));
    }
    if ( !v17 )
      goto LABEL_64;
    v22 = (*BugCheckParameter2 >> 5) & 0x1FLL;
    if ( !(unsigned __int16)*(_DWORD *)(v17 + 32) && ((*BugCheckParameter2 >> 5) & 0x18) != 0x10 )
    {
      v23 = (ULONG_PTR *)(v17 + 16);
      if ( !(unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(*(_QWORD *)(v17 + 16)) )
        break;
    }
    v43 = v62 + 1024;
    v68 = (unsigned __int8)BYTE2(*(_DWORD *)(v17 + 32)) >> 6;
    if ( *a2 != -1 )
    {
      v44 = v70;
      MiReturnCloneCharges(v70, v10);
      LOBYTE(v10) = 0;
      v48 = 48 * *a2 - 0x220000000000LL;
      v49 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v48 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v49 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(0LL, v45, v46, v47) )
          {
            HvlNotifyLongSpinWait(v49);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v48 + 24) < 0 );
      }
      MiFinalizePageAttribute(v48, v68, 9LL);
      _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_BYTE *)(v17 + 34) & 0x20) == 0 )
        goto LABEL_106;
      v59 = a1[13];
      if ( v59 )
      {
        MiFlushTbList(v59);
        MiReleaseProcessorFlushList();
        a1[13] = 0LL;
      }
      if ( (*(_BYTE *)(v17 + 34) & 8) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockWorkingSetExclusive(v43, *((_BYTE *)a1 + 28));
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        *((_BYTE *)a1 + 28) = MiLockWorkingSetExclusive(v43);
      }
      else
      {
LABEL_106:
        if ( (unsigned int)MiDuplicateCloneLeaf(
                             (_DWORD)BugCheckParameter2,
                             (_DWORD)v63,
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
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiInitializePageColorBase(v43, 3LL, v21, &v66);
    v51 = _InterlockedExchangeAdd((volatile signed __int32 *)v66, 1u);
    v52 = DWORD2(v66) ^ (unsigned __int8)(BYTE8(v66) ^ (v51 % dword_140E2DD00[(*((_QWORD *)&v66 + 1) >> 16) & 3LL]));
    Page = MiGetPage(v61, v52, 1LL, dword_140E2DD00);
    *a2 = Page;
    if ( Page == -1 )
    {
      do
      {
        v54 = a1[13];
        if ( v54 )
        {
          MiFlushTbList(v54);
          MiReleaseProcessorFlushList();
          a1[13] = 0LL;
        }
        MiUnlockWorkingSetExclusive(v43, *((_BYTE *)a1 + 28));
        MiWaitForFreePage(v61, 0);
        v55 = MiLockWorkingSetExclusive(v43);
        *((_BYTE *)a1 + 28) = v55;
        MiMakeSystemAddressValid((ULONG_PTR)BugCheckParameter2, 0, v55, 1);
        v57 = MiGetPage(v61, v52, 1LL, v56);
        *a2 = v57;
      }
      while ( v57 == -1 );
      v7 = CLFS_LSN_NULL_EXT;
      PrototypePteDirect = v64;
      v2 = v65;
    }
    v5 = (unsigned __int64)BugCheckParameter2;
    if ( (*BugCheckParameter2 & 0x401LL) != 0 )
      goto LABEL_64;
  }
  *(_QWORD *)v2 = v24;
  MI_MAKE_PROTECT_WRITE_COPY(v2);
  v26 = *(_QWORD *)(v2 + 16);
  if ( (a1[3] & 1) != 0 )
    ++a1[4];
  *(_QWORD *)(v2 + 16) = (unsigned int)v22 | v26 & 0xFFFFFFFFFFFFFFE0uLL;
  if ( (*v23 & 2) != 0 )
  {
    v7 = *v23;
    v60 = *v23;
    if ( (*(_BYTE *)(v17 + 34) & 7) == 3 )
    {
      MiUnlinkPageFromListEx(v17);
      v58 = 1;
    }
    else
    {
      v58 = v25;
    }
    *(_QWORD *)(v17 + 16) = *v23 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( v58 )
      MiInsertPageInList(v17, 8LL);
  }
  *(_QWORD *)(v17 + 8) = v2;
  v27 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL));
  v28 = (volatile signed __int64 *)(v27 + 16320);
  v29 = (volatile signed __int64 *)(v27 + 7232);
  if ( *(__int64 *)(v17 + 40) < 0 )
    v28 = (volatile signed __int64 *)(v27 + 7232);
  _InterlockedDecrement64(v28);
  *(_QWORD *)(v17 + 40) |= 0x8000000000000000uLL;
  if ( *(__int64 *)(v17 + 40) >= 0 )
    v29 = (volatile signed __int64 *)(v27 + 16320);
  _InterlockedIncrement64(v29);
  MI_MAKE_PROTECT_WRITE_COPY(v17 + 16);
  v67 = *(_QWORD *)(v17 + 40) & 0xFFFFFFFFFFLL;
  v30 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
  MiSetPfnContainingFrame(v17, v30);
  MiTransferPageFileOwnership(v17, BugCheckParameter2);
  v33 = 0;
  v34 = 48 * v30;
  v35 = 0xFFFFDE0000000018uLL;
LABEL_34:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v34 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
  {
    while ( 1 )
    {
      if ( (++v33 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(0LL, v31, 0xFFFFDE0000000018uLL, v32) )
        {
          HvlNotifyLongSpinWait(v33);
          v35 = 0xFFFFDE0000000018uLL;
          goto LABEL_50;
        }
        v35 = 0xFFFFDE0000000018uLL;
      }
      _mm_pause();
LABEL_50:
      if ( *(__int64 *)(v34 - 0x21FFFFFFFFE8LL) >= 0 )
        goto LABEL_34;
    }
  }
  v36 = (*(_QWORD *)(v34 - 0x21FFFFFFFFE8LL) + 1LL) ^ (*(_QWORD *)(v34 - 0x21FFFFFFFFE8LL) ^ (*(_QWORD *)(v34 - 0x21FFFFFFFFE8LL)
                                                                                            + 1LL)) & 0xC000000000000000uLL;
  v37 = 0xFFFFDE0000000000uLL;
  *(_QWORD *)(v34 - 0x220000000000LL + 24) = v36;
  _InterlockedAnd64((volatile signed __int64 *)(v34 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  *BugCheckParameter2 = PrototypePteDirect;
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v7 )
  {
    if ( (v7 & 4) != 0 )
      v7 = v60 & 0xFFFFFFFFFFFFFFFBuLL;
    MiReleasePageFileInfo(v70, v7, 1LL, v32);
  }
  if ( (a1[3] & 1) != 0 && (_DWORD)v22 != 24 )
    PrototypePteDirect |= 8uLL;
  v38 = a1[10];
  v39 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v39 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v37, v36, v35, v32) )
      {
        HvlNotifyLongSpinWait(v39);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v38 + 24) < 0 );
  }
  *v63 = PrototypePteDirect;
  MiIncreaseUsedPtesInPfn(a1[10], 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(a1[10] + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiLockAndDecrementShareCount(48 * v67 - 0x220000000000LL, 2LL, v40, v41);
  _InterlockedDecrement64((volatile signed __int64 *)(v62 + 648));
  a1[9] += 32LL;
LABEL_42:
  result = 1LL;
  *(__m128i *)(a1 + 7) = _mm_add_epi64(
                           _mm_load_si128((const __m128i *)&_xmm),
                           _mm_loadu_si128((const __m128i *)(a1 + 7)));
  return result;
}
