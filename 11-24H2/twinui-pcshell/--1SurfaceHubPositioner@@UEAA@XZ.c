/*
 * XREFs of ??1SurfaceHubPositioner@@UEAA@XZ @ 0x180213D2C
 * Callers:
 *     ??_ESurfaceHubPositioner@@UEAAPEAXI@Z @ 0x180213CF0 (--_ESurfaceHubPositioner@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x1800C0A54 (--1SmartCookie@@QEAA@XZ.c)
 */

void __fastcall SurfaceHubPositioner::~SurfaceHubPositioner(SurfaceHubPositioner *this)
{
  SmartCookie::~SmartCookie((SurfaceHubPositioner *)((char *)this + 448));
  SmartCookie::~SmartCookie((SurfaceHubPositioner *)((char *)this + 320));
  SmartCookie::~SmartCookie((SurfaceHubPositioner *)((char *)this + 192));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
  *((_DWORD *)this + 37) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>(this);
}
