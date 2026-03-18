/*
 * XREFs of ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x180166790
 * Callers:
 *     ?EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x1801658F0 (-EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 *     _lambda_c999fdf24c795b566dd8f666e1ef8213_::operator() @ 0x180167900 (_lambda_c999fdf24c795b566dd8f666e1ef8213_--operator().c)
 * Callees:
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x180167790 (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180167C04 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_180167C04.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180167F70 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_180167F70.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180168174 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180168208 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180168284 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180168300 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180168AE4 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_180168AE4.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18022DEF8 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180258358 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180258404 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Ver.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1802922A8 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 */

__int64 __fastcall TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(__int64 a1, __int64 a2, unsigned int *a3)
{
  bool v5; // dl
  char v6; // r8
  float v7; // xmm14_4
  float v8; // xmm9_4
  float v9; // xmm1_4
  __m128 v10; // xmm5
  __m128 v11; // xmm3
  __m128 v12; // xmm2
  __m128 v13; // xmm4
  unsigned int v14; // r15d
  unsigned int v15; // ebp
  __m128 v16; // xmm9
  unsigned int v17; // r9d
  __m128 v18; // xmm5
  __m128 v19; // xmm6
  __m128 v20; // xmm5
  __m128 v21; // xmm6
  __m128 v22; // xmm2
  __m128 *v23; // rbx
  __m128 *v24; // rdi
  __m128 *v25; // r11
  __m128 *v26; // rsi
  __m128 *v27; // rcx
  __m128 *v28; // r10
  __m128 v29; // xmm3
  __m128 v30; // xmm0
  __m128 v31; // xmm4
  __m128 v32; // xmm1
  __int64 v33; // rdx
  signed __int64 v34; // r10
  __m128 v35; // xmm3
  signed __int64 v36; // r11
  __m128 *v37; // rax
  __m128 v38; // xmm2
  __m128 v39; // xmm0
  __m128 v40; // xmm3
  __m128 v41; // xmm1
  __m128 v42; // xmm0
  __m128 v43; // xmm4
  __int64 v44; // rdx
  signed __int64 v45; // rcx
  __m128 v46; // xmm2
  signed __int64 v47; // rsi
  __m128 *v48; // rax
  __int64 result; // rax
  __m128 v50; // xmm6
  unsigned int v51; // ebx
  __m128 v52; // xmm4
  unsigned int v53; // r15d
  __m128 v54; // xmm5
  unsigned int v55; // edi
  __m128 v56; // xmm4
  __m128 j; // xmm6
  __m128 *v58; // r10
  __m128 *v59; // r9
  int v60; // eax
  __m128 *v61; // r8
  __m128 *v62; // r11
  _OWORD *v63; // rax
  __int64 v64; // rcx
  signed __int64 v65; // r10
  _OWORD *v66; // rax
  __int64 v67; // rcx
  signed __int64 v68; // r9
  char v69; // al
  unsigned int v70; // edi
  unsigned int v71; // r15d
  __m128 v72; // xmm6
  unsigned int v73; // r9d
  __m128 v74; // xmm5
  __m128 v75; // xmm7
  __m128 i; // xmm8
  int v77; // edx
  __m128 *v78; // r11
  __m128 *v79; // r10
  __m128 *v80; // rbx
  __m128 *v81; // r8
  __m128i v82; // xmm3
  __m128i v83; // xmm3
  _OWORD *m128_f32; // rax
  __int64 v85; // rcx
  signed __int64 v86; // r11
  __m128i v87; // xmm3
  __m128i v88; // xmm3
  _OWORD *v89; // rax
  __int64 v90; // rcx
  signed __int64 v91; // r10
  __int64 v92; // rax
  unsigned int v93; // r11d
  unsigned int v94; // r12d
  char v95; // bp
  float v96; // xmm2_4
  __m128 v97; // xmm12
  float v98; // xmm3_4
  __m128 v99; // xmm13
  char v100; // cl
  float v101; // xmm10_4
  float v102; // xmm11_4
  unsigned int v103; // r13d
  __int64 v104; // rsi
  float v105; // xmm5_4
  float v106; // xmm4_4
  __int64 v107; // r15
  float *v108; // rdi
  float v109; // xmm6_4
  float v110; // xmm7_4
  float v111; // xmm5_4
  float v112; // xmm9_4
  float v113; // xmm4_4
  float v114; // xmm9_4
  float v115; // xmm6_4
  float v116; // xmm7_4
  float v117; // xmm1_4
  float v118; // xmm0_4
  float v119; // xmm14_4
  float v120; // xmm6_4
  float v121; // xmm7_4
  __m128 v122; // xmm3
  float v123; // xmm1_4
  char v124; // cl
  float v125; // xmm2_4
  __m128 v126; // xmm4
  __m128 v127; // xmm5
  float v128; // xmm2_4
  unsigned int v129; // edx
  __int64 v130; // rax
  float *v131; // rax
  __int64 v132; // rcx
  char *v133; // rdi
  float v134; // xmm3_4
  __int64 v135; // rdx
  float v136; // xmm1_4
  char v137; // al
  float v138; // xmm4_4
  float *v139; // r8
  char *v140; // r9
  __int64 v141; // r10
  unsigned int v142; // edx
  __int64 v143; // rcx
  float v144; // xmm1_4
  float v145; // xmm1_4
  float v146; // xmm1_4
  unsigned int v147; // [rsp+20h] [rbp-198h]
  __int128 v148; // [rsp+30h] [rbp-188h]
  float v149[8]; // [rsp+40h] [rbp-178h]
  __int128 v150; // [rsp+60h] [rbp-158h]
  _BYTE v151[88]; // [rsp+80h] [rbp-138h] BYREF

  v5 = (*(_BYTE *)(a1 + 40) & 1) == 0 && (*(_BYTE *)(a1 + 56) & 0xF) == 0;
  v6 = *((_BYTE *)a3 + 65);
  v7 = FLOAT_61440_0;
  v8 = FLOAT_0_000081380211;
  if ( (char)(4 * (v6 & 0xF0)) > 0
    || (v6 & 0x20) == 0
    && (LODWORD(v9) = COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(a3[3] & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT(a3[7] & _xmm) * 61440.0))
                              + COERCE_FLOAT(a3[15] & _xmm))
                      - 1.0) & _xmm,
        *((_BYTE *)a3 + 65) = v6 & 0xCF | (32 * (v9 < 0.000081380211) + 16),
        v9 >= 0.000081380211) )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 44) - 1.0) & _xmm) >= 0.0000011920929 )
    {
      if ( *(_BYTE *)(a1 + 48) )
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          a1,
          a3);
      else
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
          a1,
          a3);
    }
    else
    {
      v92 = CMILMatrix::ComputeAdjointIgnoreZ(v151);
      v93 = *(_DWORD *)(a1 + 20);
      v147 = v93;
      v94 = 0;
      *(_OWORD *)v149 = *(_OWORD *)(v92 + 16);
      v148 = *(_OWORD *)v92;
      v150 = *(_OWORD *)(v92 + 48);
      if ( v93 )
      {
        v95 = BYTE1(*(_DWORD *)(v92 + 64));
        do
        {
          v96 = *(float *)a3;
          v97 = (__m128)a3[4];
          v98 = *((float *)a3 + 1);
          v99 = (__m128)a3[5];
          v100 = *((_BYTE *)a3 + 65);
          v101 = *((float *)a3 + 12);
          v102 = *((float *)a3 + 13);
          v103 = *(_DWORD *)(a1 + 40);
          v104 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v94);
          v105 = *(float *)v104;
          v106 = *(float *)(v104 + 4);
          v107 = *(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v94);
          v108 = (float *)(*(_QWORD *)(a1 + 24) + (int)(*(_DWORD *)(a1 + 32) * v94));
          v109 = (float)((float)(*((float *)a3 + 4) * v106) + (float)(*(float *)a3 * *(float *)v104)) + v101;
          v110 = (float)((float)(*((float *)a3 + 5) * v106) + (float)(v98 * *(float *)v104)) + v102;
          if ( (char)(4 * v100) >> 6 != 1 )
          {
            if ( (char)(4 * v100) >> 6 < 0 )
              goto LABEL_58;
            if ( v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                     (float)((float)((float)(COERCE_FLOAT(a3[3] & _xmm) * v7)
                                                   + (float)(COERCE_FLOAT(a3[7] & _xmm) * v7))
                                           + COERCE_FLOAT(a3[15] & _xmm))
                                   - 1.0) & _xmm) )
            {
              v100 |= 0x30u;
              *((_BYTE *)a3 + 65) = v100;
LABEL_58:
              v111 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
              goto LABEL_59;
            }
            v100 = v100 & 0xCF | 0x10;
            *((_BYTE *)a3 + 65) = v100;
          }
          v111 = (float)((float)(v105 * *((float *)a3 + 3)) + (float)(v106 * *((float *)a3 + 7))) + *((float *)a3 + 15);
