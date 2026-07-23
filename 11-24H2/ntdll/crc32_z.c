/*
 * XREFs of crc32_z @ 0x180119E3C
 * Callers:
 *     crc32 @ 0x18011AB08 (crc32.c)
 * Callees:
 *     crc_word @ 0x18011A17C (crc_word.c)
 *     crc32_sse42_simd_ @ 0x18011A1A4 (crc32_sse42_simd_.c)
 *     crc32_avx512_simd_ @ 0x18011A378 (crc32_avx512_simd_.c)
 */

__int64 __fastcall crc32_z(unsigned int a1, _DWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r10
  _DWORD *v4; // r11
  unsigned int v5; // r9d
  unsigned __int64 v7; // rbx
  __int64 v8; // r11
  __int64 v9; // r10
  unsigned __int64 v10; // rbx
  __int64 v11; // r11
  __int64 v12; // r10
  unsigned int v13; // r9d
  __int64 v14; // rax
  int v15; // edi
  int v16; // esi
  int v17; // ebp
  int v18; // r14d
  unsigned int v19; // r9d
  unsigned int v20; // edi
  int v21; // r12d
  unsigned int v22; // esi
  unsigned int v23; // ebp
  unsigned int v24; // r14d
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // r11
  __int64 v29; // r15
  char v30; // al
  __int64 v31; // rcx
  bool v32; // zf
  unsigned int v33; // eax
  __int64 v34; // r11
  unsigned int v35; // eax
  __int64 v36; // r11
  unsigned int v37; // eax
  __int64 v38; // r11
  unsigned int v39; // eax
  __int64 v40; // r11
  __int64 v41; // r11
  unsigned __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // [rsp+28h] [rbp-40h]
  _DWORD *v47; // [rsp+78h] [rbp+10h]
  unsigned __int64 v48; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( !a2 )
    return 0LL;
  if ( x86_cpu_enable_avx512 && a3 >= 0x100 )
  {
    v7 = a3 & 0xFFFFFFFFFFFFFFC0uLL;
    v5 = ~(unsigned int)crc32_avx512_simd_(a2, a3 & 0xFFFFFFFFFFFFFFC0uLL, ~a1);
    v3 = v9 - v7;
    if ( !v3 )
      return v5;
    v4 = (_DWORD *)(v7 + v8);
  }
  if ( v3 < 0x40 || !x86_cpu_enable_simd )
    goto LABEL_11;
  v10 = v3 & 0xFFFFFFFFFFFFFFF0uLL;
  v5 = ~(unsigned int)crc32_sse42_simd_(v4, v3 & 0xFFFFFFFFFFFFFFF0uLL, ~v5);
  v3 = v12 - v10;
  if ( v3 )
  {
    v4 = (_DWORD *)(v10 + v11);
LABEL_11:
    v13 = ~v5;
    if ( v3 >= 0x17 )
    {
      do
      {
        if ( ((unsigned __int8)v4 & 3) == 0 )
          break;
        v14 = (unsigned __int8)(v13 ^ *(_BYTE *)v4);
        v4 = (_DWORD *)((char *)v4 + 1);
        v13 = dword_18017F110[v14] ^ (v13 >> 8);
        --v3;
      }
      while ( v3 );
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v48 = v3 / 0x14 - 1;
      if ( v3 / 0x14 != 1 )
      {
        do
        {
          v19 = *v4 ^ v13;
          v20 = v4[1] ^ v15;
          v21 = 1;
          v22 = v4[2] ^ v16;
          v23 = v4[3] ^ v17;
          v24 = v4[4] ^ v18;
          v25 = v19;
          v26 = v20;
          v27 = v22;
          v13 = dword_180196EE0[(unsigned __int8)v19];
          v47 = v4 + 5;
          v15 = dword_180196EE0[(unsigned __int8)v20];
          v16 = dword_180196EE0[(unsigned __int8)v22];
          v28 = v23;
          v17 = dword_180196EE0[(unsigned __int8)v23];
          v46 = v24;
          v18 = dword_180196EE0[(unsigned __int8)v24];
          v29 = 256LL;
          do
          {
            v30 = 8 * v21++;
            v13 ^= dword_180196EE0[v29 + (unsigned __int8)(v25 >> v30)];
            v15 ^= dword_180196EE0[v29 + (unsigned __int8)(v26 >> v30)];
            v16 ^= dword_180196EE0[v29 + (unsigned __int8)(v27 >> v30)];
            v17 ^= dword_180196EE0[v29 + (unsigned __int8)(v28 >> v30)];
            v31 = v29 + (unsigned __int8)(v46 >> v30);
            v29 += 256LL;
            v18 ^= dword_180196EE0[v31];
          }
          while ( v21 < 4 );
          v32 = v48-- == 1;
          v4 = v47;
        }
        while ( !v32 );
      }
      v33 = crc_word(*v4 ^ v13);
      v35 = crc_word(v15 ^ *(_DWORD *)(v34 + 4) ^ v33);
      v37 = crc_word(v16 ^ *(_DWORD *)(v36 + 8) ^ v35);
      v39 = crc_word(v17 ^ *(_DWORD *)(v38 + 12) ^ v37);
      v13 = crc_word(v18 ^ *(_DWORD *)(v40 + 16) ^ v39);
      v4 = (_DWORD *)(v41 + 20);
    }
    if ( v3 >= 8 )
    {
      v42 = v3 >> 3;
      v3 += -8LL * (v3 >> 3);
      do
      {
        v43 = 8LL;
        do
        {
          v44 = (unsigned __int8)(v13 ^ *(_BYTE *)v4);
          v4 = (_DWORD *)((char *)v4 + 1);
          v13 = dword_18017F110[v44] ^ (v13 >> 8);
          --v43;
        }
        while ( v43 );
        --v42;
      }
      while ( v42 );
    }
    for ( ; v3; --v3 )
    {
      v45 = (unsigned __int8)(v13 ^ *(_BYTE *)v4);
      v4 = (_DWORD *)((char *)v4 + 1);
      v13 = dword_18017F110[v45] ^ (v13 >> 8);
    }
    return ~v13;
  }
  return v5;
}
