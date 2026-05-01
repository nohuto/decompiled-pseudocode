/*
 * XREFs of ?GetPropStoreForLink@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@AEAVCPropertyStoreHelper@@@Z @ 0x1801C5700
 * Callers:
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x180196294 (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 *     ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806004A4 (-CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitFromItem@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x18022E0C0 (-InitFromItem@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOR.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLauncherTipContextMenu::GetPropStoreForLink(
        CLauncherTipContextMenu *this,
        struct IShellItem2 *a2,
        struct CPropertyStoreHelper *a3)
{
  HRESULT (__stdcall *BindToHandler)(IShellItem2 *, IBindCtx *, const GUID *const, const IID *const, void **); // rbx
  int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  int v12[2]; // [rsp+30h] [rbp-29h] BYREF
  PROPERTYKEY v13[3]; // [rsp+40h] [rbp-19h] BYREF
  __int128 v14; // [rsp+7Ch] [rbp+23h]
  int v15; // [rsp+8Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *(_QWORD *)v12 = 0LL;
  BindToHandler = a2->lpVtbl->BindToHandler;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v12);
  v6 = ((__int64 (__fastcall *)(struct IShellItem2 *, _QWORD, const GUID *, GUID *, int *))BindToHandler)(
         a2,
         0LL,
         &BHID_PropertyStore,
         &GUID_bc110b6d_57e8_4148_a9c6_91015ab2f3a5,
         v12);
  v8 = v6;
  if ( v6 >= 0 )
  {
    v13[0] = PKEY_Comment;
    v13[1] = PKEY_Link_TargetParsingPath;
    v13[2] = PKEY_Link_Arguments;
    v14 = PKEY_Winx_Hash;
    v15 = 2;
    v10 = CPropertyStoreHelperBase<IPropertyStore>::InitFromItem(a3, a2, v7, v13);
    v8 = v10;
    if ( v10 >= 0 )
      v8 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x424,
        (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
        (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41A,
      (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
      (const char *)(unsigned int)v6);
    v9 = *(_QWORD *)v12;
    if ( *(_QWORD *)v12 )
    {
      *(_QWORD *)v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  return v8;
}
