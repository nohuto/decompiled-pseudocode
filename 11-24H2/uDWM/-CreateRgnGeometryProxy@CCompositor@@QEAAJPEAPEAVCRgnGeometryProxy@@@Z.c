/*
 * XREFs of ?CreateRgnGeometryProxy@CCompositor@@QEAAJPEAPEAVCRgnGeometryProxy@@@Z @ 0x18002932C
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180028130 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?SetCaptionRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z @ 0x18002F370 (-SetCaptionRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x18002F428 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ?SetBorderRegion@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@@Z @ 0x180063068 (-SetBorderRegion@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?SetBorderRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z @ 0x1800C7990 (-SetBorderRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateRgnGeometryProxy(CCompositor *this, struct CRgnGeometryProxy **a2)
{
  return CCompositor::CreateProxy<CRgnGeometryProxy>(this, a2);
}
