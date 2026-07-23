/*
 * XREFs of HvpDelistFreeCell @ 0x140885D24
 * Callers:
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvpDoAllocateCell @ 0x140885F04 (HvpDoAllocateCell.c)
 *     HvAllocateCell @ 0x140886188 (HvAllocateCell.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpRemoveFreeCellHint @ 0x140886D60 (HvpRemoveFreeCellHint.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall HvpDelistFreeCell(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3)
{
  bool v3; // zf
  unsigned int v5; // edi
  __int64 CellPaged; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // r8d
  unsigned int v13; // [rsp+68h] [rbp+20h] BYREF
  int v14; // [rsp+6Ch] [rbp+24h]

  v13 = -1;
  v3 = (*(_BYTE *)(a1 + 140) & 1) == 0;
  v5 = a2;
  v14 = 0;
  if ( v3 )
    CellPaged = HvpGetCellPaged(a1, a2, &v13);
  else
    CellPaged = HvpGetCellFlat(a1, a2, &v13);
  v8 = CellPaged;
  result = CellPaged - 4;
  v10 = -v8;
  if ( (result & -(__int64)(v10 != 0)) != 0 )
  {
    v11 = (unsigned int)((*(_DWORD *)(result & -(__int64)(v10 != 0)) >> 3) - 1);
    if ( (unsigned int)v11 >= 0x10 )
    {
      v12 = (unsigned int)v11 >> 4;
      if ( v12 > 0xFF )
      {
        v11 = 23LL;
      }
      else
      {
        _BitScanReverse(&v12, v12);
        v11 = v12 + 16;
      }
    }
    HvpRemoveFreeCellHint(a1, v5, v11, a3, 0);
    if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
      return HvpReleaseCellFlat(a1, &v13);
    else
      return HvpReleaseCellPaged(a1, &v13);
  }
  return result;
}
