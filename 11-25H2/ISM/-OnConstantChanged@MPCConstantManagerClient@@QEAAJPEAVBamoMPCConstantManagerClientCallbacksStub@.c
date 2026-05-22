/*
 * XREFs of ?OnConstantChanged@MPCConstantManagerClient@@QEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@3@Z @ 0x18016EED4
 * Callers:
 *     ?OnConstantChanged@MPCConstantManagerClientPrincipal@@UEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@3@Z @ 0x180173D10 (-OnConstantChanged@MPCConstantManagerClientPrincipal@@UEAAJPEAVBamoMPCConstantManagerClientCallb.c)
 * Callees:
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x18000F270 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18006934C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800AD0BC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$DoInvoke@V_lambda_2994a7a20cb592567dc6818203d49b13_@@@?$EventSource@U?$ITypedEventHandler@PEAVMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@PEAVConstantChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_2994a7a20cb592567dc6818203d49b13_@@@Z @ 0x180168620 (--$DoInvoke@V_lambda_2994a7a20cb592567dc6818203d49b13_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ??$Make@VConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@W4InputType@2345@VHString@Wrappers@WRL@Microsoft@@PEAUIPropertyValue@Foundation@5@PEAUIPropertyValue@Foundation@5@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@@12@$$QEAW4InputType@MPCManager@Input@Internal@Windows@@$$QEAVHString@Wrappers@12@$$QEAPEAUIPropertyValue@Foundation@8@2@Z @ 0x180168DE0 (--$Make@VConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@W4InputType@2345@VHString@W.c)
 *     ?CreatePropertyValueFromPROPVARIANT@MPCConstantManagerClient@@CAJAEBUtagPROPVARIANT@@PEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x18016CD08 (-CreatePropertyValueFromPROPVARIANT@MPCConstantManagerClient@@CAJAEBUtagPROPVARIANT@@PEAPEAUIPro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 MPCConstantManagerClient::OnConstantChanged(__int64 a1, __int64 a2, int a3, ...)
{
  int v5; // eax
  int v6; // eax
  struct Windows::Foundation::IPropertyValue *v7; // rax
  struct Windows::Foundation::IPropertyValue *v8; // rax
  const char *v9; // r9
  int v10; // eax
  int v12; // [rsp+20h] [rbp-50h]
  int v13; // [rsp+20h] [rbp-50h]
  struct Windows::Foundation::IPropertyValue *v14; // [rsp+30h] [rbp-40h] BYREF
  struct Windows::Foundation::IPropertyValue *v15; // [rsp+38h] [rbp-38h] BYREF
  HSTRING string; // [rsp+40h] [rbp-30h] BYREF
  int v17[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  __int64 v21; // [rsp+88h] [rbp+18h] BYREF
  const unsigned __int16 *v22; // [rsp+98h] [rbp+28h] BYREF
  va_list va; // [rsp+98h] [rbp+28h]
  PROPVARIANT *propvarIn; // [rsp+A0h] [rbp+30h]
  PROPVARIANT *v25; // [rsp+A8h] [rbp+38h]
  va_list va1; // [rsp+B0h] [rbp+40h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v22 = va_arg(va1, const unsigned __int16 *);
  propvarIn = va_arg(va1, PROPVARIANT *);
  v25 = va_arg(va1, PROPVARIANT *);
  v21 = a2;
  string = 0LL;
  Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(
    (Microsoft::WRL::Wrappers::HString *)&string,
    (const unsigned __int16 **)va);
  v14 = 0LL;
  v15 = 0LL;
  v5 = MPCConstantManagerClient::CreatePropertyValueFromPROPVARIANT(propvarIn, &v15);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE1,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)v5,
      v12);
  v14 = 0LL;
  v6 = MPCConstantManagerClient::CreatePropertyValueFromPROPVARIANT(v25, &v14);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE2,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)v6,
      v12);
  v7 = v14;
  v14 = 0LL;
  *(_QWORD *)v17 = v7;
  v8 = v15;
  v15 = 0LL;
  *(_QWORD *)&v18 = v8;
  LODWORD(v21) = a3;
  Microsoft::WRL::Details::Make<Windows::Internal::Input::MPCManager::ConstantChangedEventArgs,enum Windows::Internal::Input::MPCManager::InputType,Microsoft::WRL::Wrappers::HString,Windows::Foundation::IPropertyValue *,Windows::Foundation::IPropertyValue *>(
    v19,
    &v21,
    (int)&string,
    &v18,
    (__int64 *)v17);
  if ( !v19[0] )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      234LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      v9);
  v21 = a1;
  *(_QWORD *)&v18 = &v21;
  *((_QWORD *)&v18 + 1) = v19;
  v10 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCConstantManagerClient *,Windows::Internal::Input::MPCManager::ConstantChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_2994a7a20cb592567dc6818203d49b13_>(
          a1 + 120,
          &v18);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xEC,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)v10,
      v13);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v14);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v15);
  WindowsDeleteString(string);
  return 0LL;
}
