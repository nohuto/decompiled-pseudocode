/*
 * XREFs of ?RenderLayer@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180235340
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1_NHM@Z @ 0x18006D538 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUD2D_RECT_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800F5C80 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1801379A0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLinearInterpolationLayer::RenderLayer(CLinearInterpolationLayer *this, const void **a2)
{
  __m128i v2; // xmm1
  unsigned __int64 v3; // r14
  __m128i v4; // xmm0
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v13; // [rsp+20h] [rbp-38h]
  _DWORD v14[6]; // [rsp+40h] [rbp-18h] BYREF

  v2 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v3 = (unsigned __int64)(a2 + 3);
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v14[0] = 0;
  v14[1] = 0;
  v14[2] = _mm_cvtepi32_ps(v2).m128_u32[0];
  v14[3] = _mm_cvtepi32_ps(v4).m128_u32[0];
  if ( g_LockAndReadLayer )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1));
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v7 + 112LL))(v7, v3 & -(__int64)(a2 != 0LL));
  }
  v8 = CDrawingContext::PushTransformInternal(a2, 0LL, (__m128 *)&CMILMatrix::Identity, 0, 1);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x68u, 0LL);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 8LL))(v3);
    v11 = CDrawingContext::DrawBitmapRealization(
            (__int64)a2,
            (*((_QWORD *)this + 1) + 8LL) & -(__int64)(*((_QWORD *)this + 1) != 0LL),
            (__int64)v14,
            (__int64)this + 120,
            v13,
            v10,
            (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue);
    v9 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x6Fu, 0LL);
    CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
  }
  return v9;
}
