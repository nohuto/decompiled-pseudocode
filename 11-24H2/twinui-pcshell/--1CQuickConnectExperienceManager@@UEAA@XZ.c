/*
 * XREFs of ??1CQuickConnectExperienceManager@@UEAA@XZ @ 0x180397C90
 * Callers:
 *     ??_ECQuickConnectExperienceManager@@UEAAPEAXI@Z @ 0x180398220 (--_ECQuickConnectExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001C8F0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1800862E0 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 */

void __fastcall CQuickConnectExperienceManager::~CQuickConnectExperienceManager(CQuickConnectExperienceManager *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 51);
  WindowsDeleteString(*((HSTRING *)this + 47));
  *((_QWORD *)this + 47) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 46);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 42);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 41);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 40);
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)this + 35);
  CSingleViewShellExperience::~CSingleViewShellExperience((CQuickConnectExperienceManager *)((char *)this + 72));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IVirtualDesktopSwitchAnimator,IVirtualDesktopSwitchAnimator2>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IVirtualDesktopSwitchAnimator,IVirtualDesktopSwitchAnimator2>((__int64)this);
}
