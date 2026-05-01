/*
 * XREFs of ?IsEdgePackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D40D0
 * Callers:
 *     ?AllowInstallInboxedPackage@StartExperiencePackageHelper@@EEAA_NXZ @ 0x1805CD340 (-AllowInstallInboxedPackage@StartExperiencePackageHelper@@EEAA_NXZ.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersion@ApplicationModel@Windows@3@@Z @ 0x1805D46C4 (-IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersi.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall LockScreenWidgetPackageHelperBase::IsEdgePackageInstalled(LockScreenWidgetPackageHelperBase *this)
{
  char v1; // di
  char v2; // bl
  LockScreenWidgetPackageHelperBase *v3; // rcx
  LockScreenWidgetPackageHelperBase *v4; // rcx
  LockScreenWidgetPackageHelperBase *v5; // rcx
  LockScreenWidgetPackageHelperBase *v6; // rcx
  LockScreenWidgetPackageHelperBase *v7; // rcx
  volatile signed __int32 *v9; // [rsp+20h] [rbp-20h] BYREF
  volatile signed __int32 *v10; // [rsp+28h] [rbp-18h] BYREF
  volatile signed __int32 *v11[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+68h] [rbp+28h] BYREF
  volatile signed __int32 *v13; // [rsp+70h] [rbp+30h] BYREF
  volatile signed __int32 *v14; // [rsp+78h] [rbp+38h] BYREF

  v1 = 0;
  v12 = 0LL;
  winrt::hstring::hstring((winrt::hstring *)v11, L"Microsoft.MicrosoftEdge.Stable_8wekyb3d8bbwe");
  v2 = 1;
  if ( LockScreenWidgetPackageHelperBase::IsPackageInstalled(
         v3,
         (const struct winrt::hstring *)v11,
         (const struct winrt::Windows::ApplicationModel::PackageVersion *)&v12) )
  {
    goto LABEL_6;
  }
  v12 = 0LL;
  winrt::hstring::hstring((winrt::hstring *)&v10, L"Microsoft.MicrosoftEdge.Canary_8wekyb3d8bbwe");
  v2 = 3;
  if ( LockScreenWidgetPackageHelperBase::IsPackageInstalled(
         v4,
         (const struct winrt::hstring *)&v10,
         (const struct winrt::Windows::ApplicationModel::PackageVersion *)&v12) )
  {
    goto LABEL_6;
  }
  v12 = 0LL;
  winrt::hstring::hstring((winrt::hstring *)&v9, L"Microsoft.MicrosoftEdge.Dev_8wekyb3d8bbwe");
  v2 = 7;
  if ( LockScreenWidgetPackageHelperBase::IsPackageInstalled(
         v5,
         (const struct winrt::hstring *)&v9,
         (const struct winrt::Windows::ApplicationModel::PackageVersion *)&v12)
    || (v12 = 0LL,
        winrt::hstring::hstring((winrt::hstring *)&v14, L"Microsoft.MicrosoftEdge.Beta_8wekyb3d8bbwe"),
        v2 = 15,
        LockScreenWidgetPackageHelperBase::IsPackageInstalled(
          v6,
          (const struct winrt::hstring *)&v14,
          (const struct winrt::Windows::ApplicationModel::PackageVersion *)&v12))
    || (v12 = 0LL,
        winrt::hstring::hstring((winrt::hstring *)&v13, L"Microsoft.MicrosoftEdge.Internal_8wekyb3d8bbwe"),
        v2 = 31,
        LockScreenWidgetPackageHelperBase::IsPackageInstalled(
          v7,
          (const struct winrt::hstring *)&v13,
          (const struct winrt::Windows::ApplicationModel::PackageVersion *)&v12)) )
  {
LABEL_6:
    v1 = 1;
  }
  if ( (v2 & 0x10) != 0 )
  {
    v2 &= ~0x10u;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
  }
  if ( (v2 & 8) != 0 )
  {
    v2 &= ~8u;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v14);
  }
  if ( (v2 & 4) != 0 )
  {
    v2 &= ~4u;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
  }
  if ( (v2 & 2) != 0 )
  {
    v2 &= ~2u;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
  }
  if ( (v2 & 1) != 0 )
    winrt::handle_type<winrt::impl::hstring_traits>::close(v11);
  return v1;
}
