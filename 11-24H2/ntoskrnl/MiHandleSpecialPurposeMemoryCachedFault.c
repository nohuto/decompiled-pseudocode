/*
 * XREFs of MiHandleSpecialPurposeMemoryCachedFault @ 0x140442B00
 * Callers:
 *     MiResolveTransitionFault @ 0x14021A2F0 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x140280E90 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x1402EDA94 (MmCopyToCachedPage.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiReleaseFreshPageAtDpc @ 0x140222030 (MiReleaseFreshPageAtDpc.c)
 *     MiReplaceTransitionPage @ 0x140224B14 (MiReplaceTransitionPage.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiLockLeafPage @ 0x1402E8100 (MiLockLeafPage.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402F6568 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiComputeFaultNode @ 0x1402FA290 (MiComputeFaultNode.c)
 *     MiLockTransitionLeafPageEx @ 0x14036A520 (MiLockTransitionLeafPageEx.c)
 *     MiDiscardTransitionPteEx @ 0x1403A1C98 (MiDiscardTransitionPteEx.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     MiReuseStandbyPage @ 0x140442E50 (MiReuseStandbyPage.c)
 *     MiPageAvailable @ 0x140442ECC (MiPageAvailable.c)
 *     MiReleaseFreshPageLocked @ 0x14044321C (MiReleaseFreshPageLocked.c)
 */

__int64 __fastcall MiHandleSpecialPurposeMemoryCachedFault(
        _QWORD *a1,
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
  ULONG_PTR v19; // rax
  __int64 v20; // rcx
  volatile signed __int32 *v21; // rdi
  __int64 v22; // rbx
  __int64 v24; // [rsp+20h] [rbp-58h] BYREF
  __int128 v25; // [rsp+28h] [rbp-50h] BYREF
  unsigned int v26; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v27; // [rsp+98h] [rbp+20h] BYREF

  v24 = 0LL;
  v7 = 0LL;
  v9 = (*(_QWORD *)(a4 + 40) >> 43) & 0x3FFLL;
  v25 = 0LL;
  v10 = **(_QWORD **)(*((_QWORD *)qword_140E2FF88 + v9) + 17624LL);
  if ( *(__int64 *)(a4 + 40) < 0 )
  {
    v11 = *(_QWORD *)(a4 + 16);
    if ( (v11 & 0x400) != 0 )
    {
      if ( qword_140E2DB80 && (v11 & 0x10) == 0 )
        v11 &= ~qword_140E2DB80;
      v7 = *(_QWORD *)(v11 >> 16);
    }
  }
  if ( a1 )
  {
    v12 = MiComputeFaultNode(a1, v7, &v24);
    v13 = a1[7];
    v14 = v12;
  }
  else
  {
    v14 = (*(_DWORD *)(v7 + 56) >> 20) & 0x7F;
    v13 = 0LL;
  }
  MiInitializePageColorBase(v13, 3, v14, (__int64)&v25);
  v15 = _InterlockedExchangeAdd((volatile signed __int32 *)v25, 1u);
  v16 = DWORD2(v25) ^ (unsigned __int8)(BYTE8(v25) ^ (v15 % dword_140E2DBC0[(*((_QWORD *)&v25 + 1) >> 16) & 3LL]));
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
      v19 = MiLockLeafPage(a3, 2);
    else
      v19 = MiLockTransitionLeafPageEx((ULONG_PTR)a3, 0LL, 1);
    a4 = v19;
    if ( !v19 )
    {
      v20 = 48 * Page - 0x220000000000LL;
LABEL_39:
      MiReleaseFreshPageAtDpc(v20);
      return 0LL;
    }
    if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v19 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0 )
    {
      v26 = 0;
      v21 = (volatile signed __int32 *)(48 * Page - 0x220000000000LL + 24);
      while ( _interlockedbittestandset64(v21, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v26);
        while ( *(__int64 *)v21 < 0 );
      }
      MiReleaseFreshPageLocked(48 * Page - 0x220000000000LL);
      goto LABEL_36;
    }
LABEL_28:
    v22 = 48 * Page - 0x220000000000LL;
    if ( (MiUnlinkPageFromListEx(a4, 4) & 3) != 0 || *(char *)(a4 + 35) < 0 )
    {
      MiDiscardTransitionPteEx(a4, 0);
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v20 = 48 * Page - 0x220000000000LL;
      goto LABEL_39;
    }
    v27 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v27);
      while ( *(__int64 *)(v22 + 24) < 0 );
    }
    v21 = (volatile signed __int32 *)(a4 + 24);
    if ( (unsigned int)MiReplaceTransitionPage(a4, 48 * Page - 0x220000000000LL, 9, 3) )
    {
      *(_QWORD *)(a4 + 16) = CLFS_LSN_NULL_EXT;
      MiSetOriginalPtePfnFromFreeList((__int64 *)(a4 + 16));
      MiReleaseFreshPageLocked(a4);
      _InterlockedAnd64((volatile signed __int64 *)v21, 0x7FFFFFFFFFFFFFFFuLL);
      MiInsertPageInList(48 * Page - 0x220000000000LL, 4u);
      return 48 * Page - 0x220000000000LL;
    }
    MiReleaseFreshPageLocked(48 * Page - 0x220000000000LL);
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiDiscardTransitionPteEx(a4, 0);
    a4 = 0LL;
LABEL_36:
    _InterlockedAnd64((volatile signed __int64 *)v21, 0x7FFFFFFFFFFFFFFFuLL);
    return a4;
  }
  MiReuseStandbyPage(a4);
  MiReleaseFreshPageLocked(a4);
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
