/*
 * XREFs of ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x1801C9A10
 * Callers:
 *     ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z @ 0x1801C9954 (-BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x180024308 (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800B4D30 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C4750 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x1801CA234 (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
 *     ?IsPointInPolygon@CPolygon@@AEBA_NAEBT__m128@@@Z @ 0x1801CA520 (-IsPointInPolygon@CPolygon@@AEBA_NAEBT__m128@@@Z.c)
 *     ?FillContainsPoint@ID2D1Geometry@@QEBAJUD2D_POINT_2F@@PEBUD2D_MATRIX_3X2_F@@PEAH@Z @ 0x1801F6638 (-FillContainsPoint@ID2D1Geometry@@QEBAJUD2D_POINT_2F@@PEBUD2D_MATRIX_3X2_F@@PEAH@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetD2DGeometry@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18028C518 (-GetD2DGeometry@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall CPolygon::HitTestWithTransformation(
        __m128 *this,
        const struct D2D_POINT_2F *a2,
        const struct CMILMatrix *a3,
        __m128 *a4,
        const enum MilBackfaceVisibility::Enum *a5,
        bool *a6)
{
  unsigned int v8; // ebx
  __m128 v9; // xmm1
  int v10; // eax
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  __m128 v13; // xmm1
  __m128 v14; // xmm3
  __m128 v15; // xmm0
  __m128 v16; // xmm2
  __m128 v17; // xmm6
  __m128 v18; // xmm6
  bool IsPointInPolygon; // al
  const struct D2D_MATRIX_3X2_F *v20; // r8
  unsigned __int64 v21; // rdx
  CGeometry *v22; // rcx
  int ShapeData; // eax
  const struct CMILMatrix *v25; // rdx
  int v26; // eax
  int v27; // [rsp+38h] [rbp-D0h] BYREF
  union __m128 v28; // [rsp+48h] [rbp-C0h] BYREF
  ID2D1Geometry *v29; // [rsp+58h] [rbp-B0h] BYREF
  __m128 v30; // [rsp+68h] [rbp-A0h] BYREF
  __m128 v31; // [rsp+78h] [rbp-90h]
  __m128 v32; // [rsp+88h] [rbp-80h]
  __m128 v33; // [rsp+98h] [rbp-70h]
  int v34; // [rsp+A8h] [rbp-60h]

  v29 = 0LL;
  v8 = 0;
  *a6 = 0;
  if ( !this[15].m128_i8[1] && (this[15].m128_i8[0] || !*(_DWORD *)a5) )
  {
    v9 = a4[1];
    v10 = a4[4].m128_i32[0];
    v30 = *a4;
    v11 = a4[2];
    v31 = v9;
    v12 = a4[3];
    v32 = v11;
    v33 = v12;
    v34 = v10;
    CMILMatrix::Multiply(this + 9, (const struct CMILMatrix *)&v30, (struct CMILMatrix *)&v30);
    v15.m128_u64[1] = v30.m128_u64[1];
    v13 = v31;
    v14 = v33;
    *(double *)v15.m128_u64 = DirectX::XMMatrixInverse(0LL);
    if ( !_mm_movemask_ps(
            _mm_or_ps(
              _mm_or_ps(
                _mm_cmpeq_ps(_mm_and_ps(v14, DirectX::g_XMAbsMask), DirectX::g_XMInfinity),
                _mm_cmpeq_ps(_mm_and_ps((__m128)_xmm, DirectX::g_XMAbsMask), DirectX::g_XMInfinity)),
              _mm_or_ps(
                _mm_cmpeq_ps(_mm_and_ps(v13, DirectX::g_XMAbsMask), DirectX::g_XMInfinity),
                _mm_cmpeq_ps(_mm_and_ps(v15, DirectX::g_XMAbsMask), DirectX::g_XMInfinity)))) )
    {
      v16 = _mm_movelh_ps((__m128)*(_QWORD *)a2, (__m128)_xmm);
      v17 = _mm_add_ps(
              _mm_add_ps(
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v16, v16, 255), v14),
                  _mm_mul_ps(_mm_shuffle_ps(v16, v16, 170), (__m128)_xmm)),
                _mm_mul_ps(_mm_shuffle_ps(v16, v16, 85), v13)),
              _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v15));
      v18 = _mm_div_ps(v17, _mm_shuffle_ps((__m128)v17.m128_u32[3], (__m128)v17.m128_u32[3], 0));
      v28 = v18;
      IsPointInPolygon = CPolygon::IsPointInPolygon((CPolygon *)this, &v28);
      *a6 = IsPointInPolygon;
      if ( IsPointInPolygon )
      {
        v21 = this[13].m128_u64[1];
        v22 = *(CGeometry **)(v21 + 248);
        if ( v22 )
        {
          if ( *(char *)(v21 + 105) >= 0 )
          {
            v28.m128_u64[0] = 0LL;
            v28.m128_i8[8] = 0;
            ShapeData = CGeometry::GetShapeData(v22, (const struct D2D_SIZE_F *)(v21 + 144), (CRectanglesShape **)&v28);
            v8 = ShapeData;
            if ( ShapeData < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShapeData, 0x1D4u, 0LL);
              CShapePtr::~CShapePtr((CRectanglesShape **)&v28);
              goto LABEL_7;
            }
            CShapePtr::GetD2DGeometry((CShapePtr *)&v28, v25, &v29);
            CShapePtr::~CShapePtr((CRectanglesShape **)&v28);
          }
        }
      }
      if ( v29 )
      {
        v27 = 0;
        v26 = ID2D1Geometry::FillContainsPoint(
                v29,
                (struct D2D_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps(v18, _mm_shuffle_ps(v18, v18, 85)),
                v20,
                &v27);
        v8 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0x1E1u, 0LL);
        else
          *a6 = v27 != 0;
      }
    }
  }
LABEL_7:
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v29);
  return v8;
}
