/*
 * XREFs of MiRestoreTransitionPte @ 0x140271094
 * Callers:
 *     MiRelinkStandbyPage @ 0x14022C848 (MiRelinkStandbyPage.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiUnlinkStandbyPage @ 0x140270760 (MiUnlinkStandbyPage.c)
 *     MiWriteCompletePfn @ 0x14039D574 (MiWriteCompletePfn.c)
 *     MiDiscardTransitionPteEx @ 0x1403A1C98 (MiDiscardTransitionPteEx.c)
 *     MiReuseStandbyPage @ 0x140442E50 (MiReuseStandbyPage.c)
 *     MiHandleInPageError @ 0x1404802C4 (MiHandleInPageError.c)
 *     MiRepointPteAtExtendedStandby @ 0x140684E78 (MiRepointPteAtExtendedStandby.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x140227FA0 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetTopLevelPfn @ 0x140228010 (MiGetTopLevelPfn.c)
 *     MiClearResetPfn @ 0x140229254 (MiClearResetPfn.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetPagingFileOffset @ 0x1402E5A60 (MiGetPagingFileOffset.c)
 *     MI_IS_RESET_PTE @ 0x140368EE0 (MI_IS_RESET_PTE.c)
 *     MiClearPfnImageVerified @ 0x14036C0C0 (MiClearPfnImageVerified.c)
 *     MiDereferenceControlAreaPfnList @ 0x14036FF5C (MiDereferenceControlAreaPfnList.c)
 *     MiLogStandbyRepurpose @ 0x140463A68 (MiLogStandbyRepurpose.c)
 */

__int64 __fastcall MiRestoreTransitionPte(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int64 v2; // r15
  __int64 v4; // r13
  unsigned __int64 *v5; // rsi
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rbx
  int v12; // r12d
  __int64 MmInternal; // rcx
  __int64 result; // rax
  unsigned int v15; // ebx
  signed __int64 v16; // rax
  bool i; // zf
  unsigned int PfnPriority; // eax
  __int64 v19; // rcx
  signed __int64 v20; // rcx
  unsigned __int64 v21; // r14
  _QWORD *v22; // r9
  __int64 TopLevelPfn; // rax
  PEPROCESS PageTablePfnBuddyRaw; // rax
  __int64 v25; // r8
  int v26; // eax
  signed __int64 v27; // [rsp+80h] [rbp+7h]
  unsigned __int64 v28; // [rsp+E0h] [rbp+67h] BYREF
  int v29; // [rsp+E8h] [rbp+6Fh]
  unsigned __int64 v30; // [rsp+F0h] [rbp+77h]
  __int64 v31; // [rsp+F8h] [rbp+7Fh]

  v29 = a2;
  v2 = 0LL;
  v4 = (*(_QWORD *)(BugCheckParameter2 + 40) >> 53) & 1LL;
  MiClearPfnImageVerified(BugCheckParameter2, 12LL);
  if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
  {
    v6 = (_QWORD *)(BugCheckParameter2 + 8);
    v5 = (unsigned __int64 *)(BugCheckParameter2 + 16);
    v21 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 4) == 0 )
    {
      if ( (unsigned int)MI_IS_RESET_PTE(*v5) )
        MiClearResetPfn(BugCheckParameter2);
      TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
      PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(TopLevelPfn);
      if ( v25 != BugCheckParameter2 )
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedDecrement64((volatile signed __int64 *)PageTablePfnBuddyRaw[1].Padding);
      if ( (HIBYTE(LODWORD(PageTablePfnBuddyRaw[2].ContextSwitches)) & 0x30) == 0x20 )
        _InterlockedIncrement64((volatile signed __int64 *)&PageTablePfnBuddyRaw[2].UserTime);
    }
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL) == 0xAAAAAAAAAAAAAAABuLL
                                                                  * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4) )
      v2 = v21;
  }
  else
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(BugCheckParameter2 + 8) <= 0 )
    {
      v5 = (unsigned __int64 *)(BugCheckParameter2 + 16);
      if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
        && !(unsigned int)MiGetPagingFileOffset(*(_QWORD *)(BugCheckParameter2 + 16))
        && (unsigned int)MI_IS_RESET_PTE(*v22) )
      {
        MiClearResetPfn(BugCheckParameter2);
      }
    }
    else
    {
      v5 = (unsigned __int64 *)(BugCheckParameter2 + 16);
      *(_QWORD *)(BugCheckParameter2 + 8) |= 0x8000000000000000uLL;
    }
    v6 = (_QWORD *)(BugCheckParameter2 + 8);
  }
  v7 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
  v28 = *v5;
  v31 = v7;
  v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28);
  v28 = v8 & ((-(__int64)((v8 & 0x400) != 0) & 0xFFFFFFFFFFFFF808uLL) - 9);
  if ( v2 )
  {
    v10 = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL;
    v10 = 48 * v9 - 0x220000000000LL;
    v2 = MiMapPageInHyperSpaceWorker(v9, 0LL, 0x80000000LL) + 8 * ((*v6 >> 3) & 0x1FFLL);
  }
  v11 = v28;
  v30 = v28;
  v12 = 0;
  if ( (unsigned int)MiPteInShadowRange(v2) )
  {
    v26 = MiSanitizeShadowPxe();
    v11 = v30;
    v12 = v26;
  }
  *(_QWORD *)v2 = v11;
  if ( v12 )
    MiWritePteShadow();
  if ( v10 )
  {
    MmInternal = (__int64)KeGetCurrentPrcb()->MmInternal;
    *(_QWORD *)MmInternal = 0LL;
    *(_QWORD *)(((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  }
  result = *(_QWORD *)(BugCheckParameter2 + 40);
  if ( result < 0 )
  {
    MmInternal = *v5;
    if ( (*v5 & 0x400) != 0 )
    {
      if ( qword_140E2DB80 && (MmInternal & 0x10) == 0 )
        MmInternal &= ~qword_140E2DB80;
      result = MiDereferenceControlAreaPfnList(*(_QWORD *)(MmInternal >> 16), MmInternal >> 16, 1LL);
    }
  }
  if ( v10 )
  {
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(MmInternal) )
        {
          HvlNotifyLongSpinWait(v15);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    MiDecrementShareCountEx(v10, 0LL);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( !(_DWORD)v4 )
  {
    v27 = *(_QWORD *)(BugCheckParameter2 + 40);
    v16 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(BugCheckParameter2 + 40),
            v27 & 0x8FFFFFFFFFFFFFFFuLL,
            v27);
    for ( i = v27 == v16; !i; i = v20 == v16 )
    {
      v20 = v16;
      v16 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(BugCheckParameter2 + 40),
              v16 & 0x8FFFFFFFFFFFFFFFuLL,
              v16);
    }
    if ( (v29 & 1) != 0 )
    {
      LODWORD(v28) = *(_DWORD *)(BugCheckParameter2 + 32);
      BYTE3(v28) &= 0xF8u;
      result = (unsigned int)v28;
      *(_DWORD *)(BugCheckParameter2 + 32) = v28;
    }
    else
    {
      PfnPriority = MiGetPfnPriority(BugCheckParameter2);
      v19 = v31;
      _InterlockedIncrement((volatile signed __int32 *)(v31 + 4LL * PfnPriority + 7200));
      LODWORD(v28) = *(_DWORD *)(BugCheckParameter2 + 32);
      BYTE3(v28) &= 0xF8u;
      *(_DWORD *)(BugCheckParameter2 + 32) = v28;
      return MiLogStandbyRepurpose(v19, BugCheckParameter2);
    }
  }
  return result;
}