LABEL_59:
          v112 = *v108;
          v113 = v108[1];
          v97.m128_f32[0] = (float)((float)(v97.m128_f32[0] * v113) + (float)(v96 * *v108)) + v101;
          v99.m128_f32[0] = (float)((float)(v99.m128_f32[0] * v113) + (float)(v98 * *v108)) + v102;
          if ( (char)(4 * v100) >> 6 != 1 )
          {
            if ( (char)(4 * v100) >> 6 < 0 )
              goto LABEL_61;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                (float)((float)((float)(COERCE_FLOAT(a3[7] & _xmm) * v7)
                                              + (float)(COERCE_FLOAT(a3[3] & _xmm) * v7))
                                      + COERCE_FLOAT(a3[15] & _xmm))
                              - 1.0) & _xmm) < 0.000081380211 )
            {
              *((_BYTE *)a3 + 65) = v100 | 0x30;
LABEL_61:
              v114 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
              goto LABEL_62;
            }
            *((_BYTE *)a3 + 65) = v100 & 0xCF | 0x10;
          }
          v114 = (float)((float)(v112 * *((float *)a3 + 3)) + (float)(v113 * *((float *)a3 + 7))) + *((float *)a3 + 15);
LABEL_62:
          v115 = (float)(v109 / v111) - (float)(v97.m128_f32[0] / v114);
          v116 = (float)(v110 / v111) - (float)(v99.m128_f32[0] / v114);
          v117 = (float)(v116 * v116) + (float)(v115 * v115);
          if ( v117 < 0.0 )
          {
            v118 = sqrtf_0(v117);
            v93 = v147;
          }
          else
          {
            v118 = fsqrt(v117);
          }
          v119 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
          if ( v118 > 0.0 )
            v119 = v108[2] / v118;
          v122 = (__m128)(unsigned int)v148;
          v120 = (float)(v115 * v119) + (float)(v97.m128_f32[0] / v114);
          v121 = (float)(v116 * v119) + (float)(v99.m128_f32[0] / v114);
          v122.m128_f32[0] = (float)((float)(*(float *)&v148 * v120) + (float)(v149[0] * v121)) + *(float *)&v150;
          if ( (char)(4 * v95) >> 6 != 1 )
          {
            if ( (char)(4 * v95) >> 6 < 0 )
              goto LABEL_68;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                (float)((float)((float)(COERCE_FLOAT(HIDWORD(v148) & _xmm) * 61440.0)
                                              + (float)(COERCE_FLOAT(LODWORD(v149[3]) & _xmm) * 61440.0))
                                      + COERCE_FLOAT(HIDWORD(v150) & _xmm))
                              - 1.0) & _xmm) < 0.000081380211 )
            {
              v95 |= 0x30u;
LABEL_68:
              v123 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
              goto LABEL_69;
            }
            v95 = v95 & 0xCF | 0x10;
          }
          v123 = (float)((float)(*((float *)&v148 + 3) * v120) + (float)(v149[3] * v121)) + *((float *)&v150 + 3);
