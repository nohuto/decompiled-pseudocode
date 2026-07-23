/*
 * XREFs of CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140909474
 * Callers:
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1407E444C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140907DA0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSubtree @ 0x140908398 (CmpPromoteSubtree.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     CmpAddSubKeyEx @ 0x140883094 (CmpAddSubKeyEx.c)
 *     CmpFreeKeyByCell @ 0x1408842D0 (CmpFreeKeyByCell.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1409096E4 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14090A728 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpPartialPromoteSingleKeyFromKeyNodeStacks(unsigned __int16 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 EntryAtLayerHeight; // r14
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r10
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // eax
  ULONG_PTR v14; // rbp
  int v15; // esi
  unsigned int v16; // edi
  __int64 v18; // rax
  char v19; // cl
  unsigned __int16 v20; // dx
  unsigned __int16 v21; // ax
  __int64 v22; // rdx
  _DWORD *v23; // r8
  __int64 CellFlat; // rax
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp+8h] BYREF

  v3 = *a1;
  LODWORD(BugCheckParameter4) = -1;
  EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a2, v3);
  v9 = CmpKeyNodeStackGetEntryAtLayerHeight(v6, v5);
  if ( *(_DWORD *)(EntryAtLayerHeight + 8) == -1 )
  {
    v10 = 0LL;
    while ( (v7 & 0x8000u) == 0LL )
    {
      v11 = CmpKeyNodeStackGetEntryAtLayerHeight(v8, v7);
      if ( *(_DWORD *)(v11 + 8) != -1 )
      {
        v10 = v11;
        break;
      }
      LOWORD(v7) = v7 - 1;
    }
    v12 = *(unsigned int *)(v9 + 8);
    if ( (int)v12 < 0 )
      v13 = 1;
    else
      v13 = *(_DWORD *)(v10 + 8) >> 31;
    v14 = *(_QWORD *)v9;
    v15 = CmpCopyMergeOfLayeredKeyNode(v8, *(_QWORD *)v9, v12, 2LL, v13, &BugCheckParameter4);
    if ( v15 < 0 || (v15 = HvpMarkCellDirty(v14, *(unsigned int *)(v9 + 8), 0), v15 < 0) )
    {
      v16 = BugCheckParameter4;
    }
    else
    {
      v16 = BugCheckParameter4;
      v15 = CmpAddSubKeyEx(v14, *(unsigned int *)(v9 + 8), BugCheckParameter4);
      if ( v15 >= 0 )
      {
        v18 = *(_QWORD *)(v10 + 16);
        v19 = *(_BYTE *)(v18 + 2);
        v20 = *(_WORD *)(v18 + 72);
        v21 = 2 * v20;
        if ( (v19 & 0x20) == 0 )
          v21 = v20;
        v22 = *(_QWORD *)(v9 + 16);
        if ( (unsigned __int16)*(_DWORD *)(v22 + 52) < (unsigned int)v21 )
          *(_WORD *)(v22 + 52) = v21;
        *(_QWORD *)EntryAtLayerHeight = v14;
        v23 = (_DWORD *)(EntryAtLayerHeight + 24);
        *(_DWORD *)(EntryAtLayerHeight + 8) = v16;
        if ( (*(_BYTE *)(v14 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v14, v16, v23);
        else
          CellFlat = HvpGetCellPaged(v14, v16, v23);
        *(_QWORD *)(EntryAtLayerHeight + 16) = CellFlat;
        v16 = -1;
        v15 = 0;
      }
    }
    if ( v16 != -1 )
      CmpFreeKeyByCell(v14, v16, 0);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v15;
}
