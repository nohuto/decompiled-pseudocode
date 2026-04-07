/*
 * XREFs of ?Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z @ 0x180063844
 * Callers:
 *     ?SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18002E99C (-SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x180034454 (-SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180063124 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetCaptionColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180063754 (-SetCaptionColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z @ 0x1800DA03C (-AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrushProxy::Update(
        CSolidColorLegacyMilBrushProxy *this,
        double a2,
        const struct _D3DCOLORVALUE *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _D3DCOLORVALUE *, const struct _D3DCOLORVALUE *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 648LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a3,
           a3);
}
