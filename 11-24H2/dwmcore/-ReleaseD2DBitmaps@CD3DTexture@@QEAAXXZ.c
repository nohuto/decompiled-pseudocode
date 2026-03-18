/*
 * XREFs of ?ReleaseD2DBitmaps@CD3DTexture@@QEAAXXZ @ 0x18021E8A4
 * Callers:
 *     ?ReleaseD3DResources@CD3DTexture@@EEAAXXZ @ 0x1801D33B0 (-ReleaseD3DResources@CD3DTexture@@EEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z @ 0x1801240CC (--$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z.c)
 */

void __fastcall CD3DTexture::ReleaseD2DBitmaps(CD3DTexture *this)
{
  ReleaseInterface<IDXGIFactory7>((__int64 *)this + 28);
  ReleaseInterface<IDXGIFactory7>((__int64 *)this + 29);
}
