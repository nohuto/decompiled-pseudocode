/*
 * XREFs of MiComputeZeroClusterMaximum @ 0x14043CB7C
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1403087F0 (MiResolvePrivateZeroFault.c)
 *     MiExpandSharedZeroCluster @ 0x14034162C (MiExpandSharedZeroCluster.c)
 *     MiGetClusterPage @ 0x1404CBFA4 (MiGetClusterPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiComputeZeroClusterMaximum(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // r10
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  _QWORD *v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rbp
  unsigned int v17; // ecx
  __int64 v18; // r10
  _QWORD *v19; // rsi
  unsigned int i; // r9d
  _QWORD *v21; // r9
  unsigned __int64 v22; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx

  v3 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 8) + 16LL * *(_QWORD *)(a1 + 24);
  v7 = (((unsigned __int64)(*(_DWORD *)v6 & 0xFFF) + *(_QWORD *)(v6 + 8) + 4095LL) >> 12) - v3;
  v8 = *(_QWORD *)v6 + (v3 << 12);
  if ( a3 )
  {
    v9 = (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) - (v8 >> 12);
    if ( v7 > v9 + 1 )
      v7 = v9 + 1;
  }
  v10 = (_QWORD *)*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a2 + 174));
  v11 = *(_QWORD *)(v10[2200] + 312LL);
  if ( v11 > 0x4E20 && (v11 & 0xFFFFFFFFFFFFFFFEuLL) > 0x4E20 )
    v12 = v11 >> 1;
  else
    v12 = 10000LL;
  v13 = v10[2336];
  v14 = v12 >> 1;
  if ( v13 < v14 )
  {
    v15 = 0;
    v16 = v10[2] + 14944LL;
    while ( v15 < (unsigned __int16)KeNumberNodes )
    {
      v17 = dword_140E2DD0C;
      v18 = 0LL;
      v19 = (_QWORD *)v16;
      while ( v18 <= 1 )
      {
        for ( i = 0; i < v17; ++i )
        {
          v13 += *(unsigned __int16 *)(*v19 + 16LL * i);
          if ( v13 >= v14 )
            goto LABEL_15;
          v17 = dword_140E2DD0C;
        }
        ++v18;
        ++v19;
      }
      v16 += 57216LL;
      ++v15;
    }
    v7 = 1LL;
  }
LABEL_15:
  if ( (*(_DWORD *)(a2 + 184) & 0x40) != 0 )
  {
    v24 = *(_QWORD *)(a2 + 128);
    v25 = *(_QWORD *)(a2 + 120);
    if ( v24 >= v25 )
      return 1LL;
    if ( v24 + v7 > v25 )
      v7 = v25 - v24;
  }
  if ( *(_BYTE *)a1 == 1 )
  {
    v21 = v10 + 408;
    v22 = v10[376] + v10[360];
    while ( v21 < &v10[11 * ((*(_DWORD *)(a1 + 80) >> 3) & 7u) + 419] )
    {
      v22 += *v21;
      v21 += 11;
    }
    if ( v7 > v22 )
      v7 = v22;
  }
  if ( !v7 )
    v7 = 1LL;
  result = 512 - ((((v8 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF);
  if ( v7 <= result )
    return v7;
  return result;
}
