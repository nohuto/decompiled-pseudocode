/*
 * XREFs of MiHandleSpecialPurposeMemoryCachedFault @ 0x1404C22F8
 * Callers:
 *     MmCopyToCachedPage @ 0x140223414 (MmCopyToCachedPage.c)
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiDiscardTransitionPteEx @ 0x1402C5640 (MiDiscardTransitionPteEx.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiLockLeafPage @ 0x14033B770 (MiLockLeafPage.c)
 *     MiReleaseFreshPageLocked @ 0x140342C10 (MiReleaseFreshPageLocked.c)
 *     MiReleaseFreshPageAtDpc @ 0x140343330 (MiReleaseFreshPageAtDpc.c)
 *     MiComputeFaultNode @ 0x14037C200 (MiComputeFaultNode.c)
 *     MiPageAvailable @ 0x1403BFA7C (MiPageAvailable.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiLockTransitionLeafPageEx @ 0x14040D774 (MiLockTransitionLeafPageEx.c)
 *     MiReuseStandbyPage @ 0x1404C2648 (MiReuseStandbyPage.c)
 */

__int64 __fastcall MiHandleSpecialPurposeMemoryCachedFault(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        ULONG_PTR a4)
{
  __int64 v7; // r9
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  int v14; // r8d
  unsigned __int32 v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // ebx
  __int64 Page; // r14
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  volatile signed __int32 *v24; // rdi
  __int64 v25; // rbx
  struct _LIST_ENTRY *v27; // [rsp+20h] [rbp-58h] BYREF
  __int128 v28; // [rsp+28h] [rbp-50h] BYREF
  int v29; // [rsp+80h] [rbp+8h] BYREF
  int v30; // [rsp+98h] [rbp+20h] BYREF

  v27 = 0LL;
  v7 = 0LL;
  v9 = (*(_QWORD *)(a4 + 40) >> 43) & 0x3FFLL;
  v28 = 0LL;
  v10 = **(_QWORD **)(*((_QWORD *)qword_140E2FD48 + v9) + 17624LL);
  if ( *(__int64 *)(a4 + 40) < 0 )
  {
    v11 = *(_QWORD *)(a4 + 16);
    if ( (v11 & 0x400) != 0 )
    {
      if ( qword_140E2D940 && (v11 & 0x10) == 0 )
        v11 &= ~qword_140E2D940;
      v7 = *(_QWORD *)(v11 >> 16);
    }
  }
  if ( a1 )
  {
    v12 = MiComputeFaultNode(a1, (struct _LIST_ENTRY *)v7, &v27);
    v13 = *(_QWORD *)(a1 + 56);
    v14 = v12;
  }
  else
  {
    v14 = (*(_DWORD *)(v7 + 56) >> 20) & 0x7F;
    v13 = 0LL;
  }
  MiInitializePageColorBase(v13, 3, v14, (__int64)&v28);
  v15 = _InterlockedExchangeAdd((volatile signed __int32 *)v28, 1u);
  v16 = DWORD2(v28) ^ (unsigned __int8)(BYTE8(v28) ^ (v15 % dword_140E2D980[(*((_QWORD *)&v28 + 1) >> 16) & 3LL]));
  v17 = 131;
  if ( (unsigned int)MiGetSystemRegionType(a2) != 11 )
    v17 = 3;
  Page = MiGetPage(v10, v16, v17);
  if ( Page != -1 )
    goto LABEL_28;
  if ( (unsigned int)MiPageAvailable(v10, v17) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    Page = MiGetPage(v10, v16, v17 & 0xFFFFFFFD);
    if ( Page == -1 )
      return 0LL;
    if ( (unsigned __int64)a3 < 0xFFFFF68000000000uLL || (unsigned __int64)a3 > 0xFFFFF6FFFFFFFFFFuLL )
      v22 = MiLockLeafPage(a3, 2);
    else
      v22 = MiLockTransitionLeafPageEx((ULONG_PTR)a3, 0LL, 1);
    a4 = v22;
    if ( !v22 )
    {
      v23 = 48 * Page - 0x220000000000LL;
LABEL_39:
      MiReleaseFreshPageAtDpc(v23);
      return 0LL;
    }
    if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v22 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0 )
    {
      v29 = 0;
      v24 = (volatile signed __int32 *)(48 * Page - 0x220000000000LL + 24);
      while ( _interlockedbittestandset64(v24, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v29);
        while ( *(__int64 *)v24 < 0 );
      }
      MiReleaseFreshPageLocked(48 * Page - 0x220000000000LL);
      goto LABEL_36;
    }
LABEL_28:
    v25 = 48 * Page - 0x220000000000LL;
    if ( (MiUnlinkPageFromListEx(a4, 4) & 3) != 0 || *(char *)(a4 + 35) < 0 )
    {
      MiDiscardTransitionPteEx(a4);
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v23 = 48 * Page - 0x220000000000LL;
      goto LABEL_39;
    }
    v30 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v30);
      while ( *(__int64 *)(v25 + 24) < 0 );
    }
    v24 = (volatile signed __int32 *)(a4 + 24);
    if ( (unsigned int)MiReplaceTransitionPage((__int64 *)a4, 48 * Page - 0x220000000000LL, 9, 3) )
    {
      *(_QWORD *)(a4 + 16) = CLFS_LSN_NULL_EXT;
      MiSetOriginalPtePfnFromFreeList((__int64 *)(a4 + 16));
      MiReleaseFreshPageLocked(a4);
      _InterlockedAnd64((volatile signed __int64 *)v24, 0x7FFFFFFFFFFFFFFFuLL);
      MiInsertPageInList(48 * Page - 0x220000000000LL, 4u);
      return 48 * Page - 0x220000000000LL;
    }
    MiReleaseFreshPageLocked(48 * Page - 0x220000000000LL);
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiDiscardTransitionPteEx(a4);
    a4 = 0LL;
LABEL_36:
    _InterlockedAnd64((volatile signed __int64 *)v24, 0x7FFFFFFFFFFFFFFFuLL);
    return a4;
  }
  MiReuseStandbyPage(a4, v19, v20, v21);
  MiReleaseFreshPageLocked(a4);
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
