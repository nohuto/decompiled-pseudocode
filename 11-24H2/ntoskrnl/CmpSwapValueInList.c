/*
 * XREFs of CmpSwapValueInList @ 0x140497A48
 * Callers:
 *     CmSetValueKey @ 0x14086B130 (CmSetValueKey.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1409FEC68 (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpSwapValueInList(ULONG_PTR a1, int a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // edi
  bool v5; // zf
  ULONG_PTR v7; // rdx
  __int64 v9; // rsi
  __int64 CellPaged; // rax
  int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+34h] [rbp+Ch]

  v12 = -1;
  v4 = 0;
  v5 = (*(_BYTE *)(a1 + 140) & 1) == 0;
  v7 = *(unsigned int *)(a4 + 4);
  v9 = a3;
  v13 = 0;
  if ( v5 )
    CellPaged = HvpGetCellPaged(a1);
  else
    CellPaged = HvpGetCellFlat(a1, v7);
  if ( CellPaged )
  {
    *(_DWORD *)(CellPaged + 4 * v9) = a2;
    if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a1, &v12);
    else
      HvpReleaseCellPaged(a1, &v12);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
