/*
 * XREFs of ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x1801AB0AC
 * Callers:
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x1801AAF08 (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERREN.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x1801AC6B8 (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MA.c)
 */

MagnifierCaptureBitsResponse *__fastcall MagnifierCaptureBitsResponse::MagnifierCaptureBitsResponse(
        MagnifierCaptureBitsResponse *this,
        struct CGlobalSurfaceManager *a2,
        struct CMagnifierRenderTarget *a3,
        struct CChannelContext *a4,
        const struct WICRect *a5,
        unsigned __int64 a6)
{
  CaptureBitsResponse::CaptureBitsResponse(this, a2, a4, 0LL, 1.0, a5, DXGI_FORMAT_B8G8R8A8_UNORM, 0LL);
  *((_QWORD *)this + 247) = a3;
  *(_QWORD *)this = &MagnifierCaptureBitsResponse::`vftable';
  if ( a3 )
    CMILRefCountImpl::AddReference((struct CMagnifierRenderTarget *)((char *)a3 + 8));
  *((_QWORD *)this + 248) = a6;
  return this;
}
