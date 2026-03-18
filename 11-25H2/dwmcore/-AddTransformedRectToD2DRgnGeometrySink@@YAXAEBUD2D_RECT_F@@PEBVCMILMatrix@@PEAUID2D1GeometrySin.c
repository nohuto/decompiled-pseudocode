/*
 * XREFs of ?AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUD2D_RECT_F@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@@@Z @ 0x1802B7AC8
 * Callers:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18007BDE0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z @ 0x18017070C (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall AddTransformedRectToD2DRgnGeometrySink(
        const struct D2D_RECT_F *a1,
        const struct CMILMatrix *a2,
        struct ID2D1GeometrySink *a3)
{
  __m128 left_low; // xmm0
  __m128 top_low; // xmm1
  __m128 right_low; // xmm6
  __m128 bottom_low; // xmm7
  __m128 v8; // xmm8
  __m128 v9; // xmm9
  __m128 v10; // xmm10
  __m128 v11; // xmm11
  struct D2D_POINT_2F v12; // [rsp+28h] [rbp-59h] BYREF
  __int32 v13; // [rsp+30h] [rbp-51h]
  __int32 v14; // [rsp+34h] [rbp-4Dh]
  __int32 v15; // [rsp+38h] [rbp-49h]
  __int32 v16; // [rsp+3Ch] [rbp-45h]
  __int32 v17; // [rsp+40h] [rbp-41h]
  __int32 v18; // [rsp+44h] [rbp-3Dh]
  struct D2D_POINT_2F v19; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v20; // [rsp+50h] [rbp-31h]
  unsigned int v21; // [rsp+54h] [rbp-2Dh]
  unsigned int v22; // [rsp+58h] [rbp-29h]
  unsigned int v23; // [rsp+5Ch] [rbp-25h]
  unsigned int v24; // [rsp+60h] [rbp-21h]
  unsigned int v25; // [rsp+64h] [rbp-1Dh]

  left_low = (__m128)LODWORD(a1->left);
  top_low = (__m128)LODWORD(a1->top);
  right_low = (__m128)LODWORD(a1->right);
  bottom_low = (__m128)LODWORD(a1->bottom);
  LODWORD(v12.x) = left_low.m128_i32[0];
  LODWORD(v12.y) = top_low.m128_i32[0];
  v13 = right_low.m128_i32[0];
  v14 = top_low.m128_i32[0];
  v15 = right_low.m128_i32[0];
  v16 = bottom_low.m128_i32[0];
  v17 = left_low.m128_i32[0];
  v18 = bottom_low.m128_i32[0];
  if ( a2 )
  {
    CMILMatrix::Transform(a2, &v12, &v19, 4);
    left_low = (__m128)LODWORD(v19.x);
    top_low = (__m128)LODWORD(v19.y);
    right_low = (__m128)v20;
    v8 = (__m128)v21;
    v9 = (__m128)v22;
    bottom_low = (__m128)v23;
    v10 = (__m128)v24;
    v11 = (__m128)v25;
  }
  else
  {
    v8 = top_low;
    v9 = right_low;
    v10 = left_low;
    v11 = bottom_low;
  }
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64, _QWORD))(*(_QWORD *)a3 + 40LL))(
    a3,
    _mm_unpacklo_ps(left_low, top_low).m128_u64[0],
    0LL);
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64))(*(_QWORD *)a3 + 80LL))(
    a3,
    _mm_unpacklo_ps(right_low, v8).m128_u64[0]);
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64))(*(_QWORD *)a3 + 80LL))(
    a3,
    _mm_unpacklo_ps(v9, bottom_low).m128_u64[0]);
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64))(*(_QWORD *)a3 + 80LL))(
    a3,
    _mm_unpacklo_ps(v10, v11).m128_u64[0]);
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a3 + 64LL))(a3, 1LL);
}
