/*
 * XREFs of ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1801D6BFC
 * Callers:
 *     ?EnsureBitmap@CD2DBitmap@@IEAAJXZ @ 0x1801D6A18 (-EnsureBitmap@CD2DBitmap@@IEAAJXZ.c)
 *     ?EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ @ 0x1802D6574 (-EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::CreateD2DBitmapFromDxgiSurface(
        CD2DContext *this,
        struct IDXGISurface *a2,
        const struct D2D1_BITMAP_PROPERTIES1 *a3,
        struct ID2D1Bitmap1 **a4)
{
  __int64 v5; // rax
  int v6; // eax
  int v7; // r8d
  int v8; // ebx

  v5 = (__int64)this + 1096;
  if ( !this )
    v5 = 1112LL;
  if ( *(_DWORD *)v5 )
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0xC8u, 0LL);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct IDXGISurface *, const struct D2D1_BITMAP_PROPERTIES1 *, struct ID2D1Bitmap1 **))(**((_QWORD **)this + 25) + 496LL))(
           *((_QWORD *)this + 25),
           a2,
           a3,
           a4);
    v8 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xCCu, 0LL);
  }
  return CD2DContext::TranslateDXGIorD3DErrorInContext((__int64)this, v8, v7);
}
