/*
 * XREFs of ??1?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@QEAA@XZ @ 0x18021D690
 * Callers:
 *     _ActivateApplicationForExperienceWithPropertySet_::_1_::dtor$1 @ 0x1806CB8DC (_ActivateApplicationForExperienceWithPropertySet_--_1_--dtor$1.c)
 *     _WindowArrangementView::AddTempAppVisualsToLayoutOperation_::_1_::dtor$3 @ 0x1806D73BB (_WindowArrangementView--AddTempAppVisualsToLayoutOperation_--_1_--dtor$3.c)
 *     _VirtualDesktopTabletModePolicy::TransitionToDesktopMode_::_1_::dtor$1 @ 0x1806E5254 (_VirtualDesktopTabletModePolicy--TransitionToDesktopMode_--_1_--dtor$1.c)
 *     _AppResizeView::UpdateDropFeedback_::_1_::dtor$0 @ 0x1806E6DB3 (_AppResizeView--UpdateDropFeedback_--_1_--dtor$0.c)
 *     _CDesktopPositioner::ControlGained_::_1_::dtor$5 @ 0x1806F1D53 (_CDesktopPositioner--ControlGained_--_1_--dtor$5.c)
 *     _TabletModePositionerOperation::SwitchToCustomLayout_::_1_::dtor$1 @ 0x1806F1E5E (_TabletModePositionerOperation--SwitchToCustomLayout_--_1_--dtor$1.c)
 *     _TabletModePositioner::ApplyLayoutOperationHelper_::_1_::dtor$7 @ 0x1806F1E94 (_TabletModePositioner--ApplyLayoutOperationHelper_--_1_--dtor$7.c)
 *     _TabletModePositioner::ViewRemoved_::_1_::dtor$2 @ 0x1806F1F6C (_TabletModePositioner--ViewRemoved_--_1_--dtor$2.c)
 *     _TabletModeViewManager::StartSwipeHelper_::_1_::dtor$2 @ 0x1806F1FD8 (_TabletModeViewManager--StartSwipeHelper_--_1_--dtor$2.c)
 *     _TabletModeViewManager::StartSwipeHelper_::_1_::dtor$6 @ 0x1806F1FEA (_TabletModeViewManager--StartSwipeHelper_--_1_--dtor$6.c)
 *     _AppResizeView::CommitResize_::_1_::dtor$1 @ 0x1806F2044 (_AppResizeView--CommitResize_--_1_--dtor$1.c)
 *     _WindowArrangementView::AddTempAppVisualsToLayoutOperation_::_1_::dtor$2 @ 0x1806F2056 (_WindowArrangementView--AddTempAppVisualsToLayoutOperation_--_1_--dtor$2.c)
 *     _WindowArrangementView::ProcessDrop_::_1_::dtor$2 @ 0x1806F20E6 (_WindowArrangementView--ProcessDrop_--_1_--dtor$2.c)
 *     _WindowArrangementView::UpdateDropFeedback_::_1_::dtor$2 @ 0x1806F212E (_WindowArrangementView--UpdateDropFeedback_--_1_--dtor$2.c)
 *     _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$5 @ 0x1807043BC (_CBackupLocationManager--CreateTombstoneLnk_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::~ComPtr<IAppLayoutOperationItem>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(a1);
}
