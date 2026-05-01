/*
 * XREFs of ?GetPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x18028FB88
 * Callers:
 *     ?GetPinnablePidl@@YA?AV?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x18028F958 (-GetPinnablePidl@@YA-AV-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001C8F0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InitFromItem@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x18006762C (-InitFromItem@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYS.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028FD2C (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?TryGetAppsFolderItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180290830 (-TryGetAppsFolderItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@.c)
 *     ?GetUnpackagedAppPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@AEBVPropertyStoreHelper@wil@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18029093C (-GetUnpackagedAppPinnableItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@AEBVPropertyStoreHelper@wil@@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void **__fastcall GetPinnableItem(void **a1, __int128 *a2, _OWORD *a3)
{
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  int v7; // r14d
  int v8; // edi
  __int64 v9; // rdx
  int v11; // [rsp+20h] [rbp-59h]
  int v12; // [rsp+20h] [rbp-59h]
  __int64 (__fastcall ***v13[2])(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-49h] BYREF
  __int128 v14; // [rsp+40h] [rbp-39h] BYREF
  int v15; // [rsp+50h] [rbp-29h]
  __int64 v16; // [rsp+68h] [rbp-11h] BYREF
  PROPVARIANT pvar[2]; // [rsp+70h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v13[0] = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1;
  *(_OWORD *)pvar = *a3;
  v14 = *a2;
  TryGetAppsFolderItem(v13, &v14, pvar);
  v5 = v13[0];
  if ( !v13[0] )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7A,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
      (const char *)0x80070057LL,
      v11);
  v16 = 0LL;
  v6 = wil::PropertyStoreHelperBase<IPropertyStore>::InitFromItem(
         &v16,
         v13[0],
         1u,
         (__int64)&`GetPinnableItem'::`2'::propertyKeys,
         3u);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7F,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
      (const char *)(unsigned int)v6,
      v12);
  v7 = 0;
  LOWORD(pvar[0]) = 0;
  v14 = PKEY_AppUserModel_HostEnvironment;
  v15 = 14;
  v8 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v16 + 40LL))(v16, &v14, pvar);
  if ( v8 >= 0 )
  {
    if ( LOWORD(pvar[0]) )
    {
      if ( LOWORD(pvar[0]) == 19 )
        v7 = (int)pvar[1];
      else
        v8 = -2147352571;
    }
    else
    {
      v8 = -2147023728;
    }
  }
  PropVariantClear(pvar);
  if ( v8 >= 0 && v7 )
  {
    *a1 = v5;
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v16);
  }
  else
  {
    v14 = *a2;
    GetUnpackagedAppPinnableItem(a1);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    if ( v5 )
      winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(v13, v9);
  }
  return a1;
}
