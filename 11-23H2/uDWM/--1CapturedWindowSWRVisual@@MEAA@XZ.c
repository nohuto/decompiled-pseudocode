/*
 * XREFs of ??1CapturedWindowSWRVisual@@MEAA@XZ @ 0x1800CF990
 * Callers:
 *     ??_GCapturedWindowSWRVisual@@MEAAPEAXI@Z @ 0x1800CFBB0 (--_GCapturedWindowSWRVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180008E50 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CapturedWindowSWRVisual::~CapturedWindowSWRVisual(CapturedWindowSWRVisual *this)
{
  *(_QWORD *)this = &CapturedWindowSWRVisual::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CapturedWindowSWRVisual::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)this + 3);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)this + 3);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
