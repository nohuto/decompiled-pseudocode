/*
 * XREFs of sub_180099A1C @ 0x180099A1C
 * Callers:
 *     sub_180099028 @ 0x180099028 (sub_180099028.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180039228 @ 0x180039228 (sub_180039228.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 *     sub_180040728 @ 0x180040728 (sub_180040728.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_180099A1C(__int64 *a1, __int64 a2, __int64 a3)
{
  float v4; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm8_4
  float v7; // xmm9_4
  __int64 *v8; // r14
  float **v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // r14
  __int64 v22; // r12
  int v23; // xmm2_4
  int v24; // xmm1_4
  int v25; // xmm0_4
  _DWORD *v26; // rcx
  int v27; // xmm2_4
  int v28; // xmm1_4
  int v29; // xmm0_4
  _DWORD *v30; // rcx
  int v31; // xmm3_4
  int v32; // xmm1_4
  int v33; // xmm0_4
  _DWORD *v34; // rcx
  int v35; // xmm2_4
  int v36; // xmm1_4
  int v37; // xmm0_4
  _DWORD *v38; // rcx
  int v39; // xmm3_4
  int v40; // xmm1_4
  int v41; // xmm0_4
  _DWORD *v42; // rcx
  int v43; // xmm2_4
  int v44; // xmm1_4
  int v45; // xmm0_4
  _DWORD *v46; // rcx
  int v47; // xmm3_4
  int v48; // xmm1_4
  int v49; // xmm0_4
  _DWORD *v50; // rcx
  int v51; // xmm2_4
  int v52; // xmm1_4
  int v53; // xmm0_4
  _DWORD *v54; // rcx
  int v55; // xmm3_4
  int v56; // xmm1_4
  int v57; // xmm0_4
  _DWORD *v58; // rcx
  __int64 v59; // rbx
  __m128 *v60; // rax
  __int64 v61; // rcx
  float *v62; // rax
  __m128 v64; // [rsp+40h] [rbp-51h] BYREF
  __m128 v65; // [rsp+50h] [rbp-41h] BYREF
  __int64 v66; // [rsp+60h] [rbp-31h] BYREF
  __int64 v67; // [rsp+68h] [rbp-29h]
  __m128 v68[5]; // [rsp+70h] [rbp-21h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = 0.0;
  v5 = 0.0;
  v6 = 0.0;
  v7 = 1.0;
  v8 = *(__int64 **)a2;
  if ( *(_QWORD *)a2 == *(_QWORD *)(a2 + 8) )
  {
    v9 = (float **)(a3 + 64);
    v10 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v10 + 192) = 0LL;
    *(_QWORD *)(v10 + 200) = 0LL;
    v11 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v11 + 208) = 0LL;
    *(_QWORD *)(v11 + 216) = 0LL;
    v12 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v12 + 224) = 0LL;
    *(_QWORD *)(v12 + 232) = 0LL;
    v13 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v13 + 240) = 0LL;
    *(_QWORD *)(v13 + 248) = 0LL;
    v14 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v14 + 256) = 0LL;
    *(_QWORD *)(v14 + 264) = 0LL;
    v15 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v15 + 272) = 0LL;
    *(_QWORD *)(v15 + 280) = 0LL;
    v16 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v16 + 288) = 0LL;
    *(_QWORD *)(v16 + 296) = 0LL;
    v17 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v17 + 304) = 0LL;
    *(_QWORD *)(v17 + 312) = 0LL;
    v18 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v18 + 320) = 0LL;
    *(_QWORD *)(v18 + 328) = 0LL;
  }
  else
  {
    v19 = v8[1];
    if ( v19 )
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v20 = *v8;
    v21 = v8[1];
    v22 = v21;
    v23 = *(_DWORD *)(v20 + 268);
    v24 = *(_DWORD *)(v20 + 264);
    v25 = *(_DWORD *)(v20 + 260);
    v9 = (float **)(a3 + 64);
    v26 = *(_DWORD **)(a3 + 64);
    v26[48] = *(_DWORD *)(v20 + 256);
    v26[49] = v25;
    v26[50] = v24;
    v26[51] = v23;
    v27 = *(_DWORD *)(v20 + 284);
    v28 = *(_DWORD *)(v20 + 280);
    v29 = *(_DWORD *)(v20 + 276);
    v30 = *(_DWORD **)(a3 + 64);
    v30[52] = *(_DWORD *)(v20 + 272);
    v30[53] = v29;
    v30[54] = v28;
    v30[55] = v27;
    v31 = *(_DWORD *)(v20 + 300);
    v32 = *(_DWORD *)(v20 + 296);
    v33 = *(_DWORD *)(v20 + 292);
    v34 = *(_DWORD **)(a3 + 64);
    v34[56] = *(_DWORD *)(v20 + 288);
    v34[57] = v33;
    v34[58] = v32;
    v34[59] = v31;
    v35 = *(_DWORD *)(v20 + 316);
    v36 = *(_DWORD *)(v20 + 312);
    v37 = *(_DWORD *)(v20 + 308);
    v38 = *(_DWORD **)(a3 + 64);
    v38[60] = *(_DWORD *)(v20 + 304);
    v38[61] = v37;
    v38[62] = v36;
    v38[63] = v35;
    v39 = *(_DWORD *)(v20 + 332);
    v40 = *(_DWORD *)(v20 + 328);
    v41 = *(_DWORD *)(v20 + 324);
    v42 = *(_DWORD **)(a3 + 64);
    v42[64] = *(_DWORD *)(v20 + 320);
    v42[65] = v41;
    v42[66] = v40;
    v42[67] = v39;
    v43 = *(_DWORD *)(v20 + 348);
    v44 = *(_DWORD *)(v20 + 344);
    v45 = *(_DWORD *)(v20 + 340);
    v46 = *(_DWORD **)(a3 + 64);
    v46[68] = *(_DWORD *)(v20 + 336);
    v46[69] = v45;
    v46[70] = v44;
    v46[71] = v43;
    v47 = *(_DWORD *)(v20 + 364);
    v48 = *(_DWORD *)(v20 + 360);
    v49 = *(_DWORD *)(v20 + 356);
    v50 = *(_DWORD **)(a3 + 64);
    v50[72] = *(_DWORD *)(v20 + 352);
    v50[73] = v49;
    v50[74] = v48;
    v50[75] = v47;
    v51 = *(_DWORD *)(v20 + 380);
    v52 = *(_DWORD *)(v20 + 376);
    v53 = *(_DWORD *)(v20 + 372);
    v54 = *(_DWORD **)(a3 + 64);
    v54[76] = *(_DWORD *)(v20 + 368);
    v54[77] = v53;
    v54[78] = v52;
    v54[79] = v51;
    v55 = *(_DWORD *)(v20 + 396);
    v56 = *(_DWORD *)(v20 + 392);
    v57 = *(_DWORD *)(v20 + 388);
    v58 = *(_DWORD **)(a3 + 64);
    v58[80] = *(_DWORD *)(v20 + 384);
    v58[81] = v57;
    v58[82] = v56;
    v58[83] = v55;
    v59 = *sub_180040728(v20, &v66);
    sub_18003BCDC(v59);
    v64 = *(__m128 *)(v59 + 156);
    v65 = *(__m128 *)(v20 + 92);
    v60 = sub_180039228(v68, &v65, &v64);
    v4 = v60->m128_f32[0];
    v5 = v60->m128_f32[1];
    v6 = v60->m128_f32[2];
    v7 = v60->m128_f32[3];
    if ( v67 )
      sub_18001050C(v67);
    if ( v21 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
      v22 = v21;
    }
    *a1 = v20;
    v61 = a1[1];
    a1[1] = v21;
    if ( v61 )
      sub_18001050C(v61);
    if ( v21 )
      sub_18001050C(v22);
  }
  v62 = *v9;
  v62[84] = v4 * 1.4142135;
  v62[85] = v5 * 1.4142135;
  v62[86] = v6 * 1.4142135;
  v62[87] = v7 * 1.4142135;
  return a1;
}
