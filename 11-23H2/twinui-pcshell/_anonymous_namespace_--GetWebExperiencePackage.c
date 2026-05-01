/*
 * XREFs of _anonymous_namespace_::GetWebExperiencePackage @ 0x180696D00
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x180239600 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 *     _anonymous_namespace_::RepairWebExperiencePackage$_ResumeCoro$1 @ 0x180241670 (_anonymous_namespace_--RepairWebExperiencePackage$_ResumeCoro$1.c)
 *     _anonymous_namespace_::IsWebExperiencePackageInstalled @ 0x1806972FC (_anonymous_namespace_--IsWebExperiencePackageInstalled.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$ActivateInstance@UPackageManager@Deployment@Management@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUPackageManager@Deployment@Management@23@XZ @ 0x180461D1C (--$ActivateInstance@UPackageManager@Deployment@Management@Windows@winrt@@@IActivationFactory@Fou.c)
 *     ??$call@P6A?AUPackageManager@Deployment@Management@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UPackageManager@Deployment@Management@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?A_P$$QEAP6A?AUPackageManager@Deployment@Management@Windows@2@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x180462CA0 (--$call@P6A-AUPackageManager@Deployment@Management@Windows@winrt@@AEBUIActivationFactory@Foundat.c)
 *     ?Current@?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEBA@XZ @ 0x180466FCC (-Current@-$consume_Windows_Foundation_Collections_IIterator@U-$IIterator@UPackage@ApplicationMod.c)
 *     ?FindPackagesForUser@?$consume_Windows_Management_Deployment_IPackageManager@UIPackageManager@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x1804670E0 (-FindPackagesForUser@-$consume_Windows_Management_Deployment_IPackageManager@UIPackageManager@De.c)
 *     ?First@?$consume_Windows_Foundation_Collections_IIterable@U?$IIterable@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEBA@XZ @ 0x18046714C (-First@-$consume_Windows_Foundation_Collections_IIterable@U-$IIterable@UPackage@ApplicationModel.c)
 *     ?HasCurrent@?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEBA@XZ @ 0x180468144 (-HasCurrent@-$consume_Windows_Foundation_Collections_IIterator@U-$IIterator@UPackage@Application.c)
 */

// Hidden C++ exception states: #wind=5
void (__fastcall ***__fastcall anonymous_namespace_::GetWebExperiencePackage(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *)))(_QWORD, __int64 *, __int64 *)
{
  char v2; // si
  char v3; // bl
  __int64 *PackagesForUser; // rax
  __int64 *v5; // rax
  void (__fastcall **v6)(_QWORD, __int64 *, __int64 *); // rcx
  char v7; // bl
  __int64 v9; // [rsp+28h] [rbp-21h] BYREF
  __int64 v10; // [rsp+30h] [rbp-19h] BYREF
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v11)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+38h] [rbp-11h] BYREF
  _QWORD v12[4]; // [rsp+40h] [rbp-9h] BYREF
  _QWORD v13[8]; // [rsp+60h] [rbp+17h] BYREF
  __int64 v14; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v15; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v16; // [rsp+C8h] [rbp+7Fh] BYREF

  _InterlockedIncrement64(&qword_1809911F8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Management::Deployment::PackageManager,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Management::Deployment::PackageManager>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Management::Deployment::PackageManager,winrt::Windows::Foundation::IActivationFactory>,
      &v15);
    _InterlockedDecrement64(&qword_1809911F8);
    v2 = 26;
    v3 = 25;
  }
  else
  {
    _InterlockedDecrement64(&qword_1809911F8);
    v11 = _lambda_6fd1ee5d6179fa7e6cafc7c7248cd72e_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Management::Deployment::PackageManager,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Management::Deployment::PackageManager (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      a1,
      (__int64)&v15,
      (void (__fastcall **)(__int64, __int64 *))&v11);
    v2 = 10;
    v3 = 9;
  }
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v12,
    L"MicrosoftWindows.Client.WebExperience_cw5n1h2txyewy",
    51);
  v13[0] = 0LL;
  PackagesForUser = winrt::impl::consume_Windows_Management_Deployment_IPackageManager<winrt::Windows::Management::Deployment::IPackageManager>::FindPackagesForUser(
                      &v15,
                      &v16,
                      v13,
                      v12);
  winrt::impl::consume_Windows_Foundation_Collections_IIterable<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::First(
    PackagesForUser,
    &v14);
  if ( v16 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  if ( winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::HasCurrent(&v14) )
  {
    v5 = winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::Current(
           &v14,
           &v10);
    v6 = (void (__fastcall **)(_QWORD, __int64 *, __int64 *))*v5;
  }
  else
  {
    v5 = &v9;
    v3 = v2;
    v6 = 0LL;
  }
  *v5 = 0LL;
  *a1 = v6;
  v7 = v3 | 4;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( v9 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  }
  if ( (v7 & 1) != 0 && v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  if ( v14 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  if ( v15 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
  return a1;
}
