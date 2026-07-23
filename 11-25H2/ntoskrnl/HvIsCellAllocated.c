/*
 * XREFs of HvIsCellAllocated @ 0x140878DF0
 * Callers:
 *     CmpCheckKey @ 0x14088BB2C (CmpCheckKey.c)
 *     CmpCheckValueList @ 0x14088DC10 (CmpCheckValueList.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14091C778 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckLeaf @ 0x140A18B3C (CmpCheckLeaf.c)
 * Callees:
 *     RtlClearBits @ 0x140337F60 (RtlClearBits.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     HvpGetCellMap @ 0x140BA97C0 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140BA9820 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140BA99C0 (HvpGetBinContextInitialize.c)
 */

char __fastcall HvIsCellAllocated(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // edi
  unsigned int v4; // edx
  __int64 v5; // r8
  _RTL_BITMAP *v6; // r9
  unsigned int v7; // edx
  __int64 CellMap; // rax
  __int64 v9; // rsi
  __int64 CellFlat; // rax
  __int64 BinAddress; // rax
  int *v13; // rcx
  int v14; // r8d
  int v15; // ecx
  unsigned int v16; // r8d
  unsigned int v17; // edx
  __int64 v18; // r9
  bool v19; // di
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
  v14 = (int)v13;
  v15 = *v13;
  v16 = v14 - BinAddress;
  v17 = -v15;
  v19 = 0;
  if ( v15 < 0 && v17 - 8 <= 0xFFFF8 )
  {
    v18 = *(unsigned int *)(BinAddress + 8);
    if ( v17 <= (unsigned __int64)(v18 - 32) && v16 - v15 <= (unsigned int)v18 && v16 >= 0x20 )
      v19 = 1;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
  {
    HvpReleaseCellFlat(BugCheckParameter3, &v21);
    return v19;
  }
  else
  {
    HvpReleaseCellPaged(BugCheckParameter3, &v21);
    return v19;
  }
}
