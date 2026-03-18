/*
 * XREFs of ?RenderLayer@CColorSpaceLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18027B4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1_NHM@Z @ 0x18006D538 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUD2D_RECT_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorSpaceLayer::RenderLayer(CColorSpaceLayer *this, struct CDrawingContext *a2)
{
  __m128i v2; // xmm1
  __m128i v4; // xmm0
  __int64 v6; // rax
  __int64 (__fastcall *v7)(char *); // rax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+20h] [rbp-48h]
  _DWORD v13[4]; // [rsp+40h] [rbp-28h] BYREF

  v2 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v13[0] = 0;
  v6 = *((_QWORD *)a2 + 3);
  v13[1] = 0;
  v7 = *(__int64 (__fastcall **)(char *))(v6 + 8);
  v13[2] = _mm_cvtepi32_ps(v2).m128_u32[0];
  v13[3] = _mm_cvtepi32_ps(v4).m128_u32[0];
  v8 = v7((char *)a2 + 24);
  v9 = CDrawingContext::DrawBitmapRealization(
         (__int64)a2,
         (*((_QWORD *)this + 1) + 8LL) & -(__int64)(*((_QWORD *)this + 1) != 0LL),
         (__int64)v13,
         (__int64)v13,
         v12,
         v8,
         (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x52u, 0LL);
  return v10;
}
