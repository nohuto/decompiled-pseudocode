/*
 * XREFs of ??1CPerMonitorDesktopVisibilityService@@UEAA@XZ @ 0x1801D6A54
 * Callers:
 *     ??_ECPerMonitorDesktopVisibilityService@@UEAAPEAXI@Z @ 0x1804E8EE8 (--_ECPerMonitorDesktopVisibilityService@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CGITRegistrationList@@QEAA@XZ @ 0x1800C9398 (--1CGITRegistrationList@@QEAA@XZ.c)
 */

void __fastcall CPerMonitorDesktopVisibilityService::~CPerMonitorDesktopVisibilityService(
        CPerMonitorDesktopVisibilityService *this)
{
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this + 29);
  CGITRegistrationList::~CGITRegistrationList((CPerMonitorDesktopVisibilityService *)((char *)this + 160));
  *((_DWORD *)this + 39) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IDesktopVisibilityService,IFullScreenPositionerNotification,Microsoft::WRL::FtmBase>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IDesktopVisibilityService,IFullScreenPositionerNotification,Microsoft::WRL::FtmBase>(this);
}
