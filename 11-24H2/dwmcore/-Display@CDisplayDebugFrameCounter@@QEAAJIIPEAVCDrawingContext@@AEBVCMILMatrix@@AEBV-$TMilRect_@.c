/*
 * XREFs of ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x18025D8A0
 * Callers:
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180057F90 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     CDebugFrameCounter::RenderGlobalFrameCounter__lambda_586b8124a7a66c0b83ac918785996de3___ @ 0x180097998 (CDebugFrameCounter--RenderGlobalFrameCounter__lambda_586b8124a7a66c0b83ac918785996de3___.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x1800AA238 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800AB7C8 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800D07A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800F5410 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800F5A70 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800F5C80 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1801379A0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x18025DBAC (-DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV-$TMilRect_@MUD2D_RECT_F.c)
 */

__int64 __fastcall CDisplayDebugFrameCounter::Display(
        CDisplayDebugFrameCounter *this,
        unsigned int a2,
        unsigned int a3,
        CDrawingContext *a4,
        __m128 *a5,
        __int128 *a6,
        void *a7,
        _OWORD *a8)
{
  _OWORD *v11; // r14
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  __m128 v14; // xmm1
  __int32 v15; // eax
  __int128 v16; // xmm0
  const struct D2D_RECT_F *v17; // r9
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // eax
  int v21; // eax
  _OWORD v24[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+90h] [rbp-70h]
  int v26; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v27; // [rsp+A4h] [rbp-5Ch]
  __int128 v28; // [rsp+B4h] [rbp-4Ch]
  int v29; // [rsp+C4h] [rbp-3Ch]
  __m128 v30[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int32 v31; // [rsp+110h] [rbp+10h]
  __int64 v32[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v33[2]; // [rsp+130h] [rbp+30h] BYREF

  v25 = 0;
  v11 = 0LL;
  v12 = a5[1];
  v30[0] = *a5;
  v13 = a5[2];
  v30[1] = v12;
  v14 = a5[3];
  v15 = a5[4].m128_i32[0];
  v30[2] = v13;
  v16 = *a6;
  v31 = v15;
  v30[3] = v14;
  *(_OWORD *)v33 = v16;
  if ( !CMILMatrix::IsIdentity<0>((__int64)v30) )
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v30, v17, (float *)v33);
  if ( (_DWORD)a7 == 1 )
  {
    v24[0] = _xmm;
    v24[1] = _xmm;
    BYTE1(v25) = BYTE1(v25) & 0xC0 | 0x29;
    v24[2] = _xmm;
    v24[3] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
    LOBYTE(v25) = -86;
    CMILMatrix::Rotate90((CMILMatrix *)v24);
    CMILMatrix::Translate((CMILMatrix *)v24, *(float *)&v33[1], 0.0);
    CMILMatrix::Multiply((CMILMatrix *)v30, (const struct CMILMatrix *)v24);
    v11 = v24;
  }
  v32[1] = 0LL;
  v32[0] = 0LL;
  v27 = 0LL;
  LODWORD(v27) = 0;
  v29 = 0;
  v28 = 0LL;
  v26 = 2;
  v18 = CDrawingContext::PushRenderOptionsInternal(a4, 0LL, (const struct MilRenderOptions *)&v26, 1);
  v19 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x3Eu, 0LL);
  }
  else
  {
    v20 = CDrawingContext::PushTransformInternal((const void **)a4, 0LL, v30, 0, 1);
    v19 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x41u, 0LL);
    }
    else
    {
      v21 = CDisplayDebugFrameCounter::DisplayText(this, a2, a3, a4, (__int64)v33, (int)a7, (__int64)v32);
      v19 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x44u, 0LL);
      }
      else if ( v11 )
      {
        *(_OWORD *)v33 = *(_OWORD *)v32;
        CMILMatrix::Transform2DBoundsHelper<0>((__int64)v11, (const struct D2D_RECT_F *)v33, (float *)v32);
      }
      CDrawingContext::PopTransformInternal(a4, 1);
    }
    CDrawingContext::PopRenderOptionsInternal(a4, 1);
  }
  if ( a8 )
    *a8 = *(_OWORD *)v32;
  return v19;
}
