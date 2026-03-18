/*
 * XREFs of ??R?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@QEBAXPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1801DB9E0
 * Callers:
 *     ?RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800B22A0 (-RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Create@CShadowBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIBitmapResource@@PEAV6@@Z @ 0x1801DB0CC (-Create@CShadowBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrus.c)
 *     ?Create@CShapeBitmapProducer@@SAJPEAVCShapeTree@@AEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2$$QEAV?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@PEAPEAV1@@Z @ 0x1801DB2B8 (-Create@CShapeBitmapProducer@@SAJPEAVCShapeTree@@AEBUD2D_SIZE_F@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ?EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealization@1@@Z @ 0x1801DB664 (-EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealiza.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18021B024 (--1-$out_param_t@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCac.c)
 *     ??$?4U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@$0A@@?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18029035C (--$-4U-$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@$0A@@-$unique_ptr@VCCache.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::default_delete<CCachedImageProducer::CCachedRealization>::operator()(__int64 a1, __int64 *a2)
{
  if ( a2 )
  {
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(a2);
    operator delete(a2, 8uLL);
  }
}
