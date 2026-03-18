/*
 * XREFs of ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@UNotNeeded@4@@@@Z @ 0x18006E780
 * Callers:
 *     ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x18006E6D0 (-UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18006CE5C (-SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_M.c)
 *     ?ResetToStart@ClipPlaneIterator@@AEAAXXZ @ 0x18006DCC4 (-ResetToStart@ClipPlaneIterator@@AEAAXXZ.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18006E664 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall ClipPlaneIterator::ClipToPolygon(
        ClipPlaneIterator *this,
        __int64 a2,
        struct _D3DMATRIX *a3,
        _DWORD *a4)
{
  unsigned int v8; // r14d
  __int64 v9; // r12
  struct D2D_POINT_2F *v10; // rsi
  const enum D2D1_POLYGON_EDGE_FLAG *v11; // rdi
  __int64 v12; // r8
  struct D2D_POINT_2F *v13; // r9
  __int64 v14; // rax
  __m128 v15; // xmm3
  struct _D3DMATRIX *D3DMatrix; // rax
  float v17; // xmm4_4
  float v18; // xmm2_4
  float *v19; // r9
  __int64 v20; // rax
  __int64 v21; // r8
  __int128 v22; // xmm0
  _DWORD *v23; // r10
  unsigned int v24; // eax
  __m128i v25; // xmm0
  int v26; // eax
  int v27; // eax
  unsigned int v28; // ebx
  struct D2D_MATRIX_3X2_F v30; // [rsp+30h] [rbp-A8h] BYREF
  _D3DMATRIX v31; // [rsp+50h] [rbp-88h] BYREF

  ClipPlaneIterator::ResetToStart(this);
  v8 = *(_DWORD *)(a2 + 40);
  v9 = v8;
  v10 = (struct D2D_POINT_2F *)operator new[](saturated_mul(v8, 8uLL));
  if ( v10 )
  {
    v11 = (const enum D2D1_POLYGON_EDGE_FLAG *)operator new[](saturated_mul(v8, 4uLL));
    if ( v11 )
    {
      if ( v8 )
      {
        v12 = 0LL;
        v13 = v10;
        do
        {
          LODWORD(v13->x) = *(_OWORD *)(v12 + *(_QWORD *)(a2 + 16));
          v14 = *(_QWORD *)(a2 + 16);
          v15 = *(__m128 *)(v12 + v14);
          v30.dx = *(FLOAT *)(v12 + v14 + 16);
          v15.m128_f32[0] = _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
          LODWORD(v13->y) = v15.m128_i32[0];
          D3DMatrix = CMILMatrix::GetD3DMatrix(a3, &v31);
          v18 = (float)((float)(v15.m128_f32[0] * D3DMatrix->_24) + (float)(v17 * D3DMatrix->_14)) + D3DMatrix->_44;
          *v19 = (float)((float)((float)(v15.m128_f32[0] * D3DMatrix->_21) + (float)(v17 * D3DMatrix->_11))
                       + D3DMatrix->_41)
               / v18;
          v19[1] = (float)((float)((float)(v15.m128_f32[0] * D3DMatrix->_22) + (float)(v17 * D3DMatrix->_12))
                         + D3DMatrix->_42)
                 / v18;
          v13 = (struct D2D_POINT_2F *)(v19 + 2);
          v20 = *(_QWORD *)(a2 + 16);
          v22 = *(_OWORD *)(v21 + v20);
          LODWORD(v20) = *(_DWORD *)(v21 + v20 + 16);
          v12 = v21 + 20;
          *v23 = v20;
          *(_OWORD *)&v30.m11 = v22;
          --v9;
        }
        while ( v9 );
      }
      v24 = a4[2] - *a4;
      v30.m21 = 0.0;
      v25 = _mm_cvtsi32_si128(v24);
      v26 = a4[3] - a4[1];
      *(_QWORD *)&v30.m[2][0] = 0x3F800000BF800000LL;
      *(_QWORD *)&v30.m11 = COERCE_UNSIGNED_INT(2.0 / _mm_cvtepi32_ps(v25).m128_f32[0]);
      v30.m22 = -2.0 / (float)v26;
      v27 = ClipPlaneIterator::SetClipPoints(this, v10, v8, v11, &v30);
      v28 = v27;
      if ( v27 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x28Bu, 0LL);
      else
        *((_QWORD *)this + 15) = a2;
    }
    else
    {
      v28 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27Au, 0LL);
    }
    operator delete(v10);
    if ( v11 )
      operator delete(v11);
  }
  else
  {
    v28 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x277u, 0LL);
  }
  return v28;
}
