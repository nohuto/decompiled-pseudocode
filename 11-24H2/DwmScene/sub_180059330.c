/*
 * XREFs of sub_180059330 @ 0x180059330
 * Callers:
 *     sub_18005755C @ 0x18005755C (sub_18005755C.c)
 * Callees:
 *     sub_1800183EC @ 0x1800183EC (sub_1800183EC.c)
 *     sub_18001A808 @ 0x18001A808 (sub_18001A808.c)
 *     sub_1800572BC @ 0x1800572BC (sub_1800572BC.c)
 *     sub_180057774 @ 0x180057774 (sub_180057774.c)
 *     sub_18005901C @ 0x18005901C (sub_18005901C.c)
 */

char __fastcall sub_180059330(__int64 a1)
{
  double v2; // xmm2_8
  int v3; // eax
  float v4; // xmm0_4
  __int64 v5; // xmm3_8
  __int64 v6; // xmm1_8
  double v7; // xmm1_8
  __int128 *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __m128i v12; // xmm0
  bool v13; // zf
  char result; // al
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18[4]; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v19[64]; // [rsp+70h] [rbp-29h] BYREF
  _OWORD v20[4]; // [rsp+B0h] [rbp+17h] BYREF

  if ( sub_180057774(a1, 2) )
    return 0;
  sub_18005901C(a1);
  *(_QWORD *)&v2 = *(unsigned int *)(a1 + 332);
  if ( (*(_BYTE *)(a1 + 544) & 2) == 0 )
    return 0;
  v3 = *(_DWORD *)(a1 + 316);
  switch ( v3 )
  {
    case 1:
      v4 = *(float *)(a1 + 324);
      v5 = 981668463LL;
      if ( v4 < 0.001 )
        v4 = 0.001;
      v6 = *(unsigned int *)(a1 + 320);
LABEL_7:
      if ( *(float *)&v6 >= 0.001 )
        v5 = v6;
      *(_QWORD *)&v7 = *(unsigned int *)(a1 + 328);
      *(float *)&v7 = *(float *)&v7 * 0.017453292;
      v8 = sub_1800572BC((__int64)v19, v7, v2, *(double *)&v5, LODWORD(v4));
      v9 = v8[1];
      v10 = v8[2];
      v11 = v8[3];
      v18[0] = *v8;
      break;
    case 2:
      v4 = *(float *)(a1 + 320);
      v5 = 981668463LL;
      if ( v4 < 0.001 )
        v4 = 0.001;
      v6 = *(unsigned int *)(a1 + 324);
      goto LABEL_7;
    case 3:
      v9 = *(unsigned int *)(a1 + 340);
      v11 = *(unsigned int *)(a1 + 324);
      v12 = (__m128i)v9;
      *(float *)v12.m128i_i32 = *(float *)&v9 * *(float *)&v2;
      v10 = *(unsigned int *)(a1 + 320);
LABEL_16:
      *(float *)v12.m128i_i32 = sub_18001A808(*(float *)v12.m128i_i32);
      *(_QWORD *)&v18[0] = v12.m128i_i64[0];
      *((_QWORD *)&v18[0] + 1) = _mm_srli_si128(v12, 8).m128i_u64[0];
      break;
    case 4:
      v9 = *(unsigned int *)(a1 + 340);
      v11 = *(unsigned int *)(a1 + 320);
      v12 = (__m128i)v9;
      *(float *)v12.m128i_i32 = *(float *)&v9 * *(float *)&v2;
      v10 = *(unsigned int *)(a1 + 324);
      goto LABEL_16;
    case 5:
      v9 = *(_OWORD *)(a1 + 948);
      v10 = *(_OWORD *)(a1 + 964);
      v11 = *(_OWORD *)(a1 + 980);
      v18[0] = *(_OWORD *)(a1 + 932);
      break;
    default:
      v9 = xmmword_1800F8630;
      v10 = xmmword_1800F8640;
      v11 = xmmword_1800F8650;
      v18[0] = 0x3F800000uLL;
      break;
  }
  v13 = *(_DWORD *)(a1 + 316) == 5;
  v18[3] = v11;
  v18[2] = v10;
  v18[1] = v9;
  if ( !v13 )
  {
    *(_OWORD *)(a1 + 932) = v18[0];
    *(_OWORD *)(a1 + 948) = v9;
    *(_OWORD *)(a1 + 964) = v10;
    *(_OWORD *)(a1 + 980) = v11;
  }
  sub_1800183EC(v18, (__int64)v20);
  result = 1;
  v15 = v20[1];
  *(_OWORD *)(a1 + 1124) = v20[0];
  v16 = v20[2];
  *(_OWORD *)(a1 + 1140) = v15;
  v17 = v20[3];
  *(_OWORD *)(a1 + 1156) = v16;
  *(_OWORD *)(a1 + 1172) = v17;
  *(_DWORD *)(a1 + 544) &= ~2u;
  return result;
}
