/*
 * XREFs of ??1EmulatedFullScreenManager@@UEAA@XZ @ 0x1802C24BC
 * Callers:
 *     ??_GEmulatedFullScreenManager@@UEAAPEAXI@Z @ 0x18021696C (--_GEmulatedFullScreenManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall EmulatedFullScreenManager::~EmulatedFullScreenManager(EmulatedFullScreenManager *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
  *((_DWORD *)this + 39) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IDesktopVisibilityService,IFullScreenPositionerNotification,Microsoft::WRL::FtmBase>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IDesktopVisibilityService,IFullScreenPositionerNotification,Microsoft::WRL::FtmBase>(this);
}
