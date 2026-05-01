/*
 * XREFs of ??1?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAA@XZ @ 0x18023B36C
 * Callers:
 *     _CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured_::_1_::dtor$0 @ 0x1806CDB8C (_CDesktopPositioner--CreateAppViewOperationWithTitleBarAndChromeConfigured_--_1_--dtor$0.c)
 *     _FullScreenPositioner::PositionView_::_1_::dtor$1 @ 0x1806DFE1B (_FullScreenPositioner--PositionView_--_1_--dtor$1.c)
 *     _SurfaceHubPositioner::_RepositionAppViewsOnWorkAreaChange_::_1_::dtor$0 @ 0x1806DFE69 (_SurfaceHubPositioner--_RepositionAppViewsOnWorkAreaChange_--_1_--dtor$0.c)
 *     _CDesktopPositioner::PositionViewWithOptions_::_1_::dtor$0 @ 0x1806E818B (_CDesktopPositioner--PositionViewWithOptions_--_1_--dtor$0.c)
 *     _SurfaceHubPositioner::_SetDefaultLayout_::_1_::dtor$1 @ 0x1806F0327 (_SurfaceHubPositioner--_SetDefaultLayout_--_1_--dtor$1.c)
 *     _wil::MakeAndInitializeOrThrow_ApplicationViewOperation__::_1_::dtor$0 @ 0x1806F0369 (_wil--MakeAndInitializeOrThrow_ApplicationViewOperation__--_1_--dtor$0.c)
 *     __lambda_ff89e8324bd576a9030e3d114281d889_::operator()_::_1_::dtor$0 @ 0x1806F0410 (__lambda_ff89e8324bd576a9030e3d114281d889_--operator()_--_1_--dtor$0.c)
 *     _TabletModePositioner::CreateAndInitApplicationViewOperation_::_1_::dtor$0 @ 0x1806F0520 (_TabletModePositioner--CreateAndInitApplicationViewOperation_--_1_--dtor$0.c)
 *     _VoiceAssistantPositioner::SetViewStateForDesiredAppState_::_1_::dtor$2 @ 0x1806F1CE7 (_VoiceAssistantPositioner--SetViewStateForDesiredAppState_--_1_--dtor$2.c)
 *     _CDesktopPositioner::SetViewStateForDesiredAppState_::_1_::dtor$1 @ 0x1806F1D65 (_CDesktopPositioner--SetViewStateForDesiredAppState_--_1_--dtor$1.c)
 *     _CDesktopPositioner::PresentationChangedForView_::_1_::dtor$3 @ 0x1806F1D77 (_CDesktopPositioner--PresentationChangedForView_--_1_--dtor$3.c)
 *     _SnapServiceProvider::HandleDesktopModeSnapping_::_1_::dtor$0 @ 0x1806F6EF0 (_SnapServiceProvider--HandleDesktopModeSnapping_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewOperation>::~ComPtr<ApplicationViewOperation>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(a1);
}
