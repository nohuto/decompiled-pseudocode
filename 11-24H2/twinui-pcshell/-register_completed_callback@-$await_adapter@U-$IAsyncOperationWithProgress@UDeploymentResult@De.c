/*
 * XREFs of ?register_completed_callback@?$await_adapter@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@$00@impl@winrt@@AEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1805DCF08
 * Callers:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@UPackageVolume@Deployment@Management@34@@experimental@std@@@?$await_adapter@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@UPackageVolume@Deployment@Management@34@@experimental@std@@@experimental@std@@@Z @ 0x1805C3C6C (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@_ea_1805C3C6C.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x18014403C (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ?OnFileActivated@?$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverrides@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUFileActivatedEventArgs@Activation@ApplicationModel@Windows@3@@Z @ 0x1802B0DEC (-OnFileActivated@-$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverrides@Xaml@UI@.c)
 *     ??$?0U?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@winrt@@@?$AsyncOperationWithProgressCompletedHandler@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@QEAA@U?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@3@@Z @ 0x1805C23C8 (--$-0U-$disconnect_aware_handler@$00U-$await_adapter@U-$IAsyncOperationWithProgress@UDeploymentR.c)
 */

char __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>,1>::register_completed_callback(
        __int64 a1,
        __int64 a2)
{
  __int64 *v4; // rdi
  char v5; // bl
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(__int64 **)(a1 + 8);
  winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)v7);
  v8 = a1;
  v9 = a2;
  winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>::AsyncOperationWithProgressCompletedHandler<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>(
    &v10,
    (__int64)v7);
  winrt::impl::consume_Windows_UI_Xaml_IApplicationOverrides<winrt::Windows::UI::Xaml::IApplicationOverrides>::OnFileActivated(
    v4,
    &v10);
  if ( v10 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
  v5 = *(_BYTE *)(a1 + 24);
  *(_BYTE *)(a1 + 24) = 0;
  return v5;
}
