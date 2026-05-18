/*
 * XREFs of sub_1800993A8 @ 0x1800993A8
 * Callers:
 *     sub_180099188 @ 0x180099188 (sub_180099188.c)
 * Callees:
 *     _o_cosf @ 0x18000C428 (_o_cosf.c)
 *     _o_log2f @ 0x18000C470 (_o_log2f.c)
 *     sub_18000CD2C @ 0x18000CD2C (sub_18000CD2C.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180038C4C @ 0x180038C4C (sub_180038C4C.c)
 *     sub_18003A064 @ 0x18003A064 (sub_18003A064.c)
 *     sub_18003A238 @ 0x18003A238 (sub_18003A238.c)
 *     sub_18003A3E0 @ 0x18003A3E0 (sub_18003A3E0.c)
 *     sub_18003AC48 @ 0x18003AC48 (sub_18003AC48.c)
 *     sub_18005755C @ 0x18005755C (sub_18005755C.c)
 *     sub_180058F98 @ 0x180058F98 (sub_180058F98.c)
 *     sub_18005D62C @ 0x18005D62C (sub_18005D62C.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800993A8(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 v4; // r14
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r12
  __int64 v7; // r13
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r15
  __m128 v11; // xmm7
  __int32 v12; // xmm14_4
  __int32 v13; // xmm15_4
  __m128 v14; // xmm10
  unsigned int v15; // esi
  __int64 v16; // rcx
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  __m128 v19; // xmm11
  __m128 v20; // xmm8
  unsigned __int32 v21; // xmm8_4
  int v22; // xmm12_4
  int v23; // xmm13_4
  int v24; // ecx
  _DWORD *v25; // rax
  __m128 v26; // xmm1
  __m128 v27; // xmm0
  int v28; // xmm4_4
  float v29; // xmm0_4
  __m128 v30; // xmm4
  __m128 v31; // xmm1
  __m128 v32; // xmm2
  __m128 v33; // xmm3
  char *v34; // rax
  __m128 v35; // xmm2
  __m128 v36; // xmm3
  char *v37; // rax
  char *v38; // rax
  __int64 *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // r12
  __m128 *v45; // rax
  _OWORD *v46; // rax
  __int64 v47; // rcx
  __int128 v48; // xmm1
  __int128 v49; // xmm2
  __int128 v50; // xmm3
  float v51; // xmm1_4
  int v52; // xmm4_4
  float v53; // xmm0_4
  int v54; // xmm3_4
  int v55; // xmm5_4
  int v56; // xmm2_4
  float *v57; // rax
  _DWORD *v58; // rdx
  unsigned __int32 v60; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v61; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v62; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v63; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v64; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int32 v65; // [rsp+68h] [rbp-A0h]
  __int64 v66; // [rsp+6Ch] [rbp-9Ch]
  unsigned __int64 v67; // [rsp+74h] [rbp-94h]
  unsigned __int64 v68; // [rsp+80h] [rbp-88h]
  unsigned __int32 v69; // [rsp+88h] [rbp-80h]
  unsigned __int64 v70; // [rsp+8Ch] [rbp-7Ch]
  unsigned __int64 v71; // [rsp+98h] [rbp-70h]
  __int64 v72; // [rsp+A8h] [rbp-60h]
  float v73; // [rsp+B0h] [rbp-58h] BYREF
  float v74; // [rsp+B4h] [rbp-54h]
  float v75; // [rsp+B8h] [rbp-50h]
  __int64 v76; // [rsp+C0h] [rbp-48h]
  __int64 v77; // [rsp+C8h] [rbp-40h]
  _BYTE *v78; // [rsp+D0h] [rbp-38h]
  __int64 v79; // [rsp+D8h] [rbp-30h]
  __int64 v80; // [rsp+E0h] [rbp-28h]
  __int64 v81; // [rsp+E8h] [rbp-20h]
  __m128 v82; // [rsp+F0h] [rbp-18h]
  __int64 v83; // [rsp+100h] [rbp-8h] BYREF
  __int64 v84; // [rsp+108h] [rbp+0h]
  __int64 v85; // [rsp+110h] [rbp+8h] BYREF
  __int64 v86; // [rsp+118h] [rbp+10h]
  __int64 v87; // [rsp+120h] [rbp+18h] BYREF
  __int64 v88; // [rsp+128h] [rbp+20h]
  __int64 v89; // [rsp+130h] [rbp+28h] BYREF
  __int64 v90; // [rsp+138h] [rbp+30h]
  __int64 v91; // [rsp+140h] [rbp+38h] BYREF
  __int64 v92; // [rsp+148h] [rbp+40h]
  __int64 v93; // [rsp+150h] [rbp+48h] BYREF
  __int64 v94; // [rsp+158h] [rbp+50h]
  __int64 v95; // [rsp+160h] [rbp+58h]
  __int64 v96; // [rsp+168h] [rbp+60h]
  __m128 v97[4]; // [rsp+178h] [rbp+70h] BYREF
  __int128 v98; // [rsp+1B8h] [rbp+B0h] BYREF
  float v99; // [rsp+1D8h] [rbp+D0h]
  float v100; // [rsp+1DCh] [rbp+D4h]
  float v101; // [rsp+1E0h] [rbp+D8h]
  char v102[232]; // [rsp+1F8h] [rbp+F0h] BYREF
  unsigned __int32 v106; // [rsp+340h] [rbp+238h]

  v3 = a2;
  v4 = a1;
  sub_18000CD2C(a1, 16LL, 3LL, (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  HIDWORD(v66) = 1;
  v5 = (__int64)(v3[1] - *v3) >> 4;
  v6 = 0LL;
  v63 = 0LL;
  if ( v5 > 3 )
  {
    v5 = 3LL;
LABEL_4:
    v7 = 0LL;
    v8 = (__int64 *)(v4 + 8);
    v72 = 392 - v4;
    v76 = 440 - v4;
    v77 = 344 - v4;
    v79 = 488 - v4;
    v80 = 536 - v4;
    v9 = -8 - v4;
    v81 = -8 - v4;
    while ( 1 )
    {
      unknown_libname_81(&v83, (__int64 *)((char *)v8 + v9 + *v3));
      v10 = v83;
      v82 = _mm_mul_ps(
              _mm_shuffle_ps((__m128)*(unsigned int *)(v83 + 104), (__m128)*(unsigned int *)(v83 + 104), 0),
              (__m128)_mm_loadu_si128((const __m128i *)(v83 + 88)));
      v11 = 0LL;
      v78 = (_BYTE *)(v83 + 72);
      if ( *(_BYTE *)(v83 + 72) )
      {
        v106 = v82.m128_u32[2];
        v13 = v82.m128_i32[1];
        v12 = v82.m128_i32[0];
      }
      else
      {
        v12 = 0;
        v13 = 0;
        v106 = 0;
      }
      v14 = (__m128)*(unsigned int *)(v83 + 116);
      v15 = *(_DWORD *)(v83 + 120);
      sub_180011C04(v83 + 56, &v85);
      sub_18003A238(v85, &v73);
      v16 = v86;
      if ( v86 )
        sub_18001060C(v86);
      v17 = (__m128)LODWORD(v74);
      v17.m128_f32[0] = (float)(v74 * v73) * v75;
      v18 = _mm_and_ps(v17, (__m128)xmmword_18018D660);
      *(double *)v18.m128_u64 = o_cbrtf(v16);
      v19 = v18;
      sub_180011C04(v10 + 56, &v87);
      sub_18003A064(v87, (__int64)&v64);
      if ( v88 )
        sub_18001060C(v88);
      sub_180011C04(v10 + 56, &v89);
      sub_18003A3E0(v89, &v98);
      *(float *)&v61 = -v99;
      *((float *)&v61 + 1) = -v100;
      *(float *)&v62 = -v101;
      if ( v90 )
        sub_18001060C(v90);
      sub_18003AC48(&v61);
      if ( v15 == 2 )
      {
        v20 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps((__m128)v61, (__m128)(unsigned int)v62));
        v67 = v20.m128_u64[0];
        v21 = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
        v22 = v67;
        v64 = v67;
        v23 = HIDWORD(v67);
        v65 = v21;
      }
      else
      {
        v21 = v65;
        v23 = HIDWORD(v64);
        v22 = v64;
      }
      v24 = *(_DWORD *)(v10 + 108);
      if ( !v24 )
      {
        if ( v15 == 2 )
          goto LABEL_23;
        v24 = 2;
      }
      if ( v15 < 2 )
      {
        switch ( v24 )
        {
          case 1:
            v11 = (__m128)0x3DA2F983u;
            break;
          case 2:
            v11 = (__m128)0x3F800000u;
            break;
          case 4:
            v11 = v14;
            v11.m128_f32[0] = v14.m128_f32[0] * v14.m128_f32[0];
            break;
        }
      }
      else if ( v15 == 2 )
      {
        if ( v24 != 3 )
        {
          if ( v24 == 4 )
          {
            o_cosf();
            v11 = (__m128)0x3F800000u;
            v11.m128_f32[0] = (float)(1.0 - fmaxf(0.001, v14.m128_f32[0])) * 6.2831855;
          }
          goto LABEL_24;
        }
LABEL_23:
        v11 = (__m128)0x3F800000u;
        goto LABEL_24;
      }
      if ( v15 == 1 )
      {
        v29 = (float)(fmaxf(1.0, *(float *)(v10 + 112)) * 0.017453292) * 0.5;
        o_cosf();
        o_log2f();
        v30 = _mm_xor_ps((__m128)0x3C23D70Au, (__m128)xmmword_18018D670);
        v30.m128_f32[0] = v30.m128_f32[0] / (float)(1.0 - v29);
        v31 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps((__m128)v61, (__m128)(unsigned int)v62));
        v68 = v31.m128_u64[0];
        v69 = _mm_shuffle_ps(v31, v31, 170).m128_u32[0];
        v32 = 0LL;
        v32.m128_u64[0] = v31.m128_u64[0];
        v33 = _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), _mm_movelh_ps(v32, (__m128)v69));
        v70 = v33.m128_u64[0];
        v34 = (char *)v8 + v72 + *(_QWORD *)(a3 + 64);
        *(_DWORD *)v34 = v33.m128_i32[0];
        *((_DWORD *)v34 + 1) = HIDWORD(v70);
        *((_DWORD *)v34 + 2) = _mm_shuffle_ps(v33, v33, 170).m128_u32[0];
        *((float *)v34 + 3) = -v30.m128_f32[0];
        goto LABEL_25;
      }
LABEL_24:
      v25 = (_DWORD *)((char *)v8 + v72 + *(_QWORD *)(a3 + 64));
      *v25 = 0;
      v25[1] = 0;
      v25[2] = 0;
      v25[3] = 0;
LABEL_25:
      v60 = v106;
      if ( v15 == 2 )
      {
        v28 = 0;
        v27.m128_u64[0] = __PAIR64__(v13, v12);
      }
      else
      {
        v26 = v19;
        v26.m128_f32[0] = v19.m128_f32[0] * v19.m128_f32[0];
        v27 = _mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), _mm_movelh_ps((__m128)__PAIR64__(v13, v12), (__m128)v106));
        v60 = _mm_shuffle_ps(v27, v27, 170).m128_u32[0];
        v28 = 1065353216;
      }
      v35 = 0LL;
      v35.m128_u64[0] = v27.m128_u64[0];
      v36 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), _mm_movelh_ps(v35, (__m128)v60));
      v71 = v36.m128_u64[0];
      v37 = (char *)v8 + v76 + *(_QWORD *)(a3 + 64);
      *(_QWORD *)v37 = v36.m128_u64[0];
      *((_DWORD *)v37 + 2) = _mm_shuffle_ps(v36, v36, 170).m128_u32[0];
      *((_DWORD *)v37 + 3) = v28;
      v38 = (char *)v8 + v77 + *(_QWORD *)(a3 + 64);
      *(_DWORD *)v38 = v22;
      *((_DWORD *)v38 + 1) = v23;
      *((_DWORD *)v38 + 2) = v21;
      *((float *)v38 + 3) = v19.m128_f32[0] * v14.m128_f32[0];
      if ( v6 < 3 )
      {
        if ( !*(v8 - 1) )
        {
          sub_180011C04(v10 + 56, &v91);
          v39 = sub_18005D62C(v91, &v93);
          v40 = *v39;
          v41 = v39[1];
          *v39 = 0LL;
          v39[1] = 0LL;
          *(v8 - 1) = v40;
          v42 = *v8;
          *v8 = v41;
          if ( v42 )
            sub_18001060C(v42);
          if ( v94 )
            sub_18001060C(v94);
          if ( v92 )
            sub_18001060C(v92);
        }
        if ( *v8 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*v8 + 8));
          v10 = v83;
        }
        v43 = *(v8 - 1);
        v95 = v43;
        v44 = *v8;
        v96 = *v8;
        if ( v43 )
        {
          if ( *(_BYTE *)(v10 + 124) )
          {
            v45 = (__m128 *)sub_18005755C(v43, 0, 2);
            v97[0] = *v45;
            v97[1] = v45[1];
            v97[2] = v45[2];
            v97[3] = v45[3];
            sub_180058F98(v97, (__m128 *)(v7 + *(_QWORD *)(a3 + 64)));
          }
          else
          {
            v46 = (_OWORD *)sub_180038C4C(
                              (__int64)v102,
                              (int *)&xmmword_1800F8670,
                              &xmmword_1800F8670,
                              &xmmword_1800F8670,
                              &xmmword_1800F8670);
            v47 = *(_QWORD *)(a3 + 64);
            v48 = v46[1];
            v49 = v46[2];
            v50 = v46[3];
            *(_OWORD *)(v47 + v7) = *v46;
            *(_OWORD *)(v47 + v7 + 16) = v48;
            *(_OWORD *)(v47 + v7 + 32) = v49;
            *(_OWORD *)(v47 + v7 + 48) = v50;
          }
          v51 = 1.0 / (float)*(int *)(v43 + 1940);
          if ( *(_BYTE *)(v43 + 1952) )
            v52 = 1065353216;
          else
            v52 = 0;
          v53 = *(float *)(v43 + 1948);
          if ( ((*(_DWORD *)(v43 + 316) - 2) & 0xFFFFFFFD) == 0 )
            v53 = -v53;
          if ( *(_DWORD *)(v43 + 1960) == 1 )
            v54 = 1065353216;
          else
            v54 = 0;
          v55 = *(_DWORD *)(v43 + 1968);
          if ( *v78 && *(_BYTE *)(v10 + 124) )
            v56 = 1065353216;
          else
            v56 = 0;
          v57 = (float *)((char *)v8 + v79 + *(_QWORD *)(a3 + 64));
          *v57 = v51;
          v57[1] = v51;
          *((_DWORD *)v57 + 2) = v52;
          v57[3] = v53;
          v58 = (_DWORD *)((char *)v8 + v80 + *(_QWORD *)(a3 + 64));
          *v58 = *(_DWORD *)(v43 + 1956);
          v58[1] = v54;
          v58[2] = v55;
          v58[3] = v56;
        }
        if ( v44 )
          sub_18001060C(v44);
        v6 = v63;
      }
      if ( v84 )
        sub_18001060C(v84);
      v63 = ++v6;
      v8 += 2;
      v7 += 64LL;
      v3 = a2;
      v9 = v81;
      if ( v6 >= v5 )
        return a1;
    }
  }
  if ( v5 )
    goto LABEL_4;
  return v4;
}
