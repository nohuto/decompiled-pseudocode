/*
 * XREFs of ??1?$ComPtr@UIHoverPointerSourcePartner@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18009E7CC
 * Callers:
 *     _CTopLevelWindow::InitializeVisualTreeClone_::_1_::dtor$0 @ 0x18006797A (_CTopLevelWindow--InitializeVisualTreeClone_--_1_--dtor$0.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderBrush_::_1_::dtor$9 @ 0x1800679D4 (_CWindowBorder--CCachedBorderBrush--CreateBorderBrush_--_1_--dtor$9.c)
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$1 @ 0x180067C6E (_CWindowBorder--CreateBorderStructure_--_1_--dtor$1.c)
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$2 @ 0x180067CEC (_CWindowBorder--CreateBorderStructure_--_1_--dtor$2.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderBrush_::_1_::dtor$10 @ 0x18006820C (_CWindowBorder--CCachedBorderBrush--CreateBorderBrush_--_1_--dtor$10.c)
 *     _CAnimationEngine::AddToStoryboard_::_1_::dtor$0 @ 0x18006862F (_CAnimationEngine--AddToStoryboard_--_1_--dtor$0.c)
 *     _CAnimationEngine::AddToStoryboard_::_1_::dtor$1 @ 0x180068641 (_CAnimationEngine--AddToStoryboard_--_1_--dtor$1.c)
 *     _CAnimationEngine::AddToStoryboard_::_1_::dtor$2 @ 0x180068653 (_CAnimationEngine--AddToStoryboard_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::IHoverPointerSourcePartner>::~ComPtr<Windows::UI::Composition::IHoverPointerSourcePartner>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
}
