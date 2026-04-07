/*
 * XREFs of ?CreateSolidColorLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z @ 0x180063990
 * Callers:
 *     ?SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18002E99C (-SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x180034454 (-SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180063124 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetCaptionColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180063754 (-SetCaptionColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z @ 0x1800DA03C (-AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateSolidColorLegacyMilBrushProxy(
        CCompositor *this,
        struct CSolidColorLegacyMilBrushProxy **a2)
{
  return CCompositor::CreateProxy<CSolidColorLegacyMilBrushProxy>(this, a2);
}
