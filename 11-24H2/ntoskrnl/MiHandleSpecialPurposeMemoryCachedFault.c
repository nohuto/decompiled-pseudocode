/*
 * XREFs of MiHandleSpecialPurposeMemoryCachedFault @ 0x14043BAD0
 * Callers:
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 *     MmCopyToCachedPage @ 0x14034F0D4 (MmCopyToCachedPage.c)
 * Callees:
 *     MiDiscardTransitionPteEx @ 0x1402188CC (MiDiscardTransitionPteEx.c)
 *     MiReleaseFreshPageAtDpc @ 0x14024ED80 (MiReleaseFreshPageAtDpc.c)
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiPageAvailable @ 0x140260D7C (MiPageAvailable.c)
 *     MiLockTransitionLeafPageEx @ 0x1402EC2C0 (MiLockTransitionLeafPageEx.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiComputeFaultNode @ 0x140343670 (MiComputeFaultNode.c)
 *     MiLockLeafPage @ 0x140349740 (MiLockLeafPage.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiReuseStandbyPage @ 0x14043BE20 (MiReuseStandbyPage.c)
 *     MiReleaseFreshPageLocked @ 0x14043C168 (MiReleaseFreshPageLocked.c)
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
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  volatile signed __int32 *v25; // rdi
  __int64 v26; // rbx
  __int64 v28; // [rsp+20h] [rbp-58h] BYREF
  __int128 v29; // [rsp+28h] [rbp-50h] BYREF
  unsigned int v30; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v31; // [rsp+98h] [rbp+20h] BYREF

  v28 = 0LL;
  v7 = 0LL;
  v9 = (*(_QWORD *)(a4 + 40) >> 43) & 0x3FFLL;
  v29 = 0LL;
  v10 = **(_QWORD **)(*((_QWORD *)qword_140E300C8 + v9) + 17624LL);
  if ( *(__int64 *)(a4 + 40) < 0 )
  {
    v11 = *(_QWORD *)(a4 + 16);
    if ( (v11 & 0x400) != 0 )
    {
      if ( qword_140E2DCC0 && (v11 & 0x10) == 0 )
        v11 &= ~qword_140E2DCC0;
      v7 = *(_QWORD *)(v11 >> 16);
    }
  }
  if ( a1 )
  {
    v12 = MiComputeFaultNode(a1, v7, &v28, v7);
    v13 = a1[7];
    v14 = v12;
  }
  else
  {
    v14 = (*(_DWORD *)(v7 + 56) >> 20) & 0x7F;
    v13 = 0LL;
  }
  MiInitializePageColorBase(v13, 3, v14, (__int64)&v29);
  v15 = _InterlockedExchangeAdd((volatile signed __int32 *)v29, 1u);
  v16 = DWORD2(v29) ^ (unsigned __int8)(BYTE8(v29) ^ (v15 % dword_140E2DD00[(*((_QWORD *)&v29 + 1) >> 16) & 3LL]));
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
      v20 = MiLockLeafPage(a3, 2);
    else
      v20 = MiLockTransitionLeafPageEx((ULONG_PTR)a3, 0LL, 1);
    a4 = v20;
    if ( !v20 )
    {
      v24 = 48 * Page - 0x220000000000LL;
LABEL_39:
      MiReleaseFreshPageAtDpc(v24, v21, v22, v23);
      return 0LL;
    }
    if ( (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0 )
    {
      v30 = 0;
      v25 = (volatile signed __int32 *)(48 * Page - 0x220000000000LL + 24);
      while ( _interlockedbittestandset64(v25, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v30);
        while ( *(__int64 *)v25 < 0 );
      }
      MiReleaseFreshPageLocked(48 * Page - 0x220000000000LL);
      goto LABEL_36;
    }
LABEL_28:
    v26 = 48 * Page - 0x220000000000LL;
    if ( (MiUnlinkPageFromListEx(a4, 4) & 3) != 0 || *(char *)(a4 + 35) < 0 )
    {
      MiDiscardTransitionPteEx(a4);
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v24 = 48 * Page - 0x220000000000LL;
      goto LABEL_39;
    }
    v31 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v31);
      while ( *(__int64 *)(v26 + 24) < 0 );
    }
    v25 = (volatile signed __int32 *)(a4 + 24);
    if ( (unsigned int)MiReplaceTransitionPage(a4, 48 * Page - 0x220000000000LL, 9, 3) )
    {
      *(_QWORD *)(a4 + 16) = CLFS_LSN_NULL_EXT;
      MiSetOriginalPtePfnFromFreeList((__int64 *)(a4 + 16));
      MiReleaseFreshPageLocked(a4);
      _InterlockedAnd64((volatile signed __int64 *)v25, 0x7FFFFFFFFFFFFFFFuLL);
      MiInsertPageInList(48 * Page - 0x220000000000LL, 4u);
      return 48 * Page - 0x220000000000LL;
    }
    MiReleaseFreshPageLocked(48 * Page - 0x220000000000LL);
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiDiscardTransitionPteEx(a4);
    a4 = 0LL;
LABEL_36:
    _InterlockedAnd64((volatile signed __int64 *)v25, 0x7FFFFFFFFFFFFFFFuLL);
    return a4;
  }
  MiReuseStandbyPage(a4, v19);
  MiReleaseFreshPageLocked(a4);
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
