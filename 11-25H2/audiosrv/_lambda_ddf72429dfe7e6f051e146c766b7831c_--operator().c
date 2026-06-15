/*
 * XREFs of _lambda_ddf72429dfe7e6f051e146c766b7831c_::operator() @ 0x1801477A0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageUninstallingEventArgs___Windows::ApplicationModel::IPackageUninstallingEventArgs_____::_)(Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUninstallingEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUninstallingEventArgs_____lambda_ddf72429dfe7e6f051e146c766b7831c___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageUninstallingEventArgs___::Invoke @ 0x1801483A0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1801483A0.c)
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
__int64 __fastcall lambda_ddf72429dfe7e6f051e146c766b7831c_::operator()(AtmosCheck **a1, __int64 a2, __int64 a3)
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
    goto LABEL_15;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 80LL))(a3, &v19);
  if ( v6 < 0 )
    goto LABEL_15;
  if ( (_BYTE)v17 && !v19 )
  {
    v15[0] = 0LL;
    v8 = *(int (__fastcall **)(__int64, struct Windows::ApplicationModel::IPackage **))(*(_QWORD *)a3 + 56LL);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v15);
    if ( (v8(a3, v15) < 0 || AtmosCheck::IsUsefulPackage(v9, v15[0])) && AtmosCheck::IsLicenseEvaluationRequired(*a1) )
    {
      v12 = *a1;
      *((_DWORD *)v12 + 46) = 3;
      v18 = 0;
      refreshed = AtmosCheck::RefreshSpatialAudioLicenseModelState(v12, &v18);
      v10 = retaddr;
      if ( refreshed < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1891LL,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)refreshed);
      if ( v18 || !*((_BYTE *)*a1 + 217) )
      {
        v10 = *a1;
        if ( *((_BYTE *)*a1 + 216) )
          v6 = AtmosCheck::PerformLicenseCheck(v10, 1);
      }
    }
    AtmosCheck::Trace(v10, "AppUninstall check result", (unsigned int)v6, v11);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v15);
    if ( v6 < 0 )
LABEL_15:
      AtmosCheck::Trace(v5, "AppUninstall check result", (unsigned int)v6, v7);
  }
  return (unsigned int)v6;
}
