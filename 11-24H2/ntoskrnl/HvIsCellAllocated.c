/*
 * XREFs of HvIsCellAllocated @ 0x140875570
 * Callers:
 *     CmpCheckKey @ 0x14088506C (CmpCheckKey.c)
 *     CmpCheckValueList @ 0x140887180 (CmpCheckValueList.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1409A0BDC (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckLeaf @ 0x140AE363C (CmpCheckLeaf.c)
 * Callees:
 *     RtlClearBits @ 0x14037CD40 (RtlClearBits.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     HvpGetCellMap @ 0x140BB9710 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140BB9770 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140BB98D0 (HvpGetBinContextInitialize.c)
 */

char __fastcall HvIsCellAllocated(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // edi
  unsigned int v4; // edx
  __int64 v5; // r8
  RTL_BITMAP *v6; // r9
  unsigned int v7; // edx
  __int64 CellMap; // rax
  __int64 v9; // rsi
  __int64 CellFlat; // rax
  __int64 BinAddress; // rax
  int *v12; // rcx
  int v13; // r8d
  int v14; // ecx
  unsigned int v15; // r8d
  unsigned int v16; // edx
  __int64 v17; // r9
  bool v18; // di
  __int16 v20; // [rsp+30h] [rbp+8h] BYREF
  __int64 v21; // [rsp+48h] [rbp+20h] BYREF

  v21 = 0LL;
  v20 = 0;
  v3 = BugCheckParameter4;
  HvpGetCellContextInitialize(&v21);
  HvpGetBinContextInitialize(&v20);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    return 1;
  v7 = v4 >> 31;
  if ( (v3 & 0x7FFFFFFF) >= *(_DWORD *)(632LL * v7 + BugCheckParameter3 + 280) || (v3 & 7) != 0 )
    return 0;
  if ( v5 && !v7 )
  {
    if ( _bittest64(*(const signed __int64 **)(v5 + 8), v3 >> 3) )
    {
      RtlClearBits(v6, v3 >> 3, 1u);
      goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  CellMap = HvpGetCellMap(BugCheckParameter3, v3);
  v9 = CellMap;
  if ( !CellMap || (*(_BYTE *)(CellMap + 8) & 2) != 0 )
    return 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v3, &v21);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v3, &v21);
  if ( !CellFlat || CellFlat == 4 )
    return 1;
  BinAddress = HvpMapEntryGetBinAddress(CellFlat - 4, v9, &v20);
  v13 = (int)v12;
  v14 = *v12;
  v15 = v13 - BinAddress;
  v16 = -v14;
  v18 = 0;
  if ( v14 < 0 && v16 - 8 <= 0xFFFF8 )
  {
    v17 = *(unsigned int *)(BinAddress + 8);
    if ( v16 <= (unsigned __int64)(v17 - 32) && v15 - v14 <= (unsigned int)v17 && v15 >= 0x20 )
      v18 = 1;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
  {
    HvpReleaseCellFlat(BugCheckParameter3, &v21);
    return v18;
  }
  else
  {
    HvpReleaseCellPaged(BugCheckParameter3, &v21);
    return v18;
  }
}
