/*
 * XREFs of FixupGrayScan @ 0x1400EFC9C
 * Callers:
 *     BltDIB_CY @ 0x1400EE350 (BltDIB_CY.c)
 *     ShrinkDIB_CY_SrkCX @ 0x1400EE710 (ShrinkDIB_CY_SrkCX.c)
 *     GetFixupScan @ 0x1400EFB60 (GetFixupScan.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

void *__fastcall FixupGrayScan(__int64 a1, void *a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  unsigned int v4; // ecx
  void *v5; // rsi
  __m128i v6; // xmm1
  int v7; // edi
  __m128i v8; // xmm1
  unsigned __int8 *v9; // xmm1_8
  _BYTE *v10; // xmm0_8
  unsigned int v11; // r9d
  int v12; // r11d
  int v13; // edx
  unsigned __int64 v14; // r10
  int v15; // r12d
  unsigned __int8 *v16; // r8
  unsigned int v17; // ebx
  _BYTE *v18; // rsi
  unsigned __int8 *v19; // r15
  int v20; // r10d
  unsigned __int8 *v21; // r13
  int v22; // r14d
  unsigned int v23; // ecx
  unsigned int v24; // eax
  void *result; // rax
  unsigned int v26; // edx
  int v27; // [rsp+20h] [rbp-89h]
  int v28; // [rsp+24h] [rbp-85h]
  int v29; // [rsp+28h] [rbp-81h]
  int v30; // [rsp+2Ch] [rbp-7Dh]
  unsigned int v31; // [rsp+30h] [rbp-79h]
  int v32; // [rsp+34h] [rbp-75h]
  int v33; // [rsp+38h] [rbp-71h]
  int v34; // [rsp+3Ch] [rbp-6Dh]
  unsigned int v35; // [rsp+40h] [rbp-69h]
  _BYTE v36[48]; // [rsp+48h] [rbp-61h]
  size_t Size; // [rsp+78h] [rbp-31h]
  __m128i v38; // [rsp+80h] [rbp-29h]
  __int64 v39; // [rsp+80h] [rbp-29h]
  __int128 v40; // [rsp+90h] [rbp-19h]
  __m128i v41; // [rsp+A0h] [rbp-9h]
  __int64 v42; // [rsp+B0h] [rbp+7h]
  unsigned int v45; // [rsp+120h] [rbp+77h]
  int v46; // [rsp+128h] [rbp+7Fh]

  v2 = *(unsigned int *)(a1 + 56);
  v3 = a1;
  v4 = *(_DWORD *)(a1 + 56);
  v5 = a2;
  v35 = v4;
  v6 = *(__m128i *)(v3 + 512);
  v40 = *(_OWORD *)(v3 + 480);
  *(_OWORD *)v36 = v40;
  v38 = v6;
  v41 = *(__m128i *)(v3 + 496);
  *(__m128i *)&v36[16] = v41;
  Size = *(_QWORD *)(v3 + 528);
  v7 = HIDWORD(Size);
  *(__m128i *)&v36[32] = v6;
  if ( (*(_DWORD *)v3 & 0x20) != 0 )
  {
    v14 = v6.m128i_i64[0];
    *(_DWORD *)v3 &= ~0x20u;
    v7 = HIDWORD(Size) + 1;
  }
  else
  {
    v34 = HIDWORD(*(_QWORD *)(v3 + 528));
    if ( SHIDWORD(Size) <= 1 )
    {
      v14 = _mm_srli_si128(v6, 8).m128i_u64[0];
    }
    else
    {
      v8 = *(__m128i *)&v36[24];
      v40 = *(_OWORD *)&v36[8];
      *(_QWORD *)&v36[32] = *(_QWORD *)&v36[40];
      v41 = v8;
      *(_QWORD *)&v36[40] = *(_QWORD *)v36;
      memmove(*(void **)v36, *(const void **)&v36[24], (unsigned int)Size);
      v9 = (unsigned __int8 *)_mm_srli_si128(*(__m128i *)&v36[8], 8).m128i_u64[0];
      v10 = (_BYTE *)_mm_srli_si128(v41, 8).m128i_u64[0];
      if ( *(int *)(v3 + 60) <= 0 )
      {
        memmove(v10, v9, (unsigned int)Size);
      }
      else
      {
        (*(void (__fastcall **)(__int64, _BYTE *))(v3 + 24))(v3 + 8, v10 + 1);
        *v10 = v10[2];
        v10[v2 + 1] = v10[v2 - 1];
      }
      v11 = v9[1];
      v12 = *v9;
      v13 = *(unsigned __int8 *)(*(_QWORD *)&v36[24] + 1LL);
      v14 = *(_QWORD *)&v36[32];
      v45 = v11;
      v15 = v2 - 1;
      if ( v15 )
      {
        v16 = (unsigned __int8 *)(*(_QWORD *)&v36[24] + 3LL);
        v17 = v9[2];
        v39 = *(_QWORD *)&v36[8] - *(_QWORD *)&v36[24];
        v18 = &v10[-*(_QWORD *)&v36[24]];
        v19 = &v9[-*(_QWORD *)&v36[24]];
        v20 = *(unsigned __int8 *)(*(_QWORD *)&v36[24] + 2LL);
        v21 = (unsigned __int8 *)(*(_QWORD *)v36 + 1LL);
        v22 = (unsigned __int8)**(_BYTE **)&v36[24];
        v42 = *(_QWORD *)&v36[32] - *(_QWORD *)&v36[24];
        do
        {
          v23 = v17;
          v24 = v11;
          v27 = v12;
          v29 = v22;
          v12 = v11;
          v31 = v45;
          v11 = v17;
          v17 = v16[(_QWORD)v19];
          v22 = v13;
          v13 = v20;
          v20 = *v16;
          v33 = v13;
          v45 = v11;
          if ( v24 != v23 && !(v12 ^ v13 | v11 ^ v22) )
          {
            if ( v12 ^ v17 | v11 ^ v27 | v22 ^ v20 | v13 ^ v29
              && (v28 = v16[v39 - 2],
                  v30 = v16[v39 - 1],
                  v46 = v16[(_QWORD)v18 - 2],
                  v32 = v16[(_QWORD)v18 - 1],
                  v12 ^ v46 | v22 ^ v28 | v11 ^ v32 | v13 ^ v30) )
            {
              if ( v31 < v11 )
              {
                v16[v42 - 1] = (v12 + v13 + v27 + v32 + 12 * (unsigned int)v16[v42 - 1] + 8) >> 4;
                *v21 = (v12 + v13 + v28 + v20 + 4 * (3 * (unsigned int)*v21 + 2)) >> 4;
              }
              else
              {
                v16[v42 - 2] = (v11 + v22 + v17 + v46 + 12 * v16[v42 - 2] + 8) >> 4;
                v21[1] = (v11 + v22 + v30 + v29 + 12 * v21[1] + 8) >> 4;
              }
            }
            else
            {
              v26 = (v16[(_QWORD)v19 - 2] + (unsigned int)v16[(_QWORD)v19 - 1] + 1) >> 1;
              v21[1] = v26;
              *v21 = v26;
              v16[v42 - 1] = v26;
              v16[v42 - 2] = v26;
              v13 = v33;
            }
          }
          ++v16;
          ++v21;
          --v15;
        }
        while ( v15 );
        v3 = a1;
        v7 = v34;
        v14 = *(_QWORD *)&v36[32];
      }
      v5 = a2;
      v4 = v35;
      v38 = *(__m128i *)&v36[32];
    }
  }
  if ( v5 )
    memmove(v5, (const void *)(v14 + 1), v4);
  result = v5;
  HIDWORD(Size) = v7 - 1;
  *(_OWORD *)(v3 + 480) = v40;
  *(__m128i *)(v3 + 496) = v41;
  *(__m128i *)(v3 + 512) = v38;
  *(_QWORD *)(v3 + 528) = Size;
  return result;
}
