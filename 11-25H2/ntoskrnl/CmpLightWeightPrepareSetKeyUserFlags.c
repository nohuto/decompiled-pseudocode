/*
 * XREFs of CmpLightWeightPrepareSetKeyUserFlags @ 0x1409DA000
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1409D96AC (CmpProcessLightWeightUOW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpLightWeightPrepareSetKeyUserFlags(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  ULONG_PTR v3; // rdi
  unsigned int v4; // esi
  __int64 CellFlat; // rax
  int v6; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0xFFFFFFFFLL;
  v1 = 0;
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
      HvpReleaseCellFlat(v3, &v8);
    else
      HvpReleaseCellPaged(v3, (unsigned int *)&v8);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
