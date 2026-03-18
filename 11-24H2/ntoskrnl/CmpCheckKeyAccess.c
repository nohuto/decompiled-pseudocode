/*
 * XREFs of CmpCheckKeyAccess @ 0x140918934
 * Callers:
 *     CmRestoreKey @ 0x1407CCF24 (CmRestoreKey.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140BB9B34 (CmpDoAccessCheckOnSubtree.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpCheckSecurityCellAccess @ 0x1409172C0 (CmpCheckSecurityCellAccess.c)
 */

__int64 __fastcall CmpCheckKeyAccess(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  __int64 CellFlat; // rax
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+44h] [rbp+Ch]

  v5 = -1;
  v6 = 0;
  if ( !BugCheckParameter3 || (unsigned int)(a2 - 1) > 0xFFFFFFFD )
    return 3221225852LL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, &v5);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2, &v5);
  if ( !CellFlat )
    return 3221225626LL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v5);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v5);
  return CmpCheckSecurityCellAccess(BugCheckParameter3);
}
