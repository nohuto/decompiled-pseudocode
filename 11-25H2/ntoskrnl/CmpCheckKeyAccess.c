/*
 * XREFs of CmpCheckKeyAccess @ 0x140A485A0
 * Callers:
 *     CmRestoreKey @ 0x1407BD70C (CmRestoreKey.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140BA9BBC (CmpDoAccessCheckOnSubtree.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpCheckSecurityCellAccess @ 0x140A48654 (CmpCheckSecurityCellAccess.c)
 */

__int64 __fastcall CmpCheckKeyAccess(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, __int64 a3, __int64 a4, char a5)
{
  __int64 CellFlat; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0xFFFFFFFFLL;
  if ( !BugCheckParameter3 || (unsigned int)(a2 - 1) > 0xFFFFFFFD )
    return 3221225852LL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, &v8);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2, &v8);
  if ( !CellFlat )
    return 3221225626LL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v8);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v8);
  return CmpCheckSecurityCellAccess(BugCheckParameter3, a5);
}
