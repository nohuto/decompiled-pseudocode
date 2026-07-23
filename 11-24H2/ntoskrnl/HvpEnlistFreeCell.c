/*
 * XREFs of HvpEnlistFreeCell @ 0x140886F20
 * Callers:
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvpDoAllocateCell @ 0x140885F04 (HvpDoAllocateCell.c)
 *     HvAllocateCell @ 0x140886188 (HvAllocateCell.c)
 * Callees:
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     HvpGetCellMap @ 0x140BBB710 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140BBB770 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140BBB8D0 (HvpGetBinContextInitialize.c)
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
  int v10; // r15d
  unsigned int v11; // ebp
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 BinAddress; // rax
  ULONG v16; // ebp
  __int64 v17; // rdi
  __int64 result; // rax
  unsigned int v19; // ebx
  __int64 v20; // rax
  _QWORD *v21; // r8
  _QWORD *CellMap; // rax
  __int64 v23; // rcx
  int v24; // [rsp+68h] [rbp+10h] BYREF

  v4 = a4;
  v6 = (unsigned int)BugCheckParameter3;
  v8 = (BugCheckParameter3 & 0xFFFFF000) - *(_DWORD *)HvpGetCellMap(BugCheckParameter2, BugCheckParameter3);
  v10 = *(_DWORD *)(HvpGetCellMap(BugCheckParameter2, v8) + 16);
  v11 = v10 + v8;
  if ( v8
    && v6 == v8 + 32LL
    && (_DWORD)v6 + v9 == v11
    && (v20 = guard_dispatch_icall_no_overrides(24LL, 0LL), (v21 = (_QWORD *)v20) != 0LL) )
  {
    *(_QWORD *)v20 = 0LL;
    *(_QWORD *)(v20 + 8) = 0LL;
    *(_DWORD *)(v20 + 16) = v10;
    for ( *(_DWORD *)(v20 + 20) = v8 & 0x7FFFFFFF; v8 < v11; *CellMap = v21 )
    {
      CellMap = (_QWORD *)HvpGetCellMap(BugCheckParameter2, v8);
      v8 += 4096;
      CellMap[1] |= 2uLL;
    }
    result = BugCheckParameter2 + 632 * v4 + 888;
    v23 = *(_QWORD *)result;
    if ( *(_QWORD *)(*(_QWORD *)result + 8LL) != result )
      __fastfail(3u);
    *v21 = v23;
    v21[1] = result;
    *(_QWORD *)(v23 + 8) = v21;
    *(_QWORD *)result = v21;
  }
  else
  {
    v12 = (a3 >> 3) - 1;
    v24 = 0;
    if ( v12 >= 0x10 )
    {
      v19 = v12 >> 4;
      if ( v19 > 0xFF )
      {
        v12 = 23;
      }
      else
      {
        _BitScanReverse(&v19, v19);
        v12 = v19 + 16;
      }
    }
    LOWORD(v24) = 0;
    HvpGetBinContextInitialize(&v24);
    v13 = HvpGetCellMap(BugCheckParameter2, (unsigned int)v6);
    if ( !v13 )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v6, 0x2B9uLL);
    BinAddress = HvpMapEntryGetBinAddress(v14, v13, &v24);
    v16 = *(_DWORD *)(BinAddress + 4) >> 12;
    v17 = 632 * v4 + 24LL * v12;
    RtlSetBits((PRTL_BITMAP)(v17 + BugCheckParameter2 + 320), v16, *(_DWORD *)(BinAddress + 8) >> 12);
    *(_DWORD *)(v17 + BugCheckParameter2 + 316) = v16;
    result = (unsigned int)(1 << v12);
    *(_DWORD *)(632 * v4 + BugCheckParameter2 + 904) |= result;
  }
  return result;
}
