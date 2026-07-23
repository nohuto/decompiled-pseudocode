/*
 * XREFs of CmpFindSubKeyByNumber @ 0x140888160
 * Callers:
 *     CmDeleteLayeredKey @ 0x14040AAA8 (CmDeleteLayeredKey.c)
 *     CmpPreserveSystemHiveData @ 0x1407E26F8 (CmpPreserveSystemHiveData.c)
 *     CmpMarkAllChildrenDirty @ 0x1407E3300 (CmpMarkAllChildrenDirty.c)
 *     CmpUpdateParentForEachSon @ 0x1407E3798 (CmpUpdateParentForEachSon.c)
 *     CmpDeleteTree @ 0x1407E4024 (CmpDeleteTree.c)
 *     CmpCopySyncTree2 @ 0x1408877A4 (CmpCopySyncTree2.c)
 *     CmpEnumerateLayeredKey @ 0x140909AC4 (CmpEnumerateLayeredKey.c)
 *     CmpClearKeyAccessBits @ 0x140933420 (CmpClearKeyAccessBits.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140AA89B0 (CmpSyncSubKeysAfterDelete.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140BBBB34 (CmpDoAccessCheckOnSubtree.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140C4A598 (CmSelectQualifiedInstallLanguage.c)
 *     CmpFindDrivers @ 0x140C4D668 (CmpFindDrivers.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpFindSubKeyByNumber(ULONG_PTR BugCheckParameter3, _DWORD *a2, unsigned int a3, int *a4)
{
  unsigned int v4; // eax
  int v5; // r14d
  unsigned int v7; // ebp
  ULONG_PTR v9; // rdx
  _WORD *CellFlat; // rax
  _WORD *v11; // rbx
  unsigned int i; // esi
  ULONG_PTR v14; // rdx
  __int64 CellPaged; // rax
  _WORD *v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // [rsp+58h] [rbp+10h] BYREF
  int v19; // [rsp+5Ch] [rbp+14h]
  unsigned int v20; // [rsp+68h] [rbp+20h] BYREF
  int v21; // [rsp+6Ch] [rbp+24h]

  v4 = a2[5];
  v21 = 0;
  v5 = -1;
  v20 = -1;
  *a4 = -1;
  v7 = a3;
  if ( a3 >= v4 )
  {
    if ( *(_DWORD *)(BugCheckParameter3 + 216) <= 1u )
      return 0LL;
    v7 = a3 - v4;
    if ( a3 - v4 >= a2[6] )
      return 0LL;
    v9 = (unsigned int)a2[8];
  }
  else
  {
    v9 = (unsigned int)a2[7];
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v9, &v20);
  else
    CellFlat = (_WORD *)HvpGetCellPaged(BugCheckParameter3, v9, &v20);
  v11 = CellFlat;
  if ( CellFlat )
  {
    v18 = -1;
    v19 = 0;
    if ( *CellFlat == 26994 )
    {
      for ( i = 0; i < (unsigned __int16)v11[1]; ++i )
      {
        v14 = *(unsigned int *)&v11[2 * i + 2];
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          CellPaged = HvpGetCellFlat(BugCheckParameter3, v14, &v18);
        else
          CellPaged = HvpGetCellPaged(BugCheckParameter3, v14, &v18);
        v16 = (_WORD *)CellPaged;
        if ( !CellPaged )
          goto LABEL_9;
        v17 = *(unsigned __int16 *)(CellPaged + 2);
        if ( v7 < v17 )
        {
          if ( ((*v16 - 26220) & 0xFDFF) != 0 )
            v5 = *(_DWORD *)&v16[2 * v7 + 2];
          else
            v5 = *(_DWORD *)&v16[4 * v7 + 2];
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v18);
          else
            HvpReleaseCellPaged(BugCheckParameter3, &v18);
          goto LABEL_9;
        }
        v7 -= v17;
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v18);
        else
          HvpReleaseCellPaged(BugCheckParameter3, &v18);
      }
    }
    if ( ((*v11 - 26220) & 0xFDFF) != 0 )
      v5 = *(_DWORD *)&v11[2 * v7 + 2];
    else
      v5 = *(_DWORD *)&v11[4 * v7 + 2];
LABEL_9:
    *a4 = v5;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v20);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v20);
    return 0LL;
  }
  return 3221225626LL;
}
