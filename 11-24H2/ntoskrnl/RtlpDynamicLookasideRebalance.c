/*
 * XREFs of RtlpDynamicLookasideRebalance @ 0x14040468C
 * Callers:
 *     ExHeapLookasideRebalance @ 0x140404624 (ExHeapLookasideRebalance.c)
 * Callees:
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpDynamicLookasideRebalance(__int64 *a1)
{
  size_t v1; // r9
  unsigned int v2; // r11d
  __int64 v4; // rsi
  int *v5; // rdi
  _DWORD *v6; // r10
  unsigned __int8 v7; // cf
  unsigned int v8; // r8d
  unsigned int v9; // eax
  int v10; // ecx
  __int64 result; // rax
  __int64 v12; // r10
  unsigned int *v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // r11d
  __int64 *v16; // r9
  unsigned __int64 v17; // rcx
  unsigned int v18; // edi
  unsigned int v19; // edx
  int v20; // r8d
  _WORD *v21; // r9
  int v22; // esi
  unsigned int v23; // eax
  int v24; // r8d
  unsigned int v25; // ecx
  unsigned int v26; // edx
  _BYTE Base[4]; // [rsp+20h] [rbp-228h] BYREF
  char v28; // [rsp+24h] [rbp-224h] BYREF

  v1 = *((unsigned int *)a1 + 2);
  v2 = 0;
  if ( (_DWORD)v1 )
  {
    v4 = *a1;
    v5 = (int *)&v28;
    v6 = (_DWORD *)a1 + 21;
    do
    {
      v7 = _bittest64(&v4, v2);
      *(v5 - 1) = v2;
      v8 = -1;
      v9 = v7 + *v6 - v6[4];
      v6 += 16;
      v10 = -1;
      if ( v9 >= v7 )
        v8 = v9;
      if ( v8 + *(v6 - 14) - *(v6 - 10) >= v8 )
        v10 = v8 + *(v6 - 14) - *(v6 - 10);
      ++v2;
      *v5 = v10;
      v5 += 2;
    }
    while ( v2 < (unsigned int)v1 );
  }
  qsort(Base, v1, 8uLL, RtlpDynamicLookasideBucketCompare);
  result = *((unsigned int *)a1 + 3);
  v12 = 0LL;
  if ( (_DWORD)result )
  {
    v13 = (unsigned int *)Base;
    v14 = (unsigned int)result;
    do
    {
      if ( v13[1] >= 0x19 )
      {
        result = *v13;
        v12 |= 1LL << result;
      }
      v13 += 2;
      --v14;
    }
    while ( v14 );
  }
  v15 = 0;
  for ( *a1 = v12; v15 < *((_DWORD *)a1 + 2); *v21 = v20 )
  {
    v16 = a1 + 10;
    v17 = (unsigned __int64)v15 << 6;
    v18 = *(_DWORD *)((char *)a1 + v17 + 84) - *(_DWORD *)((char *)a1 + v17 + 100);
    *(_DWORD *)((char *)a1 + v17 + 100) = *(_DWORD *)((char *)a1 + v17 + 84);
    v19 = *(_DWORD *)((char *)a1 + v17 + 88) - *(_DWORD *)((char *)a1 + v17 + 104);
    *(_DWORD *)((char *)a1 + v17 + 104) = *(_DWORD *)((char *)a1 + v17 + 88);
    *(_DWORD *)((char *)a1 + v17 + 108) = *(_DWORD *)((char *)a1 + v17 + 92);
    result = v15;
    if ( _bittest64(&v12, v15) )
    {
      v22 = *(unsigned __int16 *)((char *)a1 + v17 + 82);
      v23 = v18;
      if ( v19 <= v18 )
        v23 = v19;
      if ( !v18 )
        v18 = 1;
      v21 = (_WORD *)((char *)v16 + v17);
      v24 = (unsigned __int16)*v21;
      result = 1000 * v23 / v18;
      if ( v18 < 0x19 )
      {
        v20 = v24 - 10;
      }
      else
      {
        if ( (unsigned int)result >= 5 )
        {
          v25 = result * (v22 - v24);
          result = 274877907 * v25;
          v26 = v25 / 0x7D0 + 5;
          if ( v26 >= 0x1E )
            v26 = 30;
          v20 = v26 + v24;
          if ( v20 >= v22 )
            LOWORD(v20) = v22;
          goto LABEL_16;
        }
        v20 = v24 - 1;
      }
      if ( v20 <= 4 )
        LOWORD(v20) = 4;
    }
    else
    {
      LOWORD(v20) = 0;
      v21 = (_WORD *)((char *)v16 + v17);
    }
LABEL_16:
    ++v15;
  }
  return result;
}
