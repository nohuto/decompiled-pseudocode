/*
 * XREFs of MiInitializeWorkingSetManagerParameters @ 0x140679B10
 * Callers:
 *     MiProcessWorkingSets @ 0x1402F2D10 (MiProcessWorkingSets.c)
 *     MmCreatePartition @ 0x1407FD07C (MmCreatePartition.c)
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     KeGenericCallDpcEx @ 0x140270AE8 (KeGenericCallDpcEx.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiSetTrimWhileAgingState @ 0x140679E58 (MiSetTrimWhileAgingState.c)
 */

__int64 __fastcall MiInitializeWorkingSetManagerParameters(__int64 a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  int v6; // r12d
  KIRQL v7; // al
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdi
  _QWORD v18[3]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v19; // [rsp+38h] [rbp-40h]
  __int64 v20; // [rsp+48h] [rbp-30h]
  int v21; // [rsp+80h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 17600);
  v20 = 0LL;
  v19 = 0LL;
  if ( v1 )
  {
    v6 = 0;
  }
  else
  {
    result = MiAllocatePool(0x40uLL, 0x208uLL, 1683451213);
    v1 = result;
    if ( !result )
      return result;
    *(_WORD *)result = 0;
    *(_BYTE *)(result + 2) = 6;
    *(_DWORD *)(result + 4) = 1;
    v4 = (_QWORD *)(result + 8);
    v4[1] = v4;
    *v4 = v4;
    *(_DWORD *)(v1 + 36) = 256;
    v21 = *(_DWORD *)(a1 + 19000);
    LOBYTE(v21) = v21 & 0xF0 | 1;
    *(_WORD *)(a1 + 19000) = v21;
    v5 = &unk_140E38880;
    if ( (*(_DWORD *)(a1 + 19000) & 0xF) != 1 )
      v5 = (_QWORD *)(a1 + 19008);
    v6 = 1;
    *v5 = &unk_140E2FE40;
  }
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  v8 = *(_QWORD *)(a1 + 18512);
  v9 = *(_QWORD *)(a1 + 16624);
  v10 = *(_QWORD *)(a1 + 16632);
  *(_BYTE *)(a1 + 12) = 0;
  MiReleaseSpinLockExclusive((_DWORD *)(a1 + 200), v7);
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    v11 = *(_QWORD *)(v1 + 512);
    if ( v8 <= v11 )
      *(_QWORD *)(v1 + 512) = -1LL;
    else
      v8 -= v11;
    if ( v8 < 0x21000 )
    {
      v8 = 135168LL;
      v12 = 4224LL;
LABEL_13:
      v13 = v12;
      goto LABEL_14;
    }
  }
  v12 = v8 >> 5;
  if ( v8 <= 0x200000 )
    goto LABEL_13;
  v13 = ((v8 - 0x200000) >> 7) + 0x10000;
LABEL_14:
  v14 = 1152LL;
  if ( v13 >= 0x480 )
  {
    v14 = v13;
    if ( v13 > 0x400000 )
      v14 = 0x400000LL;
  }
  *(_QWORD *)(v1 + 312) = v14;
  if ( v8 > 0x80000 )
    v12 = ((v8 - 0x80000) >> 8) + 0x4000;
  if ( v12 >= 0x121 )
  {
    if ( v12 > 0x100000 )
      v12 = 0x100000LL;
  }
  else
  {
    v12 = 289LL;
  }
  v15 = v14 >> 2;
  *(_QWORD *)(v1 + 320) = v12;
  *(_QWORD *)(v1 + 328) = v12;
  if ( v15 < 0x121 )
    v15 = 289LL;
  *(_QWORD *)(v1 + 304) = v15;
  if ( v6 )
    *(_QWORD *)(a1 + 17600) = v1;
  MiSetTrimWhileAgingState(a1, 3LL);
  if ( v8 < 0x18A88 )
    v16 = 100LL;
  else
    v16 = v8 / 0x3E8;
  if ( v16 > v8 )
  {
    v16 = v8 >> 1;
    if ( !(v8 >> 1) )
      v16 = 1LL;
  }
  *(_QWORD *)(v1 + 56) = v16;
  if ( v6 )
  {
    *(_DWORD *)(v1 + 100) = 0;
    *(_WORD *)(v1 + 96) = 1;
    *(_BYTE *)(v1 + 98) = 6;
    *(_QWORD *)(v1 + 112) = v1 + 104;
    *(_QWORD *)(v1 + 104) = v1 + 104;
    if ( (ULONG *)a1 == &MiSystemPartition )
    {
      LOWORD(stru_140E37508.Header.Lock) = 0;
      stru_140E37508.Header.SignalState = 0;
      stru_140E37508.Header.WaitListHead.Blink = &stru_140E37508.Header.WaitListHead;
      stru_140E37508.Header.WaitListHead.Flink = &stru_140E37508.Header.WaitListHead;
      stru_140E37508.Header.Size = 6;
    }
  }
  if ( !v9 )
  {
    v17 = *(_QWORD *)(v1 + 312);
    if ( 2 * v17 > v8 )
    {
      if ( v8 && v8 >= v17 && (v8 - v17) >> 1 )
        v9 = ((v8 - v17) >> 1) + v17;
      else
        v9 = 1LL;
    }
    else
    {
      v9 = 2 * v17;
    }
  }
  v18[0] = v9;
  if ( v10 )
  {
    if ( v10 < v9 )
      v9 = v10;
    v18[0] = v9;
  }
  else
  {
    v10 = v9;
    if ( v9 <= v8 )
    {
      v10 = 2 * v9;
      if ( 2 * v9 > v8 )
        v10 = v9 + ((v8 - v9) >> 1);
    }
  }
  v18[1] = v10;
  v18[2] = a1;
  KeGenericCallDpcEx((__int64)MiUpdatePageThresholdsDpc, (__int64)v18);
  return 1LL;
}
