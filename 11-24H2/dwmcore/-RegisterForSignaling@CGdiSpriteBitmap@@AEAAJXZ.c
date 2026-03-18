/*
 * XREFs of ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x180026420
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x180025CC4 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x180025ED0 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800260D0 (-GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x180026C0C (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180106F10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?StartSignaling@CRedirectedGDISurface@@QEAAJPEAXAEBU_LUID@@@Z @ 0x1802072EC (-StartSignaling@CRedirectedGDISurface@@QEAAJPEAXAEBU_LUID@@@Z.c)
 *     ?StartSignaling@CRedirectedGDISurface@@QEAAJXZ @ 0x18020AA44 (-StartSignaling@CRedirectedGDISurface@@QEAAJXZ.c)
 */

__int64 __fastcall CGdiSpriteBitmap::RegisterForSignaling(CGdiSpriteBitmap *this)
{
  char v1; // si
  unsigned int v2; // edi
  CRedirectedGDISurface *v4; // rcx
  int v5; // eax
  int started; // eax
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_BYTE *)this + 76);
  v2 = 0;
  v8 = 0;
  if ( *((_BYTE *)this + 151) )
  {
    *((_BYTE *)this + 153) = 0;
LABEL_5:
    CGdiSpriteBitmap::DirtyFromAccum(this);
    goto LABEL_6;
  }
  v4 = (CRedirectedGDISurface *)*((_QWORD *)this + 16);
  if ( *((_QWORD *)this + 45) )
  {
    started = CRedirectedGDISurface::StartSignaling(v4);
    v8 = started;
    v2 = started;
    if ( started < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18032B6A8, 2u, started, 0x293u, 0LL);
      goto LABEL_6;
    }
    v1 = 1;
  }
  else
  {
    v5 = CRedirectedGDISurface::StartSignaling(v4, *((void **)this + 52), (const struct _LUID *)this + 53);
    v8 = v5;
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18032B6A8, 2u, v5, 0x28Fu, 0LL);
      goto LABEL_6;
    }
  }
  *((_BYTE *)this + 151) = 1;
  if ( v1 )
    goto LABEL_5;
LABEL_6:
  TranslateDXGIorD3DErrorInContext(v2, 9LL, &v8);
  return v8;
}
