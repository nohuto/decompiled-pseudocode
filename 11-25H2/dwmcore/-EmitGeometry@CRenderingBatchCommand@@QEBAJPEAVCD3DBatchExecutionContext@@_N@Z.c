/*
 * XREFs of ?EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x180142F10
 * Callers:
 *     ?FillVertexAndIndexBuffers@CD3DBatchExecutionContext@@QEAAJPEAPEBQEBVCBatchCommand@@PEBVCRenderingEffect@@@Z @ 0x1801441D0 (-FillVertexAndIndexBuffers@CD3DBatchExecutionContext@@QEAAJPEAPEBQEBVCBatchCommand@@PEBVCRenderi.c)
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180144C20 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180142B50 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x1801619F8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180161C88 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_V.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180162250 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180162590 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_180162590.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180167C04 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_180167C04.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180167F70 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_180167F70.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180168174 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180168300 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     ?BlendPremultipliedColorDW@@YAKKM@Z @ 0x1801683E8 (-BlendPremultipliedColorDW@@YAKKM@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180168AE4 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_180168AE4.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x18018D970 (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x18018DEA0 (-EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z.c)
 *     ?EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z @ 0x18019D240 (-EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z.c)
 *     ?TransferAliasedVertices@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180254DE8 (-TransferAliasedVertices@@YAXAEBV-$CCommonTransferParameters@U-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     ?BlendStraightColorDW@@YAKKM@Z @ 0x180257E6C (-BlendStraightColorDW@@YAKKM@Z.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180258358 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180258404 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Ver.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18025B75C (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1802922A8 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall CRenderingBatchCommand::EmitGeometry(__m128 *this, struct CD3DBatchExecutionContext *a2, bool a3)
{
  struct CD3DBatchExecutionContext *v3; // r13
  int v5; // ecx
  __int64 v6; // rcx
  unsigned int v7; // r15d
  unsigned __int64 v8; // rbx
  __int64 v9; // r11
  int v10; // ecx
  _QWORD *v11; // rsi
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rax
  _QWORD *v16; // r12
  unsigned int v17; // r10d
  int v18; // r15d
  int v19; // r15d
  __int64 v20; // rdx
  __int64 v21; // r9
  unsigned __int64 v22; // r8
  __int16 v23; // di
  __m128i v24; // xmm1
  __m128i v25; // xmm1
  __int64 v26; // rax
  unsigned int v27; // r10d
  unsigned int v28; // edx
  __int64 v29; // rax
  unsigned __int64 v30; // rbx
  __int64 v31; // rdx
  _WORD *v32; // rcx
  __int64 v33; // rdi
  int v34; // edx
  int v35; // ecx
  unsigned int v36; // eax
  __m128 v37; // xmm10
  __m128 v38; // xmm11
  __int64 v39; // r13
  __int64 v40; // r10
  __int64 v41; // r9
  __int64 v42; // rbx
  __int64 v43; // r11
  int v44; // r12d
  char v45; // cl
  int v46; // eax
  int v47; // r8d
  int v48; // r14d
  float v49; // xmm13_4
  float v50; // xmm0_4
  char v51; // al
  __m128 v52; // xmm3
  __m128 v53; // xmm6
  float v54; // xmm11_4
  __m128 v55; // xmm4
  __m128 v56; // xmm5
  __m128 v57; // xmm12
  float v58; // xmm0_4
  __m128 v59; // xmm0
  bool v60; // cl
  int v61; // r8d
  unsigned int v62; // eax
  __int64 v63; // rsi
  unsigned int v64; // r12d
  unsigned int v65; // r13d
  int v66; // eax
  int v67; // edi
  unsigned int v68; // r14d
  __int64 v69; // rax
  unsigned int v70; // r10d
  __m128 v71; // xmm4
  __m128 v72; // xmm6
  __m128 v73; // xmm5
  unsigned int v74; // esi
  int v75; // r14d
  int v76; // r13d
  int v77; // edi
  __int64 v78; // rsi
  int v79; // r9d
  __m128 *v80; // rcx
  __m128 *v81; // r8
  __m128 *v82; // rdx
  __m128 *v83; // r9
  _OWORD *m128_f32; // rax
  signed __int64 v85; // r8
  __int64 v86; // rcx
  _OWORD *v87; // rax
  __int64 v88; // rcx
  signed __int64 v89; // rdx
  __int64 v91; // rdi
  __int64 v92; // rsi
  __int64 v93; // rdi
  int v94; // ecx
  __int64 v95; // r14
  unsigned int v96; // r13d
  int v97; // r12d
  int v98; // eax
  int v99; // edi
  void *v100; // r11
  int v101; // eax
  int v102; // ecx
  int v103; // eax
  int v104; // ecx
  int v105; // r13d
  int v106; // eax
  int v107; // r9d
  int v108; // r9d
  int v109; // eax
  float v110; // xmm7_4
  int v111; // edi
  float v112; // xmm8_4
  __int64 v113; // rsi
  __int64 v114; // rcx
  __int64 v115; // r9
  float v116; // xmm2_4
  float v117; // xmm0_4
  unsigned int v118; // eax
  __int64 v119; // r9
  __int64 v120; // rcx
  __int64 v121; // r9
  float v122; // xmm2_4
  float v123; // xmm0_4
  unsigned int v124; // eax
  __int64 v125; // r9
  float v126; // xmm7_4
  int v127; // edx
  float v128; // xmm8_4
  __int64 v129; // rsi
  __int64 v130; // rax
  __int64 v131; // rcx
  float v132; // xmm2_4
  float v133; // xmm0_4
  _QWORD *v134; // r8
  __int64 v135; // rdi
  _QWORD *v136; // rax
  __int64 v137; // r8
  _QWORD *v138; // rax
  __int64 v139; // r8
  int v140; // [rsp+48h] [rbp-C0h]
  unsigned int v141; // [rsp+48h] [rbp-C0h]
  unsigned int v142; // [rsp+48h] [rbp-C0h]
  unsigned int v143; // [rsp+50h] [rbp-B8h]
  CD3DDynamicAppendBuffer *v144; // [rsp+58h] [rbp-B0h]
  unsigned int v145; // [rsp+60h] [rbp-A8h]
  unsigned int v146; // [rsp+64h] [rbp-A4h]
  _QWORD v147[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v148; // [rsp+78h] [rbp-90h]
  int v149; // [rsp+7Ch] [rbp-8Ch]
  __int64 v150; // [rsp+80h] [rbp-88h]
  int v151; // [rsp+88h] [rbp-80h]
  int v152; // [rsp+8Ch] [rbp-7Ch]
  int v153; // [rsp+90h] [rbp-78h]
  float v154; // [rsp+94h] [rbp-74h]
  char v155; // [rsp+98h] [rbp-70h]
  __int64 v156; // [rsp+A0h] [rbp-68h]
  int v157; // [rsp+A8h] [rbp-60h]
  int v158; // [rsp+ACh] [rbp-5Ch]
  int v159; // [rsp+B8h] [rbp-50h] BYREF
  int v160[3]; // [rsp+BCh] [rbp-4Ch] BYREF
  _DWORD v161[8]; // [rsp+C8h] [rbp-40h] BYREF
  __m128 v162; // [rsp+E8h] [rbp-20h]
  __m128 v163; // [rsp+F8h] [rbp-10h]
  int v164; // [rsp+108h] [rbp+0h]
  __int64 v165; // [rsp+118h] [rbp+10h]
  __int64 v166; // [rsp+120h] [rbp+18h] BYREF
  __int64 v167; // [rsp+128h] [rbp+20h]
  __int128 v168; // [rsp+130h] [rbp+28h] BYREF
  __int128 v169; // [rsp+140h] [rbp+38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]
  int v174; // [rsp+240h] [rbp+138h] BYREF

  v3 = a2;
  if ( !this[5].m128_i8[12] )
  {
    v5 = this->m128_i32[0] - 4;
    if ( !v5 )
      return CMegaRectBatchCommand::EmitGeometry((CMegaRectBatchCommand *)this, a2);
    if ( v5 == 1 )
      return CCpuClipAntialiasBatchCommand::EmitGeometry((CCpuClipAntialiasBatchCommand *)this, a2, a3);
    v6 = *(_QWORD *)(this->m128_u64[1] + 16);
    v167 = v6;
    v7 = *(_DWORD *)(v6 + 8);
    v146 = v7;
    if ( !v7 )
      return 0;
    v8 = *(_QWORD *)(v6 + 48);
    v143 = *(_DWORD *)(v6 + 20);
    if ( !v8 && *(_DWORD *)(v6 + 20) )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v9 = *((_QWORD *)a2 + 3) + 16LL;
    v10 = 48;
    v144 = (CD3DDynamicAppendBuffer *)v9;
    if ( !*((_BYTE *)a2 + 64) )
      v10 = 16;
    v145 = v10 + 8 * *((_DWORD *)a2 + 17);
    if ( v7 * v145 > *(_DWORD *)(*((_QWORD *)a2 + 3) + 56LL) )
    {
      CD3DBatchExecutionContext::Flush(a2, 8LL);
      v106 = CD3DDynamicAppendBuffer::EnsureByteSpace(v144, v7 * v145, 0);
      v68 = v106;
      if ( v106 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v106, 0x1FAu, 0LL);
        goto LABEL_124;
      }
      v9 = (__int64)v144;
      *((_BYTE *)v3 + 73) = 1;
    }
    v11 = (_QWORD *)((char *)v3 + 16);
    v165 = 0LL;
    if ( *((_BYTE *)v3 + 73) )
    {
      *((_BYTE *)v3 + 73) = 0;
      v12 = *((_DWORD *)v3 + 17);
      v13 = 48;
      if ( !*((_BYTE *)v3 + 64) )
        v13 = 16;
      v159 = 0;
      v14 = v13 + 8 * v12;
      v15 = *((_QWORD *)v3 + 3);
      v160[0] = v14;
      v166 = *(_QWORD *)(v15 + 24);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, int *, int *))(*(_QWORD *)*v11 + 144LL))(
        *v11,
        0LL,
        1LL,
        &v166,
        v160,
        &v159);
      v9 = (__int64)v144;
    }
    v16 = (_QWORD *)((char *)v3 + 16);
    if ( *(_QWORD *)(v9 + 24) )
    {
      if ( v7 > (unsigned int)(*(_DWORD *)(v9 + 40) - *(_DWORD *)(v9 + 36)) / *(_DWORD *)(v9 + 32) )
      {
        *((_DWORD *)v3 + 8) |= 0x20u;
        v91 = *((_QWORD *)v3 + 3);
        if ( *(_QWORD *)(v91 + 40) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v91 + 16) + 560LL) + 120LL))(
            *(_QWORD *)(*(_QWORD *)(v91 + 16) + 560LL),
            *(_QWORD *)(v91 + 24),
            0LL);
          *(_QWORD *)(v91 + 40) = 0LL;
          *(_DWORD *)(v91 + 48) = 0;
          if ( *((_BYTE *)v3 + 74) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v11 + 104LL))(
              *v11,
              *((unsigned int *)v3 + 22),
              *((unsigned int *)v3 + 19));
          }
          else
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v91 + 64) + 560LL) + 120LL))(
              *(_QWORD *)(*(_QWORD *)(v91 + 64) + 560LL),
              *(_QWORD *)(v91 + 72),
              0LL);
            *(_QWORD *)(v91 + 88) = 0LL;
            *(_DWORD *)(v91 + 96) = 0;
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v11 + 96LL))(
              *v11,
              *((unsigned int *)v3 + 23),
              *((unsigned int *)v3 + 20),
              0LL);
          }
          ++*((_DWORD *)v3 + 32);
          v16 = (_QWORD *)((char *)v3 + 16);
          v9 = (__int64)v144;
          *((_QWORD *)v3 + 11) = 0LL;
          *((_DWORD *)v3 + 24) = 0;
        }
      }
    }
    v17 = v143;
    v18 = -2003304307;
    if ( !v143 )
    {
LABEL_15:
      if ( *(_QWORD *)(v9 + 24) )
        goto LABEL_16;
      v61 = v146;
      v62 = *(_DWORD *)(v9 + 36);
      v63 = *(_QWORD *)v9;
      if ( v146 < 0x64 )
        v61 = 100;
      v64 = *(_DWORD *)(v9 + 40) - *(_DWORD *)(v9 + 36);
      v169 = 0LL;
      v65 = (v145 - v62 % v145) % v145 + v61 * v145;
      v141 = (v145 - v62 % v145) % v145;
      if ( *(_DWORD *)(v63 + 1112) )
      {
        v67 = -2003304307;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0xA07u, 0LL);
      }
      else
      {
        v66 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int128 *))(**(_QWORD **)(v63 + 560)
                                                                                            + 112LL))(
                *(_QWORD *)(v63 + 560),
                *(_QWORD *)(v9 + 8),
                0LL,
                5 - (unsigned int)(v64 < v65),
                0,
                &v169);
        v67 = v66;
        if ( v66 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v66, 0xA0Du, 0LL);
      }
      if ( !*(_DWORD *)(v63 + 1112)
        && (v67 == -2005532292 || v67 == -2147024882 || v67 == -2005270523)
        && *(_DWORD *)(v63 + 448) )
      {
        if ( v67 != -2005270523 )
          goto LABEL_119;
        v101 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v63 + 552) + 312LL))(*(_QWORD *)(v63 + 552));
        v102 = *(_DWORD *)(v63 + 1112);
        if ( v101 != -2005270480 )
        {
          if ( !v102 )
            *(_DWORD *)(v63 + 1112) = -2005270523;
LABEL_121:
          if ( *(_DWORD *)(v63 + 1112) )
          {
            v68 = -2003304307;
LABEL_123:
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x6Cu, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x218u, 0LL);
LABEL_124:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xB0,
              (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\renderingbatchcommand.cpp",
              (const char *)v68);
            return v68;
          }
LABEL_53:
          v174 = 0;
          if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v67, 0, &v174) )
          {
            v107 = v174;
            if ( v174 == -2003304307 )
            {
              if ( v67 >= 0 )
                v67 = -2003304307;
              if ( !*(_DWORD *)(v63 + 1112) )
                *(_DWORD *)(v63 + 1112) = v67;
            }
            v67 = v107;
            if ( v107 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v107, 0xB4Du, 0LL);
          }
          v18 = v67;
          v68 = v67;
          if ( v67 >= 0 )
          {
            v9 = (__int64)v144;
            v69 = v169;
            *((_DWORD *)v144 + 8) = v145;
            *((_QWORD *)v144 + 3) = v69;
            if ( v64 < v65 )
              *((_DWORD *)v144 + 9) = 0;
            else
              *((_DWORD *)v144 + 9) += v141;
            v3 = a2;
            v17 = v143;
            *((_DWORD *)a2 + 19) = *((_DWORD *)v144 + 9) / *((_DWORD *)v144 + 8);
LABEL_16:
            v19 = 0;
            if ( v17 )
            {
              v20 = *((_QWORD *)v3 + 3);
              v21 = 0LL;
              v22 = *(_QWORD *)(v20 + 88) + *(unsigned int *)(v20 + 100);
              *(_DWORD *)(v20 + 100) += *(_DWORD *)(v20 + 96) * v17;
              v23 = *((_WORD *)v3 + 38) + *((_WORD *)v3 + 44);
              v24 = _mm_cvtsi32_si128(v23);
              v25 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v24, v24), 0);
              if ( v17 >= 0x20 )
              {
                v26 = v17 - 1;
                if ( v22 > v8 + 2 * v26 || v22 + 2 * v26 < v8 )
                {
                  v27 = v17 & 0xFFFFFFE0;
                  v28 = 16;
                  do
                  {
                    *(__m128i *)(v22 + 2 * v21) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v8 + 2 * v21)), v25);
                    v21 = (unsigned int)(v21 + 32);
                    *(__m128i *)(v22 + 2LL * (v28 - 8)) = _mm_add_epi16(
                                                            _mm_loadu_si128((const __m128i *)(v8 + 2LL * (v28 - 8))),
                                                            v25);
                    *(__m128i *)(v22 + 2LL * v28) = _mm_add_epi16(
                                                      _mm_loadu_si128((const __m128i *)(v8 + 2LL * v28)),
                                                      v25);
                    v29 = v28 + 8;
                    v28 += 32;
                    *(__m128i *)(v22 + 2 * v29) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v8 + 2 * v29)), v25);
                  }
                  while ( (unsigned int)v21 < v27 );
                  v17 = v143;
                }
              }
              if ( (unsigned int)v21 < v17 )
              {
                v30 = v8 - v22;
                v31 = v17 - (unsigned int)v21;
                v32 = (_WORD *)(v22 + 2LL * (unsigned int)v21);
                do
                {
                  *v32 = *(_WORD *)((char *)v32 + v30) + v23;
                  ++v32;
                  --v31;
                }
                while ( v31 );
              }
              *((_DWORD *)v3 + 23) += v17;
            }
            v33 = v167;
            v34 = 48;
            *((_DWORD *)v3 + 22) += v146;
            v35 = *(_DWORD *)(v9 + 32) * v146;
            v36 = *(_DWORD *)(v9 + 36);
            v38 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
            v164 = 0;
            v37 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
            *(_DWORD *)(v9 + 36) = v36 + v35;
            v38.m128_f32[0] = 1.0 / *(float *)(v33 + 72);
            v39 = *(unsigned int *)(v33 + 8);
            v40 = *(unsigned int *)(v33 + 16);
            v41 = *(_QWORD *)(v33 + 32);
            v42 = *(_QWORD *)(v33 + 24);
            v43 = *((_QWORD *)v144 + 3) + v36;
            v44 = 8 * v40 + 16;
            v140 = v39;
            v147[1] = v42;
            v148 = v44;
            v45 = *((_BYTE *)a2 + 64);
            v46 = *((_DWORD *)a2 + 17);
            v149 = v39;
            if ( !v45 )
              v34 = 16;
            v47 = *(_DWORD *)(v33 + 12);
            v150 = v41;
            v151 = 8 * v40 + 16;
            v152 = v47;
            v48 = v34 + 8 * v46;
            v174 = v48;
            v153 = v40;
            v156 = v43;
            v157 = v48;
            v158 = v39;
            v37.m128_f32[0] = 1.0 / *(float *)(v33 + 76);
            v49 = this[5].m128_f32[2];
            v50 = v38.m128_f32[0] * this[1].m128_f32[2];
            v52 = v38;
            v51 = *(_BYTE *)(v33 + 81);
            v52.m128_f32[0] = v38.m128_f32[0] * this[1].m128_f32[0];
            v53 = v38;
            v53.m128_f32[0] = v38.m128_f32[0] * this[1].m128_f32[1];
            v55 = v37;
            v147[0] = *(_QWORD *)(v33 + 40);
            v54 = v38.m128_f32[0] * this[1].m128_f32[3];
            v56 = v37;
            v155 = v51;
            v55.m128_f32[0] = v37.m128_f32[0] * this[2].m128_f32[0];
            v56.m128_f32[0] = v37.m128_f32[0] * this[2].m128_f32[1];
            v57 = this[4];
            *(float *)&v161[2] = v50;
            v58 = v37.m128_f32[0] * this[2].m128_f32[2];
            v37.m128_f32[0] = v37.m128_f32[0] * this[2].m128_f32[3];
            *(float *)&v161[6] = v58;
            v59 = this[3];
            v161[0] = v52.m128_i32[0];
            v162 = v59;
            v161[1] = v53.m128_i32[0];
            *(float *)&v161[3] = v54;
            v161[4] = v55.m128_i32[0];
            v161[5] = v56.m128_i32[0];
            v161[7] = v37.m128_i32[0];
            v154 = v49;
            v163 = v57;
            if ( v45 )
            {
              TransferVertices<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(v147, &this[1], v161, a3);
            }
            else
            {
              if ( !v47 )
              {
                TransferAliasedVertices(v147);
                return 0;
              }
              v60 = (v40 & 1) == 0 && (v43 & 0xF) == 0;
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                  (float)((float)((float)(COERCE_FLOAT(LODWORD(v54) & _xmm) * 61440.0)
                                                + (float)(COERCE_FLOAT(v37.m128_i32[0] & _xmm) * 61440.0))
                                        + COERCE_FLOAT(_mm_shuffle_ps(v57, v57, 255).m128_u32[0] & _xmm))
                                - 1.0) & _xmm) >= 0.000081380211 )
              {
                BYTE1(v164) = 16;
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v49 - 1.0) & _xmm) >= 0.0000011920929 )
                {
                  if ( v51 )
                    VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
                      v147,
                      v161);
                  else
                    VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
                      v147,
                      v161);
                }
                else
                {
                  VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
                    v147,
                    v161);
                }
                dword_1804068DC += v149;
                return 0;
              }
              BYTE1(v164) = 48;
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v52.m128_f32[0] - v56.m128_f32[0]) & _xmm) <= 0.000081380211
                && COERCE_FLOAT(COERCE_UNSIGNED_INT(v53.m128_f32[0] - COERCE_FLOAT(v55.m128_i32[0] ^ _xmm)) & _xmm) <= 0.000081380211
                && COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                  (float)((float)(v55.m128_f32[0] * v55.m128_f32[0])
                                        + (float)(v52.m128_f32[0] * v52.m128_f32[0]))
                                - 1.0) & _xmm) < 0.000081380211 )
              {
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v49 - 1.0) & _xmm) < 0.0000011920929 )
                {
                  if ( v60 )
                  {
                    v70 = (unsigned int)v40 >> 1;
                    v71 = _mm_movelh_ps(_mm_unpacklo_ps(v55, v56), (__m128)0LL);
                    v72 = _mm_movelh_ps(_mm_unpacklo_ps(v52, v53), (__m128)0LL);
                    v73 = _mm_movelh_ps(_mm_unpacklo_ps(v57, _mm_shuffle_ps(v57, v57, 85)), (__m128)_xmm);
                    if ( (_DWORD)v39 )
                    {
                      v74 = v39 - 1;
                      v75 = 2 * v48;
                      v76 = v174;
                      v77 = 0;
                      v78 = (v74 >> 1) + 1;
                      v79 = 0;
                      do
                      {
                        v80 = (__m128 *)(v43 + v79);
                        v81 = (__m128 *)(v42 + v77);
                        v82 = (__m128 *)(v42 + v44 + v77);
                        v83 = (__m128 *)(v43 + v79 + v76);
                        *v80 = _mm_or_ps(
                                 _mm_andnot_ps(
                                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                                   _mm_add_ps(
                                     _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v81, *v81, 85), v71), v73),
                                     _mm_mul_ps(_mm_shuffle_ps(*v81, *v81, 0), v72))),
                                 _mm_and_ps(
                                   *v81,
                                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
                        if ( v70 )
                        {
                          m128_f32 = (_OWORD *)v80[1].m128_f32;
                          v85 = (char *)v81 - (char *)v80;
                          v86 = v70;
                          do
                          {
                            *m128_f32 = *(_OWORD *)((char *)m128_f32 + v85);
                            ++m128_f32;
                            --v86;
                          }
                          while ( v86 );
                        }
                        *v83 = _mm_or_ps(
                                 _mm_andnot_ps(
                                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                                   _mm_add_ps(
                                     _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v82, *v82, 85), v71), v73),
                                     _mm_mul_ps(_mm_shuffle_ps(*v82, *v82, 0), v72))),
                                 _mm_and_ps(
                                   *v82,
                                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
                        if ( v70 )
                        {
                          v87 = (_OWORD *)v83[1].m128_f32;
                          v88 = v70;
                          v89 = (char *)v82 - (char *)v83;
                          do
                          {
                            *v87 = *(_OWORD *)((char *)v87 + v89);
                            ++v87;
                            --v88;
                          }
                          while ( v88 );
                        }
                        v77 += 2 * v44;
                        v79 = v75 + v165;
                        v165 = (unsigned int)(v75 + v165);
                        --v78;
                      }
                      while ( v78 );
                      LODWORD(v39) = v140;
                    }
                  }
                  else if ( (_DWORD)v39 )
                  {
                    v126 = v163.m128_f32[1];
                    v127 = 0;
                    v128 = v163.m128_f32[0];
                    v129 = v39;
                    do
                    {
                      v130 = v42 + v127;
                      v131 = v43 + v19;
                      *(float *)v131 = (float)((float)(v52.m128_f32[0] * *(float *)v130)
                                             + (float)(v55.m128_f32[0] * *(float *)(v130 + 4)))
                                     + v128;
                      v132 = v53.m128_f32[0] * *(float *)v130;
                      v133 = v56.m128_f32[0] * *(float *)(v130 + 4);
                      *(_DWORD *)(v131 + 8) = 1065353216;
                      *(float *)(v131 + 4) = (float)(v132 + v133) + v126;
                      if ( (_DWORD)v40 )
                      {
                        v134 = (_QWORD *)(v131 + 16);
                        v135 = v40;
                        do
                        {
                          *v134 = *(_QWORD *)((char *)v134 + v130 - v131);
                          ++v134;
                          --v135;
                        }
                        while ( v135 );
                      }
                      v127 += v44;
                      v19 += v48;
                      *(_DWORD *)(v131 + 12) = *(_DWORD *)(v130 + 12);
                      --v129;
                    }
                    while ( v129 );
                  }
                }
                else if ( v60 )
                {
                  if ( v51 )
                    VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
                      v147,
                      v161);
                  else
                    VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
                      v147,
                      v161);
                  LODWORD(v39) = v149;
                }
                else if ( (_DWORD)v39 )
                {
                  v110 = v163.m128_f32[1];
                  v111 = 0;
                  v112 = v163.m128_f32[0];
                  v113 = v39;
                  if ( v51 )
                  {
                    do
                    {
                      v120 = v42 + v111;
                      v121 = v43 + v19;
                      *(float *)v121 = (float)((float)(v52.m128_f32[0] * *(float *)v120)
                                             + (float)(v55.m128_f32[0] * *(float *)(v120 + 4)))
                                     + v112;
                      v122 = v53.m128_f32[0] * *(float *)v120;
                      v123 = v56.m128_f32[0] * *(float *)(v120 + 4);
                      *(_DWORD *)(v121 + 8) = 1065353216;
                      *(float *)(v121 + 4) = (float)(v122 + v123) + v110;
                      if ( (_DWORD)v40 )
                      {
                        v136 = (_QWORD *)(v121 + 16);
                        v137 = v40;
                        do
                        {
                          *v136 = *(_QWORD *)((char *)v136 + v120 - v121);
                          ++v136;
                          --v137;
                        }
                        while ( v137 );
                      }
                      v124 = BlendStraightColorDW(*(_DWORD *)(v120 + 12), v49);
                      v111 += v44;
                      *(_DWORD *)(v125 + 12) = v124;
                      v19 += v48;
                      --v113;
                    }
                    while ( v113 );
                  }
                  else
                  {
                    do
                    {
                      v114 = v42 + v111;
                      v115 = v43 + v19;
                      *(float *)v115 = (float)((float)(v55.m128_f32[0] * *(float *)(v114 + 4))
                                             + (float)(v52.m128_f32[0] * *(float *)v114))
                                     + v112;
                      v116 = v53.m128_f32[0] * *(float *)v114;
                      v117 = v56.m128_f32[0] * *(float *)(v114 + 4);
                      *(_DWORD *)(v115 + 8) = 1065353216;
                      *(float *)(v115 + 4) = (float)(v116 + v117) + v110;
                      if ( (_DWORD)v40 )
                      {
                        v138 = (_QWORD *)(v115 + 16);
                        v139 = v40;
                        do
                        {
                          *v138 = *(_QWORD *)((char *)v138 + v114 - v115);
                          ++v138;
                          --v139;
                        }
                        while ( v139 );
                      }
                      v118 = BlendPremultipliedColorDW(*(_DWORD *)(v114 + 12), v49);
                      v111 += v44;
                      *(_DWORD *)(v119 + 12) = v118;
                      v19 += v48;
                      --v113;
                    }
                    while ( v113 );
                  }
                }
                dword_1804068D4 += v39;
                return 0;
              }
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v49 - 1.0) & _xmm) < 0.0000011920929 )
              {
                if ( !v60 )
                {
                  VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
                    v147,
                    v161);
                  dword_1804068D8 += v149;
                  return 0;
                }
                VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
                  v147,
                  v161);
              }
              else
              {
                if ( v60 )
                {
                  if ( v51 )
                    VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
                      v147,
                      v161);
                  else
                    VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
                      v147,
                      v161);
                  dword_1804068D8 += v149;
                  return 0;
                }
                if ( v51 )
                {
                  VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
                    v147,
                    v161);
                  dword_1804068D8 += v149;
                  return 0;
                }
                VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
                  v147,
                  v161);
              }
              dword_1804068D8 += v149;
            }
            return 0;
          }
          goto LABEL_123;
        }
        if ( !v102 )
        {
          *(_DWORD *)(v63 + 1112) = -2005270480;
          CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v63 + 16));
        }
        else
        {
LABEL_119:
          CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v63 + 16));
        }
      }
      if ( v67 >= 0 )
        goto LABEL_53;
      goto LABEL_121;
    }
    v92 = *((_QWORD *)v3 + 3);
    if ( 2 * (unsigned __int64)v143 > *(unsigned int *)(v92 + 104) )
    {
      CD3DBatchExecutionContext::Flush(v3, 16LL);
      v109 = CD3DDynamicAppendBuffer::EnsureByteSpace((CD3DDynamicAppendBuffer *)(v92 + 64), 2 * v143, 0);
      v105 = v109;
      v68 = v109;
      if ( v109 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v109, 0xBFu, 0LL);
        goto LABEL_136;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v16 + 152LL))(*v16, *(_QWORD *)(v92 + 72), 57LL);
      v3 = a2;
      v17 = v143;
      v16 = (_QWORD *)((char *)a2 + 16);
    }
    if ( *(_QWORD *)(v92 + 88) )
    {
      if ( v17 > (unsigned int)(*(_DWORD *)(v92 + 104) - *(_DWORD *)(v92 + 100)) / *(_DWORD *)(v92 + 96) )
      {
        *((_DWORD *)v3 + 8) |= 0x40u;
        v93 = *((_QWORD *)v3 + 3);
        if ( *(_QWORD *)(v93 + 40) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v93 + 16) + 560LL) + 120LL))(
            *(_QWORD *)(*(_QWORD *)(v93 + 16) + 560LL),
            *(_QWORD *)(v93 + 24),
            0LL);
          *(_QWORD *)(v93 + 40) = 0LL;
          *(_DWORD *)(v93 + 48) = 0;
          if ( *((_BYTE *)v3 + 74) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v16 + 104LL))(
              *v16,
              *((unsigned int *)v3 + 22),
              *((unsigned int *)v3 + 19));
          }
          else
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v93 + 64) + 560LL) + 120LL))(
              *(_QWORD *)(*(_QWORD *)(v93 + 64) + 560LL),
              *(_QWORD *)(v93 + 72),
              0LL);
            *(_QWORD *)(v93 + 88) = 0LL;
            *(_DWORD *)(v93 + 96) = 0;
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v16 + 96LL))(
              *v16,
              *((unsigned int *)v3 + 23),
              *((unsigned int *)v3 + 20),
              0LL);
          }
          ++*((_DWORD *)v3 + 32);
          *((_QWORD *)v3 + 11) = 0LL;
          *((_DWORD *)v3 + 24) = 0;
        }
      }
      if ( *(_QWORD *)(v92 + 88) )
        goto LABEL_100;
    }
    v94 = v143;
    v95 = *(_QWORD *)(v92 + 64);
    if ( v143 < 0x12C )
      v94 = 300;
    v96 = *(_DWORD *)(v92 + 104) - *(_DWORD *)(v92 + 100);
    v97 = -*(_DWORD *)(v92 + 100) & 1;
    v168 = 0LL;
    v142 = v97 + 2 * v94;
    if ( *(_DWORD *)(v95 + 1112) )
    {
      v99 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0xA07u, 0LL);
    }
    else
    {
      v98 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int128 *))(**(_QWORD **)(v95 + 560)
                                                                                          + 112LL))(
              *(_QWORD *)(v95 + 560),
              *(_QWORD *)(v92 + 72),
              0LL,
              5 - (unsigned int)(v96 < v97 + 2 * v94),
              0,
              &v168);
      v99 = v98;
      if ( v98 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v98, 0xA0Du, 0LL);
    }
    if ( !*(_DWORD *)(v95 + 1112)
      && (v99 == -2005532292 || v99 == -2147024882 || v99 == -2005270523)
      && *(_DWORD *)(v95 + 448) )
    {
      if ( v99 != -2005270523 )
        goto LABEL_131;
      v103 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v95 + 552) + 312LL))(*(_QWORD *)(v95 + 552));
      v104 = *(_DWORD *)(v95 + 1112);
      if ( v103 != -2005270480 )
      {
        if ( !v104 )
          *(_DWORD *)(v95 + 1112) = -2005270523;
LABEL_133:
        if ( *(_DWORD *)(v95 + 1112) )
        {
          v99 = -2003304307;
          v68 = -2003304307;
          v100 = 0LL;
LABEL_135:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v99, 0x6Cu, v100);
          v105 = v68;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v99, 0xCBu, 0LL);
LABEL_136:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v105, 0x211u, 0LL);
          goto LABEL_124;
        }
LABEL_95:
        v174 = 0;
        if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v99, 0, &v174) )
        {
          v108 = v174;
          if ( v174 == -2003304307 )
          {
            if ( v99 >= 0 )
              v99 = -2003304307;
            if ( *(_DWORD *)(v95 + 1112) == (_DWORD)v100 )
              *(_DWORD *)(v95 + 1112) = v99;
          }
          v99 = v108;
          if ( v108 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v108, 0xB4Du, v100);
            v100 = 0LL;
          }
        }
        v68 = v99;
        if ( v99 >= 0 )
        {
          *(_QWORD *)(v92 + 88) = v168;
          *(_DWORD *)(v92 + 96) = 2;
          if ( v96 < v142 )
            *(_DWORD *)(v92 + 100) = (_DWORD)v100;
          else
            *(_DWORD *)(v92 + 100) += v97;
          v3 = a2;
          *((_DWORD *)a2 + 20) = *(_DWORD *)(v92 + 100) / *(_DWORD *)(v92 + 96);
LABEL_100:
          v17 = v143;
          v9 = (__int64)v144;
          goto LABEL_15;
        }
        goto LABEL_135;
      }
      if ( !v104 )
      {
        *(_DWORD *)(v95 + 1112) = -2005270480;
        CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v95 + 16));
      }
      else
      {
LABEL_131:
        CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v95 + 16));
      }
    }
    if ( v99 >= 0 )
      goto LABEL_95;
    goto LABEL_133;
  }
  CRenderingBatchCommand::EmitWarpFastPathGeometry((CRenderingBatchCommand *)this, a2);
  return 0;
}
