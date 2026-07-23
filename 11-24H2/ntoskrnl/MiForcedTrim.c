/*
 * XREFs of MiForcedTrim @ 0x1402F4A18
 * Callers:
 *     MiSelfTrim @ 0x140243008 (MiSelfTrim.c)
 * Callees:
 *     MiAgeWorkingSet @ 0x14020F2A0 (MiAgeWorkingSet.c)
 *     MiGetAvailablePagesForTrimPass @ 0x1402F51C4 (MiGetAvailablePagesForTrimPass.c)
 *     MiTrimWorkingSet @ 0x140390208 (MiTrimWorkingSet.c)
 */

__int64 __fastcall MiForcedTrim(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  char v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 AvailablePagesForTrimPass; // rax
  __int64 v11; // r10
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r9
  _QWORD *v18; // rcx
  unsigned __int64 v19; // rbp
  unsigned int v20; // edx
  unsigned __int64 v21; // rdi
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rdx
  unsigned int i; // r9d
  __int64 v26; // rax
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx

  v4 = *(unsigned __int16 *)(a1 + 174);
  v6 = a2;
  v7 = 0LL;
  v8 = *((_QWORD *)qword_140E300C8 + v4);
  v9 = *(_QWORD *)(v8 + 17600);
  AvailablePagesForTrimPass = MiGetAvailablePagesForTrimPass(v8, a2, v4, a4);
  v12 = *(_QWORD *)(a1 + 144);
  v13 = AvailablePagesForTrimPass;
  v14 = *(_QWORD *)(v9 + 328);
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  if ( v12 <= v15 )
    return 0LL;
  v16 = *(_QWORD *)(v11 + 18512);
  v17 = v12 - v15;
  v18 = (_QWORD *)(a1 + 48);
  v19 = 0LL;
  v20 = 1;
  v21 = 15 * v17 / 0x64;
  do
  {
    v19 += *v18;
    if ( v19 >= v21 )
      break;
    ++v20;
    ++v18;
  }
  while ( v20 < 8 );
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
  {
    v27 = 16 * v14;
    v28 = v17;
    v29 = v16 / 0xA;
    if ( v27 <= v16 / 0xA )
      v29 = v27;
    if ( v17 >= v16 )
      v28 = *(_QWORD *)(v11 + 18512);
    v14 = v29 * (100 * v28 / v16) / 0x64;
    if ( v14 > v17 / 0xA )
      v14 = v17 / 0xA;
  }
  if ( v13 < v14 )
  {
    v23 = v14 - v13;
    v24 = 0LL;
    if ( v23 < 0x10 )
      v23 = 16LL;
    for ( i = 7; i != 1; --i )
    {
      v24 += *(_QWORD *)(a1 + 8LL * i + 40);
      if ( v24 >= v23 )
      {
        v24 = v23;
        break;
      }
    }
    if ( v24 && ((*(_DWORD *)(a1 + 184) & 0xF) != 0 || v13 < *(_QWORD *)(v11 + 16640) >> 1) )
    {
      LOBYTE(v23) = v6;
      v26 = MiTrimWorkingSet(a1, v24, v23, i, 57);
      *(_QWORD *)(v9 + 408) += v26;
      v7 = v26;
    }
  }
  if ( v19 < v21 || (*(_DWORD *)(a1 + 4) & 0x3FFF) == 0 )
    MiAgeWorkingSet(
      a1,
      v6,
      1u,
      *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a1 + 174)) + 17600LL) + 274LL));
  return v7;
}
