/*
 * XREFs of ?LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x18009DD5C
 * Callers:
 *     ?Invoke@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ @ 0x18009DD50 (-Invoke@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024204 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A34C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004AB80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005B808 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800905AC (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_1800905AC.c)
 *     ?compare@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAHPEB_W@Z @ 0x180096ECC (-compare@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAHPEB_W@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x18009FDF4 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator_ea_18009FDF4.c)
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x1800A6A40 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CreativeFramework::Actions::NotificationManagerService::LaunchNotification(const WCHAR **this)
{
  __int64 v2; // rax
  int v3; // eax
  unsigned int v4; // r8d
  bool v5; // si
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, PVOID, PVOID, __int64); // r14
  const WCHAR *v8; // rax
  unsigned int v9; // r8d
  const WCHAR *v10; // r13
  const WCHAR *v11; // rax
  PVOID Reserved1; // r15
  __int64 ToastContentXML; // rax
  unsigned int v14; // r8d
  HSTRING_HEADER *v15; // rax
  __int64 v16; // r9
  int v17; // eax
  int v18; // [rsp+28h] [rbp-89h]
  const WCHAR *v19; // [rsp+48h] [rbp-69h] BYREF
  __int64 v20; // [rsp+50h] [rbp-61h] BYREF
  __int64 *v21; // [rsp+58h] [rbp-59h] BYREF
  HSTRING_HEADER v22; // [rsp+60h] [rbp-51h] BYREF
  __int64 v23; // [rsp+78h] [rbp-39h]
  _QWORD v24[4]; // [rsp+80h] [rbp-31h] BYREF
  HSTRING_HEADER v25; // [rsp+A0h] [rbp-11h] BYREF
  HSTRING_HEADER v26; // [rsp+C0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  wil::ActivateInstance<ContentManagement::IContentManagementBroker>(&v21);
  v20 = 0LL;
  v2 = *v21;
  v20 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v2 + 72))(v21, &v20);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x71,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v3,
      v18);
  std::wstring::wstring((__int64)&v22);
  std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::find(
    this + 15,
    &v19,
    &v22);
  std::wstring::_Tidy(&v22, 1, 0LL);
  v5 = v19 != this[15] && std::wstring::compare((__int64)(v19 + 32), (wchar_t *)L"true") == 0;
  v6 = v20;
  v7 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID, __int64))(*(_QWORD *)v20 + 56LL);
  v8 = (const WCHAR *)(this + 10);
  if ( (unsigned __int64)this[13] >= 8 )
    v8 = *(const WCHAR **)v8;
  v19 = v8;
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v25, &v19, v4);
  v10 = this[14];
  v11 = (const WCHAR *)(this + 6);
  if ( (unsigned __int64)this[9] >= 8 )
    v11 = *(const WCHAR **)v11;
  v19 = v11;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v26, &v19, v9)[1].Reserved.Reserved1;
  ToastContentXML = CreativeFramework::NotificationManager::ToastHelpers::GetToastContentXML(this[17], v24);
  if ( *(_QWORD *)(ToastContentXML + 24) >= 8uLL )
    ToastContentXML = *(_QWORD *)ToastContentXML;
  v19 = (const WCHAR *)ToastContentXML;
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, &v19, v14);
  LOBYTE(v16) = v5;
  v17 = v7(v6, v15[1].Reserved.Reserved1, Reserved1, v16);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v17,
      (int)v10);
  v23 = 0LL;
  std::wstring::_Tidy(v24, 1, 0LL);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v20);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v21);
}
