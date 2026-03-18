/*
 * XREFs of ?DrawImageResource_TileMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@MAEBUD2D_POINT_2F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18024E4B0
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18000F914 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawImageResource_FillMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x18024E820 (-DrawImageResource_FillMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAV.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     fmodf_0 @ 0x1802E88C0 (fmodf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderData::DrawImageResource_TileMode(
        struct CDrawingContext *a1,
        struct CDrawListEntryBuilder *a2,
        struct CImageSource *a3,
        float a4,
        float *a5,
        float *a6)
{
  __int64 v7; // rax
  __int64 (__fastcall *v11)(char *, __int64 *); // rax
  int v12; // eax
  unsigned int v13; // ebx
  float top; // xmm0_4
  float left; // xmm1_4
  float bottom; // xmm7_4
  float right; // xmm8_4
  float v18; // xmm8_4
  float v19; // xmm7_4
  float v20; // xmm0_4
  float v21; // xmm11_4
  float v22; // xmm0_4
  float v23; // xmm10_4
  float v24; // xmm13_4
  float v25; // xmm12_4
  float i; // xmm9_4
  float v27; // xmm6_4
  float v28; // xmm2_4
  float v29; // xmm3_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm3_4
  float v34; // xmm4_4
  float v35; // xmm1_4
  bool v36; // zf
  float v37; // xmm0_4
  int v38; // eax
  float v39; // xmm0_4
  float v40; // xmm0_4
  __int64 v42; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_RECT_F v43; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v44[64]; // [rsp+50h] [rbp-B0h] BYREF
  int v45; // [rsp+90h] [rbp-70h]
  struct D2D_RECT_F v46; // [rsp+A0h] [rbp-60h] BYREF
  struct D2D_RECT_F v47; // [rsp+B0h] [rbp-50h] BYREF

  v45 = 0;
  v7 = *((_QWORD *)a3 + 9);
  v42 = 0LL;
  v47 = 0LL;
  v11 = *(__int64 (__fastcall **)(char *, __int64 *))(v7 + 64);
  v46 = 0LL;
  v12 = v11((char *)a3 + 72, &v42);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x3D8u, 0LL);
  }
  else
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, struct D2D_RECT_F *))(*(_QWORD *)v42 + 40LL))(
           v42,
           v44,
           &v47) )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v44, &v47, &v46.left);
      top = v46.top;
      left = v46.left;
      bottom = v46.bottom;
      right = v46.right;
    }
    else
    {
      left = v47.left;
      top = v47.top;
      right = v47.right;
      bottom = v47.bottom;
    }
    v18 = right - left;
    v19 = bottom - top;
    v20 = fmodf_0(*a5, v18);
    v21 = v20;
    if ( v20 < 0.0 )
      v21 = v20 + v18;
    v22 = fmodf_0(a5[1], v19);
    v23 = v22;
    if ( v22 < 0.0 )
      v23 = v22 + v19;
    v24 = v18 - v21;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v18 - v21) & _xmm) < 0.0000011920929 )
      v24 = v18;
    v25 = v19 - v23;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - v23) & _xmm) < 0.0000011920929 )
      v25 = v19;
    for ( i = a6[1]; a6[3] > i; i = i + v40 )
    {
      v27 = *a6;
      v28 = *a6;
      while ( 1 )
      {
        v29 = a6[2];
        if ( v29 <= v27 )
          break;
        *(_QWORD *)&v46.left = 0LL;
        v43.left = v27;
        v43.top = i;
        if ( v27 == v28 )
          v30 = v24;
        else
          v30 = v18;
        v31 = v30 + v27;
        if ( i == a6[1] )
          v32 = v25;
        else
          v32 = v19;
        v33 = fminf(v29, v31);
        v34 = fminf(a6[3], v32 + i);
        v43.right = v33;
        v43.bottom = v34;
        if ( v27 == v28 )
          v35 = v21;
        else
          v35 = 0.0;
        v36 = i == a6[1];
        v46.left = v35;
        if ( v36 )
          v37 = v23;
        else
          v37 = 0.0;
        v46.top = v37;
        v46.right = (float)(v33 - v27) + v35;
        v46.bottom = (float)(v34 - i) + v37;
        v38 = CRenderData::DrawImageResource_FillMode(a1, a2, a3, &v46, &v43, a4);
        v13 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v38, 0x426u, 0LL);
          goto LABEL_40;
        }
        v28 = *a6;
        if ( v27 == *a6 )
          v39 = v24;
        else
          v39 = v18;
        v27 = v27 + v39;
      }
      if ( i == a6[1] )
        v40 = v25;
      else
        v40 = v19;
    }
  }
LABEL_40:
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  return v13;
}
