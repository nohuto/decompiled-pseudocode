/*
 * XREFs of ?GetEdgeFaviconCache@@YA?AV?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800A47B8
 * Callers:
 *     ?CopyFaviconToEdge@@YAJPEAUHSTRING__@@PEAPEAU1@@Z @ 0x1800A4264 (-CopyFaviconToEdge@@YAJPEAUHSTRING__@@PEAPEAU1@@Z.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024204 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A34C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A434 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E6FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?A_PPEAUIStorageFolderStatics@Storage@Windows@@P8123@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@@Z$$QEAPEAU4@@Z @ 0x1800889DC (--$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU-$IAsy.c)
 *     ??$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA?AV?$com_ptr_t@UIStorageFolderStatics@Storage@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180088B14 (--$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA-AV-$com_ptr_t@UIStorage.c)
 *     ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAE@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEA_W_KPEA_K@Z@wistd@@@Z @ 0x1800A35A4 (--$AdaptFixedSizeToAllocatedResult@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_WP6A.c)
 *     ??$CallAndWaitForCompletion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@W4CreationCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@W4523@@wil@@YA?A_PPEAUIStorageFolder@Storage@Windows@@P8123@EAAJPEAUHSTRING__@@W4CreationCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@@Z$$QEAPEAU4@$$QEAW4523@@Z @ 0x1800A3728 (--$CallAndWaitForCompletion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@W4CreationCollisionO.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AHPEAX@Z$1?CloseState@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800A3CEC (--1-$unique_storage@U-$resource_policy@PEAXP6AHPEAX@Z$1-CloseState@@YAH0@ZU-$integral_constant@_.c)
 *     ?GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z @ 0x1800B28B4 (-GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
_QWORD *__fastcall GetEdgeFaviconCache(_QWORD *a1, __int64 a2, void **a3)
{
  int StateHandle; // eax
  int v5; // eax
  unsigned int v6; // r8d
  __int64 v7; // rdx
  unsigned int v8; // r8d
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  int v12; // r8d
  __int64 *v13; // rax
  __int64 v14; // rdi
  const WCHAR *v15; // rcx
  int v16; // r8d
  __int64 *v17; // rax
  __int64 v18; // rcx
  const WCHAR *v19; // rcx
  int v21; // [rsp+28h] [rbp-E0h]
  const WCHAR *Reserved1; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  const WCHAR *v25; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int16 v26[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v27; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v29[8]; // [rsp+88h] [rbp-80h] BYREF
  void **v30; // [rsp+90h] [rbp-78h] BYREF
  __int128 v31; // [rsp+98h] [rbp-70h]
  void ***v32; // [rsp+F8h] [rbp-10h]
  HSTRING_HEADER hstringHeader; // [rsp+100h] [rbp-8h] BYREF
  __int64 v34; // [rsp+118h] [rbp+10h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+28h]

  *(_QWORD *)&v27 = a1;
  *(_QWORD *)v26 = 0LL;
  StateHandle = CallerIdentity::GetStateHandle((CallerIdentity *)L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe", v26, a3);
  if ( StateHandle < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C,
      (__int64)"shellcommon\\shell\\inc\\CopyEdgeAssetsHelper.h",
      (const char *)(unsigned int)StateHandle,
      v21);
  v25 = 0LL;
  LODWORD(v23) = 1;
  Reserved1 = *(const WCHAR **)v26;
  *(_QWORD *)&v27 = &Reserved1;
  *((_QWORD *)&v27 + 1) = &v23;
  v30 = &wistd::__function::__func<_lambda_cc048563a57b57a885d4bf4143ff221c_,long (wchar_t *,unsigned __int64,unsigned __int64 *)>::`vftable';
  v31 = v27;
  v32 = &v30;
  v5 = wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>,260>(
         (__int64)&v25,
         (__int64)v29);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"shellcommon\\shell\\inc\\CopyEdgeAssetsHelper.h",
      (const char *)(unsigned int)v5,
      v21);
  Reserved1 = v25;
  Reserved1 = (const WCHAR *)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                               &hstringHeader,
                               &Reserved1,
                               v6)[1].Reserved.Reserved1;
  wil::GetActivationFactory<Windows::Storage::IStorageFolderStatics>((const WCHAR *)&v24, v7, v8);
  v9 = (__int64 *)___CallAndWaitForCompletion_UIStorageFolderStatics_Storage_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4__wil__YA_A_PPEAUIStorageFolderStatics_Storage_Windows__P8123_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3__Z__QEAPEAU4__Z((__int64)&v23);
  v10 = *v9;
  *v9 = 0LL;
  *(_QWORD *)&v27 = v10;
  v11 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v24);
  LODWORD(v23) = 3;
  v34 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Favicons", 9u, 8u);
  v24 = v34;
  v13 = (__int64 *)___CallAndWaitForCompletion_UIStorageFolder_Storage_Windows__PEAUHSTRING____W4CreationCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4_W4523__wil__YA_A_PPEAUIStorageFolder_Storage_Windows__P8123_EAAJPEAUHSTRING____W4CreationCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3__Z__QEAPEAU4___QEAW4523__Z(
                     (__int64)&Reserved1,
                     v10,
                     v12,
                     (int)&v24,
                     (__int64)&v23);
  v14 = *v13;
  *v13 = 0LL;
  v28 = v14;
  v15 = Reserved1;
  if ( Reserved1 )
  {
    Reserved1 = 0LL;
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  LODWORD(v23) = 3;
  v34 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Provided", 9u, 8u);
  v24 = v34;
  v17 = (__int64 *)___CallAndWaitForCompletion_UIStorageFolder_Storage_Windows__PEAUHSTRING____W4CreationCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4_W4523__wil__YA_A_PPEAUIStorageFolder_Storage_Windows__P8123_EAAJPEAUHSTRING____W4CreationCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3__Z__QEAPEAU4___QEAW4523__Z(
                     (__int64)&Reserved1,
                     v14,
                     v16,
                     (int)&v24,
                     (__int64)&v23);
  v18 = *v17;
  *v17 = 0LL;
  *a1 = v18;
  v19 = Reserved1;
  if ( Reserved1 )
  {
    Reserved1 = 0LL;
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v34 = 0LL;
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v28);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v27);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v25);
  wil::details::unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(v26);
  return a1;
}
