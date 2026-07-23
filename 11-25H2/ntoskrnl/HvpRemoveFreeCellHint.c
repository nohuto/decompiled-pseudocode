/*
 * XREFs of HvpRemoveFreeCellHint @ 0x140880FC0
 * Callers:
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 *     HvpDelistFreeCell @ 0x14087FF2C (HvpDelistFreeCell.c)
 *     HvpDoAllocateCell @ 0x140880110 (HvpDoAllocateCell.c)
 *     HvAllocateCell @ 0x1408803CC (HvAllocateCell.c)
 * Callees:
 *     RtlClearBits @ 0x140337F60 (RtlClearBits.c)
 *     RtlSetBits @ 0x140339430 (RtlSetBits.c)
 *     RtlFindSetBits @ 0x1403ED2E0 (RtlFindSetBits.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x140BA97C0 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140BA9820 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140BA99C0 (HvpGetBinContextInitialize.c)
 */

void __fastcall HvpRemoveFreeCellHint(__int64 a1, unsigned int a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // rdi
  ULONG_PTR v6; // rbx
  char v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r11
  __int64 CellMap; // rax
  __int64 v11; // rcx
  ULONG_PTR v12; // r11
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 BinAddress; // r13
  unsigned int v16; // r14d
  unsigned int *v17; // rdx
  __int64 v18; // r12
  int v19; // r8d
  unsigned int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rdx
  ULONG v23; // r14d
  int v24; // ebx
  __int64 v25; // rdi
  __int64 v26; // rsi
  _RTL_BITMAP *v27; // rcx
  ULONG SetBits; // eax
  int v29; // ecx
  unsigned int v30; // ecx
  _WORD v31[8]; // [rsp+30h] [rbp-38h] BYREF

  v5 = a4;
  v31[0] = 0;
  v6 = a2;
  v7 = 0;
  HvpGetBinContextInitialize(v31);
  CellMap = HvpGetCellMap(v9, v8);
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, v12, v6, 0x310uLL);
  BinAddress = HvpMapEntryGetBinAddress(v11, CellMap, v31);
  v16 = *(_DWORD *)(BinAddress + 4);
  v17 = (unsigned int *)(BinAddress + 32);
  v18 = *(unsigned int *)(BinAddress + 8);
  v19 = ((_DWORD)v5 << 31) | (v16 + 32);
  while ( (unsigned __int64)v17 < v18 + BinAddress )
  {
    v20 = *v17;
    if ( (*v17 & 0x80000000) == 0 )
    {
      v21 = (v20 >> 3) - 1;
      if ( v21 >= 0x10 )
      {
        v30 = v21 >> 4;
        if ( v30 > 0xFF )
        {
          v21 = 23;
        }
        else
        {
          _BitScanReverse(&v30, v30);
          v21 = v30 + 16;
        }
      }
      if ( (_DWORD)v13 == v21 && v19 != (_DWORD)v6 && v19 != a5 )
      {
        v7 = 1;
        break;
      }
    }
    else
    {
      v20 = -v20;
    }
    v17 = (unsigned int *)((char *)v17 + v20);
    v19 += v20;
  }
  v22 = 632 * v5;
  v23 = v16 >> 12;
  v24 = 1 << v13;
  v25 = v14 + 632 * v5 + 24 * v13;
  v26 = v22 + v14;
  v27 = (_RTL_BITMAP *)(v25 + 320);
  if ( v7 )
  {
    *(_DWORD *)(v26 + 904) |= v24;
    *(_DWORD *)(v25 + 316) = v23;
    RtlSetBits(v27, v23, *(_DWORD *)(BinAddress + 8) >> 12);
  }
  else
  {
    RtlClearBits(v27, v23, (unsigned int)v18 >> 12);
    SetBits = RtlFindSetBits((PRTL_BITMAP)(v25 + 320), 1u, v23);
    v29 = *(_DWORD *)(v26 + 904);
    if ( SetBits == -1 )
    {
      *(_DWORD *)(v26 + 904) = v29 & ~v24;
    }
    else
    {
      *(_DWORD *)(v26 + 904) = v24 | v29;
      *(_DWORD *)(v25 + 316) = SetBits;
    }
  }
}
