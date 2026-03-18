/*
 * XREFs of OutputAATo16BPP_ExtBGR @ 0x1402F6480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OutputAATo16BPP_ExtBGR(
        unsigned int *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8,
        int a9)
{
  unsigned int *v9; // rbx
  unsigned __int16 *v11; // r10
  unsigned __int8 *v12; // r11
  __m128i v13; // xmm2
  int v14; // r14d
  int v15; // r12d
  unsigned int v16; // r13d
  int v17; // r15d
  __int64 result; // rax
  unsigned __int8 *v19; // r11
  int v20; // ecx
  unsigned int v21; // r8d

  v9 = a4;
  v11 = a6;
  v12 = a2;
  v13 = *(__m128i *)(a5 - 24);
  v14 = *(_DWORD *)(a5 - 16);
  v15 = _mm_cvtsi128_si32(v13);
  v16 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 12));
  v17 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 4));
  if ( (_BYTE)a9 )
  {
    v12 = a2 + 4;
    if ( a2[7] )
      *(_WORD *)a4 = HIWORD(v16) ^ (HIWORD(v15) & ((*(_DWORD *)(a5 + 4LL * *v12) - (unsigned int)*a6) >> 16) | HIWORD(v17) & ((*(_DWORD *)(a5 + 4LL * v12[1] + 1024) - (unsigned int)a6[1]) >> 16) | HIWORD(v14) & ((*(_DWORD *)(a5 + 4LL * v12[2] + 2048) - (unsigned int)a6[2]) >> 16));
    v9 = (unsigned int *)((char *)a4 + 2);
    v11 = a6 + 3;
    if ( (unsigned __int64)(a6 + 3) >= a7 )
      v11 = (unsigned __int16 *)((char *)v11 + a8);
  }
  result = *a1;
  v19 = v12 + 4;
  if ( (result & 0x80u) == 0LL )
  {
    while ( (unsigned __int64)v19 < a3 )
    {
      result = v19[4];
      v20 = v11[3];
      v21 = v17 & (*(_DWORD *)(a5 + 4LL * v19[5] + 1024) - v11[4]) | v14 & (*(_DWORD *)(a5 + 4LL * v19[6] + 2048)
                                                                          - v11[5]) | ((v15 & (*(_DWORD *)(a5 + 4LL * *v19)
                                                                                             - *v11) | v17 & (*(_DWORD *)(a5 + 4LL * v19[1] + 1024) - v11[1]) | v14 & (*(_DWORD *)(a5 + 4LL * v19[2] + 2048) - (unsigned int)v11[2])) >> 16);
      v11 += 6;
      *v9++ = v16 ^ (v15 & (*(_DWORD *)(a5 + 4 * result) - v20) | v21);
      if ( (unsigned __int64)v11 >= a7 )
      {
        result = a8;
        v11 = (unsigned __int16 *)((char *)v11 + a8);
      }
      v19 += 8;
    }
  }
  else
  {
    while ( (unsigned __int64)v19 < a3 )
    {
      if ( v19[3] )
      {
        result = HIWORD(v16);
        *(_WORD *)v9 = HIWORD(v16) ^ (HIWORD(v15) & ((*(_DWORD *)(a5 + 4LL * *v19) - (unsigned int)*v11) >> 16) | HIWORD(v17) & ((*(_DWORD *)(a5 + 4LL * v19[1] + 1024) - (unsigned int)v11[1]) >> 16) | HIWORD(v14) & ((*(_DWORD *)(a5 + 4LL * v19[2] + 2048) - (unsigned int)v11[2]) >> 16));
      }
      v9 = (unsigned int *)((char *)v9 + 2);
      v11 += 3;
      if ( (unsigned __int64)v11 >= a7 )
      {
        result = a8;
        v11 = (unsigned __int16 *)((char *)v11 + a8);
      }
      v19 += 4;
    }
  }
  if ( HIBYTE(a9) )
  {
    if ( v19[3] )
    {
      result = *v19;
      *(_WORD *)v9 = HIWORD(v16) ^ (HIWORD(v15) & ((*(_DWORD *)(a5 + 4 * result) - (unsigned int)*v11) >> 16) | HIWORD(v17) & ((*(_DWORD *)(a5 + 4LL * v19[1] + 1024) - (unsigned int)v11[1]) >> 16) | HIWORD(v14) & ((*(_DWORD *)(a5 + 4LL * v19[2] + 2048) - (unsigned int)v11[2]) >> 16));
    }
  }
  return result;
}
