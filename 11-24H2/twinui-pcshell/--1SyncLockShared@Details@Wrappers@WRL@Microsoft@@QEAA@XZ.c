/*
 * XREFs of ??1SyncLockShared@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180126FB4
 * Callers:
 *     _VirtualDesktopsApi::IsWindowOnCurrentVirtualDesktop_::_1_::dtor$0 @ 0x1806CB290 (_VirtualDesktopsApi--IsWindowOnCurrentVirtualDesktop_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::OnPositionChanged_::_1_::dtor$5 @ 0x1806CC293 (_TouchKeyboardExperienceManager--OnPositionChanged_--_1_--dtor$5.c)
 *     _CVirtualDesktopManager::GetDesktopSwitchIncludeExcludeViews_::_1_::dtor$0 @ 0x1806CE3FD (_CVirtualDesktopManager--GetDesktopSwitchIncludeExcludeViews_--_1_--dtor$0.c)
 *     _VirtualDesktopsApi::GetWindowDesktopId_::_1_::dtor$0 @ 0x1806D4E80 (_VirtualDesktopsApi--GetWindowDesktopId_--_1_--dtor$0.c)
 *     _CVirtualDesktop::IsViewVisible_::_1_::dtor$0 @ 0x1806D66C9 (_CVirtualDesktop--IsViewVisible_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::UpdateVisibileViewsBorder_::_1_::dtor$0 @ 0x1806D8BE3 (_TouchKeyboardExperienceManager--UpdateVisibileViewsBorder_--_1_--dtor$0.c)
 *     _VirtualDesktopController::MoveSwitchItemToDesktop_::_1_::dtor$0 @ 0x1806DD356 (_VirtualDesktopController--MoveSwitchItemToDesktop_--_1_--dtor$0.c)
 *     _VirtualDesktopController::CanSwitchItemMoveDesktops_::_1_::dtor$0 @ 0x1806EDE74 (_VirtualDesktopController--CanSwitchItemMoveDesktops_--_1_--dtor$0.c)
 *     _VirtualDesktopController::RemoveDesktop_::_1_::dtor$0 @ 0x1806EDFC7 (_VirtualDesktopController--RemoveDesktop_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockShared::~SyncLockShared(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ReleaseSRWLockShared(v2);
    *this = 0LL;
  }
}