LABEL_69:
          v124 = *((_BYTE *)a3 + 65);
          v122.m128_f32[0] = v122.m128_f32[0] / v123;
          v125 = (float)((float)((float)(*((float *)&v148 + 1) * v120) + (float)(v149[1] * v121)) + *((float *)&v150 + 1))
               / v123;
          v126 = v122;
          v127 = v122;
          v126.m128_f32[0] = (float)((float)(v122.m128_f32[0] * *(float *)a3) + (float)(v125 * *((float *)a3 + 4)))
                           + *((float *)a3 + 12);
          v127.m128_f32[0] = (float)((float)(v122.m128_f32[0] * *((float *)a3 + 1)) + (float)(v125 * *((float *)a3 + 5)))
                           + *((float *)a3 + 13);
          if ( (char)(4 * v124) >> 6 != 1 )
          {
            if ( (char)(4 * v124) >> 6 < 0 )
              goto LABEL_71;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                (float)((float)((float)(COERCE_FLOAT(a3[3] & _xmm) * 61440.0)
                                              + (float)(COERCE_FLOAT(a3[7] & _xmm) * 61440.0))
                                      + COERCE_FLOAT(a3[15] & _xmm))
                              - 1.0) & _xmm) < 0.000081380211 )
            {
              *((_BYTE *)a3 + 65) = v124 | 0x30;
LABEL_71:
              v128 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
              goto LABEL_72;
            }
            *((_BYTE *)a3 + 65) = v124 & 0xCF | 0x10;
          }
          v128 = (float)((float)(v125 * *((float *)a3 + 7)) + (float)(v122.m128_f32[0] * *((float *)a3 + 3)))
               + *((float *)a3 + 15);
