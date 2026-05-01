/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180552620
 * Callers:
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1805577C4 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 *     ?SwitchDesktopWithAnimation@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180557F60 (-SwitchDesktopWithAnimation@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?SwitchRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1805582E0 (-SwitchRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchTyp.c)
 *     ?InvokeSwitchDesktopWithAnimation@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirection@@@Z @ 0x18055A5B0 (-InvokeSwitchDesktopWithAnimation@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirec.c)
 *     _lambda_f2ca46843af7fe20e5ddf713755dabab_::operator() @ 0x18055D5C0 (_lambda_f2ca46843af7fe20e5ddf713755dabab_--operator().c)
 *     ?AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@W4VirtualDesktopSwitchType@@@Z @ 0x180567760 (-AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitc.c)
 *     ?Cleanup@VirtualDesktopSwitchAnimator@@UEAAXXZ @ 0x180568070 (-Cleanup@VirtualDesktopSwitchAnimator@@UEAAXXZ.c)
 *     ?SwitchDesktop2@VirtualDesktopSwitchAnimator@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@PEAUISwitchThumbnailDeviceManager@@PEAUIImmersiveSettingsCache@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4VirtualDesktopSwitchType@@@Z @ 0x1805683D0 (-SwitchDesktop2@VirtualDesktopSwitchAnimator@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDi.c)
 *     _lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4_::operator() @ 0x180569BC4 (_lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4_--operator().c)
 *     _lambda_9a7bfcc99c4e75b6f719d590bcf52609_::operator() @ 0x180569C58 (_lambda_9a7bfcc99c4e75b6f719d590bcf52609_--operator().c)
 *     ?CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@IUtagRECT@@@Z @ 0x180569E88 (-CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V-$shared_any_.c)
 *     __lambda_9a7bfcc99c4e75b6f719d590bcf52609_::operator()_::_1_::dtor$0 @ 0x1806F2AC2 (__lambda_9a7bfcc99c4e75b6f719d590bcf52609_--operator()_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::SwitchRemoteDesktop_::_1_::dtor$0 @ 0x1806F2AD4 (_CVirtualDesktopManager--SwitchRemoteDesktop_--_1_--dtor$0.c)
 *     _CVirtualDesktopHotkeyHandler::InvokeSwitchDesktopWithAnimation_::_1_::dtor$4 @ 0x1806F2AE6 (_CVirtualDesktopHotkeyHandler--InvokeSwitchDesktopWithAnimation_--_1_--dtor$4.c)
 *     _VirtualDesktopSwitchAnimator::AnimateOperation2_::_1_::dtor$0 @ 0x1806F2FC7 (_VirtualDesktopSwitchAnimator--AnimateOperation2_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180552580 (--1-$com_ptr_t@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@Uerr_returncode_.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>,wil::err_returncode_policy>((void **)(a1 + 56));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
