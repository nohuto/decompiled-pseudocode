/*
 * XREFs of _lambda_e40398d42ff5cb66d230c2cd21ebd5c8_::__lambda_e40398d42ff5cb66d230c2cd21ebd5c8_ @ 0x1803B5300
 * Callers:
 *     ?ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x1802439A0 (-ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@U.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e40398d42ff5cb66d230c2cd21ebd5c8___::_CTaskWrapper__lambda_e40398d42ff5cb66d230c2cd21ebd5c8___ @ 0x1803B54AC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e40398d42ff5cb66d230c2cd21ebd5c8___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall lambda_e40398d42ff5cb66d230c2cd21ebd5c8_::__lambda_e40398d42ff5cb66d230c2cd21ebd5c8_(__int64 a1)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 16));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 8));
}
