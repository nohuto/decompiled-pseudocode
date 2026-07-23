/*
 * XREFs of crc32_z @ 0x140455FAC
 * Callers:
 *     crc32 @ 0x140455F88 (crc32.c)
 * Callees:
 *     crc32_sse42_simd_ @ 0x1404562B4 (crc32_sse42_simd_.c)
 *     crc_word @ 0x14045648C (crc_word.c)
 */

__int64 __fastcall crc32_z(unsigned int a1, _DWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r10
  _DWORD *v4; // r11
  unsigned int v5; // r9d
  unsigned __int64 v6; // rbx
  __int64 v7; // r11
  __int64 v8; // r10
  unsigned int v10; // r9d
  __int64 v11; // rax
  int v12; // edi
  int v13; // esi
  int v14; // ebp
  int v15; // r14d
  unsigned int v16; // r9d
  unsigned int v17; // edi
  int v18; // r12d
  unsigned int v19; // esi
  unsigned int v20; // ebp
  unsigned int v21; // r14d
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r11
  __int64 v26; // r15
  char v27; // al
  __int64 v28; // rcx
  bool v29; // zf
  unsigned int v30; // eax
  __int64 v31; // r11
  unsigned int v32; // eax
  __int64 v33; // r11
  unsigned int v34; // eax
  __int64 v35; // r11
  unsigned int v36; // eax
  __int64 v37; // r11
  __int64 v38; // r11
  unsigned __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // [rsp+28h] [rbp-40h]
  _DWORD *v44; // [rsp+78h] [rbp+10h]
  unsigned __int64 v45; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( a2 )
  {
    if ( x86_cpu_enable_simd && a3 >= 0x40 )
    {
      v6 = a3 & 0xFFFFFFFFFFFFFFF0uLL;
      v5 = ~(unsigned int)crc32_sse42_simd_(a2, a3 & 0xFFFFFFFFFFFFFFF0uLL, ~a1);
      v3 = v8 - v6;
      if ( !v3 )
        return v5;
      v4 = (_DWORD *)(v6 + v7);
    }
    v10 = ~v5;
    if ( v3 >= 0x17 )
    {
      do
      {
        if ( ((unsigned __int8)v4 & 3) == 0 )
          break;
        v11 = (unsigned __int8)(v10 ^ *(_BYTE *)v4);
        v4 = (_DWORD *)((char *)v4 + 1);
        v10 = dword_140019AE0[v11] ^ (v10 >> 8);
        --v3;
      }
      while ( v3 );
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v45 = v3 / 0x14 - 1;
      if ( v3 / 0x14 != 1 )
      {
        do
        {
          v16 = *v4 ^ v10;
          v17 = v4[1] ^ v12;
          v18 = 1;
          v19 = v4[2] ^ v13;
          v20 = v4[3] ^ v14;
          v21 = v4[4] ^ v15;
          v22 = v16;
          v23 = v17;
          v24 = v19;
          v10 = dword_140033B70[(unsigned __int8)v16];
          v44 = v4 + 5;
          v12 = dword_140033B70[(unsigned __int8)v17];
          v13 = dword_140033B70[(unsigned __int8)v19];
          v25 = v20;
          v14 = dword_140033B70[(unsigned __int8)v20];
          v43 = v21;
          v15 = dword_140033B70[(unsigned __int8)v21];
          v26 = 256LL;
          do
          {
            v27 = 8 * v18++;
            v10 ^= dword_140033B70[v26 + (unsigned __int8)(v22 >> v27)];
            v12 ^= dword_140033B70[v26 + (unsigned __int8)(v23 >> v27)];
            v13 ^= dword_140033B70[v26 + (unsigned __int8)(v24 >> v27)];
            v14 ^= dword_140033B70[v26 + (unsigned __int8)(v25 >> v27)];
            v28 = v26 + (unsigned __int8)(v43 >> v27);
            v26 += 256LL;
            v15 ^= dword_140033B70[v28];
          }
          while ( v18 < 4 );
          v29 = v45-- == 1;
          v4 = v44;
        }
        while ( !v29 );
      }
      v30 = crc_word(*v4 ^ v10);
      v32 = crc_word(v12 ^ *(_DWORD *)(v31 + 4) ^ v30);
      v34 = crc_word(v13 ^ *(_DWORD *)(v33 + 8) ^ v32);
      v36 = crc_word(v14 ^ *(_DWORD *)(v35 + 12) ^ v34);
      v10 = crc_word(v15 ^ *(_DWORD *)(v37 + 16) ^ v36);
      v4 = (_DWORD *)(v38 + 20);
    }
    if ( v3 >= 8 )
    {
      v39 = v3 >> 3;
      v3 += -8LL * (v3 >> 3);
      do
      {
        v40 = 8LL;
        do
        {
          v41 = (unsigned __int8)(v10 ^ *(_BYTE *)v4);
          v4 = (_DWORD *)((char *)v4 + 1);
          v10 = dword_140019AE0[v41] ^ (v10 >> 8);
          --v40;
        }
        while ( v40 );
        --v39;
      }
      while ( v39 );
    }
    for ( ; v3; --v3 )
    {
      v42 = (unsigned __int8)(v10 ^ *(_BYTE *)v4);
      v4 = (_DWORD *)((char *)v4 + 1);
      v10 = dword_140019AE0[v42] ^ (v10 >> 8);
    }
    return ~v10;
  }
  return 0LL;
}
