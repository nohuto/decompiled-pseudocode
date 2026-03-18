/*
 * XREFs of ?EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x18015D680
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z @ 0x18006238C (-EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180106F10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x18015C904 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18015CB94 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_V.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18015D150 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18015D490 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_18015D490.c)
 *     ?EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z @ 0x18015E980 (-EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z.c)
 *     ?EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x1801607F0 (-EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180162B04 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_180162B04.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180162E70 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_180162E70.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180163074 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180163200 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     ?BlendPremultipliedColorDW@@YAKKM@Z @ 0x1801632E8 (-BlendPremultipliedColorDW@@YAKKM@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801639E4 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801639E4.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x180188440 (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x180188A70 (-EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z.c)
 *     ?TransferAliasedVertices@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180249A94 (-TransferAliasedVertices@@YAXAEBV-$CCommonTransferParameters@U-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18024CEF8 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18024CFA4 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Ver.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x180250164 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180286D08 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWarpRenderingEffect::EmitGeometry(
        CWarpRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        __m128 *a3)
{
  struct CD3DBatchExecutionContext *v3; // r13
  unsigned int v4; // r14d
  __int64 v5; // rcx
  unsigned int v6; // r15d
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  int v9; // ecx
  _QWORD *v10; // rsi
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rax
  _QWORD *v15; // r12
  unsigned int v16; // r11d
  int v17; // r15d
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int16 v20; // di
  __m128i v21; // xmm1
  __int64 v22; // r9
  __m128i v23; // xmm1
  __int64 v24; // rax
  unsigned int v25; // edx
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  __int64 v28; // rdx
  _WORD *v29; // rcx
  __int64 v30; // rdi
  int v31; // edx
  unsigned int v32; // eax
  int v33; // ecx
  __int64 v34; // r11
  __m128 v35; // xmm10
  __m128 v36; // xmm11
  __int64 v37; // r15
  __int64 v38; // r10
  char v39; // cl
  __int64 v40; // r9
  int v41; // r8d
  __int64 v42; // rbx
  int v43; // eax
  int v44; // r13d
  int v45; // r12d
  float v46; // xmm13_4
  float v47; // xmm0_4
  char v48; // al
  __m128 v49; // xmm3
  __m128 v50; // xmm6
  float v51; // xmm11_4
  __m128 v52; // xmm4
  __m128 v53; // xmm5
  __m128 v54; // xmm12
  float v55; // xmm0_4
  __m128 v56; // xmm0
  int v57; // r9d
  bool v58; // cl
  int v59; // r8d
  unsigned int v60; // eax
  __int64 v61; // rsi
  unsigned int v62; // r12d
  unsigned int v63; // r13d
  int v64; // eax
  int v65; // edi
  void *v66; // r11
  __int64 v67; // rax
  unsigned int v68; // r10d
  __m128 v69; // xmm4
  __m128 v70; // xmm6
  __m128 v71; // xmm5
  int v72; // edi
  int v73; // esi
  __int64 v74; // r14
  __m128 *v75; // rdx
  __m128 *v76; // r8
  __m128 *v77; // rcx
  __m128 *v78; // r9
  _OWORD *m128_f32; // rax
  signed __int64 v80; // r8
  __int64 v81; // rcx
  _OWORD *v82; // rax
  __int64 v83; // rcx
  signed __int64 v84; // rdx
  __int64 v86; // rdi
  __int64 v87; // rsi
  __int64 v88; // rdi
  int v89; // ecx
  __int64 v90; // r14
  unsigned int v91; // r13d
  int v92; // r12d
  int v93; // eax
  int v94; // edi
  void *v95; // r11
  int v96; // eax
  int v97; // ecx
  int v98; // eax
  int v99; // ecx
  int v100; // r13d
  int v101; // eax
  int v102; // r9d
  int v103; // r9d
  int v104; // eax
  float v105; // xmm7_4
  __int64 v106; // r14
  float v107; // xmm8_4
  int v108; // r12d
  int v109; // edi
  int v110; // esi
  __int64 v111; // rcx
  __int64 v112; // r9
  float v113; // xmm2_4
  float v114; // xmm0_4
  unsigned int v115; // eax
  __int64 v116; // r9
  int v117; // r9d
  int v118; // edi
  __int64 v119; // rdx
  __int64 v120; // r8
  float v121; // xmm2_4
  float v122; // xmm0_4
  unsigned int v123; // edx
  float v124; // xmm7_4
  float v125; // xmm8_4
  int v126; // edx
  int v127; // r8d
  __int64 v128; // r14
  __int64 v129; // rax
  __int64 v130; // rcx
  float v131; // xmm2_4
  float v132; // xmm0_4
  _QWORD *v133; // r9
  __int64 v134; // rsi
  _QWORD *v135; // rax
  __int64 v136; // rsi
  _QWORD *v137; // rax
  __int64 v138; // r8
  unsigned int v139; // [rsp+40h] [rbp-C0h]
  unsigned int v140; // [rsp+44h] [rbp-BCh]
  unsigned int v141; // [rsp+44h] [rbp-BCh]
  unsigned int v142; // [rsp+48h] [rbp-B8h]
  unsigned int v143; // [rsp+50h] [rbp-B0h]
  __int64 v144; // [rsp+58h] [rbp-A8h]
  _QWORD v145[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v146; // [rsp+70h] [rbp-90h]
  int v147; // [rsp+74h] [rbp-8Ch]
  __int64 v148; // [rsp+78h] [rbp-88h]
  int v149; // [rsp+80h] [rbp-80h]
  int v150; // [rsp+84h] [rbp-7Ch]
  int v151; // [rsp+88h] [rbp-78h]
  float v152; // [rsp+8Ch] [rbp-74h]
  char v153; // [rsp+90h] [rbp-70h]
  __int64 v154; // [rsp+98h] [rbp-68h]
  int v155; // [rsp+A0h] [rbp-60h]
  int v156; // [rsp+A4h] [rbp-5Ch]
  int v157; // [rsp+B0h] [rbp-50h] BYREF
  int v158[3]; // [rsp+B4h] [rbp-4Ch] BYREF
  unsigned __int64 v159; // [rsp+C0h] [rbp-40h] BYREF
  float v160; // [rsp+C8h] [rbp-38h]
  float v161; // [rsp+CCh] [rbp-34h]
  __int32 v162; // [rsp+D0h] [rbp-30h]
  __int32 v163; // [rsp+D4h] [rbp-2Ch]
  float v164; // [rsp+D8h] [rbp-28h]
  __int32 v165; // [rsp+DCh] [rbp-24h]
  __m128 v166; // [rsp+E0h] [rbp-20h]
  __m128 v167; // [rsp+F0h] [rbp-10h]
  int v168; // [rsp+100h] [rbp+0h]
  __int64 v169; // [rsp+110h] [rbp+10h] BYREF
  __int64 v170; // [rsp+118h] [rbp+18h]
  __int128 v171; // [rsp+120h] [rbp+20h] BYREF
  __int128 v172; // [rsp+130h] [rbp+30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]
  int v176; // [rsp+218h] [rbp+118h] BYREF

  v3 = a2;
  if ( a3[5].m128_i8[12] )
  {
    CRenderingBatchCommand::EmitWarpFastPathGeometry((CRenderingBatchCommand *)a3, a2);
    return 0;
  }
  if ( a3->m128_i32[0] == 4 )
    return (unsigned int)CMegaRectBatchCommand::EmitGeometry((CMegaRectBatchCommand *)a3, a2);
  if ( a3->m128_i32[0] == 5 )
    return (unsigned int)CCpuClipAntialiasBatchCommand::EmitGeometry((CCpuClipAntialiasBatchCommand *)a3, a2, 0);
  v4 = 0;
  v5 = *(_QWORD *)(a3->m128_u64[1] + 16);
  v170 = v5;
  v6 = *(_DWORD *)(v5 + 8);
  v139 = v6;
  if ( v6 )
  {
    v7 = *(_QWORD *)(v5 + 48);
    v142 = *(_DWORD *)(v5 + 20);
    if ( !v7 && *(_DWORD *)(v5 + 20) )
    {
      ((void (__fastcall *)(__int64, struct CD3DBatchExecutionContext *, __m128 *, __m128 *))`gsl::details::get_terminate_handler'::`2'::handler)(
        v5,
        a2,
        a3,
        a3);
      __debugbreak();
    }
    v8 = *((_QWORD *)a2 + 3) + 16LL;
    v9 = 48;
    v144 = v8;
    if ( !*((_BYTE *)a2 + 64) )
      v9 = 16;
    v143 = v9 + 8 * *((_DWORD *)a2 + 17);
    if ( v6 * v143 > *(_DWORD *)(*((_QWORD *)a2 + 3) + 56LL) )
    {
      CD3DBatchExecutionContext::Flush(a2, 8LL);
      v101 = CD3DDynamicAppendBuffer::EnsureByteSpace((CD3DDynamicAppendBuffer *)v8, v6 * v143, 0);
      v4 = v101;
      if ( v101 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v101, 0x1FAu, 0LL);
        goto LABEL_124;
      }
      v8 = v144;
      *((_BYTE *)v3 + 73) = 1;
    }
    v10 = (_QWORD *)((char *)v3 + 16);
    if ( *((_BYTE *)v3 + 73) )
    {
      *((_BYTE *)v3 + 73) = 0;
      v11 = *((_DWORD *)v3 + 17);
      v12 = 48;
      if ( !*((_BYTE *)v3 + 64) )
        v12 = 16;
      v157 = 0;
      v13 = v12 + 8 * v11;
      v14 = *((_QWORD *)v3 + 3);
      v158[0] = v13;
      v169 = *(_QWORD *)(v14 + 24);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, int *, int *))(*(_QWORD *)*v10 + 144LL))(
        *v10,
        0LL,
        1LL,
        &v169,
        v158,
        &v157);
    }
    v15 = (_QWORD *)((char *)v3 + 16);
    if ( *(_QWORD *)(v8 + 24) )
    {
      if ( v6 > (unsigned int)(*(_DWORD *)(v8 + 40) - *(_DWORD *)(v8 + 36)) / *(_DWORD *)(v8 + 32) )
      {
        *((_DWORD *)v3 + 8) |= 0x20u;
        v86 = *((_QWORD *)v3 + 3);
        if ( *(_QWORD *)(v86 + 40) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v86 + 16) + 560LL) + 120LL))(
            *(_QWORD *)(*(_QWORD *)(v86 + 16) + 560LL),
            *(_QWORD *)(v86 + 24),
            0LL);
          *(_QWORD *)(v86 + 40) = 0LL;
          *(_DWORD *)(v86 + 48) = 0;
          if ( *((_BYTE *)v3 + 74) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v10 + 104LL))(
              *v10,
              *((unsigned int *)v3 + 22),
              *((unsigned int *)v3 + 19));
          }
          else
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v86 + 64) + 560LL) + 120LL))(
              *(_QWORD *)(*(_QWORD *)(v86 + 64) + 560LL),
              *(_QWORD *)(v86 + 72),
              0LL);
            *(_QWORD *)(v86 + 88) = 0LL;
            *(_DWORD *)(v86 + 96) = 0;
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v10 + 96LL))(
              *v10,
              *((unsigned int *)v3 + 23),
              *((unsigned int *)v3 + 20),
              0LL);
          }
          ++*((_DWORD *)v3 + 32);
          v15 = (_QWORD *)((char *)v3 + 16);
          *((_QWORD *)v3 + 11) = 0LL;
          *((_DWORD *)v3 + 24) = 0;
        }
      }
    }
    v16 = v142;
    v17 = -2003304307;
    if ( !v142 )
    {
LABEL_15:
      if ( *(_QWORD *)(v8 + 24) )
        goto LABEL_16;
      v59 = v139;
      v60 = *(_DWORD *)(v8 + 36);
      v61 = *(_QWORD *)v8;
      if ( v139 < 0x64 )
        v59 = 100;
      v62 = *(_DWORD *)(v8 + 40) - *(_DWORD *)(v8 + 36);
      v172 = 0LL;
      v63 = (v143 - v60 % v143) % v143 + v59 * v143;
      v140 = (v143 - v60 % v143) % v143;
      if ( *(_DWORD *)(v61 + 1112) )
      {
        v65 = -2003304307;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x9EBu, 0LL);
      }
      else
      {
        v64 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int128 *))(**(_QWORD **)(v61 + 560)
                                                                                            + 112LL))(
                *(_QWORD *)(v61 + 560),
                *(_QWORD *)(v8 + 8),
                0LL,
                5 - (unsigned int)(v62 < v63),
                0,
                &v172);
        v65 = v64;
        if ( v64 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v64, 0x9F1u, 0LL);
      }
      if ( !*(_DWORD *)(v61 + 1112)
        && (v65 == -2005532292 || v65 == -2147024882 || v65 == -2005270523)
        && *(_DWORD *)(v61 + 448) )
      {
        if ( v65 != -2005270523 )
          goto LABEL_119;
        v96 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v61 + 552) + 312LL))(*(_QWORD *)(v61 + 552));
        v97 = *(_DWORD *)(v61 + 1112);
        if ( v96 != -2005270480 )
        {
          if ( !v97 )
            *(_DWORD *)(v61 + 1112) = -2005270523;
LABEL_121:
          if ( *(_DWORD *)(v61 + 1112) )
          {
            v4 = -2003304307;
            v66 = 0LL;
LABEL_123:
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x6Cu, v66);
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x218u, 0LL);
LABEL_124:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xB0,
              (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\renderingbatchcommand.cpp",
              (const char *)v4);
            return v4;
          }
LABEL_51:
          v176 = 0;
          if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v65, 0, &v176) )
          {
            v102 = v176;
            if ( v176 == -2003304307 )
            {
              if ( v65 >= 0 )
                v65 = -2003304307;
              if ( *(_DWORD *)(v61 + 1112) == (_DWORD)v66 )
                *(_DWORD *)(v61 + 1112) = v65;
            }
            v65 = v102;
            if ( v102 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v102, 0xB31u, v66);
              v66 = 0LL;
            }
          }
          v17 = v65;
          v4 = v65;
          if ( v65 >= 0 )
          {
            v8 = v144;
            v67 = v172;
            *(_DWORD *)(v144 + 32) = v143;
            *(_QWORD *)(v144 + 24) = v67;
            if ( v62 < v63 )
              *(_DWORD *)(v144 + 36) = (_DWORD)v66;
            else
              *(_DWORD *)(v144 + 36) += v140;
            v3 = a2;
            v16 = v142;
            *((_DWORD *)a2 + 19) = *(_DWORD *)(v144 + 36) / *(_DWORD *)(v144 + 32);
LABEL_16:
            if ( v16 )
            {
              v18 = *((_QWORD *)v3 + 3);
              v19 = *(_QWORD *)(v18 + 88) + *(unsigned int *)(v18 + 100);
              *(_DWORD *)(v18 + 100) += *(_DWORD *)(v18 + 96) * v16;
              v20 = *((_WORD *)v3 + 38) + *((_WORD *)v3 + 44);
              v21 = _mm_cvtsi32_si128(v20);
              v22 = 0LL;
              v23 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v21, v21), 0);
              if ( v16 >= 0x20 )
              {
                v24 = v16 - 1;
                if ( v19 > v7 + 2 * v24 || v19 + 2 * v24 < v7 )
                {
                  v25 = 16;
                  do
                  {
                    *(__m128i *)(v19 + 2 * v22) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v7 + 2 * v22)), v23);
                    v22 = (unsigned int)(v22 + 32);
                    *(__m128i *)(v19 + 2LL * (v25 - 8)) = _mm_add_epi16(
                                                            _mm_loadu_si128((const __m128i *)(v7 + 2LL * (v25 - 8))),
                                                            v23);
                    *(__m128i *)(v19 + 2LL * v25) = _mm_add_epi16(
                                                      _mm_loadu_si128((const __m128i *)(v7 + 2LL * v25)),
                                                      v23);
                    v26 = v25 + 8;
                    v25 += 32;
                    *(__m128i *)(v19 + 2 * v26) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v7 + 2 * v26)), v23);
                  }
                  while ( (unsigned int)v22 < (v16 & 0xFFFFFFE0) );
                }
              }
              if ( (unsigned int)v22 < v16 )
              {
                v27 = v7 - v19;
                v28 = v16 - (unsigned int)v22;
                v29 = (_WORD *)(v19 + 2LL * (unsigned int)v22);
                do
                {
                  *v29 = *(_WORD *)((char *)v29 + v27) + v20;
                  ++v29;
                  --v28;
                }
                while ( v28 );
              }
              *((_DWORD *)v3 + 23) += v16;
            }
            v30 = v170;
            v31 = 48;
            *((_DWORD *)v3 + 22) += v139;
            v32 = *(_DWORD *)(v8 + 36);
            v33 = *(_DWORD *)(v8 + 32) * v139;
            v34 = *(_QWORD *)(v8 + 24) + v32;
            v36 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
            v35 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
            v168 = 0;
            v154 = v34;
            *(_DWORD *)(v8 + 36) = v32 + v33;
            v36.m128_f32[0] = 1.0 / *(float *)(v30 + 72);
            v37 = *(unsigned int *)(v30 + 8);
            v38 = *(unsigned int *)(v30 + 16);
            v39 = *((_BYTE *)v3 + 64);
            v40 = *(_QWORD *)(v30 + 32);
            v41 = *(_DWORD *)(v30 + 12);
            v42 = *(_QWORD *)(v30 + 24);
            if ( !v39 )
              v31 = 16;
            v43 = *((_DWORD *)v3 + 17);
            v44 = 8 * v38 + 16;
            v145[1] = *(_QWORD *)(v30 + 24);
            v146 = v44;
            v45 = v31 + 8 * v43;
            v176 = v45;
            v147 = v37;
            v148 = v40;
            v149 = v44;
            v150 = v41;
            v151 = v38;
            v156 = v37;
            v35.m128_f32[0] = 1.0 / *(float *)(v30 + 76);
            v46 = a3[5].m128_f32[2];
            v47 = v36.m128_f32[0] * a3[1].m128_f32[2];
            v49 = v36;
            v48 = *(_BYTE *)(v30 + 81);
            v49.m128_f32[0] = v36.m128_f32[0] * a3[1].m128_f32[0];
            v50 = v36;
            v50.m128_f32[0] = v36.m128_f32[0] * a3[1].m128_f32[1];
            v52 = v35;
            v145[0] = *(_QWORD *)(v30 + 40);
            v51 = v36.m128_f32[0] * a3[1].m128_f32[3];
            v53 = v35;
            v153 = v48;
            v52.m128_f32[0] = v35.m128_f32[0] * a3[2].m128_f32[0];
            v53.m128_f32[0] = v35.m128_f32[0] * a3[2].m128_f32[1];
            v54 = a3[4];
            v160 = v47;
            v55 = v35.m128_f32[0] * a3[2].m128_f32[2];
            v35.m128_f32[0] = v35.m128_f32[0] * a3[2].m128_f32[3];
            v164 = v55;
            v56 = a3[3];
            v159 = __PAIR64__(v50.m128_u32[0], v49.m128_u32[0]);
            v166 = v56;
            v161 = v51;
            v162 = v52.m128_i32[0];
            v163 = v53.m128_i32[0];
            v165 = v35.m128_i32[0];
            v152 = v46;
            v167 = v54;
            if ( v39 )
            {
              v155 = v45;
              TransferVertices<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
                (__int64)v145,
                a3 + 1,
                (struct Windows::Foundation::Numerics::float4x4 *)&v159,
                0);
            }
            else
            {
              v155 = v45;
              v57 = v45;
              if ( !v41 )
              {
                TransferAliasedVertices(v145);
                return 0;
              }
              v58 = (v38 & 1) == 0 && (v34 & 0xF) == 0;
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                  (float)((float)((float)(COERCE_FLOAT(LODWORD(v51) & _xmm) * 61440.0)
                                                + (float)(COERCE_FLOAT(v35.m128_i32[0] & _xmm) * 61440.0))
                                        + COERCE_FLOAT(_mm_shuffle_ps(v54, v54, 255).m128_u32[0] & _xmm))
                                - 1.0) & _xmm) >= 0.000081380211 )
              {
                BYTE1(v168) = 16;
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v46 - 1.0) & _xmm) >= 0.0000011920929 )
                {
                  if ( v48 )
                    VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
                      v145,
                      &v159);
                  else
                    VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
                      v145,
                      &v159);
                }
                else
                {
                  VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
                    (__int64)v145,
                    (float *)&v159);
                }
                dword_1803FA87C += v147;
                return 0;
              }
              BYTE1(v168) = 48;
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v49.m128_f32[0] - v53.m128_f32[0]) & _xmm) <= 0.000081380211
                && COERCE_FLOAT(COERCE_UNSIGNED_INT(v50.m128_f32[0] - COERCE_FLOAT(v52.m128_i32[0] ^ _xmm)) & _xmm) <= 0.000081380211
                && COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                  (float)((float)(v52.m128_f32[0] * v52.m128_f32[0])
                                        + (float)(v49.m128_f32[0] * v49.m128_f32[0]))
                                - 1.0) & _xmm) < 0.000081380211 )
              {
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v46 - 1.0) & _xmm) < 0.0000011920929 )
                {
                  if ( v58 )
                  {
                    v68 = (unsigned int)v38 >> 1;
                    v69 = _mm_movelh_ps(_mm_unpacklo_ps(v52, v53), (__m128)0LL);
                    v70 = _mm_movelh_ps(_mm_unpacklo_ps(v49, v50), (__m128)0LL);
                    v71 = _mm_movelh_ps(_mm_unpacklo_ps(v54, _mm_shuffle_ps(v54, v54, 85)), (__m128)_xmm);
                    if ( (_DWORD)v37 )
                    {
                      v72 = 0;
                      v73 = 0;
                      v74 = ((unsigned int)(v37 - 1) >> 1) + 1;
                      do
                      {
                        v75 = (__m128 *)(v42 + v73 + v44);
                        v76 = (__m128 *)(v42 + v73);
                        v77 = (__m128 *)(v34 + v72);
                        v78 = (__m128 *)(v34 + v57 + v72);
                        *v77 = _mm_or_ps(
                                 _mm_andnot_ps(
                                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                                   _mm_add_ps(
                                     _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v76, *v76, 85), v69), v71),
                                     _mm_mul_ps(_mm_shuffle_ps(*v76, *v76, 0), v70))),
                                 _mm_and_ps(
                                   *v76,
                                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
                        if ( v68 )
                        {
                          m128_f32 = (_OWORD *)v77[1].m128_f32;
                          v80 = (char *)v76 - (char *)v77;
                          v81 = v68;
                          do
                          {
                            *m128_f32 = *(_OWORD *)((char *)m128_f32 + v80);
                            ++m128_f32;
                            --v81;
                          }
                          while ( v81 );
                        }
                        *v78 = _mm_or_ps(
                                 _mm_andnot_ps(
                                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                                   _mm_add_ps(
                                     _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v75, *v75, 85), v69), v71),
                                     _mm_mul_ps(_mm_shuffle_ps(*v75, *v75, 0), v70))),
                                 _mm_and_ps(
                                   *v75,
                                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
                        if ( v68 )
                        {
                          v82 = (_OWORD *)v78[1].m128_f32;
                          v83 = v68;
                          v84 = (char *)v75 - (char *)v78;
                          do
                          {
                            *v82 = *(_OWORD *)((char *)v82 + v84);
                            ++v82;
                            --v83;
                          }
                          while ( v83 );
                        }
                        v57 = v176;
                        v73 += 2 * v44;
                        v72 += 2 * v45;
                        --v74;
                      }
                      while ( v74 );
                    }
                  }
                  else if ( (_DWORD)v37 )
                  {
                    v124 = v167.m128_f32[1];
                    v125 = v167.m128_f32[0];
                    v126 = 0;
                    v127 = 0;
                    v128 = v37;
                    do
                    {
                      v129 = v42 + v127;
                      v130 = v34 + v126;
                      *(float *)v130 = (float)((float)(v49.m128_f32[0] * *(float *)v129)
                                             + (float)(v52.m128_f32[0] * *(float *)(v129 + 4)))
                                     + v125;
                      v131 = v50.m128_f32[0] * *(float *)v129;
                      v132 = v53.m128_f32[0] * *(float *)(v129 + 4);
                      *(_DWORD *)(v130 + 8) = 1065353216;
                      *(float *)(v130 + 4) = (float)(v131 + v132) + v124;
                      if ( (_DWORD)v38 )
                      {
                        v133 = (_QWORD *)(v130 + 16);
                        v134 = v38;
                        do
                        {
                          *v133 = *(_QWORD *)((char *)v133 + v129 - v130);
                          ++v133;
                          --v134;
                        }
                        while ( v134 );
                        v57 = v176;
                      }
                      v127 += v44;
                      v126 += v57;
                      *(_DWORD *)(v130 + 12) = *(_DWORD *)(v129 + 12);
                      --v128;
                    }
                    while ( v128 );
                  }
                }
                else if ( v58 )
                {
                  if ( v48 )
                    VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
                      v145,
                      &v159);
                  else
                    VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
                      (__int64)v145,
                      &v159);
                  LODWORD(v37) = v147;
                }
                else if ( (_DWORD)v37 )
                {
                  v105 = v167.m128_f32[1];
                  v106 = v37;
                  v107 = v167.m128_f32[0];
                  v108 = v176;
                  if ( v48 )
                  {
                    v117 = 0;
                    v118 = 0;
                    do
                    {
                      v119 = v42 + v118;
                      v120 = v34 + v117;
                      *(float *)v120 = (float)((float)(v49.m128_f32[0] * *(float *)v119)
                                             + (float)(v52.m128_f32[0] * *(float *)(v119 + 4)))
                                     + v107;
                      v121 = v50.m128_f32[0] * *(float *)v119;
                      v122 = v53.m128_f32[0] * *(float *)(v119 + 4);
                      *(_DWORD *)(v120 + 8) = 1065353216;
                      *(float *)(v120 + 4) = (float)(v121 + v122) + v105;
                      if ( (_DWORD)v38 )
                      {
                        v135 = (_QWORD *)(v120 + 16);
                        v136 = v38;
                        do
                        {
                          *v135 = *(_QWORD *)((char *)v135 + v119 - v120);
                          ++v135;
                          --v136;
                        }
                        while ( v136 );
                      }
                      v123 = *(_DWORD *)(v119 + 12);
                      v118 += v44;
                      v117 += v108;
                      *(_DWORD *)(v120 + 12) = (int)(float)(unsigned __int8)v123 | (((int)(float)BYTE1(v123) | (((int)(float)BYTE2(v123) | ((int)(float)((float)HIBYTE(v123) * v46) << 8)) << 8)) << 8);
                      --v106;
                    }
                    while ( v106 );
                  }
                  else
                  {
                    v109 = 0;
                    v110 = 0;
                    do
                    {
                      v111 = v42 + v110;
                      v112 = v34 + v109;
                      *(float *)v112 = (float)((float)(v49.m128_f32[0] * *(float *)v111)
                                             + (float)(v52.m128_f32[0] * *(float *)(v111 + 4)))
                                     + v107;
                      v113 = v50.m128_f32[0] * *(float *)v111;
                      v114 = v53.m128_f32[0] * *(float *)(v111 + 4);
                      *(_DWORD *)(v112 + 8) = 1065353216;
                      *(float *)(v112 + 4) = (float)(v113 + v114) + v105;
                      if ( (_DWORD)v38 )
                      {
                        v137 = (_QWORD *)(v112 + 16);
                        v138 = v38;
                        do
                        {
                          *v137 = *(_QWORD *)((char *)v137 + v111 - v112);
                          ++v137;
                          --v138;
                        }
                        while ( v138 );
                      }
                      v115 = BlendPremultipliedColorDW(*(_DWORD *)(v111 + 12), v46);
                      v110 += v44;
                      *(_DWORD *)(v116 + 12) = v115;
                      v109 += v108;
                      --v106;
                    }
                    while ( v106 );
                  }
                }
                dword_1803FA874 += v37;
                return 0;
              }
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v46 - 1.0) & _xmm) >= 0.0000011920929 )
              {
                if ( v58 )
                {
                  if ( v48 )
                    VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
                      v145,
                      &v159);
                  else
                    VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
                      v145,
                      &v159);
                  dword_1803FA878 += v147;
                  return 0;
                }
                if ( v48 )
                {
                  VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
                    v145,
                    &v159);
                  dword_1803FA878 += v147;
                  return 0;
                }
                VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
                  v145,
                  &v159);
              }
              else
              {
                if ( !v58 )
                {
                  VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
                    v145,
                    &v159);
                  dword_1803FA878 += v147;
                  return 0;
                }
                VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
                  (__int64)v145,
                  &v159);
              }
              dword_1803FA878 += v147;
            }
            return 0;
          }
          goto LABEL_123;
        }
        if ( !v97 )
        {
          *(_DWORD *)(v61 + 1112) = -2005270480;
          CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v61 + 16));
        }
        else
        {
LABEL_119:
          CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v61 + 16));
        }
      }
      if ( v65 >= 0 )
        goto LABEL_51;
      goto LABEL_121;
    }
    v87 = *((_QWORD *)v3 + 3);
    if ( 2 * (unsigned __int64)v142 > *(unsigned int *)(v87 + 104) )
    {
      CD3DBatchExecutionContext::Flush(v3, 16LL);
      v104 = CD3DDynamicAppendBuffer::EnsureByteSpace((CD3DDynamicAppendBuffer *)(v87 + 64), 2 * v142, 0);
      v100 = v104;
      v4 = v104;
      if ( v104 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v104, 0xBFu, 0LL);
        goto LABEL_136;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v15 + 152LL))(*v15, *(_QWORD *)(v87 + 72), 57LL);
      v3 = a2;
      v8 = v144;
      v16 = v142;
      v15 = (_QWORD *)((char *)a2 + 16);
    }
    if ( *(_QWORD *)(v87 + 88) )
    {
      if ( v16 > (unsigned int)(*(_DWORD *)(v87 + 104) - *(_DWORD *)(v87 + 100)) / *(_DWORD *)(v87 + 96) )
      {
        *((_DWORD *)v3 + 8) |= 0x40u;
        v88 = *((_QWORD *)v3 + 3);
        if ( *(_QWORD *)(v88 + 40) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v88 + 16) + 560LL) + 120LL))(
            *(_QWORD *)(*(_QWORD *)(v88 + 16) + 560LL),
            *(_QWORD *)(v88 + 24),
            0LL);
          *(_QWORD *)(v88 + 40) = 0LL;
          *(_DWORD *)(v88 + 48) = 0;
          if ( *((_BYTE *)v3 + 74) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v15 + 104LL))(
              *v15,
              *((unsigned int *)v3 + 22),
              *((unsigned int *)v3 + 19));
          }
          else
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v88 + 64) + 560LL) + 120LL))(
              *(_QWORD *)(*(_QWORD *)(v88 + 64) + 560LL),
              *(_QWORD *)(v88 + 72),
              0LL);
            *(_QWORD *)(v88 + 88) = 0LL;
            *(_DWORD *)(v88 + 96) = 0;
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v15 + 96LL))(
              *v15,
              *((unsigned int *)v3 + 23),
              *((unsigned int *)v3 + 20),
              0LL);
          }
          ++*((_DWORD *)v3 + 32);
          *((_QWORD *)v3 + 11) = 0LL;
          *((_DWORD *)v3 + 24) = 0;
        }
      }
      if ( *(_QWORD *)(v87 + 88) )
        goto LABEL_98;
    }
    v89 = v142;
    v90 = *(_QWORD *)(v87 + 64);
    if ( v142 < 0x12C )
      v89 = 300;
    v91 = *(_DWORD *)(v87 + 104) - *(_DWORD *)(v87 + 100);
    v92 = -*(_DWORD *)(v87 + 100) & 1;
    v171 = 0LL;
    v141 = v92 + 2 * v89;
    if ( *(_DWORD *)(v90 + 1112) )
    {
      v94 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x9EBu, 0LL);
    }
    else
    {
      v93 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int128 *))(**(_QWORD **)(v90 + 560)
                                                                                          + 112LL))(
              *(_QWORD *)(v90 + 560),
              *(_QWORD *)(v87 + 72),
              0LL,
              5 - (unsigned int)(v91 < v92 + 2 * v89),
              0,
              &v171);
      v94 = v93;
      if ( v93 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v93, 0x9F1u, 0LL);
    }
    if ( !*(_DWORD *)(v90 + 1112)
      && (v94 == -2005532292 || v94 == -2147024882 || v94 == -2005270523)
      && *(_DWORD *)(v90 + 448) )
    {
      if ( v94 != -2005270523 )
        goto LABEL_131;
      v98 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v90 + 552) + 312LL))(*(_QWORD *)(v90 + 552));
      v99 = *(_DWORD *)(v90 + 1112);
      if ( v98 != -2005270480 )
      {
        if ( !v99 )
          *(_DWORD *)(v90 + 1112) = -2005270523;
LABEL_133:
        if ( *(_DWORD *)(v90 + 1112) )
        {
          v94 = -2003304307;
          v4 = -2003304307;
          v95 = 0LL;
LABEL_135:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v94, 0x6Cu, v95);
          v100 = v4;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v94, 0xCBu, 0LL);
LABEL_136:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v100, 0x211u, 0LL);
          goto LABEL_124;
        }
LABEL_93:
        v176 = 0;
        if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v94, 0, &v176) )
        {
          v103 = v176;
          if ( v176 == -2003304307 )
          {
            if ( v94 >= 0 )
              v94 = -2003304307;
            if ( *(_DWORD *)(v90 + 1112) == (_DWORD)v95 )
              *(_DWORD *)(v90 + 1112) = v94;
          }
          v94 = v103;
          if ( v103 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v103, 0xB31u, v95);
            v95 = 0LL;
          }
        }
        v4 = v94;
        if ( v94 >= 0 )
        {
          *(_QWORD *)(v87 + 88) = v171;
          *(_DWORD *)(v87 + 96) = 2;
          if ( v91 < v141 )
            *(_DWORD *)(v87 + 100) = (_DWORD)v95;
          else
            *(_DWORD *)(v87 + 100) += v92;
          v3 = a2;
          v8 = v144;
          *((_DWORD *)a2 + 20) = *(_DWORD *)(v87 + 100) / *(_DWORD *)(v87 + 96);
LABEL_98:
          v16 = v142;
          goto LABEL_15;
        }
        goto LABEL_135;
      }
      if ( !v99 )
      {
        *(_DWORD *)(v90 + 1112) = -2005270480;
        CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v90 + 16));
      }
      else
      {
LABEL_131:
        CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v90 + 16));
      }
    }
    if ( v94 >= 0 )
      goto LABEL_93;
    goto LABEL_133;
  }
  return v4;
}
