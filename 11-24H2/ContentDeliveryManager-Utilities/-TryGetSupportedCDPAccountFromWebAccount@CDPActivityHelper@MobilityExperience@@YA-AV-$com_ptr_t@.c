/*
 * XREFs of ?TryGetSupportedCDPAccountFromWebAccount@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@VICDPAccount@@Uerr_exception_policy@wil@@@wil@@PEAUIWebAccount@Credentials@Security@Windows@@@Z @ 0x180069958
 * Callers:
 *     ?GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800681F4 (-GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$vector@V-.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A31C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x18003DE1C (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     ??$query@UIWebAccountProvider2@Credentials@Security@Windows@@@?$com_ptr_t@UIWebAccountProvider@Credentials@Security@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIWebAccountProvider2@Credentials@Security@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180066AFC (--$query@UIWebAccountProvider2@Credentials@Security@Windows@@@-$com_ptr_t@UIWebAccountProvider@C.c)
 *     ?WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBG@Z @ 0x180069CB4 (-WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@DU-$char_tr.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 *__fastcall MobilityExperience::CDPActivityHelper::TryGetSupportedCDPAccountFromWebAccount(
        __int64 *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  __int64 (__fastcall **v4)(_QWORD, GUID *, __int64 *); // rax
  int v5; // eax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, HSTRING *); // rdi
  int v8; // eax
  PCWSTR StringRawBuffer; // rax
  __int64 (__fastcall **v10)(_QWORD, GUID *, __int64 *); // rax
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, HSTRING *); // rdi
  int v14; // eax
  const WCHAR *v15; // rax
  __int64 v16; // rcx
  void **v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  void **v20; // rcx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-39h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-39h]
  HSTRING v24; // [rsp+30h] [rbp-29h] BYREF
  HSTRING string; // [rsp+38h] [rbp-21h] BYREF
  int v26; // [rsp+40h] [rbp-19h]
  __int64 (__fastcall ***v27)(_QWORD, GUID *, _QWORD *); // [rsp+48h] [rbp-11h] BYREF
  __int64 v28; // [rsp+50h] [rbp-9h] BYREF
  __int64 v29[2]; // [rsp+58h] [rbp-1h] BYREF
  void *v30[3]; // [rsp+68h] [rbp+Fh] BYREF
  unsigned __int64 v31; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v29[1] = (__int64)a1;
  *a1 = 0LL;
  v26 = 1;
  v4 = *a2;
  v28 = 0LL;
  v5 = (*v4)(a2, &GUID_7b56d6f8_990b_4eb5_94a7_5621f3a8b824, &v28);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x195,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v5,
      bIgnoreCase);
  string = 0LL;
  v6 = v28;
  v7 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v28 + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v8 = v7(v6, &string);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x198,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v8,
      bIgnoreCase);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  CreativeFramework::CommonHelper::StringUtils::WStringToUtf8String(v30, StringRawBuffer);
  v10 = *a2;
  v27 = 0LL;
  v11 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))v10[6])(
          a2,
          &v27);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x19C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v11,
      bIgnoreCase);
  wil::com_ptr_t<Windows::Security::Credentials::IWebAccountProvider,wil::err_exception_policy>::query<Windows::Security::Credentials::IWebAccountProvider2>(
    &v27,
    v29);
  v24 = 0LL;
  v12 = v29[0];
  v13 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v29[0] + 56LL);
  WindowsDeleteString(0LL);
  v24 = 0LL;
  v14 = v13(v12, &v24);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1A0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v14,
      bIgnoreCase);
  v15 = WindowsGetStringRawBuffer(v24, 0LL);
  if ( CompareStringOrdinal(v15, -1, L"consumers", -1, 1) == 2 )
  {
    v16 = *a1;
    *a1 = 0LL;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v17 = v30;
    if ( v31 >= 0x10 )
      v17 = (void **)v30[0];
    v18 = CDPCreateMicrosoftAccount(v17, a1);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1A4,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
        (const char *)(unsigned int)v18,
        bIgnoreCasea);
  }
  else
  {
    v19 = *a1;
    *a1 = 0LL;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    v20 = v30;
    if ( v31 >= 0x10 )
      v20 = (void **)v30[0];
    CDPCreateAzureActiveDirectoryAccount(v20, a1);
  }
  WindowsDeleteString(v24);
  v24 = 0LL;
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(v29);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v27);
  std::string::_Tidy(v30, 1, 0LL);
  WindowsDeleteString(string);
  string = 0LL;
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v28);
  return a1;
}
