/*
 * XREFs of ?FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z @ 0x1801779DC
 * Callers:
 *     ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x180177878 (-GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800A0600 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTransformedGeometryHelper::FlattenGeometry(
        CTransformedGeometryHelper *this,
        const struct ID2D1Geometry *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  float top; // xmm8_4
  float bottom; // xmm6_4
  float v9; // xmm7_4
  float v10; // xmm10_4
  float v11; // xmm11_4
  float *v12; // rax
  float x; // xmm1_4
  float y; // xmm2_4
  unsigned int v15; // ecx
  float v16; // xmm4_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm8_4
  float v20; // xmm7_4
  float v21; // xmm0_4
  int v22; // eax
  struct D2D_RECT_F v24; // [rsp+38h] [rbp-69h] BYREF
  struct D2D_RECT_F v25; // [rsp+48h] [rbp-59h] BYREF
  struct D2D_POINT_2F v26; // [rsp+58h] [rbp-49h] BYREF
  float v27[2]; // [rsp+60h] [rbp-41h] BYREF
  float v28; // [rsp+68h] [rbp-39h]
  float v29; // [rsp+6Ch] [rbp-35h]
  float v30; // [rsp+70h] [rbp-31h]
  float v31; // [rsp+74h] [rbp-2Dh]

  v2 = 0;
  if ( !*((_QWORD *)this + 2) )
  {
LABEL_17:
    v22 = (*(__int64 (__fastcall **)(const struct ID2D1Geometry *, __int64))(*(_QWORD *)a2 + 72LL))(a2, 1LL);
    v2 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0xB8u, 0LL);
    return v2;
  }
  v5 = *(_QWORD *)a2;
  v25 = 0LL;
  (*(void (__fastcall **)(const struct ID2D1Geometry *, _QWORD, struct D2D_RECT_F *))(v5 + 32))(a2, 0LL, &v25);
  top = v25.top;
  bottom = v25.bottom;
  v24 = v25;
  if ( v25.right > v25.left && v25.bottom > v25.top )
  {
    v9 = (float)(v25.left - v25.right) * (float)(v25.left - v25.right);
    v10 = sqrtf_0((float)((float)(v25.top - v25.bottom) * (float)(v25.top - v25.bottom)) + v9);
    v11 = sqrtf_0((float)((float)(bottom - top) * (float)(bottom - top)) + v9);
    CMILMatrix::Transform2DRectToPerspective(*((CMILMatrix **)this + 2), &v24, &v26);
    v12 = v27;
    x = v26.x;
    y = v26.y;
    v15 = 1;
    v16 = v26.y;
    v17 = v26.x;
    do
    {
      if ( x > *v12 )
        x = *v12;
      else
        v17 = fmaxf(*v12, v17);
      v18 = v12[1];
      if ( y > v18 )
        y = v12[1];
      else
        v16 = fmaxf(v18, v16);
      ++v15;
      v12 += 2;
    }
    while ( v15 < 4 );
    if ( v17 > x && v16 > y && (x > -3.4028235e38 || v17 < 3.4028235e38) && (y > -3.4028235e38 || v16 < 3.4028235e38) )
    {
      v19 = v27[1] - v31;
      v20 = v27[0] - v30;
      v21 = sqrtf_0(
              (float)((float)(v26.x - v28) * (float)(v26.x - v28))
            + (float)((float)(v26.y - v29) * (float)(v26.y - v29)));
      fminf(1000.0, fmaxf(v21 / v10, sqrtf_0((float)(v20 * v20) + (float)(v19 * v19)) / v11));
      goto LABEL_17;
    }
  }
  return v2;
}
