/*
 * XREFs of MiFinalizeImageHeaderPage @ 0x1404A1818
 * Callers:
 *     MiCreateNewSection @ 0x14093EAC0 (MiCreateNewSection.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MI_NODE_FROM_PFN @ 0x14021CB00 (MI_NODE_FROM_PFN.c)
 *     MiGetSlabPage @ 0x14022BC70 (MiGetSlabPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiCheckSlabPage @ 0x1403234E8 (MiCheckSlabPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiUseSlabAllocator @ 0x14033BB18 (MiUseSlabAllocator.c)
 *     MiReleaseFreshPageAtDpc @ 0x140343330 (MiReleaseFreshPageAtDpc.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140344980 (MI_PAGE_TO_FULL_COLOR.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiFinalizeImageHeaderPage(ULONG_PTR BugCheckParameter2)
{
  __int64 *v1; // r14
  __int64 v2; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbp
  unsigned int v7; // eax
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 result; // rax
  int v14; // esi
  unsigned int v15; // eax
  __int64 SlabPage; // rax
  int PfnSlabType; // eax
  unsigned int v18; // [rsp+60h] [rbp+8h] BYREF

  v1 = (__int64 *)(BugCheckParameter2 + 16);
  v2 = *(_QWORD *)(BugCheckParameter2 + 16);
  v18 = 0;
  if ( qword_140E2D940 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140E2D940;
  v4 = v2 >> 16;
  v5 = 0LL;
  v6 = *((_QWORD *)qword_140E2FD48 + (*(_WORD *)(*(_QWORD *)v4 + 60LL) & 0x3FF));
  v7 = MI_NODE_FROM_PFN(BugCheckParameter2);
  if ( (unsigned int)MiUseSlabAllocator(v6, (_DWORD *)v4, *v1, v7, &v18) )
  {
    v14 = v18;
    if ( v18 <= 4
      && ((unsigned int)MiGetPfnSlabType(BugCheckParameter2) == 9
       || !(unsigned int)MiCheckSlabPage(BugCheckParameter2, v14, 1)) )
    {
      v15 = MI_PAGE_TO_FULL_COLOR(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
      SlabPage = MiGetSlabPage(v6, v14, v15, 0, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0x20000u);
      if ( SlabPage != -1 )
        v5 = 48 * SlabPage - 0x220000000000LL;
    }
  }
  v8 = (unsigned __int8)MiLockPageInline(BugCheckParameter2);
  MiRemoveLockedPageChargeAndDecRef(BugCheckParameter2, v9, v10, v11);
  if ( v5 )
  {
    if ( !(unsigned __int16)*(_DWORD *)(BugCheckParameter2 + 32)
      && *(char *)(BugCheckParameter2 + 35) >= 0
      && (unsigned __int8)((*(_BYTE *)(BugCheckParameter2 + 34) & 7) - 2) <= 1u
      && (unsigned int)MiGetPfnSlabType(v5) != 9 )
    {
      PfnSlabType = MiGetPfnSlabType(BugCheckParameter2);
      if ( (unsigned int)MiReplaceTransitionPage((__int64 *)BugCheckParameter2, v5, PfnSlabType, 0) )
      {
        *(_QWORD *)(BugCheckParameter2 + 16) = CLFS_LSN_NULL_EXT;
        MiSetOriginalPtePfnFromFreeList(v1);
        v5 = BugCheckParameter2;
      }
    }
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v5 )
    result = MiReleaseFreshPageAtDpc(v5);
  if ( KiIrqlFlags )
  {
    LOBYTE(v12) = v8;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
  }
  __writecr8(v8);
  return result;
}
