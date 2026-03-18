/*
 * XREFs of MiFinalizeImageHeaderPage @ 0x14049EAB8
 * Callers:
 *     MiCreateNewSection @ 0x1409433C0 (MiCreateNewSection.c)
 * Callees:
 *     MiReleaseFreshPageAtDpc @ 0x140222030 (MiReleaseFreshPageAtDpc.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x1402236D0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MI_NODE_FROM_PFN @ 0x1402245F0 (MI_NODE_FROM_PFN.c)
 *     MiReplaceTransitionPage @ 0x140224B14 (MiReplaceTransitionPage.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiCheckSlabPage @ 0x140244708 (MiCheckSlabPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUseSlabAllocator @ 0x1402E84B8 (MiUseSlabAllocator.c)
 *     MiGetSlabPage @ 0x1402F3934 (MiGetSlabPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402F6568 (MiSetOriginalPtePfnFromFreeList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
  __int64 v11; // rdx
  __int64 result; // rax
  int v13; // esi
  unsigned int v14; // eax
  __int64 SlabPage; // rax
  int PfnSlabType; // eax
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF

  v1 = (__int64 *)(BugCheckParameter2 + 16);
  v2 = *(_QWORD *)(BugCheckParameter2 + 16);
  v17 = 0;
  if ( qword_140E2DB80 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140E2DB80;
  v4 = v2 >> 16;
  v5 = 0LL;
  v6 = *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(*(_QWORD *)v4 + 60LL) & 0x3FF));
  v7 = MI_NODE_FROM_PFN(BugCheckParameter2);
  if ( (unsigned int)MiUseSlabAllocator(v6, (_DWORD *)v4, *v1, v7, &v17) )
  {
    v13 = v17;
    if ( v17 <= 4
      && ((unsigned int)MiGetPfnSlabType(BugCheckParameter2) == 9
       || !(unsigned int)MiCheckSlabPage(BugCheckParameter2, v13, 1)) )
    {
      v14 = MI_PAGE_TO_FULL_COLOR(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
      SlabPage = MiGetSlabPage(v6, v13, v14, 0, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0x20000u);
      if ( SlabPage != -1 )
        v5 = 48 * SlabPage - 0x220000000000LL;
    }
  }
  v8 = (unsigned __int8)MiLockPageInline(BugCheckParameter2);
  MiRemoveLockedPageChargeAndDecRef(BugCheckParameter2, v9, v10);
  if ( v5 )
  {
    if ( !(unsigned __int16)*(_DWORD *)(BugCheckParameter2 + 32)
      && *(char *)(BugCheckParameter2 + 35) >= 0
      && (unsigned __int8)((*(_BYTE *)(BugCheckParameter2 + 34) & 7) - 2) <= 1u
      && (unsigned int)MiGetPfnSlabType(v5) != 9 )
    {
      PfnSlabType = MiGetPfnSlabType(BugCheckParameter2);
      if ( (unsigned int)MiReplaceTransitionPage(BugCheckParameter2, v5, PfnSlabType, 0) )
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
    LOBYTE(v11) = v8;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
  }
  __writecr8(v8);
  return result;
}
