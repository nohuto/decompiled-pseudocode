/*
 * XREFs of HvpFindFreeCell @ 0x140886450
 * Callers:
 *     HvpDoAllocateCell @ 0x140885F04 (HvpDoAllocateCell.c)
 *     HvAllocateCell @ 0x140886188 (HvAllocateCell.c)
 * Callees:
 *     RtlFindSetBits @ 0x1403E6CF0 (RtlFindSetBits.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpMarkDirty @ 0x140886940 (HvpMarkDirty.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     HvpGetCellMap @ 0x140BBB710 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140BBB770 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140BBB790 (HvpMapEntryReleaseBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140BBB8D0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvpFindFreeCell(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 *a5,
        _DWORD *a6)
{
  __int64 v7; // rbp
  __int64 v8; // rdi
  int v9; // edx
  int v10; // r9d
  __int64 v11; // rsi
  unsigned int v12; // r15d
  unsigned int v13; // r13d
  unsigned int v14; // eax
  int v15; // r12d
  ULONG i; // edx
  __int64 v17; // rbx
  ULONG SetBits; // r8d
  int v19; // eax
  __int64 CellMap; // rax
  unsigned int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // r10d
  __int64 BinAddress; // r13
  unsigned int *j; // rdx
  unsigned int v29; // eax
  unsigned int v30; // ebx
  int v31; // eax
  _BYTE *v32; // rsi
  __int64 CellPaged; // rax
  int v34; // eax
  __int64 CellFlat; // rax
  unsigned int v37; // [rsp+30h] [rbp-68h]
  ULONG v38; // [rsp+34h] [rbp-64h]
  unsigned int v39[2]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v40; // [rsp+40h] [rbp-58h]
  __int16 v41; // [rsp+A0h] [rbp+8h] BYREF
  int v42; // [rsp+A8h] [rbp+10h]
  unsigned int v43; // [rsp+B0h] [rbp+18h]
  int v44; // [rsp+B8h] [rbp+20h]

  v44 = a4;
  v43 = a3;
  v7 = 0LL;
  v41 = 0;
  v8 = a2;
  HvpGetBinContextInitialize(&v41);
  v11 = 632LL * v10;
  v12 = -1;
  v40 = v11;
  v13 = (-1 << v9) & *(_DWORD *)(v11 + BugCheckParameter3 + 904);
  v37 = v13;
  if ( !v13 )
    return v12;
  _BitScanForward(&v14, v13);
  v42 = 0;
  v15 = -1;
  if ( v14 != v9 )
    v8 = v14;
  v42 = v8;
  for ( i = *(_DWORD *)(v11 + 24 * v8 + BugCheckParameter3 + 316); ; i = v38 )
  {
    v17 = v11 + 24LL * (unsigned int)v8;
    SetBits = RtlFindSetBits((PRTL_BITMAP)(v17 + BugCheckParameter3 + 320), 1u, i);
    *(_DWORD *)(v17 + BugCheckParameter3 + 316) = SetBits;
    v38 = SetBits + 1;
    if ( v15 == SetBits )
    {
      v13 &= v13 - 1;
      v37 = v13;
      if ( !v13 )
        return v12;
      _BitScanForward((unsigned int *)&v22, v13);
      v42 = v22;
      v23 = v11 + 24 * v22;
      SetBits = RtlFindSetBits(
                  (PRTL_BITMAP)(v23 + BugCheckParameter3 + 320),
                  1u,
                  *(_DWORD *)(v23 + BugCheckParameter3 + 316));
      *(_DWORD *)(v23 + BugCheckParameter3 + 316) = SetBits;
      v15 = SetBits;
      v38 = SetBits + 1;
    }
    v19 = SetBits;
    if ( v15 != -1 )
      v19 = v15;
    v15 = v19;
    CellMap = HvpGetCellMap(BugCheckParameter3, (v44 << 31) + (SetBits << 12));
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter3, v21, 0x48AuLL);
    v24 = *(_QWORD *)(CellMap + 8);
    if ( (v24 & 2) == 0 && (v24 & 4) == 0 && (v24 & 1) != 0 )
      break;
LABEL_43:
    LODWORD(v8) = v42;
  }
  BinAddress = HvpMapEntryGetBinAddress(v24, CellMap, &v41);
  for ( j = (unsigned int *)(BinAddress + 32); ; j = (unsigned int *)((char *)j + v29) )
  {
    if ( (unsigned __int64)j >= BinAddress + (unsigned __int64)*(unsigned int *)(BinAddress + 8) )
      goto LABEL_42;
    v29 = *j;
    if ( (*j & 0x80000000) != 0 )
    {
      v29 = -v29;
      goto LABEL_19;
    }
    v30 = (_DWORD)j + *(_DWORD *)(BinAddress + 4) + v26 - BinAddress;
    if ( v43 <= v29 )
      break;
LABEL_19:
    v25 = v29;
  }
  v31 = *(_DWORD *)(BugCheckParameter3 + 160);
  v39[0] = -1;
  v39[1] = 0;
  if ( (v31 & 1) != 0 || (v30 & 0x80000000) != 0 )
  {
    v32 = (_BYTE *)(BugCheckParameter3 + 140);
LABEL_32:
    if ( (*v32 & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v30, a6);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, v30, a6);
    if ( CellFlat )
      v7 = CellFlat - 4;
    v12 = v30;
    *a5 = v7;
  }
  else
  {
    v32 = (_BYTE *)(BugCheckParameter3 + 140);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(BugCheckParameter3, v30, v39);
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter3, v30, v39);
    if ( CellPaged && CellPaged != 4 )
    {
      if ( !HvpGetCellMap(BugCheckParameter3, v30) )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter3, v30, 0x2A7uLL);
      if ( (*v32 & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v39);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v39);
      v34 = HvpMarkDirty(BugCheckParameter3);
      if ( v34 >= 0 )
      {
        *(_BYTE *)(BugCheckParameter3 + 141) = 1;
        v7 = 0LL;
        goto LABEL_32;
      }
      if ( v34 == -1073741275 )
      {
        v11 = v40;
        v7 = 0LL;
LABEL_42:
        HvpMapEntryReleaseBinAddress(v25, j, &v41);
        v13 = v37;
        goto LABEL_43;
      }
    }
  }
  if ( BinAddress )
    HvpMapEntryReleaseBinAddress(v25, j, &v41);
  return v12;
}
