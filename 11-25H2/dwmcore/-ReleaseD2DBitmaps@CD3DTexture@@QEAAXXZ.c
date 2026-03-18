/*
 * XREFs of ?ReleaseD2DBitmaps@CD3DTexture@@QEAAXXZ @ 0x180229C90
 * Callers:
 *     ?ReleaseD3DResources@CD3DTexture@@EEAAXXZ @ 0x1801E0630 (-ReleaseD3DResources@CD3DTexture@@EEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z @ 0x1801779AC (--$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z.c)
 */

void __fastcall CD3DTexture::ReleaseD2DBitmaps(CD3DTexture *this)
{
  ReleaseInterface<IDXGIFactory7>((__int64 *)this + 28);
  ReleaseInterface<IDXGIFactory7>((__int64 *)this + 29);
}
