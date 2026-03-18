/*
 * XREFs of CmpReferenceSecurityNode @ 0x1407DD7B0
 * Callers:
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 * Callees:
 *     CmpKeySecurityIncrementReferenceCount @ 0x140494ECC (CmpKeySecurityIncrementReferenceCount.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpReferenceSecurityNode(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  ULONG_PTR v4; // rdx
  __int64 CellFlat; // rax
  __int64 v6; // rsi
  int v7; // edi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  HvpGetCellContextInitialize(&v9);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v4);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v6 = CellFlat;
  v7 = CmpKeySecurityIncrementReferenceCount(CellFlat, BugCheckParameter3, a2, 0);
  if ( v7 < 0 )
  {
    if ( v6 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v9);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v9);
    }
  }
  else
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v9);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v9);
    return 0;
  }
  return (unsigned int)v7;
}
