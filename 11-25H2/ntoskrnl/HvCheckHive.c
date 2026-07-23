/*
 * XREFs of HvCheckHive @ 0x140995810
 * Callers:
 *     CmCheckRegistry @ 0x140995590 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x140465824 (SetFailureLocation.c)
 *     HvCheckBin @ 0x140995A70 (HvCheckBin.c)
 *     HvMoveLayoutStats @ 0x140995DA4 (HvMoveLayoutStats.c)
 *     HvAddToLayoutStats @ 0x140995DC0 (HvAddToLayoutStats.c)
 *     HvpGetCellMap @ 0x140BA97C0 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140BA9820 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140BA9840 (HvpMapEntryReleaseBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140BA99C0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvCheckHive(__int64 a1, int a2, __int64 a3, _RTL_BITMAP *a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r13
  int v9; // r8d
  unsigned int v10; // ebx
  __int64 v11; // r15
  unsigned int v12; // esi
  unsigned int v13; // ebp
  __int64 CellMap; // rax
  __int64 v15; // rcx
  _DWORD *BinAddress; // rdi
  int v17; // r8d
  unsigned int v18; // eax
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // esi
  int v23; // [rsp+40h] [rbp-48h] BYREF
  __int16 v24; // [rsp+98h] [rbp+10h] BYREF
  __int16 v25; // [rsp+9Ah] [rbp+12h]
  __int64 v26; // [rsp+A0h] [rbp+18h]

  v26 = a3;
  v25 = HIWORD(a2);
  v24 = 0;
  HvpGetBinContextInitialize(&v24);
  v8 = a6;
  v10 = v9;
  v11 = a5;
  v12 = v9;
  v23 = v9;
  LODWORD(v26) = v9;
LABEL_2:
  if ( v12 > 1 )
    return 0LL;
  v13 = *(_DWORD *)(632LL * v12 + a1 + 280);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v10 >= v13 )
      {
        v10 = 0x80000000;
        v12 = v26 + 1;
        LODWORD(v26) = v26 + 1;
        goto LABEL_2;
      }
      CellMap = HvpGetCellMap(a1, v10);
      if ( !CellMap )
      {
        if ( v8 )
        {
          SetFailureLocation(v8, 0, 16, -1073741492, 0);
          *(_DWORD *)(v8 + 296) = v26;
          *(_DWORD *)(v8 + 300) = v10;
        }
        return 3221225804LL;
      }
      if ( (*(_BYTE *)(CellMap + 8) & 2) == 0 )
        break;
      v15 = *(_QWORD *)CellMap;
      if ( !*(_QWORD *)CellMap )
        break;
      v10 += *(_DWORD *)(v15 + 16);
      if ( v11 )
      {
        HvAddToLayoutStats(v11);
        HvMoveLayoutStats();
      }
    }
    BinAddress = (_DWORD *)HvpMapEntryGetBinAddress(v15, CellMap, &v24);
    v18 = BinAddress[2];
    if ( v18 > v13 - v10 || v18 < 0x20 || (v18 & 0xFFF) != 0 || *BinAddress != 1852400232 || BinAddress[1] != v10 )
      break;
    result = HvCheckBin(v13 - v10, (int)BinAddress, v17, (int)&v23, a4, v11, v8);
    v22 = result;
    if ( (int)result < 0 )
    {
      if ( v8 )
      {
        SetFailureLocation(v8, 0, 16, result, 48);
        *(_DWORD *)(v8 + 296) = v26;
        result = v22;
        *(_DWORD *)(v8 + 300) = v10;
        *(_QWORD *)(v8 + 304) = BinAddress;
      }
      return result;
    }
    v10 += BinAddress[2];
    HvpMapEntryReleaseBinAddress(v21, v20, &v24);
  }
  if ( !v8 )
    return 3221225804LL;
  SetFailureLocation(v8, 0, 16, -1073741492, 32);
  *(_DWORD *)(v8 + 296) = v26;
  result = 3221225804LL;
  *(_DWORD *)(v8 + 300) = v10;
  *(_QWORD *)(v8 + 304) = BinAddress;
  return result;
}
