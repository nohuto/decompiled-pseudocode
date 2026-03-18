/*
 * XREFs of ?CreateBitmapFromWicBitmap@CD2DContext@@QEAAJPEAUIWICBitmapSource@@PEAPEAUID2D1Bitmap@@@Z @ 0x1802BB5F4
 * Callers:
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x1802B1BBC (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::CreateBitmapFromWicBitmap(
        CD2DContext *this,
        struct IWICBitmapSource *a2,
        struct ID2D1Bitmap **a3)
{
  int v4; // eax
  int v5; // r8d
  int v6; // ebx

  v4 = (*(__int64 (__fastcall **)(_QWORD, struct IWICBitmapSource *, _QWORD, struct ID2D1Bitmap **))(**((_QWORD **)this + 25) + 40LL))(
         *((_QWORD *)this + 25),
         a2,
         0LL,
         a3);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032B080, 0xAu, v4, 0x10Cu, 0LL);
  return CD2DContext::TranslateDXGIorD3DErrorInContext((__int64)this, v6, v5);
}
