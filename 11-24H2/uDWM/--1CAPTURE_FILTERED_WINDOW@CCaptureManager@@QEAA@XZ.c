/*
 * XREFs of ??1CAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAA@XZ @ 0x1800AD0FC
 * Callers:
 *     _CCaptureManager::AddRemoveWindowToFilteredDisplayCapture_::_1_::dtor$2 @ 0x1800F82F1 (_CCaptureManager--AddRemoveWindowToFilteredDisplayCapture_--_1_--dtor$2.c)
 *     _CCaptureManager::_AddRemoveWindowToFilteredDisplayCapture_::_1_::dtor$1 @ 0x1800F8327 (_CCaptureManager--_AddRemoveWindowToFilteredDisplayCapture_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall CCaptureManager::CAPTURE_FILTERED_WINDOW::~CAPTURE_FILTERED_WINDOW(CBaseObject **this)
{
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(this + 1);
}
