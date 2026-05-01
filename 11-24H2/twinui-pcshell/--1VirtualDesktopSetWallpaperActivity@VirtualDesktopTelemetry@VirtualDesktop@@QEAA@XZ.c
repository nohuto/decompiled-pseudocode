/*
 * XREFs of ??1VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180152154
 * Callers:
 *     ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180205F60 (-SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___::_CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___ @ 0x1805524E0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392_ea_1805524E0.c)
 *     _CVirtualDesktopManager::SetDesktopWallpaperInternal_::_1_::dtor$1 @ 0x1806DA4BB (_CVirtualDesktopManager--SetDesktopWallpaperInternal_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180152180 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::~VirtualDesktopSetWallpaperActivity(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity *this)
{
  *(_QWORD *)this = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(this);
}
