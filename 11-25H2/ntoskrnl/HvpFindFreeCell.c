/*
 * XREFs of HvpFindFreeCell @ 0x140880690
 * Callers:
 *     HvpDoAllocateCell @ 0x140880110 (HvpDoAllocateCell.c)
 *     HvAllocateCell @ 0x1408803CC (HvAllocateCell.c)
 * Callees:
 *     RtlFindSetBits @ 0x1403ED2E0 (RtlFindSetBits.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpMarkDirty @ 0x140880BA0 (HvpMarkDirty.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     HvpGetCellMap @ 0x140BA97C0 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140BA9820 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140BA9840 (HvpMapEntryReleaseBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140BA99C0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvpFindFreeCell(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 *a5,
        _DWORD *a6)
{
  __int64 v7; // r12
  __int64 v8; // rdi
  int v9; // edx
  int v10; // r9d
  __int64 v11; // rsi
  unsigned int v12; // r15d
  unsigned int v13; // ebp
  unsigned int v14; // eax
  int v15; // r13d
  ULONG i; // edx
  __int64 v17; // rbx
  ULONG SetBits; // r8d
  int v19; // eax
  __int64 CellMap; // rax
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 BinAddress; // rbp
  int v25; // r10d
  unsigned int *j; // rdx
  unsigned int v27; // eax
  unsigned int v28; // ebx
  int v29; // eax
  _BYTE *v30; // rsi
  __int64 CellPaged; // rax
  __int64 v32; // rdi
  bool v33; // zf
  __int64 v34; // rax
  int v35; // eax
  __int64 CellFlat; // rax
  __int64 v37; // rax
  __int64 v39; // rax
  __int64 v40; // rbx
  unsigned int v41; // [rsp+30h] [rbp-68h]
  ULONG v42; // [rsp+34h] [rbp-64h]
  unsigned int v43[2]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v44; // [rsp+40h] [rbp-58h]
  __int64 v45; // [rsp+48h] [rbp-50h]
  __int16 v46; // [rsp+A0h] [rbp+8h] BYREF
  int v47; // [rsp+A8h] [rbp+10h]
  unsigned int v48; // [rsp+B0h] [rbp+18h]
  int v49; // [rsp+B8h] [rbp+20h]

  v49 = a4;
  v48 = a3;
  v7 = 0LL;
  v46 = 0;
  v8 = a2;
  HvpGetBinContextInitialize(&v46);
  v11 = 632LL * v10;
  v12 = -1;
  v45 = v11;
  v13 = (-1 << v9) & *(_DWORD *)(v11 + BugCheckParameter3 + 904);
  v41 = v13;
  if ( !v13 )
    return v12;
  _BitScanForward(&v14, v13);
  v47 = 0;
  v15 = -1;
  if ( v14 != v9 )
    v8 = v14;
  v47 = v8;
  for ( i = *(_DWORD *)(v11 + 24 * v8 + BugCheckParameter3 + 316); ; i = v42 )
  {
    v17 = v11 + 24LL * (unsigned int)v8;
    SetBits = RtlFindSetBits((PRTL_BITMAP)(v17 + BugCheckParameter3 + 320), 1u, i);
    *(_DWORD *)(v17 + BugCheckParameter3 + 316) = SetBits;
    v42 = SetBits + 1;
    if ( v15 == SetBits )
    {
      v13 &= v13 - 1;
      v41 = v13;
      if ( !v13 )
        return v12;
      _BitScanForward((unsigned int *)&v39, v13);
      v47 = v39;
      v40 = v11 + 24 * v39;
      SetBits = RtlFindSetBits(
                  (PRTL_BITMAP)(v40 + BugCheckParameter3 + 320),
                  1u,
                  *(_DWORD *)(v40 + BugCheckParameter3 + 316));
      *(_DWORD *)(v40 + BugCheckParameter3 + 316) = SetBits;
      v15 = SetBits;
      v42 = SetBits + 1;
    }
    v19 = SetBits;
    if ( v15 != -1 )
      v19 = v15;
    v15 = v19;
    CellMap = HvpGetCellMap(BugCheckParameter3, (v49 << 31) + (SetBits << 12));
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter3, v21, 0x48AuLL);
    v22 = *(_QWORD *)(CellMap + 8);
    if ( (v22 & 2) == 0 && (v22 & 4) == 0 && (v22 & 1) != 0 )
      break;
LABEL_42:
    LODWORD(v8) = v47;
  }
  BinAddress = HvpMapEntryGetBinAddress(v22, CellMap, &v46);
  v44 = BinAddress;
  for ( j = (unsigned int *)(BinAddress + 32); ; j = (unsigned int *)((char *)j + v27) )
  {
    if ( (unsigned __int64)j >= BinAddress + (unsigned __int64)*(unsigned int *)(BinAddress + 8) )
      goto LABEL_41;
    v27 = *j;
    if ( (*j & 0x80000000) != 0 )
    {
      v27 = -v27;
      goto LABEL_17;
    }
    v28 = (_DWORD)j + *(_DWORD *)(BinAddress + 4) + v25 - BinAddress;
    if ( v48 <= v27 )
      break;
LABEL_17:
    v23 = v27;
  }
  v29 = *(_DWORD *)(BugCheckParameter3 + 160);
  v43[0] = -1;
  v43[1] = 0;
  if ( (v29 & 1) != 0 || (v28 & 0x80000000) != 0 )
  {
    v30 = (_BYTE *)(BugCheckParameter3 + 140);
LABEL_31:
    if ( (*v30 & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v28, a6);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, v28, a6);
    v23 = CellFlat;
    v12 = v28;
    v37 = CellFlat - 4;
    if ( v23 )
      v7 = v37;
    *a5 = v7;
  }
  else
  {
    v30 = (_BYTE *)(BugCheckParameter3 + 140);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(BugCheckParameter3, v28, v43);
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter3, v28, v43);
    v23 = CellPaged;
    v32 = 0LL;
    v33 = CellPaged == 0;
    v34 = CellPaged - 4;
    if ( !v33 )
      v32 = v34;
    if ( v32 )
    {
      if ( !HvpGetCellMap(BugCheckParameter3, v28) )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter3, v28, 0x2A7uLL);
      if ( (*v30 & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v43);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v43);
      v35 = HvpMarkDirty(BugCheckParameter3);
      if ( v35 >= 0 )
      {
        BinAddress = v44;
        *(_BYTE *)(BugCheckParameter3 + 141) = 1;
        goto LABEL_31;
      }
      if ( v35 == -1073741275 )
      {
        v11 = v45;
LABEL_41:
        HvpMapEntryReleaseBinAddress(v23, j, &v46);
        v13 = v41;
        goto LABEL_42;
      }
      BinAddress = v44;
    }
  }
  if ( BinAddress )
    HvpMapEntryReleaseBinAddress(v23, j, &v46);
  return v12;
}