LABEL_72:
          if ( v128 <= 0.0 )
          {
            *(_QWORD *)v107 = _mm_unpacklo_ps(v97, v99).m128_u64[0];
            *(float *)(v107 + 8) = v114;
          }
          else
          {
            *(_QWORD *)v107 = _mm_unpacklo_ps(v126, v127).m128_u64[0];
            *(float *)(v107 + 8) = v128;
          }
          if ( v119 > 1.0 && v108[3] == 0.0 )
            v119 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
          v129 = 0;
          if ( v103 >= 3 )
          {
            v138 = 1.0 - v119;
            v139 = (float *)(v104 + 20);
            v140 = (char *)v108 - v104;
            v141 = v107 - v104;
            v142 = (v103 - 3) / 3 + 1;
            v143 = v142;
            v130 = 3LL * v142;
            v129 = 3 * v142;
            do
            {
              v144 = (float)(v138 * *(float *)((char *)v139 + (_QWORD)v140)) + (float)(v119 * *v139);
              *(float *)((char *)v139 + v141 - 4) = (float)(v138 * *(float *)((char *)v139 + (_QWORD)v140 - 4))
                                                  + (float)(v119 * *(v139 - 1));
              *(float *)((char *)v139 + v141) = v144;
              v145 = (float)(v138 * *(float *)((char *)v139 + (_QWORD)v140 + 8)) + (float)(v119 * v139[2]);
              *(float *)((char *)v139 + v141 + 4) = (float)(v138 * *(float *)((char *)v139 + (_QWORD)v140 + 4))
                                                  + (float)(v119 * v139[1]);
              *(float *)((char *)v139 + v141 + 8) = v145;
              v146 = (float)(v138 * *(float *)((char *)v139 + (_QWORD)v140 + 16)) + (float)(v119 * v139[4]);
              *(float *)((char *)v139 + v141 + 12) = (float)(v138 * *(float *)((char *)v139 + (_QWORD)v140 + 12))
                                                   + (float)(v119 * v139[3]);
              *(float *)((char *)v139 + v141 + 16) = v146;
              v139 += 6;
              --v143;
            }
            while ( v143 );
            if ( v129 >= v103 )
              goto LABEL_80;
            goto LABEL_78;
          }
          if ( v103 )
          {
            v130 = 0LL;
LABEL_78:
            v131 = (float *)(v104 + 8 * v130 + 20);
            v132 = v107 - v104;
            v133 = (char *)v108 - v104;
            v134 = 1.0 - v119;
            v135 = v103 - v129;
            do
            {
              v136 = (float)(v134 * *(float *)&v133[(_QWORD)v131]) + (float)(v119 * *v131);
              *(float *)((char *)v131 + v132 - 4) = (float)(v134 * *(float *)&v133[(_QWORD)v131 - 4])
                                                  + (float)(v119 * *(v131 - 1));
              *(float *)((char *)v131 + v132) = v136;
              v131 += 2;
              --v135;
            }
            while ( v135 );
          }
