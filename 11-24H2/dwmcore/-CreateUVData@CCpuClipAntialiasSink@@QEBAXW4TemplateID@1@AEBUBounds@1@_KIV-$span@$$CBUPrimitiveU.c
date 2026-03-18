/*
 * XREFs of ?CreateUVData@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@_KIV?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@PEAPEAVUVData@1@@Z @ 0x18019B4C0
 * Callers:
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180148B80 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_NPEA_N@Z @ 0x1801999F0 (-AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexA.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall CCpuClipAntialiasSink::CreateUVData(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned __int64 *a6,
        _QWORD *a7)
{
  float v7; // xmm2_4
  float v9; // xmm0_4
  __int64 v12; // r15
  __int64 v13; // rsi
  int v14; // ebx
  float v15; // xmm0_4
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  unsigned __int16 v19; // bx
  __int64 v20; // rdx
  unsigned int v21; // r13d
  __int64 v22; // rcx
  float v23; // esi
  __int64 v24; // rcx
  float *v25; // rax
  __int64 v26; // rcx
  bool v27; // zf
  float *v28; // r15
  HANDLE ProcessHeap; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // r12
  unsigned __int64 v32; // rcx
  SIZE_T v33; // rbx
  HANDLE v34; // rax
  float *v35; // rax
  float *v36; // r13
  __m128 v37; // xmm0
  __m128 v38; // xmm6
  __m128 v39; // xmm0
  float *v41; // r9
  char v42; // r11
  __m128 v43; // xmm10
  __int64 v44; // rcx
  __m128 v45; // xmm2
  __m128 v46; // xmm1
  __m128 v47; // xmm3
  __int64 v48; // rcx
  __m128 v49; // xmm1
  unsigned int v50; // eax
  float v51; // xmm4_4
  unsigned __int64 v52; // rcx
  float v53; // xmm5_4
  unsigned int v54; // eax
  float *v55; // r8
  float v56; // xmm4_4
  unsigned __int64 v57; // rcx
  float v58; // xmm5_4
  unsigned int v59; // r14d
  int v60; // edx
  unsigned int v61; // eax
  float v62; // ecx
  int v63; // esi
  int v64; // r15d
  int v65; // r12d
  unsigned __int64 v66; // xmm0_8
  unsigned __int64 v67; // xmm2_8
  unsigned int v68; // eax
  char *v69; // r8
  float v70; // xmm4_4
  unsigned __int64 v71; // rcx
  float v72; // xmm5_4
  float v73; // xmm4_4
  float v74; // xmm5_4
  unsigned int v75; // eax
  char *v76; // r9
  unsigned __int64 v77; // rcx
  float *v78; // rdx
  int v79; // r9d
  int v80; // r8d
  __m128 v81; // xmm2
  __int64 v82; // rdx
  __int64 v83; // rcx
  __m128 v84; // xmm1
  __m128 v85; // xmm3
  __int64 v86; // rdx
  __int64 v87; // rcx
  __m128 v88; // xmm1
  unsigned int v89; // eax
  char *v90; // r8
  float v91; // xmm4_4
  unsigned __int64 v92; // rcx
  float v93; // xmm5_4
  float v94; // xmm4_4
  float v95; // xmm5_4
  unsigned int v96; // eax
  char *v97; // r9
  unsigned __int64 v98; // rcx
  float *v99; // r8
  _QWORD *result; // rax
  __int64 v101; // rdx
  float v102; // xmm1_4
  float v103; // xmm2_4
  float v104; // xmm3_4
  float v105; // xmm0_4
  float v106; // xmm0_4
  __int64 v107; // rdx
  float v108; // xmm1_4
  float v109; // xmm2_4
  float v110; // xmm3_4
  float v111; // xmm0_4
  float v112; // xmm0_4
  __int64 v113; // rdx
  float v114; // xmm1_4
  float v115; // xmm2_4
  float v116; // xmm3_4
  float v117; // xmm0_4
  float v118; // xmm0_4
  __int64 v119; // r8
  float v120; // xmm1_4
  float v121; // xmm2_4
  float v122; // xmm3_4
  float v123; // xmm0_4
  float v124; // xmm0_4
  __int64 v125; // rdx
  float v126; // xmm1_4
  float v127; // xmm2_4
  float v128; // xmm3_4
  float v129; // xmm0_4
  float v130; // xmm0_4
  __int64 v131; // rdx
  float v132; // xmm1_4
  float v133; // xmm2_4
  float v134; // xmm3_4
  float v135; // xmm0_4
  float v136; // xmm0_4
  __m128 v137; // xmm0
  __m128 v138; // xmm1
  unsigned int *v139; // rax
  __m128 v140; // xmm2
  __m128 v141; // xmm1
  float Y[2]; // [rsp+28h] [rbp-91h] BYREF
  unsigned __int64 v143; // [rsp+30h] [rbp-89h]
  float v144; // [rsp+38h] [rbp-81h]
  int v145; // [rsp+3Ch] [rbp-7Dh]
  unsigned __int64 v146; // [rsp+40h] [rbp-79h]
  float v147[4]; // [rsp+48h] [rbp-71h] BYREF
  float *v148; // [rsp+58h] [rbp-61h]
  __int64 v149; // [rsp+60h] [rbp-59h]
  __int64 v150; // [rsp+68h] [rbp-51h]
  float *v151; // [rsp+70h] [rbp-49h]
  _QWORD *v152; // [rsp+80h] [rbp-39h]
  void *retaddr; // [rsp+100h] [rbp+47h]

  v7 = *(float *)(a3 + 4);
  v9 = *(float *)(a3 + 8);
  v12 = a2;
  if ( v9 <= v7 )
  {
    v23 = 0.0;
    v21 = 0;
    v148 = 0LL;
    v150 = 0LL;
    Y[1] = 0.0;
    v149 = 0LL;
    v144 = 0.0;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 8LL * a2 + 40);
    v14 = (int)v7;
    Y[1] = 0.0;
    v15 = modff(v9, &Y[1]);
    v16 = (int)Y[1];
    if ( COERCE_FLOAT(LODWORD(v15) & _xmm) < 0.000081380211 )
      LOWORD(v16) = v16 - 1;
    v17 = (unsigned __int16)v16;
    v18 = (unsigned __int16)v14;
    v19 = 2 * v14;
    v20 = v17 - v18 + 1;
    v21 = 2 * v20 + 2;
    v22 = *(_QWORD *)(v13 + 40) + 8LL * v19;
    v150 = 2 * v20 + 2;
    if ( !v22 && 2 * v20 != -2 )
      goto LABEL_6;
    LODWORD(Y[1]) = 8 * *(_DWORD *)(v13 + 16) + 16;
    v144 = Y[1];
    v24 = LODWORD(Y[1]) * v19;
    v25 = (float *)(v24 + *(_QWORD *)(v13 + 24));
    v26 = *(_QWORD *)(v13 + 32) + v24;
    v27 = *(_QWORD *)(v13 + 48) == 0LL;
    v148 = v25;
    v149 = v26;
    if ( v27 )
    {
      if ( 6 * v20 )
      {
LABEL_6:
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
    }
    v23 = Y[1];
  }
  v28 = (float *)(*(_QWORD *)(a1 + 8 * (v12 + 5)) + 72LL);
  v151 = v28;
  LOBYTE(Y[0]) = COERCE_FLOAT(COERCE_UNSIGNED_INT(*v28 - 1.0) & _xmm) >= 0.000081380211
              || COERCE_FLOAT(COERCE_UNSIGNED_INT(v28[1] - 1.0) & _xmm) >= 0.000081380211;
  ProcessHeap = GetProcessHeap();
  v30 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v152 = v30;
  v31 = v30;
  if ( !v30 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *v30 = a4;
  v30[1] = v21;
  v32 = a4 * v21;
  v33 = 8 * v32;
  if ( !is_mul_ok(v32, 8uLL) )
    v33 = -1LL;
  v34 = GetProcessHeap();
  v35 = (float *)HeapAlloc(v34, 0, v33);
  v36 = v35;
  if ( !v35 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v37 = (__m128)*(unsigned int *)(a3 + 4);
  v31[2] = v35;
  v145 = 8 * *(_DWORD *)v31;
  v147[0] = 0.0;
  v37.m128_f32[0] = modff(v37.m128_f32[0], v147);
  v147[0] = 0.0;
  v38 = v37;
  v39 = (__m128)*(unsigned int *)(a3 + 8);
  v39.m128_f32[0] = modff(v39.m128_f32[0], v147);
  v41 = v148;
  v42 = LOBYTE(Y[0]);
  v43 = v39;
  if ( v38.m128_f32[0] <= 0.000081380211 )
  {
    v59 = 0;
  }
  else
  {
    v45 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v44 = 2 * LODWORD(v23);
    v45.m128_f32[0] = 1.0 - v38.m128_f32[0];
    v46 = v38;
    v47 = v45;
    v46.m128_f32[0] = (float)(v38.m128_f32[0] * *(float *)((char *)v148 + v44))
                    + (float)((float)(1.0 - v38.m128_f32[0]) * *v148);
    v47.m128_f32[0] = (float)((float)(1.0 - v38.m128_f32[0]) * v148[1])
                    + (float)(v38.m128_f32[0] * *(float *)((char *)v148 + v44 + 4));
    if ( LOBYTE(Y[0]) )
    {
      v46.m128_f32[0] = v46.m128_f32[0] / *v28;
      v47.m128_f32[0] = v47.m128_f32[0] / v28[1];
    }
    v143 = _mm_unpacklo_ps(v46, v47).m128_u64[0];
    *(_QWORD *)v147 = v143;
    v49 = v38;
    v48 = 3 * LODWORD(v144);
    v49.m128_f32[0] = (float)(v38.m128_f32[0] * *(float *)(v48 + v149))
                    + (float)(v45.m128_f32[0] * *(float *)(SLODWORD(v144) + v149));
    v45.m128_f32[0] = (float)(v45.m128_f32[0] * *(float *)(SLODWORD(v144) + v149 + 4))
                    + (float)(v38.m128_f32[0] * *(float *)(v48 + v149 + 4));
    if ( LOBYTE(Y[0]) )
    {
      v49.m128_f32[0] = v49.m128_f32[0] / *v28;
      v45.m128_f32[0] = v45.m128_f32[0] / v28[1];
    }
    v50 = 0;
    v143 = _mm_unpacklo_ps(v49, v45).m128_u64[0];
    v146 = v143;
    if ( a4 )
    {
      v51 = v147[1];
      v52 = 0LL;
      v53 = v147[0];
      do
      {
        if ( _bittest(&a5, v50) )
        {
          if ( v52 >= *a6 )
            goto LABEL_6;
          v101 = a6[1] + 56 * v52;
          v102 = (float)((float)(v51 * *(float *)(v101 + 12)) + (float)(v53 * *(float *)v101)) + *(float *)(v101 + 24);
          v103 = (float)((float)(v51 * *(float *)(v101 + 16)) + (float)(v53 * *(float *)(v101 + 4)))
               + *(float *)(v101 + 28);
          v104 = (float)((float)(v51 * *(float *)(v101 + 20)) + (float)(v53 * *(float *)(v101 + 8)))
               + *(float *)(v101 + 32);
          if ( COERCE_FLOAT(LODWORD(v104) & _xmm) >= 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v104 - 1.0) & _xmm) >= 0.000081380211 )
          {
            v102 = v102 / v104;
            v103 = v103 / v104;
          }
          v36[2 * v52] = v102;
          v36[2 * v52 + 1] = v103;
          if ( *(_BYTE *)(v101 + 52) )
          {
            v105 = *(float *)(v101 + 44);
            if ( v102 <= v105 )
              v105 = fmaxf(v102, *(float *)(v101 + 36));
            v36[2 * v52] = v105;
            v106 = *(float *)(v101 + 48);
            if ( v103 <= v106 )
              v106 = fmaxf(v103, *(float *)(v101 + 40));
            v36[2 * v52 + 1] = v106;
          }
        }
        else
        {
          *(_QWORD *)&v36[2 * v52] = 0LL;
        }
        v52 = ++v50;
      }
      while ( v50 < a4 );
    }
    v54 = 0;
    v55 = &v36[v145 / 4u];
    if ( a4 )
    {
      v56 = *((float *)&v146 + 1);
      v57 = 0LL;
      v58 = *(float *)&v146;
      do
      {
        if ( _bittest(&a5, v54) )
        {
          if ( v57 >= *a6 )
            goto LABEL_6;
          v107 = a6[1] + 56 * v57;
          v108 = (float)((float)(v56 * *(float *)(v107 + 12)) + (float)(v58 * *(float *)v107)) + *(float *)(v107 + 24);
          v109 = (float)((float)(v56 * *(float *)(v107 + 16)) + (float)(v58 * *(float *)(v107 + 4)))
               + *(float *)(v107 + 28);
          v110 = (float)((float)(v56 * *(float *)(v107 + 20)) + (float)(v58 * *(float *)(v107 + 8)))
               + *(float *)(v107 + 32);
          if ( COERCE_FLOAT(LODWORD(v110) & _xmm) >= 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v110 - 1.0) & _xmm) >= 0.000081380211 )
          {
            v108 = v108 / v110;
            v109 = v109 / v110;
          }
          v55[2 * v57] = v108;
          v55[2 * v57 + 1] = v109;
          if ( *(_BYTE *)(v107 + 52) )
          {
            v111 = *(float *)(v107 + 44);
            if ( v108 <= v111 )
              v111 = fmaxf(v108, *(float *)(v107 + 36));
            v55[2 * v57] = v111;
            v112 = *(float *)(v107 + 48);
            if ( v109 <= v112 )
              v112 = fmaxf(v109, *(float *)(v107 + 40));
            v55[2 * v57 + 1] = v112;
          }
        }
        else
        {
          *(_QWORD *)&v55[2 * v57] = 0LL;
        }
        v57 = ++v54;
      }
      while ( v54 < a4 );
    }
    v59 = 2;
  }
  v60 = v150;
  if ( v43.m128_f32[0] > 0.000081380211 )
    v61 = v150 - 2;
  else
    v61 = v150;
  v62 = Y[1];
  LODWORD(v147[0]) = v61;
  if ( v59 < v61 )
  {
    v63 = v59 * v145;
    v64 = v59 * LODWORD(Y[1]);
    v65 = LODWORD(v144) * (v59 + 1);
    do
    {
      if ( v42 )
      {
        v137 = (__m128)*(unsigned int *)((char *)v41 + v64);
        v138 = (__m128)*(unsigned int *)((char *)v41 + v64 + 4);
        v138.m128_f32[0] = v138.m128_f32[0] / v151[1];
        v139 = (unsigned int *)(v149 + v65);
        v137.m128_f32[0] = v137.m128_f32[0] / *v151;
        v140 = (__m128)*v139;
        v140.m128_f32[0] = v140.m128_f32[0] / *v151;
        v66 = _mm_unpacklo_ps(v137, v138).m128_u64[0];
        v141 = (__m128)v139[1];
        v141.m128_f32[0] = v141.m128_f32[0] / v151[1];
        v67 = _mm_unpacklo_ps(v140, v141).m128_u64[0];
      }
      else
      {
        v66 = *(_QWORD *)((char *)v41 + v64);
        v67 = *(_QWORD *)(v149 + v65);
      }
      v68 = 0;
      v69 = (char *)v36 + v63;
      v146 = v66;
      v143 = v67;
      if ( a4 )
      {
        v70 = *((float *)&v146 + 1);
        v71 = 0LL;
        v72 = *(float *)&v146;
        do
        {
          if ( _bittest(&a5, v68) )
          {
            if ( v71 >= *a6 )
              goto LABEL_6;
            v113 = a6[1] + 56 * v71;
            v114 = (float)((float)(v70 * *(float *)(v113 + 12)) + (float)(v72 * *(float *)v113)) + *(float *)(v113 + 24);
            v115 = (float)((float)(v70 * *(float *)(v113 + 16)) + (float)(v72 * *(float *)(v113 + 4)))
                 + *(float *)(v113 + 28);
            v116 = (float)((float)(v70 * *(float *)(v113 + 20)) + (float)(v72 * *(float *)(v113 + 8)))
                 + *(float *)(v113 + 32);
            if ( COERCE_FLOAT(LODWORD(v116) & _xmm) >= 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v116 - 1.0) & _xmm) >= 0.000081380211 )
            {
              v114 = v114 / v116;
              v115 = v115 / v116;
            }
            *(float *)&v69[8 * v71] = v114;
            *(float *)&v69[8 * v71 + 4] = v115;
            if ( *(_BYTE *)(v113 + 52) )
            {
              v117 = *(float *)(v113 + 44);
              if ( v114 <= v117 )
                v117 = fmaxf(v114, *(float *)(v113 + 36));
              *(float *)&v69[8 * v71] = v117;
              v118 = *(float *)(v113 + 48);
              if ( v115 <= v118 )
                v118 = fmaxf(v115, *(float *)(v113 + 40));
              *(float *)&v69[8 * v71 + 4] = v118;
            }
          }
          else
          {
            *(_QWORD *)&v69[8 * v71] = 0LL;
          }
          v71 = ++v68;
        }
        while ( v68 < a4 );
        v73 = *((float *)&v143 + 1);
        v74 = *(float *)&v143;
        v75 = 0;
        v76 = (char *)v36 + v63 + v145;
        v77 = 0LL;
        do
        {
          v78 = (float *)&v76[8 * v77];
          if ( _bittest(&a5, v75) )
          {
            if ( v77 >= *a6 )
              goto LABEL_6;
            v119 = a6[1] + 56 * v77;
            v120 = (float)((float)(v73 * *(float *)(v119 + 12)) + (float)(v74 * *(float *)v119)) + *(float *)(v119 + 24);
            v121 = (float)((float)(v73 * *(float *)(v119 + 16)) + (float)(v74 * *(float *)(v119 + 4)))
                 + *(float *)(v119 + 28);
            v122 = (float)((float)(v73 * *(float *)(v119 + 20)) + (float)(v74 * *(float *)(v119 + 8)))
                 + *(float *)(v119 + 32);
            if ( COERCE_FLOAT(LODWORD(v122) & _xmm) >= 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v122 - 1.0) & _xmm) >= 0.000081380211 )
            {
              v120 = v120 / v122;
              v121 = v121 / v122;
            }
            *v78 = v120;
            v78[1] = v121;
            if ( *(_BYTE *)(v119 + 52) )
            {
              v123 = *(float *)(v119 + 44);
              if ( v120 <= v123 )
                v123 = fmaxf(v120, *(float *)(v119 + 36));
              *v78 = v123;
              v124 = *(float *)(v119 + 48);
              if ( v121 <= v124 )
                v124 = fmaxf(v121, *(float *)(v119 + 40));
              v78[1] = v124;
            }
          }
          else
          {
            *(_QWORD *)v78 = 0LL;
          }
          v77 = ++v75;
        }
        while ( v75 < a4 );
        v42 = LOBYTE(Y[0]);
        v41 = v148;
        v62 = Y[1];
      }
      v64 += 2 * LODWORD(v62);
      v59 += 2;
      v65 += 2 * LODWORD(v144);
      v63 += 2 * v145;
    }
    while ( v59 < LODWORD(v147[0]) );
    v28 = v151;
    v60 = v150;
  }
  if ( v43.m128_f32[0] > 0.000081380211 )
  {
    v79 = v60 - 4;
    v81 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v80 = v60 - 4 + 2;
    v81.m128_f32[0] = 1.0 - v43.m128_f32[0];
    v84 = v43;
    v85 = v81;
    v82 = LODWORD(v62) * v80;
    v83 = LODWORD(v62) * v79;
    v84.m128_f32[0] = (float)(v43.m128_f32[0] * *(float *)((char *)v148 + v82))
                    + (float)((float)(1.0 - v43.m128_f32[0]) * *(float *)((char *)v148 + v83));
    v85.m128_f32[0] = (float)((float)(1.0 - v43.m128_f32[0]) * *(float *)((char *)v148 + v83 + 4))
                    + (float)(v43.m128_f32[0] * *(float *)((char *)v148 + v82 + 4));
    if ( v42 )
    {
      v84.m128_f32[0] = v84.m128_f32[0] / *v28;
      v85.m128_f32[0] = v85.m128_f32[0] / v28[1];
    }
    v143 = _mm_unpacklo_ps(v84, v85).m128_u64[0];
    v88 = v43;
    v86 = LODWORD(v144) * (v79 + 3);
    v87 = LODWORD(v144) * (v79 + 1);
    v88.m128_f32[0] = (float)(v43.m128_f32[0] * *(float *)(v86 + v149))
                    + (float)(v81.m128_f32[0] * *(float *)(v87 + v149));
    v81.m128_f32[0] = (float)(v81.m128_f32[0] * *(float *)(v87 + v149 + 4))
                    + (float)(v43.m128_f32[0] * *(float *)(v86 + v149 + 4));
    if ( v42 )
    {
      v88.m128_f32[0] = v88.m128_f32[0] / *v28;
      v81.m128_f32[0] = v81.m128_f32[0] / v28[1];
    }
    v89 = 0;
    v146 = _mm_unpacklo_ps(v88, v81).m128_u64[0];
    v90 = (char *)v36 + v145 * v80;
    if ( a4 )
    {
      v91 = *((float *)&v143 + 1);
      v92 = 0LL;
      v93 = *(float *)&v143;
      while ( 1 )
      {
        if ( _bittest(&a5, v89) )
        {
          if ( v92 >= *a6 )
            goto LABEL_6;
          v125 = a6[1] + 56 * v92;
          v126 = (float)((float)(v91 * *(float *)(v125 + 12)) + (float)(v93 * *(float *)v125)) + *(float *)(v125 + 24);
          v127 = (float)((float)(v91 * *(float *)(v125 + 16)) + (float)(v93 * *(float *)(v125 + 4)))
               + *(float *)(v125 + 28);
          v128 = (float)((float)(v91 * *(float *)(v125 + 20)) + (float)(v93 * *(float *)(v125 + 8)))
               + *(float *)(v125 + 32);
          if ( COERCE_FLOAT(LODWORD(v128) & _xmm) >= 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v128 - 1.0) & _xmm) >= 0.000081380211 )
          {
            v126 = v126 / v128;
            v127 = v127 / v128;
          }
          *(float *)&v90[8 * v92] = v126;
          *(float *)&v90[8 * v92 + 4] = v127;
          if ( *(_BYTE *)(v125 + 52) )
          {
            v129 = *(float *)(v125 + 44);
            if ( v126 <= v129 )
              v129 = fmaxf(v126, *(float *)(v125 + 36));
            *(float *)&v90[8 * v92] = v129;
            v130 = *(float *)(v125 + 48);
            if ( v127 <= v130 )
              v130 = fmaxf(v127, *(float *)(v125 + 40));
            *(float *)&v90[8 * v92 + 4] = v130;
          }
        }
        else
        {
          *(_QWORD *)&v90[8 * v92] = 0LL;
        }
        v92 = ++v89;
        if ( v89 >= a4 )
        {
          v94 = *((float *)&v146 + 1);
          v95 = *(float *)&v146;
          v96 = 0;
          v97 = (char *)v36 + v145 * (v79 + 3);
          v98 = 0LL;
          while ( 1 )
          {
            v99 = (float *)&v97[8 * v98];
            if ( _bittest(&a5, v96) )
            {
              if ( v98 >= *a6 )
                goto LABEL_6;
              v131 = a6[1] + 56 * v98;
              v132 = (float)((float)(v94 * *(float *)(v131 + 12)) + (float)(v95 * *(float *)v131))
                   + *(float *)(v131 + 24);
              v133 = (float)((float)(v94 * *(float *)(v131 + 16)) + (float)(v95 * *(float *)(v131 + 4)))
                   + *(float *)(v131 + 28);
              v134 = (float)((float)(v94 * *(float *)(v131 + 20)) + (float)(v95 * *(float *)(v131 + 8)))
                   + *(float *)(v131 + 32);
              if ( COERCE_FLOAT(LODWORD(v134) & _xmm) >= 0.000081380211
                && COERCE_FLOAT(COERCE_UNSIGNED_INT(v134 - 1.0) & _xmm) >= 0.000081380211 )
              {
                v132 = v132 / v134;
                v133 = v133 / v134;
              }
              *v99 = v132;
              v99[1] = v133;
              if ( *(_BYTE *)(v131 + 52) )
              {
                v135 = *(float *)(v131 + 44);
                if ( v132 <= v135 )
                  v135 = fmaxf(v132, *(float *)(v131 + 36));
                *v99 = v135;
                v136 = *(float *)(v131 + 48);
                if ( v133 <= v136 )
                  v136 = fmaxf(v133, *(float *)(v131 + 40));
                v99[1] = v136;
              }
            }
            else
            {
              *(_QWORD *)v99 = 0LL;
            }
            v98 = ++v96;
            if ( v96 >= a4 )
              goto LABEL_68;
          }
        }
      }
    }
  }
LABEL_68:
  result = a7;
  *a7 = v152;
  return result;
}
