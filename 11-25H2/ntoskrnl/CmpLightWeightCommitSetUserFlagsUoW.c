/*
 * XREFs of CmpLightWeightCommitSetUserFlagsUoW @ 0x1409D9AE0
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1409D96AC (CmpProcessLightWeightUOW.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpLightWeightCommitSetUserFlagsUoW(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  ULONG_PTR v5; // rbx
  ULONG_PTR v6; // rdx
  __int64 CellFlat; // rax
  int v8; // r9d
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v4 + 32);
  v6 = *(unsigned int *)(v4 + 40);
  if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v5, v6, &v10);
  else
    CellFlat = HvpGetCellPaged(v5, v6, &v10);
  v8 = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(CellFlat + 52) ^= (*(_DWORD *)(CellFlat + 52) ^ (v8 << 16)) & 0xF0000;
  *(_DWORD *)(*(_QWORD *)(a1 + 48) + 184LL) ^= ((unsigned __int8)v8 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)(a1 + 48)
                                                                                                 + 184LL)) & 0xF;
  *(_QWORD *)(CellFlat + 4) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
    return HvpReleaseCellFlat(v5, &v10);
  else
    return HvpReleaseCellPaged(v5, (unsigned int *)&v10);
}
