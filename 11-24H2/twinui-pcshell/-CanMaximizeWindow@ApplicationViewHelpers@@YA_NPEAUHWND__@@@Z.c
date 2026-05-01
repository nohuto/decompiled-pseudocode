/*
 * XREFs of ?CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x18008C6BC
 * Callers:
 *     ?CanSnapWindow@CShellSnapComponent@@AEAA_NPEAUHWND__@@@Z @ 0x18008C5F8 (-CanSnapWindow@CShellSnapComponent@@AEAA_NPEAUHWND__@@@Z.c)
 *     ?OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUHitTestPartNotifyEventArgs@3456@@Z @ 0x1800B7DE0 (-OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 *     ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x1804BE964 (-IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1804F2810 (-OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@.c)
 *     ?ArrangeViewForFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804FA678 (-ArrangeViewForFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180502640 (-MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1805042F0 (-OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall ApplicationViewHelpers::CanMaximizeWindow(ApplicationViewHelpers *this, HWND a2)
{
  return ((unsigned int)GetWindowLongPtrW((HWND)this, -16) >> 16) & 1;
}
