/*
 * XREFs of CmpLightWeightSwapParentSubKeyList @ 0x140A14C30
 * Callers:
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A14304 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140A1499C (CmpLightWeightCommitAddKeyUoW.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpLightWeightSwapParentSubKeyList(ULONG_PTR a1, ULONG_PTR a2, __int64 a3)
{
  bool v3; // zf
  __int64 CellPaged; // rax
  int *v7; // r9
  __int64 v8; // rdi
  __int64 v9; // r11
  int v10; // ecx
  int v11; // edx
  unsigned int v13; // [rsp+30h] [rbp+8h] BYREF
  int v14; // [rsp+34h] [rbp+Ch]

  v13 = -1;
  v3 = (*(_BYTE *)(a1 + 140) & 1) == 0;
  v14 = 0;
  if ( v3 )
    CellPaged = HvpGetCellPaged(a1, a2, &v13);
  else
    CellPaged = HvpGetCellFlat(a1, a2, &v13);
  v7 = (int *)(CellPaged + 20);
  v8 = a3 - CellPaged;
  v9 = 2LL;
  do
  {
    v10 = v7[2];
    v11 = *v7;
    v7[2] = *(int *)((char *)v7 + v8 - 8);
    *v7 = *(int *)((char *)v7 + v8 - 16);
    *(int *)((char *)v7 + v8 - 8) = v10;
    *(int *)((char *)v7++ + v8 - 16) = v11;
    --v9;
  }
  while ( v9 );
  if ( !(*(_DWORD *)(CellPaged + 20) + *(_DWORD *)(CellPaged + 24)) )
  {
    *(_WORD *)(CellPaged + 52) = 0;
    *(_DWORD *)(CellPaged + 56) = 0;
  }
  if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
    return HvpReleaseCellFlat(a1, (__int64)&v13);
  else
    return HvpReleaseCellPaged(a1, &v13);
}
