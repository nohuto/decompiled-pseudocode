/*
 * XREFs of _lambda_ad045d4b5c3bf658d2720d8e49b9b5c2_::_lambda_ad045d4b5c3bf658d2720d8e49b9b5c2_ @ 0x180280D5C
 * Callers:
 *     ?ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18072CB80 (-ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTran.c)
 * Callees:
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     ??0?$weak_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@AEBV01@@Z @ 0x1807200B0 (--0-$weak_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@.c)
 */

__int64 __fastcall lambda_ad045d4b5c3bf658d2720d8e49b9b5c2_::_lambda_ad045d4b5c3bf658d2720d8e49b9b5c2_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v6; // rcx
  _QWORD *v7; // r8

  std::weak_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>::weak_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>(
    a1,
    a2,
    a3,
    a4);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
    (winrt::Windows::Foundation::IUnknown *)(v6 + 16),
    v7);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
    (winrt::Windows::Foundation::IUnknown *)(a1 + 24),
    a4);
  return a1;
}
