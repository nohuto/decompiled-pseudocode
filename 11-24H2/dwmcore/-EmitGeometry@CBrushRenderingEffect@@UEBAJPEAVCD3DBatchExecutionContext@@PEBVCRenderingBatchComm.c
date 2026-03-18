/*
 * XREFs of ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x18015FAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z @ 0x18006238C (-EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z @ 0x180106520 (-PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z.c)
 *     ?BeginAppend@CD3DDynamicAppendBuffer@@QEAAJII@Z @ 0x180106950 (-BeginAppend@CD3DDynamicAppendBuffer@@QEAAJII@Z.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x18015C904 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18015CB94 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_V.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18015D150 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18015D490 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_18015D490.c)
 *     ?EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z @ 0x18015E980 (-EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z.c)
 *     ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x1801607B0 (-EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ.c)
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
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180286D08 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingEffect::EmitGeometry(
        CBrushRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        const struct CRenderingBatchCommand *a3)
{
  int v5; // edx
  bool v6; // zf
  unsigned int v7; // r12d
  __int64 v8; // rcx
  unsigned int v9; // r13d
  unsigned __int64 v10; // rbx
  __int64 v11; // r9
  int v12; // ecx
  unsigned int v13; // esi
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // r10d
  int v19; // edi
  CD3DDynamicAppendBuffer *v20; // r12
  __int64 v21; // rdx
  __int64 v22; // r9
  unsigned __int64 v23; // r8
  __int16 v24; // si
  __m128i v25; // xmm1
  __m128i v26; // xmm1
  __int64 v27; // rax
  unsigned int v28; // r10d
  unsigned int v29; // edx
  __int64 v30; // rax
  unsigned __int64 v31; // rbx
  __int64 v32; // rdx
  _WORD *v33; // rcx
  unsigned int v34; // eax
  __int64 v35; // rsi
  int v36; // edx
  char v37; // cl
  float v38; // xmm3_4
  __int64 v39; // r13
  __int64 v40; // r10
  __int64 v41; // r9
  __int64 v42; // r12
  int v43; // r8d
  int v44; // r14d
  char v45; // al
  __m128 *v46; // rdx
  int v47; // r15d
  __m128 v48; // xmm9
  __m128 v49; // xmm10
  __m128 v50; // xmm8
  __m128 v51; // xmm7
  __m128 v52; // xmm11
  float v53; // xmm0_4
  __m128 v54; // xmm12
  float v55; // xmm9_4
  __m128 v56; // xmm13
  float v57; // xmm10_4
  __m128 v58; // xmm0
  int v59; // r9d
  bool v60; // cl
  int v61; // r8d
  int v62; // eax
  __m128 v63; // xmm7
  __m128 v64; // xmm8
  unsigned int v65; // r10d
  __m128 v66; // xmm11
  int v67; // r14d
  int v68; // r15d
  __int64 v69; // rdi
  int v70; // r11d
  int v71; // ebx
  __m128 *v72; // rdx
  __m128 *v73; // r8
  __m128 *v74; // rcx
  __m128 *v75; // r9
  _OWORD *m128_f32; // rax
  signed __int64 v77; // r8
  __int64 v78; // rcx
  _OWORD *v79; // rax
  __int64 v80; // rcx
  signed __int64 v81; // rdx
  _QWORD *v83; // rax
  CD3DDynamicAppendBuffer *v84; // rdi
  int v85; // eax
  int v86; // eax
  __int64 v87; // rdi
  int v88; // r11d
  int v89; // ebx
  __int64 v90; // rcx
  __int64 v91; // r9
  float v92; // xmm2_4
  float v93; // xmm0_4
  _QWORD *v94; // rax
  __int64 v95; // r8
  unsigned int v96; // eax
  __int64 v97; // r9
  int v98; // r11d
  int v99; // r11d
  int v100; // ebx
  __int64 v101; // rdx
  __int64 v102; // r8
  float v103; // xmm2_4
  float v104; // xmm0_4
  _QWORD *v105; // rax
  __int64 v106; // r9
  unsigned int v107; // edx
  int v108; // r9d
  int v109; // r11d
  __int64 v110; // rdi
  __int64 v111; // rax
  __int64 v112; // rcx
  float v113; // xmm2_4
  float v114; // xmm0_4
  _QWORD *v115; // rdx
  __int64 v116; // rbx
  CD3DDynamicAppendBuffer *v117; // [rsp+40h] [rbp-C0h]
  unsigned int v118; // [rsp+48h] [rbp-B8h]
  int v119; // [rsp+48h] [rbp-B8h]
  _QWORD v120[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v121; // [rsp+60h] [rbp-A0h]
  int v122; // [rsp+64h] [rbp-9Ch]
  __int64 v123; // [rsp+68h] [rbp-98h]
  int v124; // [rsp+70h] [rbp-90h]
  int v125; // [rsp+74h] [rbp-8Ch]
  int v126; // [rsp+78h] [rbp-88h]
  float v127; // [rsp+7Ch] [rbp-84h]
  char v128; // [rsp+80h] [rbp-80h]
  __int64 v129; // [rsp+88h] [rbp-78h]
  int v130; // [rsp+90h] [rbp-70h]
  int v131; // [rsp+94h] [rbp-6Ch]
  int v132; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v133; // [rsp+B0h] [rbp-50h] BYREF
  float v134; // [rsp+B8h] [rbp-48h]
  float v135; // [rsp+BCh] [rbp-44h]
  __int32 v136; // [rsp+C0h] [rbp-40h]
  __int32 v137; // [rsp+C4h] [rbp-3Ch]
  float v138; // [rsp+C8h] [rbp-38h]
  float v139; // [rsp+CCh] [rbp-34h]
  __m128 v140; // [rsp+D0h] [rbp-30h]
  __m128 v141; // [rsp+E0h] [rbp-20h]
  int v142; // [rsp+F0h] [rbp-10h]
  __int64 v143; // [rsp+100h] [rbp+0h] BYREF
  __int64 v144; // [rsp+108h] [rbp+8h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]
  int v146; // [rsp+1D0h] [rbp+D0h]
  int v147; // [rsp+1D0h] [rbp+D0h]
  int v148; // [rsp+1E0h] [rbp+E0h] BYREF
  int v149; // [rsp+1E8h] [rbp+E8h] BYREF

  v5 = *(_DWORD *)(*((_QWORD *)this + 2) + 264LL) & 4;
  v6 = *((_BYTE *)a3 + 92) == 0;
  v132 = v5;
  if ( !v6 )
  {
    CRenderingBatchCommand::EmitWarpFastPathGeometry(a3, a2);
    return 0;
  }
  if ( *(_DWORD *)a3 == 4 )
    return (unsigned int)CMegaRectBatchCommand::EmitGeometry(a3, a2);
  if ( *(_DWORD *)a3 == 5 )
    return (unsigned int)CCpuClipAntialiasBatchCommand::EmitGeometry(a3, a2, v5 != 0);
  v7 = 0;
  v8 = *(_QWORD *)(*((_QWORD *)a3 + 1) + 16LL);
  v144 = v8;
  v9 = *(_DWORD *)(v8 + 8);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v8 + 48);
    v118 = *(_DWORD *)(v8 + 20);
    if ( !v10 && *(_DWORD *)(v8 + 20) )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v11 = *((_QWORD *)a2 + 3) + 16LL;
    v12 = 48;
    v146 = 0;
    if ( !*((_BYTE *)a2 + 64) )
      v12 = 16;
    v117 = (CD3DDynamicAppendBuffer *)(*((_QWORD *)a2 + 3) + 16LL);
    v13 = v12 + 8 * *((_DWORD *)a2 + 17);
    if ( v9 * v13 > *(_DWORD *)(*((_QWORD *)a2 + 3) + 56LL) )
    {
      CD3DBatchExecutionContext::Flush(a2, 8LL);
      v86 = CD3DDynamicAppendBuffer::EnsureByteSpace(v117, v9 * v13, 0);
      v146 = v86;
      v19 = v86;
      if ( v86 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v86, 0x1FAu, 0LL);
        goto LABEL_84;
      }
      v11 = (__int64)v117;
      *((_BYTE *)a2 + 73) = 1;
    }
    if ( *((_BYTE *)a2 + 73) )
    {
      v14 = 48;
      *((_BYTE *)a2 + 73) = 0;
      v15 = *((_DWORD *)a2 + 17);
      if ( !*((_BYTE *)a2 + 64) )
        v14 = 16;
      v148 = 0;
      v16 = v14 + 8 * v15;
      v17 = *((_QWORD *)a2 + 3);
      v149 = v16;
      v143 = *(_QWORD *)(v17 + 24);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, int *, int *))(**((_QWORD **)a2 + 2) + 144LL))(
        *((_QWORD *)a2 + 2),
        0LL,
        1LL,
        &v143,
        &v149,
        &v148);
      v11 = (__int64)v117;
    }
    if ( *(_QWORD *)(v11 + 24) )
    {
      if ( v9 > (unsigned int)(*(_DWORD *)(v11 + 40) - *(_DWORD *)(v11 + 36)) / *(_DWORD *)(v11 + 32) )
      {
        *((_DWORD *)a2 + 8) |= 0x20u;
        v83 = (_QWORD *)*((_QWORD *)a2 + 3);
        if ( v83[5] )
        {
          v84 = (CD3DDynamicAppendBuffer *)(v83 + 8);
          CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v83 + 2));
          if ( *((_BYTE *)a2 + 74) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 2) + 104LL))(
              *((_QWORD *)a2 + 2),
              *((unsigned int *)a2 + 22),
              *((unsigned int *)a2 + 19));
          }
          else
          {
            CD3DDynamicAppendBuffer::EndAppend(v84);
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 2) + 96LL))(
              *((_QWORD *)a2 + 2),
              *((unsigned int *)a2 + 23),
              *((unsigned int *)a2 + 20),
              0LL);
          }
          ++*((_DWORD *)a2 + 32);
          v11 = (__int64)v117;
          *((_QWORD *)a2 + 11) = 0LL;
          *((_DWORD *)a2 + 24) = 0;
        }
      }
    }
    v18 = v118;
    if ( v118 )
    {
      v85 = CD3DBatchExecutionContext::PrepareIndexBuffer(a2, v118);
      v19 = v85;
      if ( v85 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v85, 0x211u, 0LL);
        goto LABEL_84;
      }
      v11 = (__int64)v117;
      v18 = v118;
    }
    else
    {
      v19 = v146;
    }
    if ( *(_QWORD *)(v11 + 24) )
    {
      v20 = v117;
    }
    else
    {
      v61 = v9;
      if ( v9 < 0x64 )
        v61 = 100;
      v62 = CD3DDynamicAppendBuffer::BeginAppend((CD3DDynamicAppendBuffer *)v11, v13, v61);
      v19 = v62;
      if ( v62 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v62, 0x218u, 0LL);
        goto LABEL_84;
      }
      v20 = v117;
      v18 = v118;
      *((_DWORD *)a2 + 19) = *((_DWORD *)v117 + 9) / *((_DWORD *)v117 + 8);
    }
    if ( v18 )
    {
      v21 = *((_QWORD *)a2 + 3);
      v22 = 0LL;
      v23 = *(_QWORD *)(v21 + 88) + *(unsigned int *)(v21 + 100);
      *(_DWORD *)(v21 + 100) += *(_DWORD *)(v21 + 96) * v18;
      v24 = *((_WORD *)a2 + 38) + *((_WORD *)a2 + 44);
      v25 = _mm_cvtsi32_si128(v24);
      v26 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v25, v25), 0);
      if ( v18 >= 0x20 )
      {
        v27 = v18 - 1;
        if ( v23 > v10 + 2 * v27 || v23 + 2 * v27 < v10 )
        {
          v28 = v18 & 0xFFFFFFE0;
          v29 = 16;
          do
          {
            *(__m128i *)(v23 + 2 * v22) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v10 + 2 * v22)), v26);
            v22 = (unsigned int)(v22 + 32);
            *(__m128i *)(v23 + 2LL * (v29 - 8)) = _mm_add_epi16(
                                                    _mm_loadu_si128((const __m128i *)(v10 + 2LL * (v29 - 8))),
                                                    v26);
            *(__m128i *)(v23 + 2LL * v29) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v10 + 2LL * v29)), v26);
            v30 = v29 + 8;
            v29 += 32;
            *(__m128i *)(v23 + 2 * v30) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v10 + 2 * v30)), v26);
          }
          while ( (unsigned int)v22 < v28 );
          v18 = v118;
        }
      }
      if ( (unsigned int)v22 < v18 )
      {
        v31 = v10 - v23;
        v32 = v18 - (unsigned int)v22;
        v33 = (_WORD *)(v23 + 2LL * (unsigned int)v22);
        do
        {
          *v33 = *(_WORD *)((char *)v33 + v31) + v24;
          ++v33;
          --v32;
        }
        while ( v32 );
      }
      *((_DWORD *)a2 + 23) += v18;
    }
    *((_DWORD *)a2 + 22) += v9;
    v34 = *((_DWORD *)v20 + 9);
    v35 = *((_QWORD *)v20 + 3) + v34;
    *((_DWORD *)v20 + 9) = v34 + *((_DWORD *)v20 + 8) * v9;
    if ( v19 >= 0 )
    {
      v36 = 48;
      v37 = *((_BYTE *)a2 + 64);
      v38 = *((float *)a3 + 22);
      v39 = *(unsigned int *)(v144 + 8);
      v40 = *(unsigned int *)(v144 + 16);
      if ( !v37 )
        v36 = 16;
      v41 = *(_QWORD *)(v144 + 32);
      v42 = *(_QWORD *)(v144 + 24);
      v43 = *(_DWORD *)(v144 + 12);
      v44 = v36 + 8 * *((_DWORD *)a2 + 17);
      v45 = *(_BYTE *)(v144 + 81);
      v46 = (__m128 *)((char *)a3 + 16);
      v47 = 8 * v40 + 16;
      v48 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v48.m128_f32[0] = 1.0 / *(float *)(v144 + 76);
      v142 = 0;
      v147 = v44;
      v119 = v47;
      v120[0] = *(_QWORD *)(v144 + 40);
      v120[1] = v42;
      v121 = v47;
      v122 = v39;
      v123 = v41;
      v124 = v47;
      v125 = v43;
      v126 = v40;
      v128 = v45;
      v129 = v35;
      v131 = v39;
      v49 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v49.m128_f32[0] = 1.0 / *(float *)(v144 + 72);
      v50 = v48;
      v50.m128_f32[0] = v48.m128_f32[0] * v46[1].m128_f32[0];
      v51 = v49;
      v51.m128_f32[0] = v49.m128_f32[0] * v46->m128_f32[0];
      v52 = v46[3];
      v134 = v49.m128_f32[0] * v46->m128_f32[2];
      v53 = v48.m128_f32[0] * v46[1].m128_f32[2];
      v54 = v48;
      v54.m128_f32[0] = v48.m128_f32[0] * v46[1].m128_f32[1];
      v55 = v48.m128_f32[0] * v46[1].m128_f32[3];
      v56 = v49;
      v56.m128_f32[0] = v49.m128_f32[0] * v46->m128_f32[1];
      v57 = v49.m128_f32[0] * v46->m128_f32[3];
      v138 = v53;
      v58 = v46[2];
      v133 = __PAIR64__(v56.m128_u32[0], v51.m128_u32[0]);
      v140 = v58;
      v135 = v57;
      v136 = v50.m128_i32[0];
      v137 = v54.m128_i32[0];
      v139 = v55;
      v127 = v38;
      v141 = v52;
      if ( v37 )
      {
        v130 = v44;
        TransferVertices<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
          (__int64)v120,
          v46,
          (struct Windows::Foundation::Numerics::float4x4 *)&v133,
          v132 != 0);
      }
      else
      {
        v130 = v44;
        v59 = v44;
        if ( !v43 )
        {
          TransferAliasedVertices(v120);
          return 0;
        }
        v60 = (v40 & 1) == 0 && (v35 & 0xF) == 0;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)((float)(COERCE_FLOAT(LODWORD(v57) & _xmm) * 61440.0)
                                          + (float)(COERCE_FLOAT(LODWORD(v55) & _xmm) * 61440.0))
                                  + COERCE_FLOAT(_mm_shuffle_ps(v52, v52, 255).m128_u32[0] & _xmm))
                          - 1.0) & _xmm) >= 0.000081380211 )
        {
          BYTE1(v142) = 16;
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v38 - 1.0) & _xmm) >= 0.0000011920929 )
          {
            if ( v45 )
              VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
                v120,
                &v133);
            else
              VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
                v120,
                &v133);
          }
          else
          {
            VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
              (__int64)v120,
              (float *)&v133);
          }
          dword_1803FA87C += v122;
          return 0;
        }
        BYTE1(v142) = 48;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v51.m128_f32[0] - v54.m128_f32[0]) & _xmm) <= 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(v56.m128_f32[0] - COERCE_FLOAT(v50.m128_i32[0] ^ _xmm)) & _xmm) <= 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)(v50.m128_f32[0] * v50.m128_f32[0])
                                  + (float)(v51.m128_f32[0] * v51.m128_f32[0]))
                          - 1.0) & _xmm) < 0.000081380211 )
        {
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v38 - 1.0) & _xmm) < 0.0000011920929 )
          {
            if ( v60 )
            {
              v63 = _mm_movelh_ps(_mm_unpacklo_ps(v51, v56), (__m128)0LL);
              v64 = _mm_movelh_ps(_mm_unpacklo_ps(v50, v54), (__m128)0LL);
              v65 = (unsigned int)v40 >> 1;
              v66 = _mm_movelh_ps(_mm_unpacklo_ps(v52, _mm_shuffle_ps(v52, v52, 85)), (__m128)_xmm);
              if ( (_DWORD)v39 )
              {
                v67 = 2 * v44;
                v68 = 2 * v47;
                v69 = ((unsigned int)(v39 - 1) >> 1) + 1;
                v70 = 0;
                v71 = 0;
                do
                {
                  v72 = (__m128 *)(v42 + v71 + v119);
                  v73 = (__m128 *)(v42 + v71);
                  v74 = (__m128 *)(v35 + v70);
                  v75 = (__m128 *)(v35 + v70 + v59);
                  *v74 = _mm_or_ps(
                           _mm_andnot_ps(
                             (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                             _mm_add_ps(
                               _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v73, *v73, 85), v64), v66),
                               _mm_mul_ps(_mm_shuffle_ps(*v73, *v73, 0), v63))),
                           _mm_and_ps(
                             *v73,
                             (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
                  if ( v65 )
                  {
                    m128_f32 = (_OWORD *)v74[1].m128_f32;
                    v77 = (char *)v73 - (char *)v74;
                    v78 = v65;
                    do
                    {
                      *m128_f32 = *(_OWORD *)((char *)m128_f32 + v77);
                      ++m128_f32;
                      --v78;
                    }
                    while ( v78 );
                  }
                  *v75 = _mm_or_ps(
                           _mm_andnot_ps(
                             (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                             _mm_add_ps(
                               _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v72, *v72, 85), v64), v66),
                               _mm_mul_ps(_mm_shuffle_ps(*v72, *v72, 0), v63))),
                           _mm_and_ps(
                             *v72,
                             (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
                  if ( v65 )
                  {
                    v79 = (_OWORD *)v75[1].m128_f32;
                    v80 = v65;
                    v81 = (char *)v72 - (char *)v75;
                    do
                    {
                      *v79 = *(_OWORD *)((char *)v79 + v81);
                      ++v79;
                      --v80;
                    }
                    while ( v80 );
                  }
                  v59 = v147;
                  v71 += v68;
                  v70 += v67;
                  --v69;
                }
                while ( v69 );
              }
            }
            else if ( (_DWORD)v39 )
            {
              v108 = 0;
              v109 = 0;
              v110 = v39;
              do
              {
                v111 = v42 + v109;
                v112 = v35 + v108;
                *(float *)v112 = (float)((float)(v51.m128_f32[0] * *(float *)v111)
                                       + (float)(v50.m128_f32[0] * *(float *)(v111 + 4)))
                               + v141.m128_f32[0];
                v113 = v56.m128_f32[0] * *(float *)v111;
                v114 = v54.m128_f32[0] * *(float *)(v111 + 4);
                *(_DWORD *)(v112 + 8) = 1065353216;
                *(float *)(v112 + 4) = (float)(v113 + v114) + v141.m128_f32[1];
                if ( (_DWORD)v40 )
                {
                  v115 = (_QWORD *)(v112 + 16);
                  v116 = v40;
                  do
                  {
                    *v115 = *(_QWORD *)((char *)v115 + v111 - v112);
                    ++v115;
                    --v116;
                  }
                  while ( v116 );
                }
                v109 += v47;
                v108 += v44;
                *(_DWORD *)(v112 + 12) = *(_DWORD *)(v111 + 12);
                --v110;
              }
              while ( v110 );
            }
          }
          else if ( v60 )
          {
            if ( v45 )
              VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
                v120,
                &v133);
            else
              VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
                (__int64)v120,
                &v133);
            LODWORD(v39) = v122;
          }
          else if ( (_DWORD)v39 )
          {
            v87 = v39;
            if ( v45 )
            {
              v99 = 0;
              v100 = 0;
              do
              {
                v101 = v42 + v100;
                v102 = v35 + v99;
                *(float *)v102 = (float)((float)(v51.m128_f32[0] * *(float *)v101)
                                       + (float)(v50.m128_f32[0] * *(float *)(v101 + 4)))
                               + v141.m128_f32[0];
                v103 = v56.m128_f32[0] * *(float *)v101;
                v104 = v54.m128_f32[0] * *(float *)(v101 + 4);
                *(_DWORD *)(v102 + 8) = 1065353216;
                *(float *)(v102 + 4) = (float)(v103 + v104) + v141.m128_f32[1];
                if ( (_DWORD)v40 )
                {
                  v105 = (_QWORD *)(v102 + 16);
                  v106 = v40;
                  do
                  {
                    *v105 = *(_QWORD *)((char *)v105 + v101 - v102);
                    ++v105;
                    --v106;
                  }
                  while ( v106 );
                  v59 = v44;
                }
                v107 = *(_DWORD *)(v101 + 12);
                v100 += v47;
                v99 += v59;
                *(_DWORD *)(v102 + 12) = (int)(float)(unsigned __int8)v107 | (((int)(float)BYTE1(v107) | (((int)(float)BYTE2(v107) | ((int)(float)((float)HIBYTE(v107) * v38) << 8)) << 8)) << 8);
                --v87;
              }
              while ( v87 );
            }
            else
            {
              v88 = 0;
              v89 = 0;
              do
              {
                v90 = v42 + v89;
                v91 = v35 + v88;
                *(float *)v91 = (float)((float)(v51.m128_f32[0] * *(float *)v90)
                                      + (float)(v50.m128_f32[0] * *(float *)(v90 + 4)))
                              + v141.m128_f32[0];
                v92 = v56.m128_f32[0] * *(float *)v90;
                v93 = v54.m128_f32[0] * *(float *)(v90 + 4);
                *(_DWORD *)(v91 + 8) = 1065353216;
                *(float *)(v91 + 4) = (float)(v92 + v93) + v141.m128_f32[1];
                if ( (_DWORD)v40 )
                {
                  v94 = (_QWORD *)(v91 + 16);
                  v95 = v40;
                  do
                  {
                    *v94 = *(_QWORD *)((char *)v94 + v90 - v91);
                    ++v94;
                    --v95;
                  }
                  while ( v95 );
                }
                v96 = BlendPremultipliedColorDW(*(_DWORD *)(v90 + 12), v38);
                v89 += v47;
                *(_DWORD *)(v97 + 12) = v96;
                v88 = v44 + v98;
                --v87;
              }
              while ( v87 );
            }
          }
          dword_1803FA874 += v39;
          return 0;
        }
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v38 - 1.0) & _xmm) < 0.0000011920929 )
        {
          if ( !v60 )
          {
            VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
              v120,
              &v133);
            dword_1803FA878 += v122;
            return 0;
          }
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
            (__int64)v120,
            &v133);
        }
        else
        {
          if ( v60 )
          {
            if ( v45 )
              VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
                v120,
                &v133);
            else
              VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
                v120,
                &v133);
            dword_1803FA878 += v122;
            return 0;
          }
          if ( v45 )
          {
            VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
              v120,
              &v133);
            dword_1803FA878 += v122;
            return 0;
          }
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
            v120,
            &v133);
        }
        dword_1803FA878 += v122;
      }
      return 0;
    }
LABEL_84:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB0,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\renderingbatchcommand.cpp",
      (const char *)(unsigned int)v19);
    return (unsigned int)v19;
  }
  return v7;
}
