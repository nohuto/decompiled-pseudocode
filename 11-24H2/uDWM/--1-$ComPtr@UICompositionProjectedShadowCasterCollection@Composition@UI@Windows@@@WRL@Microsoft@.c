/*
 * XREFs of ??1?$ComPtr@UICompositionProjectedShadowCasterCollection@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180086E28
 * Callers:
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$9 @ 0x1800F6562 (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$9.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$11 @ 0x1800F6586 (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$11.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$6 @ 0x1800F695E (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$6.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$2 @ 0x1800F69B8 (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$2.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$1 @ 0x1800F69CA (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$1.c)
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$5 @ 0x1800F69DC (_CWindowBorder--CreateBorderStructure_--_1_--dtor$5.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$5 @ 0x1800F69EE (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$5.c)
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$1 @ 0x1800F6A12 (_CWindowBorder--CreateBorderStructure_--_1_--dtor$1.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$4 @ 0x1800F6A24 (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$4.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$0 @ 0x1800F6A36 (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$0.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$7 @ 0x1800F6A5A (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$7.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$8 @ 0x1800F6A6C (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$8.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$10 @ 0x1800F6A7E (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$10.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$12 @ 0x1800F6A90 (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_1_--dtor$12.c)
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$4 @ 0x1800F6AC6 (_CWindowBorder--CreateBorderStructure_--_1_--dtor$4.c)
 *     _CSpriteVisual::Initialize_::_1_::dtor$1 @ 0x1800F6AFC (_CSpriteVisual--Initialize_--_1_--dtor$1.c)
 *     _CSpriteVisual::Initialize_::_1_::dtor$2 @ 0x1800F6B0E (_CSpriteVisual--Initialize_--_1_--dtor$2.c)
 *     _CSpriteVisual::Initialize_::_1_::dtor$3 @ 0x1800F6B20 (_CSpriteVisual--Initialize_--_1_--dtor$3.c)
 *     _CSpriteVisual::Initialize_::_1_::dtor$4 @ 0x1800F6B32 (_CSpriteVisual--Initialize_--_1_--dtor$4.c)
 *     _CSpriteVisual::Initialize_::_1_::dtor$5 @ 0x1800F6B44 (_CSpriteVisual--Initialize_--_1_--dtor$5.c)
 *     _CAnimationEngine::AddToStoryboard_::_1_::dtor$1 @ 0x1800F71DA (_CAnimationEngine--AddToStoryboard_--_1_--dtor$1.c)
 *     _CAnalogCompositorManager::CAnalogCompositorManager_::_1_::dtor$2 @ 0x1800F779D (_CAnalogCompositorManager--CAnalogCompositorManager_--_1_--dtor$2.c)
 *     _CAnalogCompositorManager::CAnalogCompositorManager_::_1_::dtor$3 @ 0x1800F77B3 (_CAnalogCompositorManager--CAnalogCompositorManager_--_1_--dtor$3.c)
 *     _CAnalogCompositorManager::CAnalogCompositorManager_::_1_::dtor$4 @ 0x1800F77C9 (_CAnalogCompositorManager--CAnalogCompositorManager_--_1_--dtor$4.c)
 *     _CAnalogCompositorManager::CAnalogCompositorManager_::_1_::dtor$5 @ 0x1800F77DF (_CAnalogCompositorManager--CAnalogCompositorManager_--_1_--dtor$5.c)
 *     _wil::get_range_nothrow_Windows::Devices::Display::Core::DisplayTarget____::_1_::dtor$1 @ 0x1800F81F1 (_wil--get_range_nothrow_Windows--Devices--Display--Core--DisplayTarget____--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
}
