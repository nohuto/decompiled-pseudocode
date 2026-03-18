/*
 * XREFs of ?EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z @ 0x18015E980
 * Callers:
 *     ?EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x1801072D0 (-EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 *     ?EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x18015D680 (-EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComma.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x18015FAE0 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComm.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z @ 0x180106520 (-PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180106F10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ @ 0x18016EC60 (-GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x180188440 (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x180188A70 (-EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x180250164 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMegaRectBatchCommand::EmitGeometry(
        CMegaRectBatchCommand *this,
        struct CD3DBatchExecutionContext *a2)
{
  float v2; // xmm9_4
  float v4; // xmm8_4
  float v5; // xmm10_4
  float v7; // xmm11_4
  __m128 v8; // xmm12
  float v9; // xmm15_4
  __int64 v10; // rdi
  __m128 v11; // xmm3
  __m128 v12; // xmm3
  __m128 v13; // xmm3
  float v14; // xmm1_4
  float v15; // xmm7_4
  float v16; // xmm4_4
  float v17; // xmm5_4
  float v18; // xmm6_4
  __int64 v19; // rax
  unsigned int v20; // xmm0_4
  int v21; // xmm0_4
  int v22; // eax
  float v23; // xmm0_4
  CCommonRenderingEffect *v24; // rcx
  __int64 (*v25)(void); // rax
  __int64 v26; // rcx
  int v27; // r15d
  __int64 v28; // r8
  unsigned __int64 v29; // rdx
  float m11; // xmm2_4
  float m12; // xmm0_4
  __int64 v32; // r9
  float v33; // xmm7_4
  float v34; // xmm6_4
  float v35; // xmm10_4
  float v36; // xmm8_4
  float v37; // xmm13_4
  float v38; // xmm11_4
  float v39; // xmm9_4
  float v40; // xmm12_4
  float v41; // xmm14_4
  float v42; // xmm3_4
  float v43; // xmm4_4
  float v44; // xmm0_4
  float v45; // xmm2_4
  char v46; // al
  float *v47; // rax
  int v48; // r8d
  float v49; // xmm0_4
  float v50; // xmm14_4
  float v51; // xmm13_4
  float v52; // xmm0_4
  float v53; // xmm14_4
  float v54; // xmm3_4
  float v55; // xmm2_4
  float v56; // xmm1_4
  float v57; // xmm13_4
  float v58; // xmm4_4
  float v59; // xmm14_4
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  unsigned int *v64; // r9
  int v65; // ecx
  int *v66; // rdx
  __int64 v67; // r10
  int *v68; // rdx
  int v69; // eax
  __int64 v70; // r9
  __int32 *v71; // rdx
  char *v72; // r9
  __int64 v73; // r8
  int v74; // r12d
  __int32 *v75; // r10
  __int32 *v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rax
  __int64 v80; // rcx
  __m128 v81; // xmm6
  float v82; // xmm9_4
  float v83; // xmm8_4
  float v84; // xmm7_4
  int v85; // ecx
  int v86; // eax
  __int64 v87; // rdi
  unsigned int v88; // r14d
  bool v89; // zf
  int v90; // ecx
  __int64 v91; // rax
  int v92; // eax
  unsigned int v93; // r13d
  __int64 v94; // r8
  char *v95; // r9
  __int64 v96; // r8
  __int16 v97; // cx
  signed __int64 v98; // rdx
  __int64 v99; // r11
  int v100; // eax
  int v101; // ecx
  __int64 v102; // rsi
  int v103; // edi
  int v104; // r14d
  __int64 v105; // rcx
  __int64 v106; // rcx
  __int64 v107; // r9
  _DWORD *v108; // rdx
  int v109; // xmm0_4
  unsigned int i; // eax
  __int32 *v111; // rcx
  __int64 v112; // rax
  float v113; // xmm2_4
  float v114; // xmm3_4
  float v115; // xmm4_4
  float v116; // xmm0_4
  float v117; // xmm0_4
  unsigned int UsedSamplersBitmask; // eax
  int v119; // eax
  int v120; // eax
  int v121; // eax
  unsigned int v122; // r12d
  __int64 v123; // r13
  unsigned int v124; // edx
  int v125; // eax
  int v126; // esi
  void *v127; // r11
  __int64 v128; // rsi
  __m128 v129; // xmm3
  float v130; // xmm2_4
  int v131; // eax
  int v132; // ecx
  int v133; // eax
  int v134; // r9d
  float v135; // [rsp+48h] [rbp-C0h]
  float v136; // [rsp+4Ch] [rbp-BCh]
  float v137; // [rsp+4Ch] [rbp-BCh]
  float v138; // [rsp+50h] [rbp-B8h]
  float m22; // [rsp+50h] [rbp-B8h]
  float v140; // [rsp+50h] [rbp-B8h]
  int m21_low; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v142; // [rsp+58h] [rbp-B0h]
  float v143; // [rsp+5Ch] [rbp-ACh]
  __int64 v144; // [rsp+60h] [rbp-A8h]
  __int64 v145; // [rsp+68h] [rbp-A0h]
  char *v146; // [rsp+70h] [rbp-98h]
  __int64 v147; // [rsp+78h] [rbp-90h] BYREF
  __int32 *v148; // [rsp+80h] [rbp-88h]
  FLOAT dx; // [rsp+88h] [rbp-80h]
  int v150; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v151; // [rsp+90h] [rbp-78h] BYREF
  __int128 v152; // [rsp+98h] [rbp-70h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+A8h] [rbp-60h] BYREF
  __m128i v154; // [rsp+C0h] [rbp-48h] BYREF
  __m128 v155; // [rsp+D0h] [rbp-38h] BYREF
  __m128 v156; // [rsp+E8h] [rbp-20h]
  __int32 *v157; // [rsp+F8h] [rbp-10h] BYREF
  int v158; // [rsp+100h] [rbp-8h]
  int v159; // [rsp+104h] [rbp-4h]
  int v160; // [rsp+108h] [rbp+0h] BYREF
  _DWORD v161[63]; // [rsp+10Ch] [rbp+4h]
  wil::details::in1diag3 *retaddr; // [rsp+2F0h] [rbp+1E8h]

  v2 = *((float *)this + 4);
  v4 = *((float *)this + 8);
  v5 = *((float *)this + 9);
  v7 = *((float *)this + 16);
  v8 = (__m128)*((unsigned int *)this + 17);
  v9 = *((float *)this + 5);
  v10 = *((_QWORD *)this + 1);
  v11 = _mm_shuffle_ps((__m128)LODWORD(v2), (__m128)LODWORD(v2), 225);
  v11.m128_f32[0] = v9;
  v12 = _mm_shuffle_ps(v11, v11, 198);
  v12.m128_f32[0] = v4;
  *(float *)&v146 = v2;
  v13 = _mm_shuffle_ps(v12, v12, 39);
  v13.m128_f32[0] = v5;
  *(float *)&v145 = v4;
  v155 = _mm_shuffle_ps(v13, v13, 57);
  *(__m128 *)&matrix.m11 = v155;
  *(float *)&v157 = v5;
  v143 = v7;
  LODWORD(v144) = v8.m128_i32[0];
  *(_QWORD *)&matrix.m[2][0] = _mm_unpacklo_ps((__m128)LODWORD(v7), v8).m128_u64[0];
  D2D1InvertMatrix(&matrix);
  v14 = *((float *)this + 22);
  v152 = *(_OWORD *)(v10 + 48);
  if ( v14 == 1.0 )
  {
    v15 = *((float *)&v152 + 3);
    v16 = *((float *)&v152 + 2);
    v17 = *((float *)&v152 + 1);
    v18 = *(float *)&v152;
  }
  else
  {
    v18 = *(float *)&v152;
    v17 = *((float *)&v152 + 1);
    v16 = *((float *)&v152 + 2);
    if ( !*(_BYTE *)(*(_QWORD *)(v10 + 16) + 81LL) )
    {
      v18 = *(float *)&v152 * v14;
      v17 = *((float *)&v152 + 1) * v14;
      v16 = *((float *)&v152 + 2) * v14;
    }
    v15 = *((float *)&v152 + 3) * v14;
  }
  v19 = *(_QWORD *)(v10 + 40);
  if ( v19 )
  {
    v129 = *(__m128 *)(v19 + 72);
    v130 = _mm_shuffle_ps(v129, v129, 255).m128_f32[0];
    v16 = v16 * (float)(_mm_shuffle_ps(v129, v129, 170).m128_f32[0] * v130);
    v18 = v18 * (float)(v130 * v129.m128_f32[0]);
    v17 = v17 * (float)(_mm_shuffle_ps(v129, v129, 85).m128_f32[0] * v130);
    v15 = v15 * v130;
  }
  *(float *)&v20 = (float)(v15 * 255.0) + 6291456.25;
  v142 = v20;
  *(float *)&v21 = (float)(v16 * 255.0) + 6291456.25;
  m21_low = v21;
  v22 = v21;
  v23 = (float)(v17 * 255.0) + 6291456.25;
  v138 = (float)(v18 * 255.0) + 6291456.25;
  v142 = ((int)(LODWORD(v138) << 10) >> 11) | ((int)(LODWORD(v23) << 10) >> 3) & 0xFFFFFF00 | (v22 << 15) & 0xFFFF0000 | (v142 << 23) & 0xFF000000;
  v24 = *(CCommonRenderingEffect **)(v10 + 24);
  v25 = *(__int64 (**)(void))(*(_QWORD *)v24 + 24LL);
  if ( (char *)v25 == (char *)CBrushRenderingEffect::GetUsedSamplersBitmask )
  {
    v26 = *(unsigned int *)(*((_QWORD *)v24 + 2) + 260LL);
    v27 = (1 << v26) - 1;
  }
  else
  {
    if ( (char *)v25 == (char *)CCommonRenderingEffect::GetUsedSamplersBitmask )
      UsedSamplersBitmask = CCommonRenderingEffect::GetUsedSamplersBitmask(v24);
    else
      UsedSamplersBitmask = v25();
    v27 = UsedSamplersBitmask;
  }
  v28 = v10 + 104;
  v29 = *(_QWORD *)(v10 + 88);
  m11 = matrix.m11;
  m12 = matrix.m12;
  m22 = matrix.m22;
  m21_low = SLODWORD(matrix.m21);
  v135 = matrix.m12;
  v136 = matrix.m11;
  *(FLOAT *)&v148 = matrix.dy;
  dx = matrix.dx;
  if ( v29 == -1LL )
    goto LABEL_104;
  if ( v10 == -104 )
  {
    if ( !v29 )
      goto LABEL_17;
LABEL_104:
    ((void (__fastcall *)(__int64, unsigned __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
      v26,
      v29,
      v28);
    __debugbreak();
  }
  v26 = 0LL;
  if ( v29 )
  {
    do
    {
      if ( _bittest(&v27, v26) )
      {
        if ( (unsigned int)v26 >= v29 )
          goto LABEL_104;
        v32 = 14LL * (unsigned int)v26;
        v33 = *(float *)(v28 + v32 * 4 + 12);
        v34 = *(float *)(v28 + v32 * 4);
        v35 = *(float *)(v28 + v32 * 4 + 16);
        v36 = *(float *)(v28 + v32 * 4 + 4);
        v37 = *(float *)(v28 + v32 * 4 + 20);
        v38 = *(float *)(v28 + v32 * 4 + 8);
        v39 = *(float *)(v28 + v32 * 4 + 24);
        v40 = *(float *)(v28 + v32 * 4 + 28);
        v41 = *(float *)(v28 + v32 * 4 + 32);
        *(float *)&v161[v32 + 7] = (float)((float)(m11 * v34) + (float)(m12 * v33)) + (float)(0.0 * v39);
        *(float *)&v161[v32 + 8] = (float)((float)(m11 * v36) + (float)(v135 * v35)) + (float)(0.0 * v40);
        *(float *)&v161[v32 + 9] = (float)((float)(v136 * v38) + (float)(v135 * v37)) + (float)(0.0 * v41);
        *(float *)&v161[v32 + 10] = (float)((float)(*(float *)&m21_low * v34) + (float)(m22 * v33)) + (float)(0.0 * v39);
        v42 = dx;
        v43 = *(float *)&v148;
        v44 = *(float *)&v148 * v33;
        v45 = (float)((float)(*(float *)&m21_low * v38) + (float)(m22 * v37)) + (float)(0.0 * v41);
        *(float *)&v161[v32 + 11] = (float)((float)(*(float *)&m21_low * v36) + (float)(m22 * v35)) + (float)(0.0 * v40);
        *(float *)&v161[v32 + 12] = v45;
        *(float *)&v161[v32 + 13] = (float)((float)(v42 * v34) + v44) + v39;
        *(float *)&v161[v32 + 14] = (float)((float)(v42 * v36) + (float)(v43 * v35)) + v40;
        *(float *)&v161[v32 + 15] = (float)((float)(v42 * v38) + (float)(v43 * v37)) + v41;
        v46 = *(_BYTE *)(v28 + v32 * 4 + 52);
        LOBYTE(v161[v32 + 20]) = v46;
        m11 = v136;
        if ( v46 )
          *(_OWORD *)&v161[14 * (unsigned int)v26 + 16] = *(_OWORD *)(v28 + 56LL * (unsigned int)v26 + 36);
        m12 = v135;
      }
      v26 = (unsigned int)(v26 + 1);
    }
    while ( (unsigned int)v26 < v29 );
    v4 = *(float *)&v145;
    v2 = *(float *)&v146;
    v5 = *(float *)&v157;
    v7 = v143;
    v8.m128_i32[0] = v144;
  }
LABEL_17:
  v47 = *(float **)(v10 + 16);
  v48 = *(_DWORD *)(v10 + 96);
  v49 = v47[14];
  v50 = (float)(v47[15] * v4) + (float)(v49 * v2);
  v51 = (float)((float)(v47[15] * v5) + (float)(v49 * v9)) + v8.m128_f32[0];
  v52 = v47[16];
  v53 = v50 + v7;
  v54 = (float)((float)(v47[17] * v5) + (float)(v52 * v9)) + v8.m128_f32[0];
  v55 = (float)((float)(v47[17] * v4) + (float)(v52 * v2)) + v7;
  v56 = fminf(v51, v54);
  v57 = fmaxf(v51, v54);
  v58 = fminf(v53, v55);
  v59 = fmaxf(v53, v55);
  v137 = v56;
  v140 = v58;
  if ( v48 == 50529027 || !v48 )
  {
    v65 = *(_DWORD *)(v10 + 96);
  }
  else
  {
    v160 = 0x1000000;
    v161[0] = 0x2000000;
    v161[1] = 1;
    v161[2] = 2;
    v161[3] = 256;
    v161[4] = 512;
    v161[5] = 0x10000;
    v161[6] = 0x20000;
    if ( COERCE_FLOAT(LODWORD(v9) & _xmm) >= 0.000081380211 || COERCE_FLOAT(LODWORD(v4) & _xmm) >= 0.000081380211 )
    {
      v60 = 3;
      if ( v4 > 0.0 )
        v60 = 1;
      LODWORD(v157) = v60;
      v61 = 1;
      if ( v4 > 0.0 )
        v61 = 3;
      v158 = v61;
      v62 = 2;
      if ( v9 > 0.0 )
        v62 = 0;
      HIDWORD(v157) = v62;
      v63 = 0;
      if ( v9 > 0.0 )
        v63 = 2;
    }
    else
    {
      v119 = 2;
      if ( v2 > 0.0 )
        v119 = 0;
      LODWORD(v157) = v119;
      v120 = 0;
      if ( v2 > 0.0 )
        v120 = 2;
      v158 = v120;
      v121 = 3;
      if ( v5 > 0.0 )
        v121 = 1;
      HIDWORD(v157) = v121;
      v63 = 1;
      if ( v5 > 0.0 )
        v63 = 3;
    }
    v159 = v63;
    v64 = (unsigned int *)&v157;
    v65 = 0;
    v66 = &v160;
    v67 = 4LL;
    do
    {
      if ( (v48 & v161[2 * *v64 - 1]) != 0 )
        v65 |= *v66;
      if ( (v48 & v161[2 * *v64]) != 0 )
        v65 |= v66[1];
      ++v64;
      v66 += 2;
      --v67;
    }
    while ( v67 );
  }
  if ( (v65 & 0x1000000) != 0 )
  {
    v58 = v58 - -0.5;
    v140 = v58;
  }
  if ( (v65 & 1) == 1 )
  {
    v56 = v56 - -0.5;
  }
  else
  {
    if ( (v65 & 1) != 2 )
      goto LABEL_40;
    v56 = v56 - 0.5;
  }
  v137 = v56;
LABEL_40:
  if ( (v65 & 0x100) != 0 )
    v59 = v59 - 0.5;
  if ( (v65 & 0x10000) != 0 )
    v57 = v57 - 0.5;
  v68 = (int *)*((_QWORD *)this + 12);
  v69 = *v68;
  if ( *v68 )
  {
    v70 = v68[4];
    v71 = v68 + 3;
    v135 = 0.0;
    v72 = (char *)v71 + v70;
    v73 = v71[3] - (_QWORD)v72;
    v157 = v71;
    v146 = v72;
    *(float *)&v74 = 0.0;
    v75 = &v71[2 * v69 - 2];
    v76 = v71 + 2;
    v148 = v75;
    v77 = ((__int64)v71 + v73 + 8) >> 3;
    v145 = v77;
    if ( (int)v77 > 0 )
      goto LABEL_49;
    v74 = 1;
    LODWORD(v135) = 1;
    do
    {
      v71 = v76;
      v72 = (char *)v76 + v76[1];
      v78 = v76[3] - (_QWORD)v72;
      v157 = v76;
      v76 += 2;
      v146 = v72;
      LODWORD(v77) = ((__int64)v76 + v78) >> 3;
      v145 = (unsigned int)v77;
      if ( (_DWORD)v77 )
      {
        *(float *)&v74 = 0.0;
        v135 = 0.0;
        goto LABEL_49;
      }
    }
    while ( v71 < v75 );
  }
  else
  {
    LODWORD(v77) = v147;
    v71 = 0LL;
    *(float *)&v74 = v135;
    v75 = 0LL;
    v72 = v146;
    v157 = 0LL;
    v148 = 0LL;
    v145 = (unsigned int)v147;
  }
  while ( 1 )
  {
LABEL_49:
    if ( v71 >= v75 )
      return 0LL;
    v154.m128i_i32[1] = *v71;
    v154.m128i_i32[3] = v71[2];
    v80 = 2 * v74;
    v154.m128i_i32[0] = *(_DWORD *)&v72[4 * v80];
    v154.m128i_i32[2] = *(_DWORD *)&v72[4 * v80 + 4];
    v81 = _mm_mul_ps(_mm_cvtepi32_ps(_mm_loadu_si128(&v154)), (__m128)_xmm);
    v156 = v81;
    if ( v81.m128_f32[0] < v58 )
      v81.m128_f32[0] = v58;
    v82 = v156.m128_f32[1];
    if ( v156.m128_f32[1] < v56 )
      v82 = v56;
    v83 = v156.m128_f32[2];
    if ( v59 < v156.m128_f32[2] )
      v83 = v59;
    v84 = v156.m128_f32[3];
    if ( v57 < v156.m128_f32[3] )
      v84 = v57;
    if ( v83 > v81.m128_f32[0] && v84 > v82 )
      break;
LABEL_85:
    ++v74;
    v135 = *(float *)&v74;
    if ( v74 >= (int)v77 )
    {
      v111 = v71 + 2;
      while ( 1 )
      {
        v71 = v111;
        v72 = (char *)v111 + v111[1];
        v112 = v111[3] - (_QWORD)v72;
        v157 = v111;
        v111 += 2;
        v146 = v72;
        LODWORD(v77) = ((__int64)v111 + v112) >> 3;
        v145 = (unsigned int)v77;
        if ( (_DWORD)v77 )
          break;
        if ( v71 >= v75 )
          goto LABEL_49;
      }
      *(float *)&v74 = 0.0;
      v135 = 0.0;
    }
  }
  v85 = 48;
  v86 = *((_DWORD *)a2 + 17);
  v87 = *((_QWORD *)a2 + 3);
  if ( !*((_BYTE *)a2 + 64) )
    v85 = 16;
  *(_QWORD *)&v152 = 0x2000200010000LL;
  DWORD2(v152) = 3;
  v88 = v85 + 8 * v86;
  if ( 4 * v88 <= *(_DWORD *)(v87 + 56) )
  {
LABEL_64:
    if ( *((_BYTE *)a2 + 73) )
    {
      *((_BYTE *)a2 + 73) = 0;
      v89 = *((_BYTE *)a2 + 64) == 0;
      v150 = 0;
      v90 = 48;
      if ( v89 )
        v90 = 16;
      v91 = *((_QWORD *)a2 + 3);
      LODWORD(v147) = v90 + 8 * *((_DWORD *)a2 + 17);
      v151 = *(_QWORD *)(v91 + 24);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, __int64 *, int *))(**((_QWORD **)a2 + 2) + 144LL))(
        *((_QWORD *)a2 + 2),
        0LL,
        1LL,
        &v151,
        &v147,
        &v150);
    }
    if ( *(_QWORD *)(v87 + 40) )
    {
      if ( (unsigned int)(*(_DWORD *)(v87 + 56) - *(_DWORD *)(v87 + 52)) / *(_DWORD *)(v87 + 48) < 4 )
      {
        *((_DWORD *)a2 + 8) |= 0x20u;
        v128 = *((_QWORD *)a2 + 3);
        if ( *(_QWORD *)(v128 + 40) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v128 + 16) + 560LL) + 120LL))(
            *(_QWORD *)(*(_QWORD *)(v128 + 16) + 560LL),
            *(_QWORD *)(v128 + 24),
            0LL);
          *(_QWORD *)(v128 + 40) = 0LL;
          *(_DWORD *)(v128 + 48) = 0;
          if ( *((_BYTE *)a2 + 74) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 2) + 104LL))(
              *((_QWORD *)a2 + 2),
              *((unsigned int *)a2 + 22),
              *((unsigned int *)a2 + 19));
          }
          else
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v128 + 64) + 560LL) + 120LL))(
              *(_QWORD *)(*(_QWORD *)(v128 + 64) + 560LL),
              *(_QWORD *)(v128 + 72),
              0LL);
            *(_QWORD *)(v128 + 88) = 0LL;
            *(_DWORD *)(v128 + 96) = 0;
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 2) + 96LL))(
              *((_QWORD *)a2 + 2),
              *((unsigned int *)a2 + 23),
              *((unsigned int *)a2 + 20),
              0LL);
          }
          ++*((_DWORD *)a2 + 32);
          *((_QWORD *)a2 + 11) = 0LL;
          *((_DWORD *)a2 + 24) = 0;
        }
      }
    }
    v92 = CD3DBatchExecutionContext::PrepareIndexBuffer(a2, 6u);
    v93 = v92;
    if ( v92 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v92, 0x211u, 0LL);
      goto LABEL_152;
    }
    if ( *(_QWORD *)(v87 + 40) )
      goto LABEL_71;
    v122 = *(_DWORD *)(v87 + 56) - *(_DWORD *)(v87 + 52);
    v123 = *(_QWORD *)(v87 + 16);
    v124 = (v88 - *(_DWORD *)(v87 + 52) % v88) % v88;
    v155 = 0LL;
    v143 = *(float *)&v124;
    LODWORD(v144) = v124 + 100 * v88;
    if ( *(_DWORD *)(v123 + 1112) )
    {
      v126 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x9EBu, 0LL);
    }
    else
    {
      v125 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __m128 *))(**(_QWORD **)(v123 + 560)
                                                                                         + 112LL))(
               *(_QWORD *)(v123 + 560),
               *(_QWORD *)(v87 + 24),
               0LL,
               5 - (unsigned int)(v122 < v124 + 100 * v88),
               0,
               &v155);
      v126 = v125;
      if ( v125 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v125, 0x9F1u, 0LL);
    }
    if ( !*(_DWORD *)(v123 + 1112)
      && (v126 == -2005532292 || v126 == -2147024882 || v126 == -2005270523)
      && *(_DWORD *)(v123 + 448) )
    {
      if ( v126 != -2005270523 )
        goto LABEL_147;
      v131 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v123 + 552) + 312LL))(*(_QWORD *)(v123 + 552));
      v132 = *(_DWORD *)(v123 + 1112);
      if ( v131 != -2005270480 )
      {
        if ( !v132 )
          *(_DWORD *)(v123 + 1112) = -2005270523;
        goto LABEL_149;
      }
      if ( !v132 )
      {
        *(_DWORD *)(v123 + 1112) = -2005270480;
        CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v123 + 16));
      }
      else
      {
LABEL_147:
        CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v123 + 16));
      }
    }
    if ( v126 >= 0 )
    {
LABEL_126:
      *(float *)&m21_low = 0.0;
      if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v126, 0, &m21_low) )
      {
        v134 = m21_low;
        if ( *(float *)&m21_low == -9.1482967e-34 )
        {
          if ( v126 >= 0 )
            v126 = -2003304307;
          if ( *(_DWORD *)(v123 + 1112) == (_DWORD)v127 )
            *(_DWORD *)(v123 + 1112) = v126;
        }
        v126 = v134;
        if ( v134 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v134, 0xB31u, v127);
          v127 = 0LL;
        }
      }
      v93 = v126;
      if ( v126 < 0 )
        goto LABEL_151;
      *(_QWORD *)(v87 + 40) = v155.m128_u64[0];
      *(_DWORD *)(v87 + 48) = v88;
      if ( v122 < (unsigned int)v144 )
        *(_DWORD *)(v87 + 52) = (_DWORD)v127;
      else
        *(_DWORD *)(v87 + 52) += LODWORD(v143);
      *(float *)&v74 = v135;
      *((_DWORD *)a2 + 19) = *(_DWORD *)(v87 + 52) / v88;
LABEL_71:
      v94 = *((_QWORD *)a2 + 3);
      v95 = (char *)(*(_QWORD *)(v94 + 88) + *(unsigned int *)(v94 + 100));
      *(_DWORD *)(v94 + 100) += 6 * *(_DWORD *)(v94 + 96);
      v96 = 6LL;
      v97 = *((_WORD *)a2 + 38) + *((_WORD *)a2 + 44);
      v98 = (char *)&v152 - v95;
      do
      {
        *(_WORD *)v95 = *(_WORD *)&v95[v98] + v97;
        v95 += 2;
        --v96;
      }
      while ( v96 );
      *((_DWORD *)a2 + 23) += 6;
      *((_DWORD *)a2 + 22) += 4;
      v99 = *(_QWORD *)(v87 + 40) + *(unsigned int *)(v87 + 52);
      v100 = 48;
      *(_DWORD *)(v87 + 52) += 4 * *(_DWORD *)(v87 + 48);
      v89 = *((_BYTE *)a2 + 64) == 0;
      v101 = *((_DWORD *)a2 + 17);
      *(_DWORD *)v99 = v81.m128_i32[0];
      if ( v89 )
        v100 = 16;
      *(float *)(v99 + 4) = v82;
      v102 = 4LL;
      *(_DWORD *)(v99 + 8) = 1065353216;
      v103 = 0;
      v104 = v100 + 8 * v101;
      *(float *)(v104 + v99) = v83;
      *(float *)(v104 + v99 + 4) = v82;
      *(_DWORD *)(v104 + v99 + 8) = 1065353216;
      v105 = 2 * v104;
      *(float *)(v105 + v99) = v83;
      *(float *)(v105 + v99 + 4) = v84;
      *(_DWORD *)(v105 + v99 + 8) = 1065353216;
      v106 = 3 * v104;
      *(_DWORD *)(v106 + v99) = v81.m128_i32[0];
      *(float *)(v106 + v99 + 4) = v84;
      *(_DWORD *)(v106 + v99 + 8) = 1065353216;
      do
      {
        v107 = v99 + v103;
        *(_DWORD *)(v107 + 12) = v142;
        v108 = (_DWORD *)(v107 + 16);
        if ( *((_BYTE *)a2 + 64) )
        {
          v109 = *(_DWORD *)(v107 + 4);
          *v108 = *(_DWORD *)v107;
          *(_DWORD *)(v107 + 20) = v109;
          *(_DWORD *)(v107 + 24) = 0;
          *(_QWORD *)(v107 + 32) = 0LL;
          *(_DWORD *)(v107 + 40) = 0;
          *(_DWORD *)(v107 + 44) = 1065353216;
          if ( *((_BYTE *)a2 + 64) )
            v108 = (_DWORD *)(v107 + 48);
        }
        for ( i = 0; i < *((_DWORD *)a2 + 17); ++i )
        {
          if ( _bittest(&v27, i) )
          {
            v113 = (float)((float)(*(float *)(v107 + 4) * *(float *)&v161[14 * i + 10])
                         + (float)(*(float *)v107 * *(float *)&v161[14 * i + 7]))
                 + *(float *)&v161[14 * i + 13];
            v114 = (float)((float)(*(float *)(v107 + 4) * *(float *)&v161[14 * i + 11])
                         + (float)(*(float *)v107 * *(float *)&v161[14 * i + 8]))
                 + *(float *)&v161[14 * i + 14];
            v115 = (float)((float)(*(float *)(v107 + 4) * *(float *)&v161[14 * i + 12])
                         + (float)(*(float *)v107 * *(float *)&v161[14 * i + 9]))
                 + *(float *)&v161[14 * i + 15];
            if ( COERCE_FLOAT(LODWORD(v115) & _xmm) >= 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v115 - 1.0) & _xmm) >= 0.000081380211 )
            {
              v113 = v113 / v115;
              v114 = v114 / v115;
            }
            *(float *)&v108[2 * i] = v113;
            *(float *)&v108[2 * i + 1] = v114;
            if ( LOBYTE(v161[14 * i + 20]) )
            {
              v116 = *(float *)&v161[14 * i + 18];
              if ( v113 <= v116 )
                v116 = fmaxf(v113, *(float *)&v161[14 * i + 16]);
              *(float *)&v108[2 * i] = v116;
              v117 = *(float *)&v161[14 * i + 19];
              if ( v114 <= v117 )
                v117 = fmaxf(v114, *(float *)&v161[14 * i + 17]);
              *(float *)&v108[2 * i + 1] = v117;
            }
          }
          else
          {
            *(_QWORD *)&v108[2 * i] = 0LL;
          }
        }
        v103 += v104;
        --v102;
      }
      while ( v102 );
      v56 = v137;
      v58 = v140;
      v71 = v157;
      LODWORD(v77) = v145;
      v72 = v146;
      v75 = v148;
      goto LABEL_85;
    }
LABEL_149:
    if ( *(_DWORD *)(v123 + 1112) )
    {
      v126 = -2003304307;
      v127 = 0LL;
      v93 = -2003304307;
LABEL_151:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v126, 0x6Cu, v127);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v126, 0x218u, 0LL);
      goto LABEL_152;
    }
    goto LABEL_126;
  }
  CD3DBatchExecutionContext::Flush(a2, 8LL);
  v133 = CD3DDynamicAppendBuffer::EnsureByteSpace((CD3DDynamicAppendBuffer *)(v87 + 16), 4 * v88, 0);
  v93 = v133;
  if ( v133 >= 0 )
  {
    *((_BYTE *)a2 + 73) = 1;
    goto LABEL_64;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v133, 0x1FAu, 0LL);
LABEL_152:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC2,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\megarect.cpp",
    (const char *)v93);
  return v93;
}
