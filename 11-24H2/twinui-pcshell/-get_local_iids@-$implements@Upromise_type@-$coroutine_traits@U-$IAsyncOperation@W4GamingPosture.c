/*
 * XREFs of ?get_local_iids@?$implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@PEAUGamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@34@@experimental@std@@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@UIAsyncInfo@678@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x180340250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>,winrt::Windows::Foundation::IAsyncInfo>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 2;
  *(_QWORD *)(a2 + 8) = &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>,winrt::Windows::Foundation::IAsyncInfo>>::value;
  return a2;
}
