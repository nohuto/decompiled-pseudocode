/*
 * XREFs of ??1CTaskContinuityActivitiesExperienceManager@@UEAA@XZ @ 0x180381FB0
 * Callers:
 *     ??_ECTaskContinuityActivitiesExperienceManager@@UEAAPEAXI@Z @ 0x180381FF0 (--_ECTaskContinuityActivitiesExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1800862E0 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 */

void __fastcall CTaskContinuityActivitiesExperienceManager::~CTaskContinuityActivitiesExperienceManager(
        CTaskContinuityActivitiesExperienceManager *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 36);
  CSingleViewShellExperience::~CSingleViewShellExperience((CTaskContinuityActivitiesExperienceManager *)((char *)this + 72));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IVirtualDesktopSwitchAnimator,IVirtualDesktopSwitchAnimator2>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IVirtualDesktopSwitchAnimator,IVirtualDesktopSwitchAnimator2>((__int64)this);
}
