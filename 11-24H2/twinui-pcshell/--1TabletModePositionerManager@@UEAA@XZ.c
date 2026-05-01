/*
 * XREFs of ??1TabletModePositionerManager@@UEAA@XZ @ 0x180517044
 * Callers:
 *     ??_GTabletModePositionerManager@@UEAAPEAXI@Z @ 0x1805171FC (--_GTabletModePositionerManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x1800C0A54 (--1SmartCookie@@QEAA@XZ.c)
 *     ??1CGITRegistrationList@@QEAA@XZ @ 0x1800C9398 (--1CGITRegistrationList@@QEAA@XZ.c)
 */

void __fastcall TabletModePositionerManager::~TabletModePositionerManager(TabletModePositionerManager *this)
{
  SmartCookie::~SmartCookie((TabletModePositionerManager *)((char *)this + 176));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
  CGITRegistrationList::~CGITRegistrationList((TabletModePositionerManager *)((char *)this + 112));
  *((_DWORD *)this + 27) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>((__int64)this);
}
