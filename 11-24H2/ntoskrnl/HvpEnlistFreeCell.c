/*
 * XREFs of HvpEnlistFreeCell @ 0x140883070
 * Callers:
 *     HvFreeCell @ 0x140881C04 (HvFreeCell.c)
 *     HvpDoAllocateCell @ 0x140882054 (HvpDoAllocateCell.c)
 *     HvAllocateCell @ 0x1408822D8 (HvAllocateCell.c)
 * Callees:
 *     RtlSetBits @ 0x14024BCC0 (RtlSetBits.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HvpGetCellMap @ 0x140BB9710 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140BB9770 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140BB98D0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvpEnlistFreeCell(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        int a4)
{
  __int64 v4; // r12
  ULONG_PTR v6; // rsi
  unsigned int v8; // edi
  int v9; // r8d
  __int64 v10; // r9
  int v11; // r15d
  unsigned int v12; // ebp
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 BinAddress; // rax
  ULONG v17; // ebp
  __int64 v18; // rdi
  __int64 result; // rax
  unsigned int v20; // ebx
  __int64 v21; // rax
  _QWORD *v22; // r8
  _QWORD *CellMap; // rax
  __int64 v24; // rcx
  int v25; // [rsp+68h] [rbp+10h] BYREF

  v4 = a4;
  v6 = (unsigned int)BugCheckParameter3;
  v8 = (BugCheckParameter3 & 0xFFFFF000) - *(_DWORD *)HvpGetCellMap(BugCheckParameter2, BugCheckParameter3);
  v11 = *(_DWORD *)(HvpGetCellMap(BugCheckParameter2, v8) + 16);
  v12 = v11 + v8;
  if ( v8
    && v6 == v8 + 32LL
    && (_DWORD)v6 + v9 == v12
    && (v21 = guard_dispatch_icall_no_overrides(24LL, 0LL, 540495171LL, v10), (v22 = (_QWORD *)v21) != 0LL) )
  {
    *(_QWORD *)v21 = 0LL;
    *(_QWORD *)(v21 + 8) = 0LL;
    *(_DWORD *)(v21 + 16) = v11;
    for ( *(_DWORD *)(v21 + 20) = v8 & 0x7FFFFFFF; v8 < v12; *CellMap = v22 )
    {
      CellMap = (_QWORD *)HvpGetCellMap(BugCheckParameter2, v8);
      v8 += 4096;
      CellMap[1] |= 2uLL;
    }
    result = BugCheckParameter2 + 632 * v4 + 888;
    v24 = *(_QWORD *)result;
    if ( *(_QWORD *)(*(_QWORD *)result + 8LL) != result )
      __fastfail(3u);
    *v22 = v24;
    v22[1] = result;
    *(_QWORD *)(v24 + 8) = v22;
    *(_QWORD *)result = v22;
  }
  else
  {
    v13 = (a3 >> 3) - 1;
    v25 = 0;
    if ( v13 >= 0x10 )
    {
      v20 = v13 >> 4;
      if ( v20 > 0xFF )
      {
        v13 = 23;
      }
      else
      {
        _BitScanReverse(&v20, v20);
        v13 = v20 + 16;
      }
    }
    LOWORD(v25) = 0;
    HvpGetBinContextInitialize(&v25);
    v14 = HvpGetCellMap(BugCheckParameter2, (unsigned int)v6);
    if ( !v14 )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v6, 0x2B9uLL);
    BinAddress = HvpMapEntryGetBinAddress(v15, v14, &v25);
    v17 = *(_DWORD *)(BinAddress + 4) >> 12;
    v18 = 632 * v4 + 24LL * v13;
    RtlSetBits((PRTL_BITMAP)(v18 + BugCheckParameter2 + 320), v17, *(_DWORD *)(BinAddress + 8) >> 12);
    *(_DWORD *)(v18 + BugCheckParameter2 + 316) = v17;
    result = (unsigned int)(1 << v13);
    *(_DWORD *)(632 * v4 + BugCheckParameter2 + 904) |= result;
  }
  return result;
}
