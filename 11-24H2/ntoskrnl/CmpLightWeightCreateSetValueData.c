/*
 * XREFs of CmpLightWeightCreateSetValueData @ 0x1409F8474
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1409F7BB0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x1409F8060 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     CmpCopyCell @ 0x140885DE0 (CmpCopyCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpLightWeightCreateSetValueData(__int64 a1, _QWORD *a2)
{
  ULONG_PTR v4; // rsi
  _DWORD *Pool; // rax
  _DWORD *v6; // rdi
  ULONG_PTR v7; // rdx
  __int64 CellFlat; // rax
  __int64 v9; // rbp
  int v10; // ecx
  int v11; // ebx
  unsigned int v13; // edx
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+54h] [rbp+Ch]

  v14 = -1;
  v15 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
  Pool = (_DWORD *)CmpAllocatePool(0x100uLL, 0xCuLL, 0x77554D43u);
  v6 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  *Pool = 1;
  v7 = *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL);
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v4, v7, &v14);
  else
    CellFlat = HvpGetCellPaged(v4, v7, &v14);
  v9 = CellFlat;
  if ( !CellFlat )
  {
    v11 = -1073741670;
LABEL_17:
    v13 = v6[2];
    if ( v13 != -1 )
      HvFreeCell(v4, v13);
    CmpFreeTransientPoolWithTag(v6, 0x77554D43u);
    return (unsigned int)v11;
  }
  v6[1] = 0;
  v6[2] = -1;
  v10 = *(_DWORD *)(CellFlat + 36);
  if ( !v10
    || (v6[1] = v10,
        v11 = CmpCopyCell(v4, *(unsigned int *)(CellFlat + 40), v4, *(_DWORD *)(CellFlat + 40) >> 31, v6 + 2),
        v11 >= 0)
    && (v11 = HvpMarkCellDirty(v4, *(unsigned int *)(v9 + 40), 0), v11 >= 0) )
  {
    *a2 = v6;
    v11 = 0;
    v6 = 0LL;
  }
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v4, (__int64)&v14);
  else
    HvpReleaseCellPaged(v4, &v14);
  if ( v6 )
    goto LABEL_17;
  return (unsigned int)v11;
}
