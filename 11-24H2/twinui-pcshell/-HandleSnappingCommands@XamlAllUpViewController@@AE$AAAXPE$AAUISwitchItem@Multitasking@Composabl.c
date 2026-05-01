/*
 * XREFs of ?HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x1806B3E50
 * Callers:
 *     ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x1806B18F0 (-ContextMenuInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISw.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18007D1B8 (-TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$com_ptr_t@UIApplicationView@@Uerr.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5F2C (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?DismissView@XamlBaseViewController@@IE$AAAXXZ @ 0x180221A0C (-DismissView@XamlBaseViewController@@IE$AAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall XamlAllUpViewController::HandleSnappingCommands(__int64 a1, __int64 a2, int a3)
{
  int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // esi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // eax
  int v13; // [rsp+20h] [rbp-58h]
  void *v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h] BYREF
  __int128 v16; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 24LL))(*(_QWORD *)(a1 + 80));
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x164,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v6);
  XamlBaseViewController::DismissView(a1 + 8);
  AppViewDataSourceHelpers::TryGetApplicationViewForItem(&v15, a2);
  v7 = v15;
  if ( !v15 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x16A,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)0x80070057LL,
      v13);
  v8 = 2;
  v9 = a3 - 1501;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
    {
LABEL_9:
      v8 = 1;
      goto LABEL_11;
    }
    v11 = v10 - 7;
    if ( v11 )
    {
      if ( v11 != 1 )
        goto LABEL_11;
      goto LABEL_9;
    }
  }
  v8 = 0;
LABEL_11:
  v16 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  v12 = AgileGitPtr::CopyLocal((AgileGitPtr *)(a1 + 184), &GUID_fff59320_db70_4865_8fed_8b502d692f12, &v14);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x183,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v12,
      v13);
  (*(void (__fastcall **)(void *, __int64, _QWORD, _QWORD, __int128 *))(*(_QWORD *)v14 + 24LL))(v14, v7, v8, 0LL, &v16);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
}
