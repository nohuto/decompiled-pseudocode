/*
 * XREFs of ?CreateBitmapFromWicBitmap@CD2DContext@@QEAAJPEAUIWICBitmapSource@@PEAPEAUID2D1Bitmap@@@Z @ 0x1802C4C54
 * Callers:
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x1802BB74C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ED30, 0xAu, v4, 0x10Cu, 0LL);
  return CD2DContext::TranslateDXGIorD3DErrorInContext((__int64)this, v6, v5);
}
