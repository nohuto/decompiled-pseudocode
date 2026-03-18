/*
 * XREFs of ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1802B5D5C
 * Callers:
 *     ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18005B9B0 (-Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@1.c)
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800D2190 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 *     ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801C5050 (-Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801CB760 (-Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 * Callees:
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x18005BD10 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18005F8A4 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x18015F85C (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x1802026A4 (-D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ?D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z @ 0x180257CE4 (-D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     acos_0 @ 0x1802E8830 (acos_0.c)
 *     sin_0 @ 0x1802E8914 (sin_0.c)
 */

__int64 __fastcall KeyframeInterpolation::InterpolateSpherical(double a1, int a2, __int64 a3, __m128i *a4, __int64 a5)
{
  __m128 v9; // xmm6
  __int64 v10; // rbx
  float v11; // xmm8_4
  int v12; // r15d
  __m128 v13; // xmm3
  __m128 v14; // xmm5
  float v15; // xmm5_4
  float v16; // xmm0_4
  double v17; // xmm0_8
  __m128i v18; // xmm1
  float v19; // xmm2_4
  __int32 v20; // eax
  unsigned __int64 v21; // xmm0_8
  int v22; // eax
  float v23; // xmm0_4
  unsigned __int64 v24; // xmm1_8
  float v25; // xmm1_4
  double v26; // xmm9_8
  float v27; // xmm1_4
  float v28; // xmm1_4
  float v29; // xmm10_4
  __m128 v30; // xmm7
  __m128 v31; // xmm7
  __m128 v32; // xmm3
  __m128 v33; // xmm3
  __int64 i; // rax
  __int64 j; // rax
  __int64 k; // rax
  __m128 v37; // xmm0
  __m128 v38; // xmm2
  __m128 v39; // xmm0
  __m128 v40; // xmm3
  __m128 v41; // xmm4
  __m128 v42; // xmm2
  float v43; // xmm1_4
  float v44; // xmm1_4
  float v45; // xmm2_4
  float v46; // xmm0_4
  float v47; // xmm3_4
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __m128 v52; // [rsp+38h] [rbp-D0h] BYREF
  __m128i v53; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v54[4]; // [rsp+58h] [rbp-B0h] BYREF
  CPathData *v55; // [rsp+98h] [rbp-70h] BYREF
  int v56; // [rsp+A0h] [rbp-68h]
  _DWORD v57[28]; // [rsp+A8h] [rbp-60h]
  void *retaddr; // [rsp+150h] [rbp+48h]

  memset_0(v54, 0, sizeof(v54));
  v9 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v10 = 0LL;
  v55 = 0LL;
  v11 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v56 = 0;
  v12 = 71;
  if ( a2 != 18 )
  {
    if ( a2 == 35 )
    {
      v24 = a4->m128i_i64[0];
      v53.m128i_i64[0] = *(_QWORD *)a3;
      v52.m128_u64[0] = v24;
      D3DXVec2Normalize((struct D2DVector2 *)&v53, (const struct D2DVector2 *)&v53);
      D3DXVec2Normalize((struct D2DVector2 *)&v52, (const struct D2DVector2 *)&v52);
      v25 = (float)(*(float *)v53.m128i_i32 * v52.m128_f32[0]) + (float)(*(float *)&v53.m128i_i32[1] * v52.m128_f32[1]);
      v23 = FLOAT_N1_0;
      if ( v25 >= -1.0 )
        v23 = fminf(1.0, v25);
    }
    else
    {
      switch ( a2 )
      {
        case '4':
          v20 = *(_DWORD *)(a3 + 8);
          v52.m128_u64[0] = *(_QWORD *)a3;
          v21 = a4->m128i_i64[0];
          v52.m128_i32[2] = v20;
          v22 = a4->m128i_i32[2];
          v53.m128i_i64[0] = v21;
          v53.m128i_i32[2] = v22;
          D3DXVec3Normalize((struct D2DVector3 *)&v52, (const struct D2DVector3 *)&v52);
          D3DXVec3Normalize((struct D2DVector3 *)&v53, (const struct D2DVector3 *)&v53);
          v19 = (float)((float)(*(float *)v53.m128i_i32 * v52.m128_f32[0])
                      + (float)(v52.m128_f32[1] * *(float *)&v53.m128i_i32[1]))
              + (float)(v52.m128_f32[2] * *(float *)&v53.m128i_i32[2]);
          break;
        case 'E':
          v18 = *a4;
          v52 = *(__m128 *)a3;
          v53 = v18;
          D3DXVec4Normalize((struct D2DVector4 *)&v52, (const struct D2DVector4 *)&v52);
          D3DXVec4Normalize((struct D2DVector4 *)&v53, (const struct D2DVector4 *)&v53);
          v19 = (float)((float)((float)(v52.m128_f32[0] * *(float *)v53.m128i_i32)
                              + (float)(v52.m128_f32[1] * *(float *)&v53.m128i_i32[1]))
                      + (float)(v52.m128_f32[2] * *(float *)&v53.m128i_i32[2]))
              + (float)(v52.m128_f32[3] * *(float *)&v53.m128i_i32[3]);
          break;
        case 'G':
          v13 = (__m128)_mm_loadu_si128(a4);
          v11 = FLOAT_N1_0;
          v14 = (__m128)_mm_loadu_si128((const __m128i *)a3);
          v15 = (float)((float)((float)(v14.m128_f32[0] * v13.m128_f32[0])
                              + (float)(_mm_shuffle_ps(v14, v14, 85).m128_f32[0]
                                      * _mm_shuffle_ps(v13, v13, 85).m128_f32[0]))
                      + (float)(_mm_shuffle_ps(v14, v14, 170).m128_f32[0] * _mm_shuffle_ps(v13, v13, 170).m128_f32[0]))
              + (float)(_mm_shuffle_ps(v14, v14, 255).m128_f32[0] * _mm_shuffle_ps(v13, v13, 255).m128_f32[0]);
          if ( v15 >= -1.0 )
            v16 = fminf(1.0, v15);
          else
            v16 = FLOAT_N1_0;
          if ( v16 >= 0.0 )
            v11 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
          v17 = v16;
          goto LABEL_20;
        default:
          ModuleFailFastForHRESULT(0x80070057, retaddr);
      }
      v23 = FLOAT_N1_0;
      if ( v19 >= -1.0 )
        v23 = fminf(1.0, v19);
    }
    v17 = v23;
LABEL_20:
    v26 = acos_0(v17);
    goto LABEL_22;
  }
  v26 = 0.0;
LABEL_22:
  v27 = v26;
  if ( COERCE_FLOAT(LODWORD(v27) & _xmm) >= 0.0000011920929 )
  {
    v29 = sin_0(v26);
    v30 = 0LL;
    v30.m128_f32[0] = sin_0(a1 * v26);
    v31 = _mm_shuffle_ps(v30, v30, 0);
    v32 = 0LL;
    v32.m128_f32[0] = sin_0((1.0 - a1) * v26);
    v33 = _mm_shuffle_ps(v32, v32, 0);
    switch ( a2 )
    {
      case 18:
        v12 = 18;
        *(float *)v54 = (float)((float)((float)(v33.m128_f32[0] * *(float *)a3) * v11)
                              + (float)(v31.m128_f32[0] * *(float *)a4->m128i_i32))
                      / v29;
        break;
      case 35:
        v12 = 35;
        *(_QWORD *)&v54[0] = __PAIR64__(
                               (float)((float)(v31.m128_f32[0] * *(float *)&a4->m128i_i32[1])
                                     + (float)((float)(v33.m128_f32[0] * *(float *)(a3 + 4)) * v11))
                             * (float)(1.0 / v29),
                               (float)((float)(v31.m128_f32[0] * *(float *)a4->m128i_i32)
                                     + (float)((float)(v33.m128_f32[0] * *(float *)a3) * v11))
                             * (float)(1.0 / v29));
        break;
      case 52:
        v12 = 52;
        v44 = v33.m128_f32[0] * *(float *)(a3 + 4);
        v45 = (float)((float)(v33.m128_f32[0] * *(float *)a3) * v11)
            + (float)(v31.m128_f32[0] * *(float *)a4->m128i_i32);
        v46 = v31.m128_f32[0] * *(float *)&a4->m128i_i32[1];
        v47 = (float)((float)(v33.m128_f32[0] * *(float *)(a3 + 8)) * v11)
            + (float)(v31.m128_f32[0] * *(float *)&a4->m128i_i32[2]);
        *(float *)v54 = v45 * (float)(1.0 / v29);
        *((float *)v54 + 2) = v47 * (float)(1.0 / v29);
        *((float *)v54 + 1) = (float)((float)(v44 * v11) + v46) * (float)(1.0 / v29);
        break;
      case 69:
        v12 = 69;
        v37 = _mm_mul_ps(*(__m128 *)a3, v33);
        v52 = v37;
        v38 = v37;
        v52.m128_f32[0] = v37.m128_f32[0] * v11;
        v52.m128_f32[2] = _mm_shuffle_ps(v37, v37, 170).m128_f32[0] * v11;
        v39 = *(__m128 *)a4;
        v52.m128_f32[1] = _mm_shuffle_ps(v38, v38, 85).m128_f32[0] * v11;
        v40 = _mm_mul_ps(v39, v31);
        v52.m128_f32[3] = _mm_shuffle_ps(v38, v38, 255).m128_f32[0] * v11;
        v41 = v52;
        v52.m128_f32[0] = v40.m128_f32[0] + v52.m128_f32[0];
        v52.m128_f32[1] = _mm_shuffle_ps(v40, v40, 85).m128_f32[0] + _mm_shuffle_ps(v41, v41, 85).m128_f32[0];
        v52.m128_f32[2] = _mm_shuffle_ps(v40, v40, 170).m128_f32[0] + _mm_shuffle_ps(v41, v41, 170).m128_f32[0];
        v52.m128_f32[3] = _mm_shuffle_ps(v40, v40, 255).m128_f32[0] + _mm_shuffle_ps(v41, v41, 255).m128_f32[0];
        v42 = v52;
        v43 = _mm_shuffle_ps(v52, v52, 85).m128_f32[0];
        v52.m128_f32[0] = v52.m128_f32[0] * (float)(1.0 / v29);
        v52.m128_f32[1] = v43 * (float)(1.0 / v29);
        v52.m128_f32[3] = _mm_shuffle_ps(v42, v42, 255).m128_f32[0] * (float)(1.0 / v29);
        v52.m128_f32[2] = _mm_shuffle_ps(v42, v42, 170).m128_f32[0] * (float)(1.0 / v29);
        LODWORD(v54[0]) = v52.m128_i32[0];
        HIDWORD(v54[0]) = _mm_shuffle_ps(v52, v52, 255).m128_u32[0];
        DWORD1(v54[0]) = _mm_shuffle_ps(v52, v52, 85).m128_u32[0];
        DWORD2(v54[0]) = _mm_shuffle_ps(v52, v52, 170).m128_u32[0];
        break;
      default:
        for ( i = 0LL; i < 4; ++i )
          v52.m128_f32[i] = v33.m128_f32[0] * *(float *)(a3 + 4 * i);
        for ( j = 0LL; j < 4; ++j )
          *(float *)&v57[j] = v11 * v52.m128_f32[j];
        for ( k = 0LL; k < 4; ++k )
          *(float *)&v53.m128i_i32[k] = v31.m128_f32[0] * *(float *)&a4->m128i_i32[k];
        do
        {
          v52.m128_f32[v10] = *(float *)&v53.m128i_i32[v10] + *(float *)&v57[v10];
          ++v10;
        }
        while ( v10 < 4 );
        v9.m128_f32[0] = 1.0 / v29;
        v54[0] = _mm_mul_ps(v52, _mm_shuffle_ps(v9, v9, 0));
        break;
    }
    v56 = v12;
  }
  else
  {
    v28 = a1;
    KeyframeInterpolation::ExpressionValueLerp(a2, v28, a3, (unsigned int *)a4, (__int64)v54);
    v12 = v56;
  }
  v48 = v54[1];
  *(_OWORD *)a5 = v54[0];
  v49 = v54[2];
  *(_OWORD *)(a5 + 16) = v48;
  v50 = v54[3];
  *(_OWORD *)(a5 + 32) = v49;
  *(_OWORD *)(a5 + 48) = v50;
  Microsoft::WRL::ComPtr<CPathData>::operator=((CPathData **)(a5 + 64), &v55);
  *(_DWORD *)(a5 + 72) = v12;
  return Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v55);
}
