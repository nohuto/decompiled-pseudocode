/*
 * XREFs of ?EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x1801658F0
 * Callers:
 *     ?EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x180142F10 (-EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 *     ?EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180162780 (-EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComma.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180164BE0 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComm.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z @ 0x180142160 (-PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z.c)
 *     ?BeginAppend@CD3DDynamicAppendBuffer@@QEAAJII@Z @ 0x180142590 (-BeginAppend@CD3DDynamicAppendBuffer@@QEAAJII@Z.c)
 *     ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x1801658B0 (-EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ.c)
 *     ?FillVertexUVs@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@AEBV?$StridedSpan@UUVxN@CCpuClipAntialiasSink@@@@_K@Z @ 0x1801662C0 (-FillVertexUVs@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@AEBV-$Stri.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x180166790 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV-$CCommonTransferParameters@U-.c)
 *     _lambda_c999fdf24c795b566dd8f666e1ef8213_::operator() @ 0x180167900 (_lambda_c999fdf24c795b566dd8f666e1ef8213_--operator().c)
 *     ?ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z @ 0x180167B50 (-ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x18018D970 (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x18018DEA0 (-EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z.c)
 *     ?TransferAliasedVertices@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180254DE8 (-TransferAliasedVertices@@YAXAEBV-$CCommonTransferParameters@U-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVCMILMatrix@@AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180294320 (-FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCpuClipAntialiasBatchCommand::EmitGeometry(
        CCpuClipAntialiasBatchCommand *this,
        struct CD3DBatchExecutionContext *a2,
        unsigned __int8 a3)
{
  unsigned int *v3; // rsi
  float v4; // xmm2_4
  float v6; // xmm0_4
  CCpuClipAntialiasBatchCommand *v7; // rdx
  __int64 v8; // r14
  int v9; // r12d
  __int64 v10; // rax
  int v11; // ebx
  __int64 v12; // rdi
  float v13; // xmm0_4
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned __int16 v17; // bx
  __int64 v18; // r8
  unsigned int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // r15
  unsigned __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rcx
  float v25; // r10d
  int v26; // eax
  __int64 v27; // rdx
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm0
  __int64 v31; // rcx
  int v32; // r14d
  int v33; // eax
  __int128 v34; // xmm1
  CD3DDynamicAppendBuffer *v35; // r11
  bool v36; // zf
  int v37; // ecx
  unsigned int v38; // esi
  unsigned int v39; // edi
  int v40; // ecx
  int v41; // eax
  float v42; // ecx
  __int64 v43; // rax
  unsigned int v44; // edi
  __int64 v45; // rdx
  __int64 v46; // r9
  unsigned __int64 v47; // r8
  __int16 v48; // si
  __m128i v49; // xmm1
  __m128i v50; // xmm1
  __int64 v51; // rax
  unsigned int v52; // edx
  __int64 v53; // rax
  unsigned __int64 v54; // rbx
  __int64 v55; // rdx
  _WORD *v56; // rcx
  unsigned int v57; // ecx
  unsigned int v58; // eax
  __int64 v59; // rdi
  int v60; // ecx
  unsigned int v61; // r15d
  D3DVALUE v62; // ebx
  D3DVALUE v63; // r14d
  __int64 v64; // rsi
  int v65; // ecx
  float v66; // xmm0_4
  float v67; // xmm0_4
  float v68; // r11d
  unsigned __int64 v69; // r10
  __int64 v70; // rax
  float *v71; // r15
  float v72; // xmm2_4
  float a; // xmm4_4
  __int64 v74; // rax
  unsigned int v75; // r9d
  __int64 v76; // r10
  int v77; // eax
  unsigned int v78; // r8d
  __int64 v79; // rdx
  __int64 v80; // rcx
  int v81; // r12d
  int v83; // r8d
  int v84; // eax
  _QWORD *v85; // rax
  CD3DDynamicAppendBuffer *v86; // rdi
  int v87; // eax
  __m128 v88; // xmm2
  float v89; // xmm3_4
  unsigned int v90; // [rsp+20h] [rbp-E0h]
  int *v91; // [rsp+28h] [rbp-D8h]
  float Y; // [rsp+54h] [rbp-ACh] BYREF
  float v94; // [rsp+58h] [rbp-A8h] BYREF
  CD3DDynamicAppendBuffer *v95; // [rsp+60h] [rbp-A0h]
  __int64 v96; // [rsp+68h] [rbp-98h]
  __int64 v97; // [rsp+70h] [rbp-90h] BYREF
  D3DVALUE v98; // [rsp+78h] [rbp-88h]
  D3DVALUE v99; // [rsp+7Ch] [rbp-84h]
  float *v100; // [rsp+80h] [rbp-80h]
  __int64 v101; // [rsp+90h] [rbp-70h] BYREF
  __int64 v102; // [rsp+98h] [rbp-68h]
  __int64 v103; // [rsp+A0h] [rbp-60h]
  float v104; // [rsp+A8h] [rbp-58h]
  unsigned int v105; // [rsp+ACh] [rbp-54h]
  __int64 v106; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v107; // [rsp+B8h] [rbp-48h]
  __int64 v108; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v109; // [rsp+C8h] [rbp-38h]
  int v110; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v111; // [rsp+D8h] [rbp-28h]
  _QWORD v112[2]; // [rsp+E0h] [rbp-20h] BYREF
  float v113; // [rsp+F0h] [rbp-10h]
  int v114; // [rsp+F4h] [rbp-Ch]
  __int64 v115; // [rsp+F8h] [rbp-8h]
  int v116; // [rsp+100h] [rbp+0h]
  int v117; // [rsp+104h] [rbp+4h]
  int v118; // [rsp+108h] [rbp+8h]
  int v119; // [rsp+10Ch] [rbp+Ch]
  char v120; // [rsp+110h] [rbp+10h]
  __int64 v121; // [rsp+118h] [rbp+18h]
  D3DVALUE v122; // [rsp+120h] [rbp+20h]
  int v123; // [rsp+124h] [rbp+24h]
  _OWORD v124[4]; // [rsp+130h] [rbp+30h] BYREF
  int v125; // [rsp+170h] [rbp+70h]
  struct _D3DCOLORVALUE v126; // [rsp+180h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v3 = (unsigned int *)((char *)this + 96);
  v4 = *((float *)this + 26);
  v6 = *((float *)this + 27);
  v7 = this;
  v8 = *(_QWORD *)(*((_QWORD *)this + 1) + 88LL);
  v111 = *((_QWORD *)this + 1);
  v9 = 0;
  v100 = (float *)this;
  v101 = 0LL;
  v109 = 0LL;
  if ( v6 <= v4 )
  {
    v97 = 0LL;
    Y = 0.0;
    v19 = 0;
    v104 = 0.0;
    LODWORD(v21) = 0;
    v101 = 0LL;
    v22 = 0LL;
    v102 = 0LL;
    v103 = 0LL;
    v105 = 0;
    v106 = 0LL;
    v107 = 0LL;
    v108 = 0LL;
  }
  else
  {
    v10 = *v3;
    v11 = (int)v4;
    Y = 0.0;
    v12 = *(_QWORD *)(v8 + 8 * v10 + 40);
    v13 = modff(v6, &Y);
    v14 = (int)Y;
    if ( COERCE_FLOAT(LODWORD(v13) & _xmm) < 0.000081380211 )
      LOWORD(v14) = v14 - 1;
    v15 = (unsigned __int16)v14;
    v16 = (unsigned __int16)v11;
    v17 = 2 * v11;
    v18 = v15 - v16 + 1;
    v19 = 2 * v18 + 2;
    v20 = *(_QWORD *)(v12 + 40) + 8LL * v17;
    v97 = 2 * v18 + 2;
    if ( !v20 && 2 * v18 != -2 )
      goto LABEL_6;
    v23 = *(_DWORD *)(v12 + 16);
    v24 = *(_QWORD *)(v12 + 24);
    v21 = 6 * v18;
    v102 = v20;
    v101 = 2 * v18 + 2;
    LODWORD(v25) = 8 * v23 + 16;
    v105 = 2 * v18 + 2;
    v26 = v17;
    v22 = *(_QWORD *)(v12 + 48);
    Y = v25;
    v104 = v25;
    v107 = __PAIR64__(v105, LODWORD(v25));
    v27 = LODWORD(v25) * v26;
    v103 = v27 + v24;
    v106 = v27 + *(_QWORD *)(v12 + 32);
    if ( !v22 )
    {
      if ( v21 )
        goto LABEL_6;
    }
    v7 = (CCpuClipAntialiasBatchCommand *)v100;
    v108 = 6 * v18;
  }
  v28 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v29 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v30 = *((__m128 *)v7 + 1);
  v31 = *(_QWORD *)(v8 + 8LL * *v3 + 40);
  v32 = 0;
  v33 = *((_DWORD *)a2 + 17);
  v34 = *((_OWORD *)v7 + 4);
  v28.m128_f32[0] = 1.0 / *(float *)(v31 + 72);
  v35 = (CD3DDynamicAppendBuffer *)(*((_QWORD *)a2 + 3) + 16LL);
  v109 = v22;
  v36 = *((_BYTE *)a2 + 64) == 0;
  v125 = 0;
  v95 = v35;
  v29.m128_f32[0] = 1.0 / *(float *)(v31 + 76);
  v124[3] = v34;
  v124[0] = _mm_mul_ps(v30, _mm_shuffle_ps(v28, v28, 0));
  v124[1] = _mm_mul_ps(*((__m128 *)v7 + 2), _mm_shuffle_ps(v29, v29, 0));
  v37 = 48;
  if ( v36 )
    v37 = 16;
  v124[2] = *((_OWORD *)v7 + 3);
  v38 = v37 + 8 * v33;
  v96 = v19;
  v39 = v19 * v38;
  if ( v19 * v38 > *((_DWORD *)v35 + 10) )
  {
    CD3DBatchExecutionContext::Flush(a2, 8LL);
    v87 = CD3DDynamicAppendBuffer::EnsureByteSpace(v95, v39, 0);
    v32 = v87;
    if ( v87 < 0 )
    {
      v90 = 506;
      goto LABEL_75;
    }
    v35 = v95;
    *((_BYTE *)a2 + 73) = 1;
  }
  if ( *((_BYTE *)a2 + 73) )
  {
    v40 = 48;
    *((_BYTE *)a2 + 73) = 0;
    v41 = *((_DWORD *)a2 + 17);
    v91 = &v110;
    if ( !*((_BYTE *)a2 + 64) )
      v40 = 16;
    v110 = 0;
    LODWORD(v42) = v40 + 8 * v41;
    v43 = *((_QWORD *)a2 + 3);
    v94 = v42;
    *(_QWORD *)&v126.r = *(_QWORD *)(v43 + 24);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, struct _D3DCOLORVALUE *, float *))(**((_QWORD **)a2 + 2) + 144LL))(
      *((_QWORD *)a2 + 2),
      0LL,
      1LL,
      &v126,
      &v94);
    v35 = v95;
  }
  v44 = v96;
  if ( *((_QWORD *)v35 + 3) )
  {
    if ( (unsigned int)v96 > (unsigned int)(*((_DWORD *)v35 + 10) - *((_DWORD *)v35 + 9)) / *((_DWORD *)v35 + 8) )
    {
      *((_DWORD *)a2 + 8) |= 0x20u;
      v85 = (_QWORD *)*((_QWORD *)a2 + 3);
      if ( v85[5] )
      {
        v86 = (CD3DDynamicAppendBuffer *)(v85 + 8);
        CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v85 + 2));
        if ( *((_BYTE *)a2 + 74) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 2) + 104LL))(
            *((_QWORD *)a2 + 2),
            *((unsigned int *)a2 + 22),
            *((unsigned int *)a2 + 19));
        }
        else
        {
          CD3DDynamicAppendBuffer::EndAppend(v86);
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 2) + 96LL))(
            *((_QWORD *)a2 + 2),
            *((unsigned int *)a2 + 23),
            *((unsigned int *)a2 + 20),
            0LL);
        }
        ++*((_DWORD *)a2 + 32);
        v35 = v95;
        v44 = v96;
        *((_QWORD *)a2 + 11) = 0LL;
        *((_DWORD *)a2 + 24) = 0;
      }
    }
  }
  if ( (_DWORD)v21 )
  {
    v87 = CD3DBatchExecutionContext::PrepareIndexBuffer(a2, v21);
    v32 = v87;
    if ( v87 >= 0 )
    {
      v35 = v95;
      goto LABEL_19;
    }
    v90 = 529;
LABEL_75:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v87, v90, 0LL);
LABEL_76:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiasbatchcommand.cpp",
      (const char *)(unsigned int)v32);
    return (unsigned int)v32;
  }
LABEL_19:
  if ( *((_QWORD *)v35 + 3) )
    goto LABEL_20;
  v83 = v44;
  if ( v44 < 0x64 )
    v83 = 100;
  v84 = CD3DDynamicAppendBuffer::BeginAppend(v35, v38, v83);
  v32 = v84;
  if ( v84 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v84, 0x218u, 0LL);
    goto LABEL_76;
  }
  v35 = v95;
  *((_DWORD *)a2 + 19) = *((_DWORD *)v95 + 9) / *((_DWORD *)v95 + 8);
LABEL_20:
  if ( (_DWORD)v21 )
  {
    v45 = *((_QWORD *)a2 + 3);
    v46 = 0LL;
    v47 = *(_QWORD *)(v45 + 88) + *(unsigned int *)(v45 + 100);
    *(_DWORD *)(v45 + 100) += *(_DWORD *)(v45 + 96) * v21;
    v48 = *((_WORD *)a2 + 38) + *((_WORD *)a2 + 44);
    v49 = _mm_cvtsi32_si128(v48);
    v50 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v49, v49), 0);
    if ( (unsigned int)v21 >= 0x20 )
    {
      v51 = (unsigned int)(v21 - 1);
      if ( v47 > v22 + 2 * v51 || v47 + 2 * v51 < v22 )
      {
        v52 = 16;
        do
        {
          *(__m128i *)(v47 + 2 * v46) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v22 + 2 * v46)), v50);
          v46 = (unsigned int)(v46 + 32);
          *(__m128i *)(v47 + 2LL * (v52 - 8)) = _mm_add_epi16(
                                                  _mm_loadu_si128((const __m128i *)(v22 + 2LL * (v52 - 8))),
                                                  v50);
          *(__m128i *)(v47 + 2LL * v52) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v22 + 2LL * v52)), v50);
          v53 = v52 + 8;
          v52 += 32;
          *(__m128i *)(v47 + 2 * v53) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v22 + 2 * v53)), v50);
        }
        while ( (unsigned int)v46 < ((unsigned int)v21 & 0xFFFFFFE0) );
      }
    }
    if ( (unsigned int)v46 < (unsigned int)v21 )
    {
      v54 = v22 - v47;
      v55 = (unsigned int)(v21 - v46);
      v56 = (_WORD *)(v47 + 2LL * (unsigned int)v46);
      do
      {
        *v56 = *(_WORD *)((char *)v56 + v54) + v48;
        ++v56;
        --v55;
      }
      while ( v55 );
    }
    *((_DWORD *)a2 + 23) += v21;
  }
  *((_DWORD *)a2 + 22) += v44;
  v57 = *((_DWORD *)v35 + 9);
  v58 = v57 + *((_DWORD *)v35 + 8) * v44;
  v59 = *((_QWORD *)v35 + 3) + v57;
  *((_DWORD *)v35 + 9) = v58;
  if ( v32 < 0 )
    goto LABEL_76;
  v36 = *((_BYTE *)a2 + 64) == 0;
  v94 = 0.0;
  v60 = 48;
  v61 = 0;
  if ( v36 )
    v60 = 16;
  LODWORD(v62) = v60 + 8 * *((_DWORD *)a2 + 17);
  v63 = *(float *)&v96;
  v64 = (unsigned int)v96;
  v66 = modff(v100[26], &v94);
  if ( v66 > 0.000081380211 )
  {
    *(_QWORD *)&v126.r = v59;
    v126.b = v62;
    LODWORD(v126.a) = 2;
    lambda_c999fdf24c795b566dd8f666e1ef8213_::operator()(
      v65,
      (unsigned int)&v101,
      0,
      2,
      LODWORD(v66),
      (_DWORD)v91,
      (__int64)v124);
    v61 = 2;
    Y = v104;
    v64 -= 2LL;
    v97 = v101;
    v96 = v101;
  }
  v94 = 0.0;
  v67 = modff(v100[27], &v94);
  if ( v67 <= 0.000081380211 )
  {
    v69 = v97;
    v68 = Y;
  }
  else
  {
    v126.b = v62;
    LODWORD(v126.a) = 2;
    *(_QWORD *)&v126.r = v59 + (int)(LODWORD(v62) * (v64 + v61 - 2));
    lambda_c999fdf24c795b566dd8f666e1ef8213_::operator()(
      LODWORD(v126.r),
      (unsigned int)&v101,
      v96 - 4,
      v96 - 2,
      LODWORD(v67),
      (_DWORD)v91,
      (__int64)v124);
    v68 = v104;
    v64 -= 2LL;
    v69 = v101;
  }
  if ( !v64 )
    goto LABEL_41;
  if ( v61 >= v69 )
  {
LABEL_6:
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v112[1] = v103 + (int)(v61 * LODWORD(v68));
  v113 = v68;
  v114 = v64;
  v115 = v106 + (int)(v61 * v107);
  v112[0] = v102 + 8LL * v61;
  v116 = v107;
  v117 = v64;
  v118 = 0;
  v119 = 1065353216;
  v120 = 1;
  v121 = v59 + (int)(v61 * LODWORD(v62));
  v122 = v62;
  v123 = v64;
  if ( (_DWORD)v64 )
    TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(
      v112,
      v59 + (int)(v61 * LODWORD(v62)),
      v124,
      v103 + (int)(v61 * LODWORD(v68)));
  else
    TransferAliasedVertices(v112);
LABEL_41:
  v70 = v59 + 48;
  v98 = v62;
  v99 = v63;
  if ( !*((_BYTE *)a2 + 64) )
    v70 = v59 + 16;
  v71 = v100;
  v97 = v70;
  v72 = v100[22];
  if ( CCommonRegistryData::CpuClipAASinkEnableDebugColors )
  {
    v77 = ColorDWFromStraightColorF((const struct _D3DCOLORVALUE *)(v111 + 48));
    v75 = v77;
  }
  else
  {
    *(struct _D3DCOLORVALUE *)&v126.r = *(struct _D3DCOLORVALUE *)(v111 + 48);
    if ( v72 == 1.0 )
    {
      a = v126.a;
    }
    else
    {
      if ( !*(_BYTE *)(*(_QWORD *)(v111 + 16) + 81LL) )
      {
        v126.r = v126.r * v72;
        v126.g = v126.g * v72;
        v126.b = v126.b * v72;
      }
      a = v126.a * v72;
      v126.a = v126.a * v72;
    }
    v74 = *(_QWORD *)(v111 + 40);
    if ( v74 )
    {
      v88 = *(__m128 *)(v74 + 72);
      v89 = _mm_shuffle_ps(v88, v88, 255).m128_f32[0];
      v126.a = a * v89;
      v126.r = v126.r * (float)(v89 * v88.m128_f32[0]);
      v126.g = v126.g * (float)(_mm_shuffle_ps(v88, v88, 85).m128_f32[0] * v89);
      v126.b = v126.b * (float)(_mm_shuffle_ps(v88, v88, 170).m128_f32[0] * v89);
    }
    if ( *(_BYTE *)(*(_QWORD *)(v111 + 16) + 81LL) )
    {
      v75 = ColorDWFromStraightColorF(&v126);
      v77 = v75 & 0xFFFFFF;
    }
    else
    {
      v75 = ColorDWFromStraightColorF(&v126);
      v77 = 0;
    }
  }
  v78 = v75;
  if ( *((_DWORD *)v71 + 24) != 1 )
    v78 = v77;
  if ( v63 != 0.0 )
  {
    v79 = ((unsigned int)(LODWORD(v63) - 1) >> 1) + 1;
    do
    {
      *(_DWORD *)(v9 + v76) = v75;
      v80 = v9 + LODWORD(v62);
      v9 += 2 * LODWORD(v62);
      *(_DWORD *)(v80 + v76) = v78;
      --v79;
    }
    while ( v79 );
  }
  v81 = v111;
  CCpuClipAntialiasDrawListEntry::FillVertexUVs(v111, v71 + 25, &v97, *((unsigned int *)a2 + 17));
  if ( *((_BYTE *)a2 + 64) )
  {
    *(_QWORD *)&v126.r = v59;
    v126.b = v62;
    v126.a = v63;
    CCpuClipAntialiasDrawListEntry::FillLightingData(v81, (_DWORD)v71 + 100, a3, (_DWORD)v71 + 112, (__int64)&v126);
  }
  return 0LL;
}