LABEL_80:
          ++v94;
          v7 = FLOAT_61440_0;
          v8 = FLOAT_0_000081380211;
          *(_DWORD *)(v107 + 12) = *(_DWORD *)(v104 + 12);
        }
        while ( v94 < v93 );
      }
    }
    result = *(unsigned int *)(a1 + 20);
    dword_1804068DC += result;
    return result;
  }
  v10 = (__m128)*a3;
  v11 = (__m128)a3[5];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a3 - v11.m128_f32[0]) & _xmm) > 0.000081380211
    || (v12 = (__m128)a3[4],
        v13 = (__m128)a3[1],
        COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 1) - COERCE_FLOAT(a3[4] ^ _xmm)) & _xmm) > 0.000081380211)
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      (float)((float)(v12.m128_f32[0] * v12.m128_f32[0]) + (float)(v10.m128_f32[0] * v10.m128_f32[0]))
                    - 1.0) & _xmm) >= 0.000081380211 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 44) - 1.0) & _xmm) >= 0.0000011920929 )
    {
      v137 = *(_BYTE *)(a1 + 48);
      if ( v5 )
      {
        if ( v137 )
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            a1,
            a3);
        else
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
            a1,
            a3);
        result = *(unsigned int *)(a1 + 20);
        dword_1804068D8 += result;
        return result;
      }
      if ( v137 )
      {
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          a1,
          a3);
        result = *(unsigned int *)(a1 + 20);
        dword_1804068D8 += result;
        return result;
      }
      VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        a1,
        a3);
    }
    else
    {
      if ( !v5 )
      {
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
          a1,
          a3);
        result = *(unsigned int *)(a1 + 20);
        dword_1804068D8 += result;
        return result;
      }
      v14 = 0;
      v15 = *(_DWORD *)(a1 + 20);
      v16 = (__m128)*((unsigned __int64 *)a3 + 6);
      v17 = *(_DWORD *)(a1 + 40) >> 1;
      v18 = _mm_unpacklo_ps(v10, (__m128)a3[1]);
      v19 = _mm_unpacklo_ps((__m128)a3[4], v11);
      v20 = _mm_movelh_ps(v18, v18);
      v21 = _mm_movelh_ps(v19, v19);
      if ( v15 )
      {
        do
        {
          v22 = (__m128)DirectX::g_XMOne;
          v23 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v14));
          v24 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v14 + 1)));
          v25 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v14));
          v26 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * (v14 + 1)));
          v27 = (__m128 *)(*(_QWORD *)(a1 + 24) + (int)(*(_DWORD *)(a1 + 32) * (v14 + 1)));
          v28 = (__m128 *)(*(_QWORD *)(a1 + 24) + (int)(*(_DWORD *)(a1 + 32) * v14));
          v29 = *v28;
          v30 = _mm_sub_ps(_mm_shuffle_ps(*v23, DirectX::g_XMOne, 228), *v28);
          v31 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v30, v30, 85), v21), _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), v20));
          if ( (_mm_movemask_ps(_mm_cmpeq_ps(v31, DirectX::g_XMZero)) & 3) != 3 )
          {
            v32 = _mm_mul_ps(v31, v31);
            v22.m128_f32[0] = 1.0 / fsqrt(v32.m128_f32[0] + _mm_shuffle_ps(v32, v32, 85).m128_f32[0]);
            v22 = _mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), _mm_shuffle_ps(v29, v29, 170));
          }
          *v25 = _mm_shuffle_ps(
                   _mm_add_ps(
                     _mm_add_ps(
                       _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v29, v29, 85), v21), v16),
                       _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), v20)),
                     _mm_mul_ps(v22, v31)),
                   _mm_or_ps(
                     _mm_and_ps(*v23, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask),
                     _mm_andnot_ps(
                       (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                       DirectX::g_XMOne)),
                   228);
          if ( v22.m128_f32[0] > 1.0 && v28->m128_f32[3] == 0.0 )
            v22 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
          if ( v17 )
          {
            v33 = v17;
            v34 = (char *)v28 - (char *)v23;
            v35 = _mm_shuffle_ps(v22, v22, 0);
            v36 = (char *)v25 - (char *)v23;
            v37 = v23 + 1;
            do
            {
              *(__m128 *)((char *)v37 + v36) = _mm_add_ps(
                                                 _mm_mul_ps(_mm_sub_ps(*v37, *(__m128 *)((char *)v37 + v34)), v35),
                                                 *(__m128 *)((char *)v37 + v34));
              ++v37;
              --v33;
            }
            while ( v33 );
          }
          v38 = *v27;
          v39 = _mm_sub_ps(_mm_shuffle_ps(*v24, DirectX::g_XMOne, 228), *v27);
          v40 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v39, v39, 85), v21), _mm_mul_ps(_mm_shuffle_ps(v39, v39, 0), v20));
          if ( (_mm_movemask_ps(_mm_cmpeq_ps(v40, DirectX::g_XMZero)) & 3) == 3 )
          {
            v43 = (__m128)DirectX::g_XMOne;
          }
          else
          {
            v41 = _mm_mul_ps(v40, v40);
            v42 = (__m128)DirectX::g_XMOne;
            v42.m128_f32[0] = 1.0 / fsqrt(v41.m128_f32[0] + _mm_shuffle_ps(v41, v41, 85).m128_f32[0]);
            v43 = _mm_mul_ps(_mm_shuffle_ps(v38, v38, 170), _mm_shuffle_ps(v42, v42, 0));
          }
          *v26 = _mm_shuffle_ps(
                   _mm_add_ps(
                     _mm_add_ps(
                       _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v38, v38, 85), v21), v16),
                       _mm_mul_ps(_mm_shuffle_ps(v38, v38, 0), v20)),
                     _mm_mul_ps(v43, v40)),
                   _mm_or_ps(
                     _mm_and_ps(*v24, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask),
                     _mm_andnot_ps(
                       (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                       DirectX::g_XMOne)),
                   228);
          if ( v43.m128_f32[0] > 1.0 && v27->m128_f32[3] == 0.0 )
            v43 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
          if ( v17 )
          {
            v44 = v17;
            v45 = (char *)v27 - (char *)v24;
            v46 = _mm_shuffle_ps(v43, v43, 0);
            v47 = (char *)v26 - (char *)v24;
            v48 = v24 + 1;
            do
            {
              *(__m128 *)((char *)v48 + v47) = _mm_add_ps(
                                                 _mm_mul_ps(_mm_sub_ps(*v48, *(__m128 *)((char *)v48 + v45)), v46),
                                                 *(__m128 *)((char *)v48 + v45));
              ++v48;
              --v44;
            }
            while ( v44 );
          }
          v14 += 2;
        }
        while ( v14 < v15 );
      }
    }
    result = *(unsigned int *)(a1 + 20);
    dword_1804068D8 += result;
    return result;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 44) - 1.0) & _xmm) >= 0.0000011920929 )
  {
    v69 = *(_BYTE *)(a1 + 48);
    if ( v5 )
    {
      if ( v69 )
      {
        VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          a1,
          a3);
      }
      else
      {
        v70 = *(_DWORD *)(a1 + 20);
        v71 = 0;
        v72 = _mm_movelh_ps(_mm_unpacklo_ps(v12, v11), (__m128)0LL);
        v73 = *(_DWORD *)(a1 + 40) >> 1;
        v74 = _mm_movelh_ps(_mm_unpacklo_ps(v10, v13), (__m128)0LL);
        v75 = _mm_movelh_ps((__m128)*((unsigned __int64 *)a3 + 6), (__m128)_xmm);
        for ( i = _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 44), (__m128)*(unsigned int *)(a1 + 44), 0);
              v71 < v70;
              v71 += 2 )
        {
          v77 = *(_DWORD *)(a1 + 64);
          v78 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v71));
          v79 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v71 + 1)));
          v80 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)(v77 * v71));
          v81 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)((v71 + 1) * v77));
          v82 = _mm_cvttps_epi32(
                  _mm_mul_ps(
                    _mm_mul_ps(
                      _mm_add_ps(
                        _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                                   _mm_and_ps(_mm_shuffle_ps(*v78, *v78, 255), g_MaskA8B8G8R8),
                                                   g_FlipA8R8G8B8)),
                        g_FixAA8R8G8B8),
                      g_NormalizeA8R8G8B8),
                    i));
          v83 = _mm_packs_epi32(v82, v82);
          *v80 = _mm_or_ps(
                   _mm_andnot_ps(
                     (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                     _mm_add_ps(
                       _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v78, *v78, 85), v72), v75),
                       _mm_mul_ps(_mm_shuffle_ps(*v78, *v78, 0), v74))),
                   _mm_and_ps(
                     (__m128)_mm_packus_epi16(v83, v83),
                     (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
          if ( v73 )
          {
            m128_f32 = (_OWORD *)v80[1].m128_f32;
            v85 = v73;
            v86 = (char *)v78 - (char *)v80;
            do
            {
              *m128_f32 = *(_OWORD *)((char *)m128_f32 + v86);
              ++m128_f32;
              --v85;
            }
            while ( v85 );
          }
          v87 = _mm_cvttps_epi32(
                  _mm_mul_ps(
                    _mm_mul_ps(
                      _mm_add_ps(
                        _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                                   _mm_and_ps(_mm_shuffle_ps(*v79, *v79, 255), g_MaskA8B8G8R8),
                                                   g_FlipA8R8G8B8)),
                        g_FixAA8R8G8B8),
                      g_NormalizeA8R8G8B8),
                    i));
          v88 = _mm_packs_epi32(v87, v87);
          *v81 = _mm_or_ps(
                   _mm_andnot_ps(
                     (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                     _mm_add_ps(
                       _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v79, *v79, 85), v72), v75),
                       _mm_mul_ps(_mm_shuffle_ps(*v79, *v79, 0), v74))),
                   _mm_and_ps(
                     (__m128)_mm_packus_epi16(v88, v88),
                     (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
          if ( v73 )
          {
            v89 = (_OWORD *)v81[1].m128_f32;
            v90 = v73;
            v91 = (char *)v79 - (char *)v81;
            do
            {
              *v89 = *(_OWORD *)((char *)v89 + v91);
              ++v89;
              --v90;
            }
            while ( v90 );
          }
        }
      }
    }
    else if ( v69 )
    {
      VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
        a1,
        a3);
    }
    else
    {
      VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        a1,
        a3);
    }
  }
  else if ( v5 )
  {
    v50 = (__m128)*((unsigned __int64 *)a3 + 6);
    v51 = *(_DWORD *)(a1 + 20);
    v52 = _mm_unpacklo_ps(v10, v13);
    v53 = 0;
    v54 = _mm_movelh_ps(_mm_unpacklo_ps(v12, v11), (__m128)0LL);
    v55 = *(_DWORD *)(a1 + 40) >> 1;
    v56 = _mm_movelh_ps(v52, (__m128)0LL);
    for ( j = _mm_movelh_ps(v50, (__m128)_xmm); v53 < v51; v53 += 2 )
    {
      v58 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(v53 * *(_DWORD *)(a1 + 16)));
      v59 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v53 + 1)));
      v60 = *(_DWORD *)(a1 + 64);
      v61 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)((v53 + 1) * v60));
      v62 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)(v53 * v60));
      *v62 = _mm_or_ps(
               _mm_andnot_ps(
                 (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v58, *v58, 85), v54), j),
                   _mm_mul_ps(_mm_shuffle_ps(*v58, *v58, 0), v56))),
               _mm_and_ps(*v58, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v55 )
      {
        v63 = (_OWORD *)v62[1].m128_f32;
        v64 = v55;
        v65 = (char *)v58 - (char *)v62;
        do
        {
          *v63 = *(_OWORD *)((char *)v63 + v65);
          ++v63;
          --v64;
        }
        while ( v64 );
      }
      *v61 = _mm_or_ps(
               _mm_andnot_ps(
                 (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v59, *v59, 85), v54), j),
                   _mm_mul_ps(_mm_shuffle_ps(*v59, *v59, 0), v56))),
               _mm_and_ps(*v59, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v55 )
      {
        v66 = (_OWORD *)v61[1].m128_f32;
        v67 = v55;
        v68 = (char *)v59 - (char *)v61;
        do
        {
          *v66 = *(_OWORD *)((char *)v66 + v68);
          ++v66;
          --v67;
        }
        while ( v67 );
      }
    }
  }
  else
  {
    VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
      a1,
      a3);
  }
  result = *(unsigned int *)(a1 + 20);
  dword_1804068D4 += result;
  return result;
}
