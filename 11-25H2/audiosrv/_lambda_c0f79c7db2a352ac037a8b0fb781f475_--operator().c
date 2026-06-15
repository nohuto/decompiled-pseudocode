/*
 * XREFs of _lambda_c0f79c7db2a352ac037a8b0fb781f475_::operator() @ 0x180147668
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageUpdatingEventArgs___Windows::ApplicationModel::IPackageUpdatingEventArgs_____::_)(Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUpdatingEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUpdatingEventArgs_____lambda_c0f79c7db2a352ac037a8b0fb781f475___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUpdatingEventArgs___::Invoke @ 0x1801483D0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1801483D0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180054A70 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x1800627E4 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180062D54 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180062F48 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?IsUsefulPackage@AtmosCheck@@AEAA_NPEAUIPackage@ApplicationModel@Windows@@@Z @ 0x1800A16E0 (-IsUsefulPackage@AtmosCheck@@AEAA_NPEAUIPackage@ApplicationModel@Windows@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_c0f79c7db2a352ac037a8b0fb781f475_::operator()(AtmosCheck **a1, __int64 a2, __int64 a3)
{
  AtmosCheck *v5; // rcx
  int v6; // edi
  __int64 v7; // r9
  int (__fastcall *v8)(__int64, struct Windows::ApplicationModel::IPackage **); // rbx
  AtmosCheck *v9; // rcx
  AtmosCheck *v10; // rcx
  int refreshed; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  bool v14; // [rsp+50h] [rbp+30h] BYREF
  __int64 v15; // [rsp+58h] [rbp+38h] BYREF
  int v16; // [rsp+60h] [rbp+40h] BYREF
  struct Windows::ApplicationModel::IPackage *v17; // [rsp+68h] [rbp+48h] BYREF

  v15 = a2;
  v16 = 0;
  LOBYTE(v15) = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 80LL))(a3, &v15);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 88LL))(a3, &v16);
    if ( v6 >= 0 && (_BYTE)v15 && !v16 )
    {
      v17 = 0LL;
      v8 = *(int (__fastcall **)(__int64, struct Windows::ApplicationModel::IPackage **))(*(_QWORD *)a3 + 56LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v17);
      if ( (v8(a3, &v17) < 0 || AtmosCheck::IsUsefulPackage(v9, v17)) && AtmosCheck::IsLicenseEvaluationRequired(*a1) )
      {
        v10 = *a1;
        *((_DWORD *)v10 + 46) = 4;
        v14 = 0;
        refreshed = AtmosCheck::RefreshSpatialAudioLicenseModelState(v10, &v14);
        if ( refreshed < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1948LL,
            (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
            (const char *)(unsigned int)refreshed);
        if ( v14 || !*((_BYTE *)*a1 + 217) )
        {
          if ( *((_BYTE *)*a1 + 216) )
            v6 = AtmosCheck::PerformLicenseCheck(*a1, 1);
        }
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v17);
    }
  }
  AtmosCheck::Trace(v5, "AppUpdating check result", (unsigned int)v6, v7);
  return (unsigned int)v6;
}
