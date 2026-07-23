/*
 * XREFs of AccelpBuildHuffmanEncoding @ 0x140664690
 * Callers:
 *     AccelCompressBuffer @ 0x140663FEC (AccelCompressBuffer.c)
 * Callees:
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall AccelpBuildHuffmanEncoding(__int64 a1)
{
  _QWORD *v1; // rbx
  size_t v2; // rsi
  unsigned __int64 *v3; // rdi
  unsigned __int64 v4; // rax
  _DWORD *v5; // rcx
  _QWORD *v7; // rsi
  unsigned __int64 *v8; // rdx
  unsigned __int64 *v9; // rcx
  unsigned __int64 *v10; // r8
  unsigned __int64 *v11; // r9
  unsigned __int64 **v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r9
  _QWORD *v15; // rdx
  __int64 v16; // r10
  unsigned __int64 *i; // r8
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r11
  unsigned __int64 *j; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 k; // r9
  unsigned __int64 v24; // r8
  _DWORD *v25; // r10

  v1 = *(_QWORD **)(a1 + 24);
  v2 = 0LL;
  v3 = v1;
  memset_0(v1 + 1865, 0, 0x100uLL);
  v4 = 0LL;
  v5 = v1 + 1705;
  do
  {
    if ( *v5 )
    {
      *v3 = (unsigned int)*v5;
      v3[1] = 0LL;
      v3[2] = v4;
      v3 += 3;
      ++v2;
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 0x100 );
  if ( !v2 )
    return 3221225485LL;
  if ( v2 == 1 )
  {
    *((_DWORD *)v1 + v1[2] + 3154) = *((_DWORD *)v1 + v1[2] + 3154) & 0xFFF80000 | 0x8000;
  }
  else
  {
    qsort(v1, v2, 0x18uLL, AccelpCodeSort);
    v7 = v1 + 3;
    while ( 1 )
    {
      v3[1] = (unsigned __int64)v1;
      v8 = v1 + 6;
      v3[2] = (unsigned __int64)v7;
      v9 = v3;
      v10 = v3;
      *v3 = *v1 + *v7;
      while ( 1 )
      {
        v11 = v9;
        if ( v8 == v3 && v10 == v9 )
          break;
        v9 += 3;
        if ( v8 == v3 || v10 < v9 && *v10 < *v8 )
        {
          v12 = (unsigned __int64 **)(v11 + 5);
          *(v12 - 1) = v10;
          v13 = *v10;
          v10 += 3;
        }
        else
        {
          v9[1] = (unsigned __int64)v8;
          v12 = (unsigned __int64 **)(v9 + 2);
          v13 = *v8;
          v8 += 3;
        }
        *v9 = v13;
        if ( v8 == v3 || v10 < v9 && *v10 < *v8 )
        {
          *v12 = v10;
          *v9 += *v10;
          v10 += 3;
        }
        else
        {
          *v12 = v8;
          *v9 += *v8;
          v8 += 3;
        }
      }
      v14 = 0LL;
      v15 = v1 + 1539;
      v16 = 0LL;
      for ( i = v1 + 1540; ; v14 = *i )
      {
        while ( v9[1] )
        {
          ++v14;
          ++v16;
          *i = v14;
          i += 2;
          *v15 = v9[1];
          v15 += 2;
          v9 = (unsigned __int64 *)v9[2];
        }
        v18 = v9[2];
        v9[1] = v14;
        *((_BYTE *)v1 + v18 + 14920) = v14;
        if ( !v16 )
          break;
        v9 = (unsigned __int64 *)*(v15 - 2);
        i -= 2;
        --v16;
        v15 -= 2;
      }
      v19 = v1[1];
      if ( v19 <= 0xF )
        break;
      for ( j = v1; j < v3; j += 3 )
      {
        v21 = *j + 1;
        j[1] = 0LL;
        *j = v21 >> 1;
      }
    }
    v22 = *(v3 - 2);
    for ( k = 0LL; v22 <= v19; ++v22 )
    {
      v24 = 0LL;
      v25 = v1 + 1577;
      do
      {
        if ( *((unsigned __int8 *)v1 + v24 + 14920) == v22 )
          *v25 ^= (*v25 ^ ((unsigned __int16)v22 << 15)) & 0x78000 ^ (*(_WORD *)v25 ^ (*(_WORD *)v25 ^ (unsigned __int16)((_WORD)v22 << 15)) & 0x8000 ^ (unsigned __int16)k++) & 0x7FFF;
        ++v24;
        ++v25;
      }
      while ( v24 < 0x100 );
      k *= 2LL;
    }
  }
  return 0LL;
}
