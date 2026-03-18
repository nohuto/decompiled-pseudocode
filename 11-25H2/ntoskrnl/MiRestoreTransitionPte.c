/*
 * XREFs of MiRestoreTransitionPte @ 0x14024EBD8
 * Callers:
 *     MiWriteCompletePfn @ 0x14020D42C (MiWriteCompletePfn.c)
 *     MiRelinkStandbyPage @ 0x14021A0E8 (MiRelinkStandbyPage.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiUnlinkStandbyPage @ 0x14024E2D0 (MiUnlinkStandbyPage.c)
 *     MiDiscardTransitionPteEx @ 0x1402C5640 (MiDiscardTransitionPteEx.c)
 *     MiHandleInPageError @ 0x1404541D4 (MiHandleInPageError.c)
 *     MiReuseStandbyPage @ 0x1404C2648 (MiReuseStandbyPage.c)
 *     MiRepointPteAtExtendedStandby @ 0x1406795EC (MiRepointPteAtExtendedStandby.c)
 * Callees:
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1402C9D00 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetTopLevelPfn @ 0x1402C9D70 (MiGetTopLevelPfn.c)
 *     MiClearPfnImageVerified @ 0x1402CC5F0 (MiClearPfnImageVerified.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     MiGetPagingFileOffset @ 0x14037C4CC (MiGetPagingFileOffset.c)
 *     MiUpdatePageFileHighInPte @ 0x14037C850 (MiUpdatePageFileHighInPte.c)
 *     MI_IS_RESET_PTE @ 0x1403FB340 (MI_IS_RESET_PTE.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     MiDereferenceControlAreaPfnList @ 0x140419984 (MiDereferenceControlAreaPfnList.c)
 *     MiLogStandbyRepurpose @ 0x140464478 (MiLogStandbyRepurpose.c)
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
  __int64 v10; // r14
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
  _QWORD *v22; // r8
  _QWORD *v23; // r8
  __int64 updated; // rax
  __int64 *v25; // r8
  __int64 TopLevelPfn; // rax
  __int64 v27; // rdx
  __int64 PageTablePfnBuddyRaw; // rax
  __int64 v29; // r8
  int v30; // eax
  signed __int64 v31; // [rsp+80h] [rbp+7h]
  unsigned __int64 v32; // [rsp+E0h] [rbp+67h] BYREF
  int v33; // [rsp+E8h] [rbp+6Fh]
  unsigned __int64 v34; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v35; // [rsp+F8h] [rbp+7Fh]

  v33 = a2;
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
        *v5 = MiUpdatePageFileHighInPte(*v5, 0LL);
      TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
      PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(TopLevelPfn, v27, TopLevelPfn);
      if ( v29 != BugCheckParameter2 )
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedDecrement64((volatile signed __int64 *)(PageTablePfnBuddyRaw + 648));
      if ( (HIBYTE(*(_DWORD *)(PageTablePfnBuddyRaw + 1208)) & 0x30) == 0x20 )
        _InterlockedIncrement64((volatile signed __int64 *)(PageTablePfnBuddyRaw + 1232));
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
        updated = MiUpdatePageFileHighInPte(*v23, 0LL);
        *v25 = updated;
      }
    }
    else
    {
      v5 = (unsigned __int64 *)(BugCheckParameter2 + 16);
      *(_QWORD *)(BugCheckParameter2 + 8) |= 0x8000000000000000uLL;
    }
    v6 = (_QWORD *)(BugCheckParameter2 + 8);
  }
  v7 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
  v32 = *v5;
  v35 = v7;
  v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v32);
  v32 = v8 & ((-(__int64)((v8 & 0x400) != 0) & 0xFFFFFFFFFFFFF808uLL) - 9);
  if ( v2 )
  {
    v10 = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL;
    v10 = 48 * v9 - 0x220000000000LL;
    v2 = MiMapPageInHyperSpaceWorker(v9, 0LL, 0x80000000) + 8 * ((*v6 >> 3) & 0x1FFLL);
  }
  v11 = v32;
  v34 = v32;
  v12 = 0;
  if ( MiPteInShadowRange(v2) )
  {
    v30 = MiSanitizeShadowPxe(MmInternal, &v34);
    v11 = v34;
    v12 = v30;
  }
  *(_QWORD *)v2 = v11;
  if ( v12 )
    MiWritePteShadow(v2, v11);
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
      if ( qword_140E2D940 && (MmInternal & 0x10) == 0 )
        MmInternal &= ~qword_140E2D940;
      result = MiDereferenceControlAreaPfnList(*(_QWORD *)(MmInternal >> 16), MmInternal >> 16, 1LL, 3LL);
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
    v31 = *(_QWORD *)(BugCheckParameter2 + 40);
    v16 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(BugCheckParameter2 + 40),
            v31 & 0x8FFFFFFFFFFFFFFFuLL,
            v31);
    for ( i = v31 == v16; !i; i = v20 == v16 )
    {
      v20 = v16;
      v16 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(BugCheckParameter2 + 40),
              v16 & 0x8FFFFFFFFFFFFFFFuLL,
              v16);
    }
    if ( (v33 & 1) != 0 )
    {
      LODWORD(v32) = *(_DWORD *)(BugCheckParameter2 + 32);
      BYTE3(v32) &= 0xF8u;
      result = (unsigned int)v32;
      *(_DWORD *)(BugCheckParameter2 + 32) = v32;
    }
    else
    {
      PfnPriority = MiGetPfnPriority(BugCheckParameter2);
      v19 = v35;
      _InterlockedIncrement((volatile signed __int32 *)(v35 + 4LL * PfnPriority + 7200));
      LODWORD(v32) = *(_DWORD *)(BugCheckParameter2 + 32);
      BYTE3(v32) &= 0xF8u;
      *(_DWORD *)(BugCheckParameter2 + 32) = v32;
      return MiLogStandbyRepurpose(v19, BugCheckParameter2);
    }
  }
  return result;
}
