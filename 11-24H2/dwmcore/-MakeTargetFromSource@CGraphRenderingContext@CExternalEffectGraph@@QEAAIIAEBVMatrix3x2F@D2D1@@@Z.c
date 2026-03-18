/*
 * XREFs of ?MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z @ 0x1801382B0
 * Callers:
 *     _lambda_1081fb77a3a3c81cdcc31a57fa3e9375_::operator() @ 0x1801372F0 (_lambda_1081fb77a3a3c81cdcc31a57fa3e9375_--operator().c)
 *     _lambda_16f9bd5df3b75e2e55d1e6198dc09b2c_::operator() @ 0x1801E519C (_lambda_16f9bd5df3b75e2e55d1e6198dc09b2c_--operator().c)
 * Callees:
 *     ?FloorSat@CFloatFPU@@SAHM@Z @ 0x1800D3E10 (-FloorSat@CFloatFPU@@SAHM@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$emplace_back@UEffectInput@@@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXUEffectInput@@@Z @ 0x18013898C (--$emplace_back@UEffectInput@@@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D7EA0 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D97E0 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 *     ceilf_0 @ 0x1802DF5CC (ceilf_0.c)
 *     floorf_0 @ 0x1802DF608 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExternalEffectGraph::CGraphRenderingContext::MakeTargetFromSource(
        CExternalEffectGraph::CGraphRenderingContext *this,
        unsigned int a2,
        const struct D2D1::Matrix3x2F *a3)
{
  __m128 v3; // xmm2
  char *v4; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  CMILRefCountImpl *v10; // rcx
  void (*v11)(void); // rax
  __int64 v12; // rcx
  __int128 v13; // xmm0
  char v14; // cl
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rbx
  __m128i v19; // xmm3
  int v20; // ecx
  __m128 v21; // xmm2
  __m128 v22; // xmm2
  __m128i v23; // xmm3
  float v24; // xmm10_4
  int v25; // ecx
  float v26; // xmm10_4
  float v27; // xmm12_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // xmm10_4
  float v31; // xmm2_4
  float v32; // xmm6_4
  float v33; // xmm12_4
  float v34; // xmm1_4
  float v35; // xmm10_4
  float v36; // xmm0_4
  float v37; // xmm7_4
  float v38; // xmm12_4
  float v39; // xmm6_4
  float v40; // xmm10_4
  float v41; // xmm8_4
  float v42; // xmm6_4
  float v43; // xmm0_4
  float v44; // xmm3_4
  float v45; // xmm1_4
  float v46; // xmm1_4
  float v47; // xmm13_4
  float v48; // xmm10_4
  float v49; // xmm11_4
  float v50; // xmm12_4
  float v51; // xmm8_4
  float v52; // xmm7_4
  float v53; // xmm3_4
  float v54; // xmm2_4
  float v55; // xmm0_4
  float v56; // xmm3_4
  float v57; // xmm1_4
  float v58; // xmm8_4
  float v59; // xmm7_4
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 (__fastcall *v62)(__int64, __int64 *); // rax
  __int64 *Size; // rax
  float v64; // xmm3_4
  float v65; // xmm0_4
  __int64 result; // rax
  __int64 v67; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v68[2]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v69[3]; // [rsp+40h] [rbp-C8h]
  int v70; // [rsp+58h] [rbp-B0h]
  char v71; // [rsp+5Ch] [rbp-ACh]
  char v72; // [rsp+5Dh] [rbp-ABh]
  __int128 v73; // [rsp+60h] [rbp-A8h]
  _OWORD v74[11]; // [rsp+70h] [rbp-98h]

  v4 = (char *)this + 48;
  v8 = *((_QWORD *)this + 6) + 112LL * a2;
  v9 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 4);
  v10 = *(CMILRefCountImpl **)v8;
  v68[0] = v10;
  if ( v10 )
  {
    v11 = *(void (**)(void))(*(_QWORD *)v10 + 8LL);
    if ( (char *)v11 == (char *)CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v10);
    else
      v11();
  }
  v12 = *(_QWORD *)(v8 + 8);
  v68[1] = v12;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v13 = *(_OWORD *)(v8 + 24);
  v14 = *(_BYTE *)(v8 + 44);
  LOBYTE(v69[0]) = *(_BYTE *)(v8 + 16);
  v70 = *(_DWORD *)(v8 + 40);
  v72 = *(_BYTE *)(v8 + 45);
  v71 = v14;
  *(_OWORD *)&v69[1] = v13;
  if ( v14 )
  {
    v15 = *(_OWORD *)(v8 + 64);
    v73 = *(_OWORD *)(v8 + 48);
    v16 = *(_OWORD *)(v8 + 80);
    v74[0] = v15;
    v17 = *(_OWORD *)(v8 + 96);
    v74[1] = v16;
    v74[2] = v17;
  }
  else
  {
    v73 = *(_OWORD *)(v8 + 48);
  }
  detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::emplace_back<EffectInput>(
    v4,
    v68);
  v18 = *((_QWORD *)this + 7);
  v19 = (__m128i)*(unsigned int *)(v18 - 28);
  if ( (_mm_cvtsi128_si32(v19) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v3.m128_f32[0] = (float)(int)*(float *)v19.m128i_i32 - *(float *)v19.m128i_i32;
    v20 = (int)*(float *)v19.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v3, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    *(float *)&v67 = *(float *)v19.m128i_i32 + 6291456.25;
    v20 = (int)((_DWORD)v67 << 10) >> 11;
  }
  v21 = (__m128)v19;
  v21.m128_f32[0] = *(float *)v19.m128i_i32 - (float)v20;
  v22 = _mm_and_ps(v21, (__m128)(unsigned int)_xmm);
  if ( v22.m128_f32[0] > 0.00390625 )
    v20 = CFloatFPU::FloorSat(*(float *)v19.m128i_i32);
  v23 = (__m128i)*(unsigned int *)(v18 - 24);
  v24 = (float)v20;
  if ( (_mm_cvtsi128_si32(v23) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v22.m128_f32[0] = (float)(int)*(float *)v23.m128i_i32 - *(float *)v23.m128i_i32;
    v25 = (int)*(float *)v23.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v22, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    *(float *)&v67 = *(float *)v23.m128i_i32 + 6291456.25;
    v25 = (int)((_DWORD)v67 << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v23.m128i_i32 - (float)v25) & _xmm) > 0.00390625 )
    v25 = CFloatFPU::FloorSat(*(float *)v23.m128i_i32);
  LODWORD(v26) = LODWORD(v24) ^ _xmm;
  v27 = v26 + *(float *)(v18 - 28);
  *(float *)(v18 - 28) = v27;
  LODWORD(v28) = COERCE_UNSIGNED_INT((float)v25) ^ _xmm;
  v29 = v28 + *(float *)(v18 - 24);
  *(float *)(v18 - 24) = v29;
  v30 = v26 + *(float *)(v18 - 20);
  *(float *)(v18 - 20) = v30;
  v31 = v28 + *(float *)(v18 - 16);
  *(float *)(v18 - 16) = v31;
  v32 = (float)((float)(v27 * *(float *)a3) + (float)(v29 * *((float *)a3 + 2))) + *((float *)a3 + 4);
  v33 = (float)((float)(v27 * *((float *)a3 + 1)) + (float)(v29 * *((float *)a3 + 3))) + *((float *)a3 + 5);
  v34 = (float)((float)(v30 * *(float *)a3) + (float)(v31 * *((float *)a3 + 2))) + *((float *)a3 + 4);
  v35 = (float)((float)(v30 * *((float *)a3 + 1)) + (float)(v31 * *((float *)a3 + 3))) + *((float *)a3 + 5);
  v36 = fminf(v32, v34);
  v37 = fminf(v33, v35);
  v38 = fmaxf(v33, v35);
  v39 = fmaxf(v32, v34);
  *(float *)(v18 - 28) = v36;
  *(float *)(v18 - 24) = v37;
  *(float *)(v18 - 20) = v39;
  *(float *)(v18 - 16) = v38;
  v40 = *(float *)(v18 - 28);
  if ( COERCE_FLOAT(LODWORD(v40) & _xmm) >= 8388608.0 )
    v41 = *(float *)(v18 - 28);
  else
    v41 = (float)(int)floorf_0(*(float *)(v18 - 28));
  v42 = ceilf_0(v39);
  if ( COERCE_FLOAT(LODWORD(v37) & _xmm) < 8388608.0 )
    v37 = (float)(int)floorf_0(v37);
  v43 = ceilf_0(v38);
  v44 = v43;
  if ( v41 == v42 )
    v42 = v42 + 1.0;
  if ( v37 == v43 )
    v44 = v43 + 1.0;
  *(float *)(v18 - 28) = v40 + COERCE_FLOAT(LODWORD(v41) ^ _xmm);
  *(float *)(v18 - 24) = COERCE_FLOAT(LODWORD(v37) ^ _xmm) + *(float *)(v18 - 24);
  v45 = COERCE_FLOAT(LODWORD(v41) ^ _xmm) + *(float *)(v18 - 20);
  *(float *)(v18 - 16) = COERCE_FLOAT(LODWORD(v37) ^ _xmm) + v38;
  *(float *)(v18 - 20) = v45;
  *((float *)this + 10) = v42 - v41;
  *((float *)this + 11) = v44 - v37;
  v46 = *(float *)(v18 - 28);
  if ( v46 == *(float *)(v8 + 84)
    && *(float *)(v18 - 24) == *(float *)(v8 + 88)
    && *(float *)(v18 - 20) == *(float *)(v8 + 92)
    && *(float *)(v18 - 16) == *(float *)(v8 + 96) )
  {
    v47 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v48 = 0.0;
    v49 = 0.0;
    v50 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v51 = 0.0;
    v52 = 0.0;
  }
  else
  {
    v53 = *(float *)(v18 - 24);
    v54 = *(float *)(v18 - 20) - v46;
    v55 = *(float *)(v18 - 16) - v53;
    if ( v54 == 0.0 && v55 == 0.0 )
    {
      v51 = *(float *)&v67;
      v48 = *(float *)&v67;
      v52 = *(float *)&v67;
      v47 = *(float *)&v67;
      v49 = *(float *)&v67;
      v50 = *(float *)&v67;
    }
    else
    {
      LODWORD(v56) = LODWORD(v53) ^ _xmm;
      LODWORD(v57) = LODWORD(v46) ^ _xmm;
      v58 = (float)(*(float *)(v8 + 92) - *(float *)(v8 + 84)) / v54;
      v59 = (float)(*(float *)(v8 + 96) - *(float *)(v8 + 88)) / v55;
      v47 = v58 + 0.0;
      v50 = v59 + 0.0;
      v48 = (float)(v59 * 0.0) + 0.0;
      v49 = (float)(v58 * 0.0) + 0.0;
      v52 = (float)((float)(v59 * v56) + (float)(v57 * 0.0)) + *(float *)(v8 + 88);
      v51 = (float)((float)(v58 * v57) + (float)(v56 * 0.0)) + *(float *)(v8 + 84);
    }
  }
  v60 = *(_QWORD *)(v8 + 8);
  v61 = 0LL;
  if ( v60 )
  {
    v62 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v60 + 32LL);
    if ( (char *)v62 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
    {
      Size = (__int64 *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(v60, &v67);
    }
    else if ( (char *)v62 == (char *)CDxHandleBitmapRealization::GetSize )
    {
      Size = (__int64 *)CDxHandleBitmapRealization::GetSize(v60, &v67);
    }
    else
    {
      Size = (__int64 *)v62(v60, &v67);
    }
    v61 = *Size;
  }
  *(_DWORD *)(v8 + 56) = 0;
  *(_DWORD *)(v8 + 68) = 0;
  *(_DWORD *)(v8 + 80) = 1065353216;
  v64 = 1.0 / (float)(int)v61;
  v65 = (float)SHIDWORD(v61);
  result = (unsigned int)v9;
  *(float *)(v8 + 48) = (float)(v47 * v64) + (float)(v48 * 0.0);
  *(float *)(v8 + 52) = (float)(v48 * (float)(1.0 / v65)) + (float)(v47 * 0.0);
  *(float *)(v8 + 64) = (float)(v50 * (float)(1.0 / v65)) + (float)(v49 * 0.0);
  *(float *)(v8 + 60) = (float)(v49 * v64) + (float)(v50 * 0.0);
  *(float *)(v8 + 76) = (float)((float)(v52 * (float)(1.0 / v65)) + (float)(v51 * 0.0))
                      + (float)(0.0 - (float)((float)(1.0 / v65) * 0.0));
  *(float *)(v8 + 72) = (float)((float)(v51 * v64) + (float)(v52 * 0.0)) + (float)(0.0 - (float)(v64 * 0.0));
  *((_DWORD *)this + 8) = a2;
  return result;
}
