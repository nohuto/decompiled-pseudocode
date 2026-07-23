/*
 * XREFs of MiSelectUserAddress @ 0x140918180
 * Callers:
 *     MiAllocateEnclaveVad @ 0x1407F74B4 (MiAllocateEnclaveVad.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408DC1EC (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408DD544 (MiAllocateNewSubAllocatedRegion.c)
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0BD00 (MiMapViewOfPhysicalSection.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiFindEmptyAddressRange @ 0x140918570 (MiFindEmptyAddressRange.c)
 *     MiFindEmptyAddressRangeDownTree @ 0x140918CD0 (MiFindEmptyAddressRangeDownTree.c)
 *     MiInitializeVadCellBitMap @ 0x14091A2FC (MiInitializeVadCellBitMap.c)
 */

__int64 __fastcall MiSelectUserAddress(
        int a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        unsigned __int64 **a9,
        _QWORD *a10)
{
  int v10; // ebx
  _QWORD *v11; // r15
  unsigned __int64 v13; // rdi
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r10
  int v17; // r8d
  __int64 v18; // rdx
  _KPROCESS *Process; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 *v21; // rsi
  unsigned __int64 v22; // rcx
  unsigned __int64 *v23; // r13
  char v24; // bp
  __int64 result; // rax
  unsigned __int64 v26; // r14
  __int64 v27; // rdx
  _KPROCESS *v28; // rcx
  unsigned __int64 v29; // rax
  int v30; // eax
  __int64 v31; // r8
  unsigned __int64 v32; // r11
  __int64 v33; // rcx
  unsigned __int64 v34; // r11
  int v35; // eax
  int v36; // [rsp+50h] [rbp-68h] BYREF
  _KPROCESS *v37; // [rsp+58h] [rbp-60h]
  __int64 v38; // [rsp+60h] [rbp-58h]
  unsigned __int64 v39; // [rsp+68h] [rbp-50h]
  unsigned __int64 v40; // [rsp+70h] [rbp-48h]
  int v41; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v44; // [rsp+E0h] [rbp+28h]

  v10 = 0;
  v11 = a10;
  v13 = a5;
  v41 = 0;
  v15 = a3;
  *a9 = 0LL;
  v16 = a2;
  *a10 = 0LL;
  v17 = 0;
  v18 = 1LL;
  v36 = 0;
  v40 = a5;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (a1 & 0x100000) != 0 || (Process[1].DirectoryTableBase & 0x20000000000000LL) != 0 )
  {
    v17 = 1;
    v41 = 1;
  }
  v20 = *(_QWORD *)&Process[1].PrimaryGroup;
  v21 = &Process[2].ActiveProcessors[2].StaticBitmap[29];
  v22 = v20 - 1;
  if ( v20 <= 0x100000000LL && v15 > v22 )
  {
    v18 = 2LL;
    goto LABEL_7;
  }
  if ( a8 >= 0 )
  {
    v18 = 0LL;
    if ( !v17 && v15 < v22 && v20 > 0x100000000LL )
    {
      if ( v21[18] )
      {
        if ( v16 < v21[25] )
          goto LABEL_7;
        v33 = 0LL;
        if ( v15 >> 16 <= v21[23] )
          v33 = 2LL;
        goto LABEL_67;
      }
      v32 = v16 >> 16;
      if ( v16 >> 16 && v15 - v16 + 1 >= 0x40000000 )
      {
        v21[26] = v32;
        v21[23] = v15 >> 16;
        v21[24] = v15 + 1;
        v21[25] = v32 << 16;
        v35 = MiInitializeVadCellBitMap(v21 + 18, 1LL);
        v17 = v41;
        v15 = a3;
        v33 = 0LL;
        v16 = a2;
        if ( v35 >= 0 )
          v33 = 2LL;
LABEL_67:
        v18 = v33;
      }
    }
  }
LABEL_7:
  v23 = &v21[9 * v18];
  if ( (a1 & 0x20400000) != 0x20400000 )
  {
    if ( (a1 & 0x20000000) != 0 && a4 >= 0x40000000 && a5 == 0x200000 )
    {
      v13 = 0x40000000LL;
LABEL_68:
      v10 = 1;
      goto LABEL_13;
    }
    if ( (a8 & 4) == 0 || (a1 & 0x20400000) != 0x400000 )
      goto LABEL_13;
    if ( a4 >= 0x40000000 )
    {
      if ( (a4 & 0x3FFFFFFF) == 0 && a5 < 0x40000000 )
      {
        v13 = 0x40000000LL;
        goto LABEL_68;
      }
    }
    else if ( a4 < 0x200000 )
    {
      goto LABEL_13;
    }
    if ( (a4 & 0x1FFFFF) != 0 || a5 >= 0x200000 )
      goto LABEL_13;
    v13 = 0x200000LL;
    goto LABEL_68;
  }
LABEL_13:
  v24 = a7;
  while ( 1 )
  {
    if ( v17 )
    {
      if ( v15 - v16 + 1 < a4 )
      {
        result = 3221225495LL;
        goto LABEL_51;
      }
      v26 = v23[7];
      v27 = v15 + 1;
      v39 = v15 + 1;
      v28 = KeGetCurrentThread()->ApcState.Process;
      v29 = v23[6];
      v37 = v28;
      if ( v15 + 1 > v29 )
        v27 = v29;
      v30 = *((_DWORD *)v23 + 16);
      v31 = (unsigned __int8)v30;
      v44 = v27;
      if ( !(_BYTE)v30 )
        v31 = 1LL;
      v11 = a10;
      v38 = v31;
      if ( v26 < v16 )
        v26 = v16;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v26 >= v15 || v15 - v26 + 1 < a4 )
          {
            result = 3221225495LL;
          }
          else
          {
            result = MiFindEmptyAddressRangeDownTree((int)v28 + 1368, a4, v13, a6, v26, v27, (__int64)a10);
            if ( (int)result >= 0 )
              goto LABEL_17;
            v15 = a3;
            v16 = a2;
            v27 = v44;
            LODWORD(v28) = (_DWORD)v37;
            v31 = v38;
          }
          if ( v27 != v39 )
            break;
          if ( (v24 & 2) == 0 )
          {
            v34 = 0x10000LL;
            goto LABEL_69;
          }
LABEL_63:
          v34 = v31 << 16;
LABEL_69:
          if ( v34 < v16 )
            v34 = v16;
          if ( v34 >= v26 )
            goto LABEL_16;
          v26 = v34;
        }
        if ( (v24 & 2) != 0 )
          goto LABEL_63;
        v27 = v15 + 1;
        v44 = v15 + 1;
      }
    }
    result = MiFindEmptyAddressRange((_DWORD)v23, a4, v13, a6, v16, v15, a7, (__int64)v11, (__int64)&v36);
    v15 = a3;
    v16 = a2;
    v24 = a7;
LABEL_16:
    if ( (int)result >= 0 )
      break;
    v17 = v41;
LABEL_51:
    if ( !v10 )
      break;
    if ( v13 == 0x40000000 )
    {
      v13 = 0x200000LL;
    }
    else
    {
      if ( v13 != 0x200000 )
        break;
      if ( v40 == 0x200000 )
        return result;
      v13 = v40;
    }
  }
LABEL_17:
  if ( v13 == 0x10000 )
  {
    if ( v36 )
      *a9 = v23;
  }
  return result;
}
