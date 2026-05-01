/*
 * XREFs of _lambda_89f63c8738b1ad17b99f8ae3b3dcb473_::__lambda_89f63c8738b1ad17b99f8ae3b3dcb473_ @ 0x1803B528C
 * Callers:
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x180242D8C (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_89f63c8738b1ad17b99f8ae3b3dcb473___::_CTaskWrapper__lambda_89f63c8738b1ad17b99f8ae3b3dcb473___ @ 0x1803B5434 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_89f63c8738b1ad17b99f8ae3b3dcb473___--_CTask.c)
 *     _UndockedSearchAppExperienceManager::Activate_::_1_::dtor$6 @ 0x1806E6425 (_UndockedSearchAppExperienceManager--Activate_--_1_--dtor$6.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall lambda_89f63c8738b1ad17b99f8ae3b3dcb473_::__lambda_89f63c8738b1ad17b99f8ae3b3dcb473_(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 46);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *)((char *)this + 352));
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)this + 42);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::~UndockedSearchAppExperienceManager_ActivateSearch(this);
}
