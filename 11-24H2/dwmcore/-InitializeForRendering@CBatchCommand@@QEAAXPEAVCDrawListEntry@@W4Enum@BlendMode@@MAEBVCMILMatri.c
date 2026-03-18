/*
 * XREFs of ?InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@_N@Z @ 0x180147A30
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180052D80 (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@@Z @ 0x180147598 (-ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV-.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180148B80 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 * Callees:
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1801470D0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBatchCommand::InitializeForRendering(
        __int64 a1,
        __int64 (__fastcall ***a2)(CMILRefCountImpl *this),
        int a3,
        float a4,
        __int64 a5,
        char a6)
{
  int v9; // ebx
  __int64 (__fastcall *v11)(CMILRefCountImpl *); // rdx
  int v12; // et0
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  char *v15; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 result; // rax
  char v23; // cl
  int v24; // ebx
  __int64 (__fastcall *v25)(CMILRefCountImpl *); // rdx
  int v26; // et0
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  char *v29; // rax
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int64 (__fastcall *v36)(CMILRefCountImpl *); // rdx
  int v37; // et0
  float v38; // xmm1_4
  float v39; // xmm3_4
  float v40; // xmm4_4
  float v41; // xmm2_4
  float v42; // xmm5_4
  float v43; // xmm9_4
  float v44; // xmm2_4
  float v45; // xmm3_4
  float v46; // xmm4_4
  float v47; // xmm1_4
  int v48; // xmm5_4
  unsigned int v49; // xmm9_4
  char v50; // dl
  __m128 v51; // xmm0
  __m128 v52; // xmm1
  __m128 v53; // xmm0
  __m128 v54; // xmm1
  int v55; // eax
  __int128 v56; // xmm0
  __m128 v57; // xmm1
  __m128 v58; // xmm1
  float v59; // xmm2_4
  float v60; // xmm4_4
  float v61; // xmm3_4
  float v62; // xmm1_4
  int v63; // xmm5_4
  unsigned int v64; // xmm9_4
  __int128 v65; // [rsp+20h] [rbp-A1h] BYREF
  __int64 v66; // [rsp+30h] [rbp-91h]
  __m256i v67; // [rsp+38h] [rbp-89h]
  _BYTE v68[20]; // [rsp+58h] [rbp-69h]
  __int128 v69; // [rsp+6Ch] [rbp-55h] BYREF
  __int128 v70; // [rsp+7Ch] [rbp-45h]
  __int128 v71; // [rsp+8Ch] [rbp-35h]
  __int128 v72; // [rsp+9Ch] [rbp-25h]
  int v73; // [rsp+ACh] [rbp-15h]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+4Fh]

  v9 = 1;
  if ( ((_BYTE)a2[8] & 2) != 0 )
  {
    v23 = *(_BYTE *)(a5 + 64);
    if ( v23 >> 6 == 1 )
      goto LABEL_46;
    if ( v23 >> 6 < 0 )
    {
LABEL_11:
      v9 = 4;
      goto LABEL_12;
    }
    v50 = *(_BYTE *)(a5 + 65);
    if ( (char)(4 * v50) >> 6 != 1 )
    {
      if ( (char)(4 * v50) >> 6 < 0 )
      {
LABEL_44:
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a5 + 4) - 0.0) & _xmm) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a5 + 16) - 0.0) & _xmm) < 0.000081380211 )
        {
          *(_BYTE *)(a5 + 64) = v23 | 0xC0;
          goto LABEL_11;
        }
        goto LABEL_45;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a5 + 28) & _xmm) * 61440.0)
                                        + (float)(COERCE_FLOAT(*(_DWORD *)(a5 + 12) & _xmm) * 61440.0))
                                + COERCE_FLOAT(*(_DWORD *)(a5 + 60) & _xmm))
                        - 1.0) & _xmm) < 0.000081380211 )
      {
        *(_BYTE *)(a5 + 65) = v50 | 0x30;
        goto LABEL_44;
      }
      *(_BYTE *)(a5 + 65) = v50 & 0xCF | 0x10;
    }
LABEL_45:
    *(_BYTE *)(a5 + 64) = v23 & 0x3F | 0x40;
LABEL_46:
    if ( !CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(a5) )
    {
LABEL_14:
      *(_DWORD *)a1 = 1;
      *(_QWORD *)(a1 + 8) = a2;
      v25 = **a2;
      if ( v25 == CMILRefCountImpl::AddReference )
      {
        v26 = _InterlockedAdd((volatile signed __int32 *)a2, 1u);
        if ( (v26 < 0) ^ __OFSUB__(v25, CMILRefCountImpl::AddReference) | (v26 == 0) )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x18,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            SDWORD2(v65));
      }
      else
      {
        (**a2)((CMILRefCountImpl *)a2);
      }
      if ( a6 )
      {
        v44 = *(float *)a5;
        v45 = *(float *)(a5 + 4);
        v46 = *(float *)(a5 + 16);
        v47 = *(float *)(a5 + 20);
        v48 = *(_DWORD *)(a5 + 48);
        v49 = *(_DWORD *)(a5 + 52);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(*(_DWORD *)a5 & _xmm) - 1.0) & _xmm) >= 0.000081380211 )
        {
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v45) & _xmm) - 1.0) & _xmm) < 0.000081380211 )
          {
            v44 = 0.0;
            if ( v45 > 0.0 )
              LODWORD(v45) = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
            else
              v45 = FLOAT_N1_0;
          }
        }
        else
        {
          if ( v44 <= 0.0 )
            v44 = FLOAT_N1_0;
          else
            LODWORD(v44) = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
          v45 = 0.0;
        }
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v47) & _xmm) - 1.0) & _xmm) >= 0.000081380211 )
        {
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v46) & _xmm) - 1.0) & _xmm) < 0.000081380211 )
          {
            if ( v46 > 0.0 )
              LODWORD(v46) = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
            else
              v46 = FLOAT_N1_0;
            v47 = 0.0;
          }
        }
        else
        {
          v46 = 0.0;
          if ( v47 <= 0.0 )
            v47 = FLOAT_N1_0;
          else
            LODWORD(v47) = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
        }
        *(_QWORD *)&v68[12] = 0x28083F800000LL;
        *((_QWORD *)&v65 + 1) = __PAIR64__(LODWORD(v45), LODWORD(v44));
        v29 = (char *)&v65 + 8;
        v67.m256i_i64[0] = __PAIR64__(LODWORD(v47), LODWORD(v46));
        *(_DWORD *)v68 = v48;
        *(_QWORD *)&v68[4] = v49;
        v66 = 0LL;
        *(_OWORD *)&v67.m256i_u64[1] = 0LL;
        v67.m256i_i64[3] = 1065353216LL;
      }
      else
      {
        v27 = *(_OWORD *)a5;
        v28 = *(_OWORD *)(a5 + 16);
        v73 = *(_DWORD *)(a5 + 64);
        v29 = (char *)&v69;
        v69 = v27;
        v30 = *(_OWORD *)(a5 + 32);
        v70 = v28;
        v31 = *(_OWORD *)(a5 + 48);
        v71 = v30;
        v72 = v31;
      }
      v32 = *(_OWORD *)v29;
      *(_DWORD *)(a1 + 84) = a3;
      v33 = *((_OWORD *)v29 + 1);
      *(_BYTE *)(a1 + 92) = a6;
      *(_OWORD *)(a1 + 16) = v32;
      v34 = *((_OWORD *)v29 + 2);
      *(_OWORD *)(a1 + 32) = v33;
      v35 = *((_OWORD *)v29 + 3);
      result = *((unsigned int *)v29 + 16);
      *(_OWORD *)(a1 + 48) = v34;
      *(_OWORD *)(a1 + 64) = v35;
      *(_DWORD *)(a1 + 80) = result;
      *(float *)(a1 + 88) = a4;
      return result;
    }
    goto LABEL_11;
  }
  if ( (unsigned int)(*a2)[4]((CMILRefCountImpl *)a2) == 2 )
  {
LABEL_3:
    *(_DWORD *)a1 = 5;
    *(_QWORD *)(a1 + 8) = a2;
    v11 = **a2;
    if ( v11 == CMILRefCountImpl::AddReference )
    {
      v12 = _InterlockedAdd((volatile signed __int32 *)a2, 1u);
      if ( (v12 < 0) ^ __OFSUB__(v11, CMILRefCountImpl::AddReference) | (v12 == 0) )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          SDWORD2(v65));
    }
    else
    {
      (**a2)((CMILRefCountImpl *)a2);
    }
    if ( a6 )
    {
      v59 = *(float *)a5;
      v60 = *(float *)(a5 + 4);
      v61 = *(float *)(a5 + 16);
      v62 = *(float *)(a5 + 20);
      v63 = *(_DWORD *)(a5 + 48);
      v64 = *(_DWORD *)(a5 + 52);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(*(_DWORD *)a5 & _xmm) - 1.0) & _xmm) >= 0.000081380211 )
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v60) & _xmm) - 1.0) & _xmm) < 0.000081380211 )
        {
          v59 = 0.0;
          if ( v60 > 0.0 )
            LODWORD(v60) = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
          else
            v60 = FLOAT_N1_0;
        }
      }
      else
      {
        if ( v59 <= 0.0 )
          v59 = FLOAT_N1_0;
        else
          LODWORD(v59) = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
        v60 = 0.0;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v62) & _xmm) - 1.0) & _xmm) >= 0.000081380211 )
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v61) & _xmm) - 1.0) & _xmm) < 0.000081380211 )
        {
          if ( v61 > 0.0 )
            LODWORD(v61) = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
          else
            v61 = FLOAT_N1_0;
          v62 = 0.0;
        }
      }
      else
      {
        v61 = 0.0;
        if ( v62 <= 0.0 )
          v62 = FLOAT_N1_0;
        else
          LODWORD(v62) = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      }
      *(_QWORD *)&v68[12] = 0x28083F800000LL;
      *((_QWORD *)&v65 + 1) = __PAIR64__(LODWORD(v60), LODWORD(v59));
      v15 = (char *)&v65 + 8;
      v67.m256i_i64[0] = __PAIR64__(LODWORD(v62), LODWORD(v61));
      *(_DWORD *)v68 = v63;
      *(_QWORD *)&v68[4] = v64;
      v66 = 0LL;
      *(_OWORD *)&v67.m256i_u64[1] = 0LL;
      v67.m256i_i64[3] = 1065353216LL;
    }
    else
    {
      v13 = *(_OWORD *)a5;
      v14 = *(_OWORD *)(a5 + 16);
      v73 = *(_DWORD *)(a5 + 64);
      v15 = (char *)&v69;
      v69 = v13;
      v16 = *(_OWORD *)(a5 + 32);
      v70 = v14;
      v17 = *(_OWORD *)(a5 + 48);
      v71 = v16;
      v72 = v17;
    }
    v18 = *(_OWORD *)v15;
    *(_DWORD *)(a1 + 84) = a3;
    v19 = *((_OWORD *)v15 + 1);
    *(_BYTE *)(a1 + 92) = a6;
    *(_OWORD *)(a1 + 16) = v18;
    v20 = *((_OWORD *)v15 + 2);
    *(_OWORD *)(a1 + 32) = v19;
    v21 = *((_OWORD *)v15 + 3);
    result = *((unsigned int *)v15 + 16);
    *(_OWORD *)(a1 + 48) = v20;
    *(_OWORD *)(a1 + 64) = v21;
    *(_DWORD *)(a1 + 80) = result;
    *(float *)(a1 + 88) = a4;
    *(_DWORD *)(a1 + 176) = 0;
    return result;
  }
LABEL_12:
  v24 = v9 - 4;
  if ( v24 )
  {
    if ( v24 == 1 )
      goto LABEL_3;
    goto LABEL_14;
  }
  *(_DWORD *)a1 = 4;
  *(_QWORD *)(a1 + 8) = a2;
  v36 = **a2;
  if ( v36 == CMILRefCountImpl::AddReference )
  {
    v37 = _InterlockedAdd((volatile signed __int32 *)a2, 1u);
    if ( (v37 < 0) ^ __OFSUB__(v36, CMILRefCountImpl::AddReference) | (v37 == 0) )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        SDWORD2(v65));
  }
  else
  {
    (**a2)((CMILRefCountImpl *)a2);
  }
  v38 = *(float *)a5;
  v39 = *(float *)(a5 + 4);
  v40 = *(float *)(a5 + 16);
  v41 = *(float *)(a5 + 20);
  v42 = *(float *)(a5 + 48);
  v43 = *(float *)(a5 + 52);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(*(_DWORD *)a5 & _xmm) - 1.0) & _xmm) < 0.000081380211 )
  {
    if ( v38 <= 0.0 )
      v38 = FLOAT_N1_0;
    else
      v38 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v39 = 0.0;
  }
  else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v39) & _xmm) - 1.0) & _xmm) < 0.000081380211 )
  {
    v38 = 0.0;
    if ( v39 > 0.0 )
      v39 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    else
      v39 = FLOAT_N1_0;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v41) & _xmm) - 1.0) & _xmm) >= 0.000081380211 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v40) & _xmm) - 1.0) & _xmm) < 0.000081380211 )
    {
      if ( v40 > 0.0 )
        v40 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      else
        v40 = FLOAT_N1_0;
      v41 = 0.0;
    }
  }
  else
  {
    v40 = 0.0;
    if ( v41 <= 0.0 )
      v41 = FLOAT_N1_0;
    else
      v41 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  }
  *(_QWORD *)&v68[12] = 1065353216LL;
  *(_OWORD *)&v67.m256i_u64[1] = 0LL;
  v66 = 0LL;
  v51 = (__m128)*((unsigned __int64 *)&v65 + 1);
  *(_DWORD *)(a1 + 84) = a3;
  *(float *)(a1 + 88) = a4;
  v51.m128_f32[0] = v38;
  v68[17] = 40;
  v52 = *(__m128 *)v67.m256i_i8;
  *(_DWORD *)&v68[8] = 0;
  v53 = _mm_shuffle_ps(v51, v51, 225);
  v52.m128_f32[0] = v40;
  v67.m256i_i64[3] = 1065353216LL;
  v54 = _mm_shuffle_ps(v52, v52, 225);
  v53.m128_f32[0] = v39;
  v54.m128_f32[0] = v41;
  *(__m128 *)(a1 + 16) = _mm_shuffle_ps(v53, v53, 225);
  v68[16] = 8;
  v55 = *(_DWORD *)&v68[16];
  v56 = *(_OWORD *)&v67.m256i_u64[2];
  *(__m128 *)(a1 + 32) = _mm_shuffle_ps(v54, v54, 225);
  v57 = *(__m128 *)v68;
  *(_OWORD *)(a1 + 48) = v56;
  v57.m128_f32[0] = v42;
  v58 = _mm_shuffle_ps(v57, v57, 225);
  v58.m128_f32[0] = v43;
  *(__m128 *)(a1 + 64) = _mm_shuffle_ps(v58, v58, 225);
  *(_DWORD *)(a1 + 80) = v55;
  *(_BYTE *)(a1 + 92) = a6;
  result = a1 + 104;
  *(_QWORD *)(a1 + 96) = a1 + 104;
  *(_DWORD *)(a1 + 104) = 0;
  return result;
}
