/*
 * XREFs of MiSetPfnRemovalRequested @ 0x1406757A0
 * Callers:
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiMakePageBad @ 0x140477B64 (MiMakePageBad.c)
 *     MiInitializeDynamicPfns @ 0x14066EA90 (MiInitializeDynamicPfns.c)
 *     MiHotRemoveHugeRange @ 0x140671710 (MiHotRemoveHugeRange.c)
 *     MiRemoveBadPages @ 0x14067523C (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x1406759CC (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140675D20 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMarkFileOnlyPfnBad @ 0x14067C654 (MiMarkFileOnlyPfnBad.c)
 * Callees:
 *     MI_NODE_FROM_PFN @ 0x140251340 (MI_NODE_FROM_PFN.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiGetBaseResidentPage @ 0x140310FE0 (MiGetBaseResidentPage.c)
 *     MiAnyPagesRemovalPending @ 0x14046B54C (MiAnyPagesRemovalPending.c)
 *     MiAddPendingBadPageNode @ 0x140674684 (MiAddPendingBadPageNode.c)
 *     MiRemovePendingBadPageNode @ 0x1406753AC (MiRemovePendingBadPageNode.c)
 */

void __fastcall MiSetPfnRemovalRequested(unsigned __int64 a1, int a2, int a3, _QWORD *a4)
{
  __int64 BaseResidentPage; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbp
  int PfnPageSizeIndex; // r15d
  __int64 v12; // rcx
  unsigned int v13; // [rsp+58h] [rbp+10h]

  v13 = *(_DWORD *)(a1 + 32);
  if ( ((v13 >> 30) & 1) == a2 )
    return;
  BaseResidentPage = 0LL;
  v9 = 0LL;
  v10 = -1LL;
  PfnPageSizeIndex = 3;
  if ( (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) == 0 )
  {
    v12 = *(_QWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 16LL)
        + 57216LL * (unsigned int)MI_NODE_FROM_PFN(a1);
    if ( a2 )
      _InterlockedIncrement64((volatile signed __int64 *)(v12 + 15256));
    else
      _InterlockedAdd64((volatile signed __int64 *)(v12 + 15256), 0xFFFFFFFFFFFFFFFFuLL);
    if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 )
    {
      BaseResidentPage = MiGetBaseResidentPage(a1);
      v9 = *(_QWORD *)(BaseResidentPage + 40);
      v10 = 0xAAAAAAAAAAAAAAABuLL * ((BaseResidentPage + 0x220000000000LL) >> 4);
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage);
    }
  }
  HIBYTE(v13) = HIBYTE(v13) & 0xBF | ((a2 & 1) << 6);
  *(_DWORD *)(a1 + 32) = v13;
  if ( BaseResidentPage )
  {
    if ( a2 )
    {
      if ( (v9 & 0x20000000000LL) == 0 )
        *(_QWORD *)(BaseResidentPage + 40) |= 0x20000000000uLL;
      goto LABEL_21;
    }
    if ( !(unsigned int)MiAnyPagesRemovalPending(v10, PfnPageSizeIndex) )
      *(_QWORD *)(BaseResidentPage + 40) &= ~0x20000000000uLL;
LABEL_14:
    if ( a3 )
      MiRemovePendingBadPageNode(a1);
    goto LABEL_16;
  }
  if ( !a2 )
    goto LABEL_14;
LABEL_21:
  MiAddPendingBadPageNode(a1, a4);
LABEL_16:
  if ( BaseResidentPage )
  {
    if ( BaseResidentPage != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
}
