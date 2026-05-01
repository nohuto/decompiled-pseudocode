/*
 * XREFs of ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersion@ApplicationModel@Windows@3@@Z @ 0x1805D46C4
 * Callers:
 *     ??R_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@AEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@AEBUIInspectable@Foundation@67@@Z @ 0x1805CC94C (--R_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@AEBUAppInstallItem@InstallControl@Preview@Sto.c)
 *     ?IsEdgePackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D40D0 (-IsEdgePackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@QEAA_NXZ @ 0x1805D4904 (-IsPackageInstalled@LockScreenWidgetPackageHelperBase@@QEAA_NXZ.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805D9270 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?FamilyName@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052ABC (-FamilyName@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@w.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052F5C (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??E?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEAA@XZ @ 0x180055DEC (--E-$consume_Windows_Foundation_Collections_IIterator@U-$IIterator@UPackage@ApplicationModel@Win.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18007CC04 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x1801AAAB0 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ?begin@?$consume_Windows_Foundation_Collections_IIterable@U?$IIterable@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEBA@XZ @ 0x1801E9628 (-begin@-$consume_Windows_Foundation_Collections_IIterable@U-$IIterable@UPackage@ApplicationModel.c)
 *     ??0PackageManager@Deployment@Management@Windows@winrt@@QEAA@XZ @ 0x1802BF3F0 (--0PackageManager@Deployment@Management@Windows@winrt@@QEAA@XZ.c)
 *     ?Current@?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEBA@XZ @ 0x1802CD69C (-Current@-$consume_Windows_Foundation_Collections_IIterator@U-$IIterator@UPackage@ApplicationMod.c)
 *     ?FindPackagesForUser@?$consume_Windows_Management_Deployment_IPackageManager@UIPackageManager@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x1803B8580 (-FindPackagesForUser@-$consume_Windows_Management_Deployment_IPackageManager@UIPackageManager@De.c)
 *     ?Version@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1803C14FC (-Version@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winr.c)
 *     ComparePackageVersions @ 0x1805CDEF0 (ComparePackageVersions.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
char __fastcall LockScreenWidgetPackageHelperBase::IsPackageInstalled(
        LockScreenWidgetPackageHelperBase *this,
        const struct winrt::hstring *a2,
        const struct winrt::Windows::ApplicationModel::PackageVersion *a3)
{
  int v5; // esi
  __int64 **v6; // rax
  _QWORD *v7; // rax
  bool v8; // bl
  __int64 **v10; // rax
  __int64 *v11; // rax
  char v12; // bl
  __int64 *v13; // rax
  struct IUnknown v14; // [rsp+20h] [rbp-88h] BYREF
  __int64 *v15; // [rsp+28h] [rbp-80h] BYREF
  volatile signed __int32 *v16; // [rsp+30h] [rbp-78h] BYREF
  __int64 v17; // [rsp+38h] [rbp-70h] BYREF
  __int64 v18; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-60h] BYREF
  __int64 v20[4]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v21[4]; // [rsp+70h] [rbp-38h] BYREF
  void (__fastcall ***v22)(_QWORD, __int64 *, __int64 *); // [rsp+B0h] [rbp+8h] BYREF
  __int64 *v23; // [rsp+C8h] [rbp+20h] BYREF

  HIDWORD(v22) = HIDWORD(this);
  v5 = 0;
  LODWORD(v22) = 0;
  v6 = (__int64 **)winrt::Windows::Management::Deployment::PackageManager::PackageManager(&v14);
  v20[0] = *(_QWORD *)a2;
  v21[0] = 0LL;
  winrt::impl::consume_Windows_Management_Deployment_IPackageManager<winrt::Windows::Management::Deployment::IPackageManager>::FindPackagesForUser(
    v6,
    &v23,
    v21,
    v20);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
  if ( *(_DWORD *)a3 || *((_WORD *)a3 + 2) || *((_WORD *)a3 + 3) )
  {
    winrt::impl::consume_Windows_Foundation_Collections_IIterable<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::begin(
      &v23,
      &v22);
    v14.lpVtbl = 0LL;
    while ( winrt::Windows::Foundation::operator!=(&v22, &v14) )
    {
      winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::Current(
        (__int64 *)&v22,
        (winrt *)&v15);
      v5 |= 1u;
      v10 = (__int64 **)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                          &v15,
                          &v17);
      v11 = winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FamilyName(
              v10,
              &v16);
      v12 = winrt::operator==(v11, (__int64 *)a2);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
      if ( v12 )
      {
        v13 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                &v15,
                &v18);
        winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::Version(
          v13,
          &v19);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
        if ( (int)ComparePackageVersions(v19, *(_QWORD *)a3) >= 0 )
        {
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v23);
          return 1;
        }
      }
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
      winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::operator++((__int64 *)&v22);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v23);
    return 0;
  }
  else
  {
    v22 = 0LL;
    v7 = winrt::impl::consume_Windows_Foundation_Collections_IIterable<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::begin(
           &v23,
           &v14);
    v8 = winrt::Windows::Foundation::operator!=((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v7, &v22);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v23);
    return v8;
  }
}
