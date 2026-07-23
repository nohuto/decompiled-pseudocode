/*
 * XREFs of MiFinalizeImageHeaderPage @ 0x1404998B8
 * Callers:
 *     MiCreateNewSection @ 0x14098D630 (MiCreateNewSection.c)
 * Callees:
 *     MiCheckSlabPage @ 0x14020CE98 (MiCheckSlabPage.c)
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x14024ED80 (MiReleaseFreshPageAtDpc.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140250420 (MI_PAGE_TO_FULL_COLOR.c)
 *     MI_NODE_FROM_PFN @ 0x140251340 (MI_NODE_FROM_PFN.c)
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiUseSlabAllocator @ 0x140349AF8 (MiUseSlabAllocator.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiFinalizeImageHeaderPage(ULONG_PTR a1)
{
  __int64 *v1; // r14
  __int64 v2; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbp
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 result; // rax
  int v19; // esi
  unsigned int v20; // eax
  __int64 SlabPage; // rax
  int PfnSlabType; // eax
  unsigned int v23; // [rsp+60h] [rbp+8h] BYREF

  v1 = (__int64 *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 16);
  v23 = 0;
  if ( qword_140E2DCC0 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140E2DCC0;
  v4 = v2 >> 16;
  v5 = 0LL;
  v6 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(*(_QWORD *)v4 + 60LL) & 0x3FF));
  v7 = MI_NODE_FROM_PFN(a1);
  if ( (unsigned int)MiUseSlabAllocator(v6, (_DWORD *)v4, *v1, v7, &v23) )
  {
    v19 = v23;
    if ( v23 <= 4 && ((unsigned int)MiGetPfnSlabType(a1) == 9 || !(unsigned int)MiCheckSlabPage(a1, v19, 1)) )
    {
      v20 = MI_PAGE_TO_FULL_COLOR(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4));
      SlabPage = MiGetSlabPage(v6, v19, v20, 0, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0x20000u);
      if ( SlabPage != -1 )
        v5 = 48 * SlabPage - 0x220000000000LL;
    }
  }
  v11 = (unsigned __int8)MiLockPageInline(a1, v8, v9, v10);
  MiRemoveLockedPageChargeAndDecRef(a1, v12, v13, v14);
  if ( v5 )
  {
    if ( !(unsigned __int16)*(_DWORD *)(a1 + 32)
      && *(char *)(a1 + 35) >= 0
      && (unsigned __int8)((*(_BYTE *)(a1 + 34) & 7) - 2) <= 1u
      && (unsigned int)MiGetPfnSlabType(v5) != 9 )
    {
      PfnSlabType = MiGetPfnSlabType(a1);
      if ( (unsigned int)MiReplaceTransitionPage(a1, v5, PfnSlabType, 0) )
      {
        *(_QWORD *)(a1 + 16) = CLFS_LSN_NULL_EXT;
        MiSetOriginalPtePfnFromFreeList(v1);
        v5 = a1;
      }
    }
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v5 )
    result = MiReleaseFreshPageAtDpc(v5, v15, v16, v17);
  if ( KiIrqlFlags )
  {
    LOBYTE(v15) = v11;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
  }
  __writecr8(v11);
  return result;
}
