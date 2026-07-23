/*
 * XREFs of XpressBuildHuffmanDecodingTable @ 0x1800CD3A0
 * Callers:
 *     RtlDecompressBufferXpressHuff @ 0x1800CCDE0 (RtlDecompressBufferXpressHuff.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XpressBuildHuffmanDecodingTable(__m128i *a1, __int64 a2)
{
  __int16 v2; // r14
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int16 v8; // dx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rsi
  __int16 v11; // bp
  __m128i v12; // xmm0
  __int16 v13; // cx
  __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  __int16 v16; // cx
  unsigned __int16 *v17; // r11
  __int64 v18; // r9
  unsigned __int64 v19; // r10
  __int16 v20; // di
  bool v21; // zf
  __int16 *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // r9
  bool v26; // zf
  __int16 *v27; // rdx
  __int64 v28; // r11
  unsigned __int16 *v29; // rbx
  int v30; // edi
  __int64 v31; // r10
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  unsigned __int64 v35; // rax
  __int16 *v36; // rcx
  __int16 *v37; // rax
  __int64 v38; // rdx
  __int16 *v39; // rax
  __int64 v40; // rdx
  __int16 *v41; // rax
  __int64 v42; // rdx
  __int16 *v43; // rax
  __int64 v44; // rdx
  __int16 *v45; // rax
  __int64 v46; // rdx
  __m128i *v47; // rdi
  __int64 i; // rcx
  __int16 *v49; // rax
  __int64 v50; // rdx

  v2 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0x2000200u), 0);
  a1[64] = v12;
  a1[65] = v12;
  v13 = 0;
  do
  {
    v14 = *(_BYTE *)(a2 + v6) & 0xF;
    if ( (*(_BYTE *)(a2 + v6) & 0xF) != 0 )
    {
      a1->m128i_i16[2 * v7] = a1[64].m128i_i16[v14];
      v9 = v10;
      a1[64].m128i_i16[v14] = 2 * v8;
      v13 = v11;
    }
    v15 = (unsigned __int64)*(unsigned __int8 *)(a2 + v6) >> 4;
    if ( v15 )
    {
      a1->m128i_i16[2 * v9 + 1] = a1[64].m128i_i16[v15];
      a1[64].m128i_i16[v15] = 2 * v13 + 1;
    }
    v6 = ++v5;
    v7 = v5;
    v8 = v5;
    v9 = v5;
    v10 = v5;
    v13 = v5;
    v11 = v5;
  }
  while ( v5 < 0x100 );
  v16 = -1024;
  v17 = &a1[65].m128i_u16[7];
  v18 = 1024LL;
  v19 = 15LL;
  v20 = -1023;
  while ( v19 > 0xA )
  {
    v21 = v20 == v16;
    if ( v20 < v16 )
    {
      v22 = &a1[194].m128i_i16[v18];
      v18 -= (unsigned __int16)(((unsigned __int16)(v16 - v20 - 1) >> 1) + 1);
      do
      {
        *v22-- = v20;
        v20 += 2;
        v21 = v20 == v16;
      }
      while ( v20 < v16 );
    }
    if ( v21 )
      return 3221226050LL;
    v20 = v16 + 1;
    v23 = *v17;
    if ( v23 != 512 )
    {
      v24 = (__int64)a1[194].m128i_i64 + 2 * v18;
      do
      {
        v24 -= 2LL;
        --v18;
        *(_WORD *)(v24 + 2) = v19 + 16 * v23;
        v23 = a1->m128i_u16[v23];
      }
      while ( v23 != 512 );
    }
    --v19;
    v16 = -(__int16)v18;
    --v17;
  }
  v25 = 1023LL;
  v26 = v20 == v16;
  if ( v20 < v16 )
  {
    v27 = &a1[193].m128i_i16[7];
    v25 = 1023LL - (unsigned __int16)(((unsigned __int16)(v16 - v20 - 1) >> 1) + 1);
    do
    {
      *v27-- = v20;
      v20 += 2;
      v26 = v20 == v16;
    }
    while ( v20 < v16 );
  }
  if ( !v26 )
  {
    v28 = 10LL;
    v29 = &a1[65].m128i_u16[2];
    v30 = 0;
    while ( v28 )
    {
      v31 = *v29;
      v32 = 10 - v28;
      while ( v31 != 512 )
      {
        v2 = v28 + 16 * v31;
        if ( v30 || (v25 + 1) << v32 > 0x400 )
          return 3221226050LL;
        v33 = v25 << v32;
        if ( v32 )
        {
          if ( v32 != 1 )
          {
            if ( v32 != 2 )
            {
              switch ( v32 )
              {
                case 3LL:
                  a1[66].m128i_i16[v33 + 7] = v2;
                  a1[66].m128i_i16[v33 + 6] = v2;
                  a1[66].m128i_i16[v33 + 5] = v2;
                  a1[66].m128i_i16[v33 + 4] = v2;
                  break;
                case 4LL:
                  v37 = &a1[66].m128i_i16[v33 + 1];
                  v38 = 4LL;
                  do
                  {
                    *(v37 - 1) = v2;
                    *v37 = v2;
                    v37[1] = v2;
                    v37[2] = v2;
                    v37 += 4;
                    --v38;
                  }
                  while ( v38 );
                  v31 = a1->m128i_u16[v31];
                  if ( !v25 )
                    v30 = 1;
                  --v25;
                  continue;
                case 5LL:
                  v39 = &a1[66].m128i_i16[v33 + 1];
                  v40 = 8LL;
                  do
                  {
                    *(v39 - 1) = v2;
                    *v39 = v2;
                    v39[1] = v2;
                    v39[2] = v2;
                    v39 += 4;
                    --v40;
                  }
                  while ( v40 );
                  v31 = a1->m128i_u16[v31];
                  if ( !v25 )
                    v30 = 1;
                  --v25;
                  continue;
                case 6LL:
                  v43 = &a1[66].m128i_i16[v33 + 1];
                  v44 = 16LL;
                  do
                  {
                    *(v43 - 1) = v2;
                    *v43 = v2;
                    v43[1] = v2;
                    v43[2] = v2;
                    v43 += 4;
                    --v44;
                  }
                  while ( v44 );
                  v31 = a1->m128i_u16[v31];
                  if ( !v25 )
                    v30 = 1;
                  --v25;
                  continue;
                case 7LL:
                  v45 = &a1[66].m128i_i16[v33 + 1];
                  v46 = 32LL;
                  do
                  {
                    *(v45 - 1) = v2;
                    *v45 = v2;
                    v45[1] = v2;
                    v45[2] = v2;
                    v45 += 4;
                    --v46;
                  }
                  while ( v46 );
                  v31 = a1->m128i_u16[v31];
                  if ( !v25 )
                    v30 = 1;
                  --v25;
                  continue;
                case 8LL:
                  v41 = &a1[66].m128i_i16[v33 + 1];
                  v42 = 64LL;
                  do
                  {
                    *(v41 - 1) = v2;
                    *v41 = v2;
                    v41[1] = v2;
                    v41[2] = v2;
                    v41 += 4;
                    --v42;
                  }
                  while ( v42 );
                  v31 = a1->m128i_u16[v31];
                  if ( !v25 )
                    v30 = 1;
                  --v25;
                  continue;
                case 9LL:
                  v49 = &a1[66].m128i_i16[v33 + 1];
                  v50 = 128LL;
                  do
                  {
                    *(v49 - 1) = v2;
                    *v49 = v2;
                    v49[1] = v2;
                    v49[2] = v2;
                    v49 += 4;
                    --v50;
                  }
                  while ( v50 );
                  v31 = a1->m128i_u16[v31];
                  if ( !v25 )
                    v30 = 1;
                  --v25;
                  continue;
                default:
                  __fastfail(0x25u);
              }
            }
            a1[66].m128i_i16[v33 + 3] = v2;
            a1[66].m128i_i16[v33 + 2] = v2;
          }
          a1[66].m128i_i16[v33 + 1] = v2;
        }
        a1[66].m128i_i16[v33] = v2;
        v31 = a1->m128i_u16[v31];
        if ( !v25 )
          v30 = 1;
        --v25;
      }
      v25 >>= 1;
      --v28;
      --v29;
    }
    if ( v30 )
      return 0LL;
    v35 = 2LL;
    v36 = &a1[64].m128i_i16[2];
    while ( v35 <= 0xF )
    {
      if ( *v36 != 512 )
        return 3221226050LL;
      ++v35;
      ++v36;
    }
    if ( a1[64].m128i_i16[1] != 512 )
    {
      v47 = a1 + 66;
      for ( i = 512LL; i; --i )
      {
        v47->m128i_i16[0] = v2;
        v47 = (__m128i *)((char *)v47 + 2);
      }
      return 0LL;
    }
  }
  return 3221226050LL;
}
