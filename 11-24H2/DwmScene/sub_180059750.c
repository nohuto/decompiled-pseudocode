/*
 * XREFs of sub_180059750 @ 0x180059750
 * Callers:
 *     sub_180057450 @ 0x180057450 (sub_180057450.c)
 *     sub_180057518 @ 0x180057518 (sub_180057518.c)
 *     sub_18005755C @ 0x18005755C (sub_18005755C.c)
 *     sub_180057600 @ 0x180057600 (sub_180057600.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180017828 @ 0x180017828 (sub_180017828.c)
 *     sub_1800183EC @ 0x1800183EC (sub_1800183EC.c)
 *     sub_18002516C @ 0x18002516C (sub_18002516C.c)
 *     sub_180039B00 @ 0x180039B00 (sub_180039B00.c)
 *     sub_180039B70 @ 0x180039B70 (sub_180039B70.c)
 *     sub_180040888 @ 0x180040888 (sub_180040888.c)
 *     sub_1800574F4 @ 0x1800574F4 (sub_1800574F4.c)
 *     sub_180057650 @ 0x180057650 (sub_180057650.c)
 *     sub_180057774 @ 0x180057774 (sub_180057774.c)
 */

char __fastcall sub_180059750(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  float v4; // xmm1_4
  __int64 v5; // r8
  float v6; // xmm0_4
  float v7; // xmm3_4
  float v8; // xmm4_4
  int v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm4_4
  __m128 v14; // xmm3
  __m128 v15; // xmm5
  __m128 v16; // xmm2
  __m128 v17; // xmm6
  __m128 v18; // xmm2
  __m128 v19; // xmm0
  __m128 v20; // xmm2
  __int128 *v21; // rax
  _OWORD *v22; // r9
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int32 v29; // [rsp+28h] [rbp-E0h] BYREF
  float v30; // [rsp+2Ch] [rbp-DCh]
  __int64 v31; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v32; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C8h]
  __int128 v34[4]; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v35[4]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v36[64]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v37[80]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v38; // [rsp+168h] [rbp+60h] BYREF

  if ( (*(_BYTE *)(a1 + 544) & 4) != 0 && !sub_180057774(a1, 4) )
  {
    v2 = *sub_180040888(a1, &v32);
    if ( v33 )
      sub_18001060C(v33);
    if ( !v2 )
      goto LABEL_15;
    *(_DWORD *)(a1 + 1596) = 0;
    *(_DWORD *)(a1 + 1600) = 0;
    *(_DWORD *)(a1 + 1604) = 0;
    *(_DWORD *)(a1 + 1608) = 0;
    v3 = *(_QWORD *)(a1 + 136);
    if ( v3 )
    {
      sub_18002516C(v3, &v38);
      v4 = *(float *)&v38;
      v6 = *((float *)&v38 + 1);
      *(_DWORD *)(a1 + 1596) = v38;
    }
    else
    {
      if ( !*(_QWORD *)(a1 + 152) )
      {
LABEL_11:
        if ( *(_DWORD *)(a1 + 360) )
        {
          v7 = 1.0;
          v8 = 1.0;
        }
        else
        {
          v7 = *(float *)(a1 + 1604);
          v8 = *(float *)(a1 + 1608);
        }
        v9 = *(_DWORD *)(a1 + 392);
        v30 = 0.0;
        v32 = 0LL;
        v10 = v7 * *(float *)(a1 + 344);
        v11 = v8 * *(float *)(a1 + 348);
        v29 = 0;
        *(float *)(a1 + 1572) = v10;
        *(_DWORD *)(a1 + 1580) = v9;
        *(float *)(a1 + 1576) = v11;
        v12 = v7 * *(float *)(a1 + 352);
        v13 = v8 * *(float *)(a1 + 356);
        *(_DWORD *)(a1 + 1592) = *(_DWORD *)(a1 + 396);
        *(float *)(a1 + 1584) = v12;
        v14 = 0LL;
        *(float *)(a1 + 1588) = v13;
        v15 = _mm_movelh_ps((__m128)*(unsigned __int64 *)(a1 + 1572), (__m128)*(unsigned int *)(a1 + 1580));
        v16 = _mm_movelh_ps((__m128)*(unsigned __int64 *)(a1 + 1584), (__m128)*(unsigned int *)(a1 + 1592));
        v17 = _mm_sub_ps(v16, v15);
        v18 = _mm_add_ps(v16, v15);
        v14.m128_u64[0] = v18.m128_u64[0];
        v19 = (__m128)_mm_shuffle_ps(v18, v18, 170).m128_u32[0];
        v20 = 0LL;
        v14.m128_u64[0] = _mm_mul_ps(_mm_movelh_ps(v14, v19), (__m128)xmmword_18018D550).m128_u64[0];
        v20.m128_u64[0] = v17.m128_u64[0];
        LODWORD(v33) = *(_DWORD *)(a1 + 392);
        LODWORD(v31) = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
        v20.m128_u64[0] = _mm_mul_ps(_mm_movelh_ps(v20, (__m128)(unsigned int)v31), (__m128)xmmword_18018D550).m128_u64[0];
        v19.m128_f32[0] = *(float *)(a1 + 396) - *(float *)&v33;
        v32 = v14.m128_u64[0];
        v29 = v20.m128_i32[0];
        LODWORD(v31) = v19.m128_i32[0];
        v30 = v20.m128_f32[1] * -1.0;
        sub_180039B70((__int64)v36, &v32);
        v21 = (__int128 *)sub_180039B00((__int64)v37, (unsigned int *)&v29);
        sub_180017828((__int64)v34, v21, v22);
        sub_1800183EC(v34, (__int64)v35);
        v23 = v34[1];
        *(_OWORD *)(a1 + 1252) = v34[0];
        v24 = v34[2];
        *(_OWORD *)(a1 + 1268) = v23;
        v25 = v34[3];
        *(_OWORD *)(a1 + 1284) = v24;
        v26 = v35[0];
        *(_OWORD *)(a1 + 1300) = v25;
        v27 = v35[1];
        *(_OWORD *)(a1 + 1444) = v26;
        *(_OWORD *)(a1 + 1476) = v35[2];
        *(_OWORD *)(a1 + 1460) = v27;
        *(_OWORD *)(a1 + 1492) = v35[3];
LABEL_15:
        *(_DWORD *)(a1 + 544) &= ~4u;
        return 1;
      }
      v4 = (float)(int)sub_180057650(*(_QWORD *)(a1 + 152));
      *(float *)(a1 + 1596) = v4;
      v6 = (float)(int)sub_1800574F4(v5);
    }
    *(float *)(a1 + 1600) = v6;
    *(float *)(a1 + 1608) = v6;
    *(float *)(a1 + 1604) = v4;
    goto LABEL_11;
  }
  return 0;
}
