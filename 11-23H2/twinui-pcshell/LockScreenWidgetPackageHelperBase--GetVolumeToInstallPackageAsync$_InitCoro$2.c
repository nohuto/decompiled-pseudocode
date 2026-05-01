/*
 * XREFs of LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_InitCoro$2 @ 0x18023CE48
 * Callers:
 *     ?GetVolumeToInstallPackageAsync@LockScreenWidgetPackageHelperBase@@IEAA?AU?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@XZ @ 0x18023D8DC (-GetVolumeToInstallPackageAsync@LockScreenWidgetPackageHelperBase@@IEAA-AU-$IAsyncOperation@UPac.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??0promise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@QEAA@XZ @ 0x180234CCC (--0promise_type@-$coroutine_traits@U-$IAsyncOperation@UPackageVolume@Deployment@Management@Windo.c)
 *     LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_ResumeCoro$1 @ 0x18023CF60 (LockScreenWidgetPackageHelperBase--GetVolumeToInstallPackageAsync$_ResumeCoro$1.c)
 *     ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AU?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@3@XZ @ 0x18024AFEC (-get_return_object@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UPackageVo.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rbx

  *(_QWORD *)(a2 + 401) = a4;
  *(_QWORD *)a2 = LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v6 = a2 - 112;
  memset_0((void *)(a2 - 112), 0, 0x68uLL);
  std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,LockScreenWidgetPackageHelperBase *>::promise_type::promise_type(v6);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,LockScreenWidgetPackageHelperBase *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,void>::get_return_object(
    v6,
    a3);
  *(_BYTE *)(a2 + 400) = 0;
  return LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync__ResumeCoro_1(a2);
}
