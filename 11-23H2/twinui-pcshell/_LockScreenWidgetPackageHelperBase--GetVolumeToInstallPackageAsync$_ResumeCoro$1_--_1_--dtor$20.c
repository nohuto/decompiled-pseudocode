/*
 * XREFs of _LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_ResumeCoro$1_::_1_::dtor$20 @ 0x18023D871
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$notify_awaiter@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802355B8 (--1-$notify_awaiter@U-$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foun.c)
 */

__int64 __fastcall LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync__ResumeCoro_1_::_1_::dtor_20(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 176) = *(_QWORD *)(a2 + 256) + 280LL;
  return winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>>::~notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>>(*(_QWORD *)(a2 + 176));
}
