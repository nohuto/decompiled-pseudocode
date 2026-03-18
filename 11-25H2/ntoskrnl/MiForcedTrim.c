/*
 * XREFs of MiForcedTrim @ 0x1403C13A0
 * Callers:
 *     MiSelfTrim @ 0x1402BAEFC (MiSelfTrim.c)
 * Callees:
 *     MiAgeWorkingSet @ 0x140246F90 (MiAgeWorkingSet.c)
 *     MiGetAvailablePagesForTrimPass @ 0x1403C2270 (MiGetAvailablePagesForTrimPass.c)
 *     MiTrimWorkingSet @ 0x1403C4734 (MiTrimWorkingSet.c)
 */

__int64 __fastcall MiForcedTrim(__int64 a1, char a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 AvailablePagesForTrimPass; // rax
  __int64 v8; // r10
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r9
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rbp
  unsigned int v17; // edx
  unsigned __int64 v18; // rdi
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdx
  unsigned int i; // r9d
  __int64 v23; // rax
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx

  v4 = 0LL;
  v5 = *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(a1 + 174));
  v6 = *(_QWORD *)(v5 + 17600);
  AvailablePagesForTrimPass = MiGetAvailablePagesForTrimPass(v5);
  v9 = *(_QWORD *)(a1 + 144);
  v10 = AvailablePagesForTrimPass;
  v11 = *(_QWORD *)(v6 + 328);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  if ( v9 <= v12 )
    return 0LL;
  v13 = *(_QWORD *)(v8 + 18512);
  v14 = v9 - v12;
  v15 = (_QWORD *)(a1 + 48);
  v16 = 0LL;
  v17 = 1;
  v18 = 15 * v14 / 0x64;
  do
  {
    v16 += *v15;
    if ( v16 >= v18 )
      break;
    ++v17;
    ++v15;
  }
  while ( v17 < 8 );
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
  {
    v24 = 16 * v11;
    v25 = v14;
    v26 = v13 / 0xA;
    if ( v24 <= v13 / 0xA )
      v26 = v24;
    if ( v14 >= v13 )
      v25 = *(_QWORD *)(v8 + 18512);
    v11 = v26 * (100 * v25 / v13) / 0x64;
    if ( v11 > v14 / 0xA )
      v11 = v14 / 0xA;
  }
  if ( v10 < v11 )
  {
    v20 = v11 - v10;
    v21 = 0LL;
    if ( v20 < 0x10 )
      v20 = 16LL;
    for ( i = 7; i != 1; --i )
    {
      v21 += *(_QWORD *)(a1 + 8LL * i + 40);
      if ( v21 >= v20 )
      {
        v21 = v20;
        break;
      }
    }
    if ( v21 && ((*(_DWORD *)(a1 + 184) & 0xF) != 0 || v10 < *(_QWORD *)(v8 + 16640) >> 1) )
    {
      LOBYTE(v20) = a2;
      v23 = MiTrimWorkingSet(a1, v21, v20, i, 57);
      *(_QWORD *)(v6 + 408) += v23;
      v4 = v23;
    }
  }
  if ( v16 < v18 || (*(_DWORD *)(a1 + 4) & 0x3FFF) == 0 )
    MiAgeWorkingSet(
      a1,
      a2,
      1u,
      *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(a1 + 174)) + 17600LL) + 274LL));
  return v4;
}
