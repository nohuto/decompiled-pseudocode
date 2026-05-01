/*
 * XREFs of ??1ImeNotificationExperienceManager@@UEAA@XZ @ 0x180381414
 * Callers:
 *     ??_EImeNotificationExperienceManager@@UEAAPEAXI@Z @ 0x180381450 (--_EImeNotificationExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1800862E0 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 */

void __fastcall ImeNotificationExperienceManager::~ImeNotificationExperienceManager(
        ImeNotificationExperienceManager *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 32);
  CSingleViewShellExperience::~CSingleViewShellExperience((ImeNotificationExperienceManager *)((char *)this + 48));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>((__int64)this);
}
