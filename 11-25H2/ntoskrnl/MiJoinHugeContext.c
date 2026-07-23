/*
 * XREFs of MiJoinHugeContext @ 0x14041C95C
 * Callers:
 *     MiGetUltraHugeAlreadyActive @ 0x14041C8B0 (MiGetUltraHugeAlreadyActive.c)
 * Callees:
 *     MiLockHugePfnInternal @ 0x14020DE6C (MiLockHugePfnInternal.c)
 *     MiSafeLockPageAtDpc @ 0x140220D38 (MiSafeLockPageAtDpc.c)
 *     RtlSetBits @ 0x140339430 (RtlSetBits.c)
 *     MiCompleteJoinHugeContext @ 0x14041CF90 (MiCompleteJoinHugeContext.c)
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
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  __int128 v20; // [rsp+20h] [rbp-20h]
  __int128 v21; // [rsp+30h] [rbp-10h] BYREF

  v3 = (_RTL_BITMAP *)(a1 + 344);
  v5 = *(_DWORD *)(a1 + 344);
  v7 = *(_QWORD *)(a1 + 352);
  v20 = 0LL;
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
  v17 = *(_QWORD *)(a1 + 424);
  if ( *(_BYTE *)(a1 + 324) )
  {
    BYTE8(v20) = 0;
    *(_QWORD *)&v20 = qword_140E2FD80 + 8 * (v17 & 0x3FFFFF);
    MiLockHugePfnInternal(v20);
    if ( (*(_QWORD *)(a1 + 24) & 1) == 0 )
      goto LABEL_11;
    _InterlockedAnd(
      (volatile signed __int32 *)(qword_140E2FD88 + 4 * (((((__int64)v20 - qword_140E2FD80) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << ((((__int64)v20 - qword_140E2FD80) >> 3) & 0x1F)));
    return 0LL;
  }
  BYTE8(v20) = 1;
  *(_QWORD *)&v20 = 48 * v17 - 0x220000000000LL;
  LOBYTE(v18) = MiSafeLockPageAtDpc(v17, 0xFFFFDE0000000000uLL, v16);
  if ( (*(_QWORD *)(a1 + 24) & 1) != 0 )
  {
    if ( (_BYTE)v18 != 17 )
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
LABEL_11:
  if ( !a3 )
  {
    ++*(_DWORD *)(a1 + 572);
    *(_QWORD *)(a2 + 584) = a1;
  }
  v21 = v20;
  MiCompleteJoinHugeContext(v18, a2, &v21, v15);
  return 1LL;
}
