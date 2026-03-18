/*
 * XREFs of CmpLightWeightSwapParentSubKeyList @ 0x1409DAA0C
 * Callers:
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1409DA0D4 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x1409DA778 (CmpLightWeightCommitAddKeyUoW.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpLightWeightSwapParentSubKeyList(ULONG_PTR a1, ULONG_PTR a2, __int64 a3)
{
  __int64 CellFlat; // rax
  int *v6; // r9
  __int64 v7; // rdi
  __int64 v8; // r11
  int v9; // ecx
  int v10; // edx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(a1, a2, &v12);
  else
    CellFlat = HvpGetCellPaged(a1, a2, &v12);
  v6 = (int *)(CellFlat + 20);
  v7 = a3 - CellFlat;
  v8 = 2LL;
  do
  {
    v9 = v6[2];
    v10 = *v6;
    v6[2] = *(int *)((char *)v6 + v7 - 8);
    *v6 = *(int *)((char *)v6 + v7 - 16);
    *(int *)((char *)v6 + v7 - 8) = v9;
    *(int *)((char *)v6++ + v7 - 16) = v10;
    --v8;
  }
  while ( v8 );
  if ( !(*(_DWORD *)(CellFlat + 20) + *(_DWORD *)(CellFlat + 24)) )
  {
    *(_WORD *)(CellFlat + 52) = 0;
    *(_DWORD *)(CellFlat + 56) = 0;
  }
  if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
    return HvpReleaseCellFlat(a1, &v12);
  else
    return HvpReleaseCellPaged(a1, (unsigned int *)&v12);
}
