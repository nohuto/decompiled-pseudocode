/*
 * XREFs of MiRestoreTransitionPte @ 0x140226624
 * Callers:
 *     MiDiscardTransitionPteEx @ 0x1402188CC (MiDiscardTransitionPteEx.c)
 *     MiUnlinkStandbyPage @ 0x140225CF0 (MiUnlinkStandbyPage.c)
 *     MiWriteCompletePfn @ 0x1402FA874 (MiWriteCompletePfn.c)
 *     MiRelinkStandbyPage @ 0x140300158 (MiRelinkStandbyPage.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiReuseStandbyPage @ 0x14043BE20 (MiReuseStandbyPage.c)
 *     MiHandleInPageError @ 0x14047AF04 (MiHandleInPageError.c)
 *     MiRepointPteAtExtendedStandby @ 0x140685FA4 (MiRepointPteAtExtendedStandby.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiDereferenceControlAreaPfnList @ 0x14021DC9C (MiDereferenceControlAreaPfnList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiClearPfnImageVerified @ 0x1402EAB40 (MiClearPfnImageVerified.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1402FB220 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetTopLevelPfn @ 0x1402FB290 (MiGetTopLevelPfn.c)
 *     MiClearResetPfn @ 0x1402FC454 (MiClearResetPfn.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     MI_IS_RESET_PTE @ 0x1403FE370 (MI_IS_RESET_PTE.c)
 *     MiLogStandbyRepurpose @ 0x14045A1A8 (MiLogStandbyRepurpose.c)
 */

void __fastcall MiRestoreTransitionPte(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int64 v2; // r15
  __int64 v4; // r13
  __int64 v5; // r8
  unsigned __int64 *v6; // rsi
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rbx
  int v13; // r12d
  __int64 v14; // rdx
  __int64 MmInternal; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ebx
  signed __int64 v19; // rax
  bool i; // zf
  unsigned int PfnPriority; // eax
  __int64 v22; // rcx
  signed __int64 v23; // rcx
  unsigned __int64 v24; // r14
  _QWORD *v25; // r9
  __int64 TopLevelPfn; // rax
  __int64 v27; // rdx
  __int64 PageTablePfnBuddyRaw; // rax
  int v29; // eax
  signed __int64 v30; // [rsp+80h] [rbp+7h]
  unsigned __int64 v31; // [rsp+E0h] [rbp+67h] BYREF
  int v32; // [rsp+E8h] [rbp+6Fh]
  unsigned __int64 v33; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v34; // [rsp+F8h] [rbp+7Fh]

  v32 = a2;
  v2 = 0LL;
  v4 = (*(_QWORD *)(BugCheckParameter2 + 40) >> 53) & 1LL;
  MiClearPfnImageVerified(BugCheckParameter2, 12LL);
  if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
  {
    v7 = (_QWORD *)(BugCheckParameter2 + 8);
    v6 = (unsigned __int64 *)(BugCheckParameter2 + 16);
    v24 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 4) == 0 )
    {
      if ( (unsigned int)MI_IS_RESET_PTE(*v6) )
        MiClearResetPfn(BugCheckParameter2);
      TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
      PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(TopLevelPfn, v27, TopLevelPfn);
      if ( v5 != BugCheckParameter2 )
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedDecrement64((volatile signed __int64 *)(PageTablePfnBuddyRaw + 648));
      if ( (HIBYTE(*(_DWORD *)(PageTablePfnBuddyRaw + 1208)) & 0x30) == 0x20 )
        _InterlockedIncrement64((volatile signed __int64 *)(PageTablePfnBuddyRaw + 1232));
    }
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL) == 0xAAAAAAAAAAAAAAABuLL
                                                                  * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4) )
      v2 = v24;
  }
  else
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(BugCheckParameter2 + 8) <= 0 )
    {
      v6 = (unsigned __int64 *)(BugCheckParameter2 + 16);
      if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
        && !(unsigned int)MiGetPagingFileOffset(*(_QWORD *)(BugCheckParameter2 + 16))
        && (unsigned int)MI_IS_RESET_PTE(*v25) )
      {
        MiClearResetPfn(BugCheckParameter2);
      }
    }
    else
    {
      v6 = (unsigned __int64 *)(BugCheckParameter2 + 16);
      *(_QWORD *)(BugCheckParameter2 + 8) |= 0x8000000000000000uLL;
    }
    v7 = (_QWORD *)(BugCheckParameter2 + 8);
  }
  v8 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
  v31 = *v6;
  v34 = v8;
  v9 = MI_READ_PTE_LOCK_FREE(&v31, v8, v5);
  v31 = v9 & ((-(__int64)((v9 & 0x400) != 0) & 0xFFFFFFFFFFFFF808uLL) - 9);
  if ( v2 )
  {
    v11 = 0LL;
  }
  else
  {
    v10 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL;
    v11 = 48 * v10 - 0x220000000000LL;
    v2 = MiMapPageInHyperSpaceWorker(v10, 0LL, 0x80000000LL) + 8 * ((*v7 >> 3) & 0x1FFLL);
  }
  v12 = v31;
  v33 = v31;
  v13 = 0;
  if ( MiPteInShadowRange(v2) )
  {
    v29 = MiSanitizeShadowPxe(MmInternal, (__int64)&v33, v16);
    v12 = v33;
    v13 = v29;
  }
  *(_QWORD *)v2 = v12;
  if ( v13 )
    MiWritePteShadow(v2, v12, v16, v17);
  if ( v11 )
  {
    MmInternal = (__int64)KeGetCurrentPrcb()->MmInternal;
    *(_QWORD *)MmInternal = 0LL;
    *(_QWORD *)(((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  }
  if ( *(__int64 *)(BugCheckParameter2 + 40) < 0 )
  {
    MmInternal = *v6;
    if ( (*v6 & 0x400) != 0 )
    {
      if ( qword_140E2DCC0 && (MmInternal & 0x10) == 0 )
        MmInternal &= ~qword_140E2DCC0;
      MiDereferenceControlAreaPfnList(*(_QWORD *)(MmInternal >> 16), MmInternal >> 16, 1LL, 3);
    }
  }
  if ( v11 )
  {
    v18 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v18 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(MmInternal, v14, v16, v17) )
        {
          HvlNotifyLongSpinWait(v18);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
    MiDecrementShareCountEx(v11, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( !(_DWORD)v4 )
  {
    v30 = *(_QWORD *)(BugCheckParameter2 + 40);
    v19 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(BugCheckParameter2 + 40),
            v30 & 0x8FFFFFFFFFFFFFFFuLL,
            v30);
    for ( i = v30 == v19; !i; i = v23 == v19 )
    {
      v23 = v19;
      v19 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(BugCheckParameter2 + 40),
              v19 & 0x8FFFFFFFFFFFFFFFuLL,
              v19);
    }
    if ( (v32 & 1) != 0 )
    {
      LODWORD(v31) = *(_DWORD *)(BugCheckParameter2 + 32);
      BYTE3(v31) &= 0xF8u;
      *(_DWORD *)(BugCheckParameter2 + 32) = v31;
    }
    else
    {
      PfnPriority = MiGetPfnPriority(BugCheckParameter2);
      v22 = v34;
      _InterlockedIncrement((volatile signed __int32 *)(v34 + 4LL * PfnPriority + 7200));
      LODWORD(v31) = *(_DWORD *)(BugCheckParameter2 + 32);
      BYTE3(v31) &= 0xF8u;
      *(_DWORD *)(BugCheckParameter2 + 32) = v31;
      MiLogStandbyRepurpose(v22, BugCheckParameter2);
    }
  }
}
