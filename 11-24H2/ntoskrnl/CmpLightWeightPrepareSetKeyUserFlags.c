/*
 * XREFs of CmpLightWeightPrepareSetKeyUserFlags @ 0x140A44988
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140A069C4 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x140871600 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpLightWeightPrepareSetKeyUserFlags(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  ULONG_PTR v3; // rdi
  unsigned int v4; // esi
  __int64 CellFlat; // rax
  int v6; // eax
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v8 = -1;
  v1 = 0;
  v9 = 0;
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(v2 + 32);
  v4 = *(_DWORD *)(v2 + 40);
  if ( (*(_BYTE *)(v3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v3, v4, &v8);
  else
    CellFlat = HvpGetCellPaged(v3, v4, &v8);
  if ( CellFlat )
  {
    v6 = HvpMarkCellDirty(v3, v4, 0);
    if ( v6 < 0 )
      v1 = v6;
    if ( (*(_BYTE *)(v3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v3, (__int64)&v8);
    else
      HvpReleaseCellPaged(v3, &v8);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
