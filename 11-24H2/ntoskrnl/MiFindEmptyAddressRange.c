/*
 * XREFs of MiFindEmptyAddressRange @ 0x140918570
 * Callers:
 *     MiSelectUserAddress @ 0x140918180 (MiSelectUserAddress.c)
 * Callees:
 *     RtlFindClearBitsEx @ 0x1403ECBF0 (RtlFindClearBitsEx.c)
 *     MiExpandVadBitMap @ 0x140918A94 (MiExpandVadBitMap.c)
 *     MiFindClearVadBitsAligned @ 0x140919F20 (MiFindClearVadBitsAligned.c)
 *     MiFindEmptyAddressRangeInTree @ 0x140A136BC (MiFindEmptyAddressRangeInTree.c)
 */

__int64 __fastcall MiFindEmptyAddressRange(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        unsigned __int64 *a8,
        _DWORD *a9)
{
  unsigned __int64 v9; // rbx
  int v14; // r10d
  _DWORD *v15; // rdi
  _KPROCESS *Process; // rsi
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r15
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdi
  unsigned __int64 ClearBits; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  int v28; // r15d
  __int64 result; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  bool v33; // cf
  unsigned __int64 v34; // rcx
  int v35; // eax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // [rsp+40h] [rbp-58h]
  unsigned __int64 v43[10]; // [rsp+48h] [rbp-50h] BYREF
  int v44; // [rsp+A8h] [rbp+10h]
  int v45; // [rsp+B8h] [rbp+20h]
  unsigned __int64 v46; // [rsp+C0h] [rbp+28h]
  _KPROCESS *v47; // [rsp+C8h] [rbp+30h]

  v45 = a4;
  v9 = a6;
  if ( a6 - a5 + 1 < a2 )
    return 3221225495LL;
  v14 = 1;
  v15 = a9;
  v44 = 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v47 = Process;
  *a9 = 1;
  if ( (a7 & 2) != 0 )
  {
    v35 = *(_DWORD *)(a1 + 64);
    v36 = *(_QWORD *)(a1 + 48);
    v37 = *(_QWORD *)&Process[1].PrimaryGroup;
    v38 = v36 >> 16;
    v42 = v38;
    v46 = (unsigned __int8)v35;
    if ( v37 > 0x100000000LL )
      v42 = (v37 >> 16) - (unsigned __int8)v38 - 1;
    if ( !(_BYTE)v35 )
      v46 = 1LL;
  }
  else
  {
    v14 = 0;
    v44 = 0;
    v42 = 0LL;
    v46 = 0LL;
  }
  if ( a4 )
    goto LABEL_28;
  if ( a3 == 0x10000 )
  {
    v17 = a2 + 0xFFFF;
    goto LABEL_7;
  }
  if ( (unsigned __int64)(a3 - 0x200000) > 0x7FE00000 || ((a3 - 1) & a2) != 0 )
  {
LABEL_28:
    v28 = v44;
    *a9 = 0;
    if ( v44 && v9 > v42 << 16 )
      v9 = v42 << 16;
    goto LABEL_29;
  }
  v17 = a2;
LABEL_7:
  v18 = v17 >> 16;
  while ( 1 )
  {
    v19 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)v43 = *(_OWORD *)a1;
    if ( v18 != 1 && v18 >= *(_QWORD *)(a1 + 24) )
      v19 = *(_QWORD *)(a1 + 32);
    v20 = v43[1];
    v21 = qword_140E2F3C8;
    v22 = (v43[1] - qword_140E2F3C8) << 19;
    if ( v9 <= v22 )
      goto LABEL_27;
    if ( a5 && (v34 = (a5 + 0x3FFFFF) & 0xFFFFFFFFFFC00000uLL, v34 > v22) )
    {
      v30 = (v34 - v22) >> 16;
      if ( v43[0] <= v30 )
        goto LABEL_27;
      v23 = v43[0] - v30;
      *v15 = 0;
      v20 += v30 >> 3;
      v43[0] = v23;
      v43[1] = v20;
    }
    else
    {
      v23 = v43[0];
    }
    if ( v9 && v9 >> 16 < *(_QWORD *)(a1 + 40) && v9 + 1 > v22 && v23 > (v9 + 1 - v22) >> 16 )
    {
      v23 = (v9 + 1 - v22) >> 16;
      v43[0] = v23;
    }
    if ( v18 > v23 )
    {
LABEL_27:
      LODWORD(a4) = v45;
      Process = v47;
      goto LABEL_28;
    }
    v24 = (-524288 * v21 + (v20 << 19)) >> 16;
    if ( v14 && (v24 + v19 >= v42 || v24 + v19 < v46) )
    {
      v19 = v46;
      *a9 = 0;
    }
    if ( a3 == 0x10000 )
    {
      ClearBits = RtlFindClearBitsEx(v43, v18, v19);
      v20 = v43[1];
    }
    else
    {
      ClearBits = MiFindClearVadBitsAligned(v43, a3, v18, v19);
    }
    v26 = ClearBits;
    if ( ClearBits == -1LL )
    {
      v28 = v44;
    }
    else
    {
      v27 = (ClearBits + 8 * (v20 - qword_140E2F3C8)) << 16;
      if ( v27 < a5 || v27 + (v18 << 16) - 1 > v9 )
        goto LABEL_27;
      v28 = v44;
      if ( !v44 || (v40 = v24 + ClearBits, v24 + v26 >= v46) && v40 < v42 )
      {
        *a8 = v27;
        return 0LL;
      }
    }
    if ( !(unsigned int)MiExpandVadBitMap(a1, v18, a5, v9) )
      break;
    v14 = v44;
    v15 = a9;
  }
  if ( v28 )
    return 3221225495LL;
  LODWORD(a4) = v45;
  Process = v47;
  *a9 = 0;
LABEL_29:
  v31 = *(_QWORD *)(a1 + 56);
  v32 = a5;
  if ( v31 > a5 )
    v32 = *(_QWORD *)(a1 + 56);
  v33 = v32 < v9;
  if ( v32 > v9 )
  {
    if ( ((__int64)Process[4].ThreadListHead.Flink & 0x20) == 0 || (v41 = 0x3FFFFFFFLL, v9 <= 0x3FFFFFFF) )
      v41 = 0xFFFFFFLL;
    v32 &= v41;
    if ( !v32 || v32 > v9 )
      v32 = 0x10000LL;
    if ( v32 < v31 && v28 )
      v32 = v46 << 16;
    if ( v32 < a5 )
      v32 = a5;
    v33 = v32 < v9;
  }
  if ( !v33 || v9 - v32 + 1 < a2 )
    return 3221225495LL;
  result = MiFindEmptyAddressRangeInTree((int)Process + 1368, a2, a3, a4, v32, v9, (__int64)a8);
  if ( (int)result < 0 )
  {
    v39 = v46 << 16;
    if ( !v28 )
      v39 = 0x10000LL;
    if ( v39 < a5 )
      v39 = a5;
    if ( v39 < v32 )
      return MiFindEmptyAddressRangeInTree((int)Process + 1368, a2, a3, v45, v39, v9, (__int64)a8);
  }
  return result;
}
