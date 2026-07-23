/*
 * XREFs of MiJoinHugeContext @ 0x140482B0C
 * Callers:
 *     MiGetUltraHugeAlreadyActive @ 0x140482A60 (MiGetUltraHugeAlreadyActive.c)
 * Callees:
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 *     MiSafeLockPageAtDpc @ 0x140311180 (MiSafeLockPageAtDpc.c)
 *     MiLockHugePfnInternal @ 0x1403EFAE4 (MiLockHugePfnInternal.c)
 *     MiCompleteJoinHugeContext @ 0x140482CA8 (MiCompleteJoinHugeContext.c)
 */

__int64 __fastcall MiJoinHugeContext(__int64 a1, __int64 a2, int a3)
{
  _RTL_BITMAP *v3; // r12
  int v5; // r11d
  __int64 v7; // r14
  int v9; // ecx
  unsigned int v10; // r8d
  __int64 *v11; // r14
  __int64 *v12; // rbx
  __int64 i; // rax
  unsigned int v14; // ebx
  ULONG v15; // ebx
  ULONG_PTR v16; // rcx
  __int64 v17; // rcx
  __int128 v19; // [rsp+20h] [rbp-20h]
  __int128 v20; // [rsp+30h] [rbp-10h] BYREF

  v3 = (_RTL_BITMAP *)(a1 + 344);
  v5 = *(_DWORD *)(a1 + 344);
  v7 = *(_QWORD *)(a1 + 352);
  v19 = 0LL;
  v9 = (*(_DWORD *)(a1 + 352) & 4) != 0LL ? 0x20 : 0;
  v10 = v9 + v5 - 1;
  v11 = (__int64 *)(v7 - ((v7 & 4) != 0 ? 4 : 0));
  if ( !v5 )
    return 0LL;
  v12 = v11;
  for ( i = *v11 | ((1LL << v9) - 1); i == -1; i = *v12 )
  {
    if ( ++v12 > &v11[(unsigned __int64)v10 >> 6] )
      return 0LL;
  }
  _BitScanForward64((unsigned __int64 *)&i, ~i);
  v14 = i + ((unsigned int)(v12 - v11) << 6);
  if ( v14 > v10 )
    return 0LL;
  if ( v14 == -1 )
    return 0LL;
  v15 = v14 - v9;
  if ( v15 == -1 )
    return 0LL;
  RtlSetBits(v3, v15, 1u);
  v16 = *(_QWORD *)(a1 + 424);
  if ( *(_BYTE *)(a1 + 324) )
  {
    BYTE8(v19) = 0;
    *(_QWORD *)&v19 = qword_140E30100 + 8 * (v16 & 0x3FFFFF);
    MiLockHugePfnInternal(v19);
    if ( (*(_QWORD *)(a1 + 24) & 1) == 0 )
      goto LABEL_11;
    _InterlockedAnd(
      (volatile signed __int32 *)(qword_140E30108 + 4 * (((((__int64)v19 - qword_140E30100) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << ((((__int64)v19 - qword_140E30100) >> 3) & 0x1F)));
    return 0LL;
  }
  BYTE8(v19) = 1;
  *(_QWORD *)&v19 = 48 * v16 - 0x220000000000LL;
  LOBYTE(v17) = MiSafeLockPageAtDpc(v16);
  if ( (*(_QWORD *)(a1 + 24) & 1) != 0 )
  {
    if ( (_BYTE)v17 != 17 )
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
LABEL_11:
  if ( !a3 )
  {
    ++*(_DWORD *)(a1 + 572);
    *(_QWORD *)(a2 + 584) = a1;
  }
  v20 = v19;
  MiCompleteJoinHugeContext(v17, a2, &v20, v15);
  return 1LL;
}
