/*
 * XREFs of ?LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ @ 0x18009A890
 * Callers:
 *     ?Invoke@LaunchUriService@Actions@CreativeFramework@@UEAAXXZ @ 0x18009A780 (-Invoke@LaunchUriService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024214 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A31C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DA6C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005BCA8 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??$wait_for_completion@_NUtype@?$MapToSmartType@EX@details@wil@@@wil@@YA?AUtype@?$MapToSmartType@EX@details@0@PEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x180066BC8 (--$wait_for_completion@_NUtype@-$MapToSmartType@EX@details@wil@@@wil@@YA-AUtype@-$MapToSmartType.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18009094C (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_18009094C.c)
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180098978 (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?CreateApplicationUserModelIdFromPackageData@LaunchUriService@Actions@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W0@Z @ 0x180098D90 (-CreateApplicationUserModelIdFromPackageData@LaunchUriService@Actions@CreativeFramework@@AEAA-AV.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CreativeFramework::Actions::LaunchUriService::LaunchUri(
        CreativeFramework::Actions::LaunchUriService *this)
{
  int v2; // eax
  unsigned int v3; // r8d
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, PVOID, PVOID, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // r14
  const WCHAR *v7; // rax
  PVOID Reserved1; // rsi
  unsigned int v9; // r8d
  const WCHAR *v10; // rax
  HSTRING_HEADER *v11; // rax
  int v12; // eax
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, PVOID, __int64, _QWORD); // r15
  unsigned int v17; // esi
  __int64 v18; // r14
  const WCHAR *v19; // r9
  const WCHAR *v20; // r8
  __int64 ApplicationUserModelIdFromPackageData; // rax
  unsigned int v22; // r8d
  HSTRING_HEADER *v23; // rax
  int v24; // eax
  int v25; // [rsp+20h] [rbp-69h]
  _BYTE v26[8]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v27; // [rsp+38h] [rbp-51h] BYREF
  const WCHAR *v28; // [rsp+40h] [rbp-49h] BYREF
  __int64 (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-41h] BYREF
  __int64 v30; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v31[3]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v32; // [rsp+70h] [rbp-19h]
  HSTRING_HEADER v33; // [rsp+78h] [rbp-11h] BYREF
  __int64 v34; // [rsp+90h] [rbp+7h]
  HSTRING_HEADER v35; // [rsp+98h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  wil::ActivateInstance<ContentManagement::IContentManagementBroker>(&v30);
  v27 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 88LL))(v30, &v27);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x73,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v2,
      v25);
  v4 = 7LL;
  v32 = 7LL;
  v31[2] = 0LL;
  LOWORD(v31[0]) = 0;
  if ( *((_BYTE *)this + 113) )
  {
    std::wstring::operator=(v31, (_QWORD *)this + 5);
    v4 = v32;
  }
  v29 = 0LL;
  v5 = v27;
  v6 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v27 + 48LL);
  v29 = 0LL;
  v7 = (const WCHAR *)v31;
  if ( v4 >= 8 )
    v7 = (const WCHAR *)v31[0];
  v28 = v7;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v35, &v28, v3)[1].Reserved.Reserved1;
  v10 = (const WCHAR *)((char *)this + 8);
  if ( *((_QWORD *)this + 4) >= 8uLL )
    v10 = *(const WCHAR **)v10;
  v28 = v10;
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v33, &v28, v9);
  v12 = v6(v5, v11[1].Reserved.Reserved1, Reserved1, &v29);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v12,
      v25);
  wil::wait_for_completion<bool,wil::details::MapToSmartType<unsigned char,void>::type>(v26, v29, v13);
  if ( *((_BYTE *)this + 112) )
  {
    v15 = v27;
    v16 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, _QWORD))(*(_QWORD *)v27 + 56LL);
    v17 = *((_DWORD *)this + 29);
    v18 = *((_QWORD *)this + 13);
    v19 = (const WCHAR *)((char *)this + 72);
    if ( *((_QWORD *)this + 12) >= 8uLL )
      v19 = *(const WCHAR **)v19;
    v20 = (const WCHAR *)((char *)this + 40);
    if ( *((_QWORD *)this + 8) >= 8uLL )
      v20 = *(const WCHAR **)v20;
    ApplicationUserModelIdFromPackageData = CreativeFramework::Actions::LaunchUriService::CreateApplicationUserModelIdFromPackageData(
                                              v14,
                                              (__int64)&v35,
                                              v20,
                                              v19);
    if ( *(_QWORD *)(ApplicationUserModelIdFromPackageData + 24) >= 8uLL )
      ApplicationUserModelIdFromPackageData = *(_QWORD *)ApplicationUserModelIdFromPackageData;
    v28 = (const WCHAR *)ApplicationUserModelIdFromPackageData;
    v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v33, &v28, v22);
    v24 = v16(v15, v23[1].Reserved.Reserved1, v18, v17);
    if ( v24 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x84,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
        (const char *)(unsigned int)v24);
    v34 = 0LL;
    std::wstring::_Tidy(&v35, 1, 0LL);
  }
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v29);
  std::wstring::_Tidy(v31, 1, 0LL);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v27);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v30);
}
