/*
 * XREFs of _lambda_cdce16f825702c0a1c57b181431f22d2_::__lambda_cdce16f825702c0a1c57b181431f22d2_ @ 0x1801E8654
 * Callers:
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x1800B0B84 (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cdce16f825702c0a1c57b181431f22d2___::_CTaskWrapper__lambda_cdce16f825702c0a1c57b181431f22d2___ @ 0x1801E87A4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cdce16f825702c0a1c57b181431f22d2___--_CTask.c)
 *     _UndockedSearchAppExperienceManager::Activate_::_1_::dtor$4 @ 0x1802B94B2 (_UndockedSearchAppExperienceManager--Activate_--_1_--dtor$4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall lambda_cdce16f825702c0a1c57b181431f22d2_::__lambda_cdce16f825702c0a1c57b181431f22d2_(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 44);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *)((char *)this + 336));
  winrt::hstring::~hstring((void **)this + 40);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::~UndockedSearchAppExperienceManager_ActivateSearch(this);
}
