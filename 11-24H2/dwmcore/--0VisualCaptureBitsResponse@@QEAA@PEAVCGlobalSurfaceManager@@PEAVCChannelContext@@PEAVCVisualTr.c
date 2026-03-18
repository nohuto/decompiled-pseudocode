/*
 * XREFs of ??0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@_KPEAX6@Z @ 0x18018D498
 * Callers:
 *     ?Partition_DesktopCaptureBits@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x18018EDC0 (-Partition_DesktopCaptureBits@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?Channel_VisualCaptureBits@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x1802634FC (-Channel_VisualCaptureBits@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 * Callees:
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x18018D52C (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MA.c)
 *     ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x18018E67C (--4-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z.c)
 */

VisualCaptureBitsResponse *__fastcall VisualCaptureBitsResponse::VisualCaptureBitsResponse(
        VisualCaptureBitsResponse *this,
        struct CGlobalSurfaceManager *a2,
        struct CChannelContext *a3,
        struct CVisualTree *a4,
        const struct WICRect *a5,
        enum DXGI_FORMAT a6,
        unsigned __int64 a7,
        void *a8,
        void *a9)
{
  CaptureBitsResponse::CaptureBitsResponse(this, a2, a3, a4, 1.0, a5, a6, a7);
  *(_QWORD *)this = &VisualCaptureBitsResponse::`vftable';
  *((_QWORD *)this + 247) = 0LL;
  *((_QWORD *)this + 248) = a8;
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=((char *)this + 1976, *((_QWORD *)a4 + 9));
  *((_QWORD *)this + 243) = a9;
  return this;
}
