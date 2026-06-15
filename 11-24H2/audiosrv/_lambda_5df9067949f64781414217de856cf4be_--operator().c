/*
 * XREFs of _lambda_5df9067949f64781414217de856cf4be_::operator() @ 0x1801501A4
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageInstallingEventArgs___Windows::ApplicationModel::IPackageInstallingEventArgs_____::_)(Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_5df9067949f64781414217de856cf4be___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs___::Invoke @ 0x180150F10 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180150F10.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180055024 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180055788 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x18008E5A4 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?IsUsefulPackage@AtmosCheck@@AEAA_NPEAUIPackage@ApplicationModel@Windows@@@Z @ 0x18009DD00 (-IsUsefulPackage@AtmosCheck@@AEAA_NPEAUIPackage@ApplicationModel@Windows@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_5df9067949f64781414217de856cf4be_::operator()(AtmosCheck **a1, __int64 a2, __int64 a3)
{
  AtmosCheck *v5; // rcx
  int v6; // edi
  __int64 v7; // r9
  int (__fastcall *v8)(__int64, struct Windows::ApplicationModel::IPackage **); // rbx
  AtmosCheck *v9; // rcx
  AtmosCheck *v10; // rcx
  __int64 v11; // r9
  AtmosCheck *v12; // rcx
  int refreshed; // eax
  struct Windows::ApplicationModel::IPackage *v15[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v17; // [rsp+68h] [rbp+38h] BYREF
  bool v18; // [rsp+70h] [rbp+40h] BYREF
  int v19; // [rsp+78h] [rbp+48h] BYREF

  v17 = a2;
  v19 = 0;
  LOBYTE(v17) = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 72LL))(a3, &v17);
  if ( v6 < 0 )
    goto LABEL_14;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 80LL))(a3, &v19);
  if ( v6 < 0 )
    goto LABEL_14;
  if ( (_BYTE)v17 && !v19 )
  {
    v15[0] = 0LL;
    v8 = *(int (__fastcall **)(__int64, struct Windows::ApplicationModel::IPackage **))(*(_QWORD *)a3 + 56LL);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v15);
    if ( v8(a3, v15) < 0 || AtmosCheck::IsUsefulPackage(v9, v15[0]) )
    {
      v12 = *a1;
      *((_DWORD *)v12 + 46) = 2;
      v18 = 0;
      refreshed = AtmosCheck::RefreshSpatialAudioLicenseModelState(v12, &v18);
      v10 = retaddr;
      if ( refreshed < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1838LL,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)refreshed);
      if ( v18 || !*((_BYTE *)*a1 + 217) )
      {
        v10 = *a1;
        if ( *((_BYTE *)*a1 + 216) )
          v6 = AtmosCheck::PerformLicenseCheck(v10, 1);
      }
    }
    AtmosCheck::Trace(v10, "AppInstall check result", (unsigned int)v6, v11);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v15);
    if ( v6 < 0 )
LABEL_14:
      AtmosCheck::Trace(v5, "AppInstall check result", (unsigned int)v6, v7);
  }
  return (unsigned int)v6;
}
