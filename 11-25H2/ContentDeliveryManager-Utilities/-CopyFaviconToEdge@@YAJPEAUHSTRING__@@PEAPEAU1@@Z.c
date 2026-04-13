/*
 * XREFs of ?CopyFaviconToEdge@@YAJPEAUHSTRING__@@PEAPEAU1@@Z @ 0x1800A4264
 * Callers:
 *     _lambda_201f500c0b3e8aa9f89acabd232435e5_::operator() @ 0x1800A3D48 (_lambda_201f500c0b3e8aa9f89acabd232435e5_--operator().c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024204 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A34C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033D30 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CallAndWaitForCompletion@UIStorageFile@Storage@Windows@@PEAUIStorageFolder@23@PEAUHSTRING__@@W4NameCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@$$ZPEAU423@PEAU5@W4623@@wil@@YA?A_PPEAUIStorageFile@Storage@Windows@@P8123@EAAJPEAUIStorageFolder@23@PEAUHSTRING__@@W4NameCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@@Z$$QEAPEAU423@$$QEAPEAU5@$$QEAW4623@@Z @ 0x180088988 (--$CallAndWaitForCompletion@UIStorageFile@Storage@Windows@@PEAUIStorageFolder@23@PEAUHSTRING__@@.c)
 *     ??$GetActivationFactory@UIStorageFileStatics@Storage@Windows@@@wil@@YA?AV?$com_ptr_t@UIStorageFileStatics@Storage@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180088A74 (--$GetActivationFactory@UIStorageFileStatics@Storage@Windows@@@wil@@YA-AV-$com_ptr_t@UIStorageFi.c)
 *     ??$call_and_wait_for_completion@UIStorageFileStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@$$ZAEAPEAU4@@wil@@YA?A_PPEAUIStorageFileStatics@Storage@Windows@@P8123@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@@ZAEAPEAU4@@Z @ 0x1800A3890 (--$call_and_wait_for_completion@UIStorageFileStatics@Storage@Windows@@PEAUHSTRING___ea_1800A3890.c)
 *     ??$query@UIStorageItem@Storage@Windows@@@?$com_ptr_t@UIStorageFile@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIStorageItem@Storage@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A3BB0 (--$query@UIStorageItem@Storage@Windows@@@-$com_ptr_t@UIStorageFile@Storage@Windows@@Uerr_excepti.c)
 *     ?GetEdgeFaviconCache@@YA?AV?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800A47B8 (-GetEdgeFaviconCache@@YA-AV-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wi.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10 #try_helpers=1
__int64 __fastcall CopyFaviconToEdge(__int64 (__fastcall ***a1)(_QWORD, GUID *, _QWORD *), HSTRING *a2)
{
  __int64 v3; // rdx
  unsigned int v4; // r8d
  __int64 v5; // rdx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, _QWORD *); // rsi
  _QWORD *v7; // rax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, HSTRING *); // rbx
  int v10; // eax
  unsigned int v11; // r8d
  HSTRING_HEADER *v12; // rax
  HRESULT v13; // eax
  int v14; // r8d
  __int64 *v15; // rax
  __int64 v16; // rcx
  HSTRING v17; // rbx
  unsigned int v18; // r8d
  HSTRING_HEADER *v19; // rax
  HRESULT v20; // eax
  int v22; // [rsp+20h] [rbp-98h]
  int v23; // [rsp+20h] [rbp-98h]
  __int64 (__fastcall ***v24)(_QWORD, GUID *, _QWORD *); // [rsp+30h] [rbp-88h] BYREF
  HSTRING newString; // [rsp+38h] [rbp-80h] BYREF
  HSTRING string; // [rsp+40h] [rbp-78h] BYREF
  int v27[2]; // [rsp+48h] [rbp-70h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, _QWORD *); // [rsp+50h] [rbp-68h] BYREF
  __int64 v29; // [rsp+58h] [rbp-60h] BYREF
  __int64 v30; // [rsp+60h] [rbp-58h] BYREF
  __int64 v31; // [rsp+68h] [rbp-50h] BYREF
  HSTRING_HEADER v32; // [rsp+70h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v28 = a1;
  GetEdgeFaviconCache(&v30);
  v5 = *(_QWORD *)wil::GetActivationFactory<Windows::Storage::IStorageFileStatics>((const WCHAR *)v27, v3, v4);
  ___call_and_wait_for_completion_UIStorageFileStatics_Storage_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_3___ZAEAPEAU4__wil__YA_A_PPEAUIStorageFileStatics_Storage_Windows__P8123_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_3__ZAEAPEAU4__Z(
    &v24,
    v5);
  v6 = v24;
  v24 = 0LL;
  v28 = v6;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)v27);
  string = 0LL;
  v7 = wil::com_ptr_t<Windows::Storage::IStorageFile,wil::err_exception_policy>::query<Windows::Storage::IStorageItem>(
         &v28,
         v27);
  v8 = *v7;
  v9 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)*v7 + 88LL);
  WindowsDeleteString(string);
  string = 0LL;
  v10 = v9(v8, &string);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x44,
      (__int64)"shellcommon\\shell\\inc\\CopyEdgeAssetsHelper.h",
      (const char *)(unsigned int)v10,
      v22);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)v27);
  newString = 0LL;
  WindowsDeleteString(0LL);
  newString = 0LL;
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v32, (const WCHAR **)&off_1800DC0D0, v11);
  v13 = WindowsConcatString(string, (HSTRING)v12[1].Reserved.Reserved1, &newString);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"shellcommon\\shell\\inc\\CopyEdgeAssetsHelper.h",
      (const char *)(unsigned int)v13,
      v22);
  LODWORD(v24) = 1;
  *(_QWORD *)v27 = newString;
  v29 = v30;
  v15 = (__int64 *)___CallAndWaitForCompletion_UIStorageFile_Storage_Windows__PEAUIStorageFolder_23_PEAUHSTRING____W4NameCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_3___ZPEAU423_PEAU5_W4623__wil__YA_A_PPEAUIStorageFile_Storage_Windows__P8123_EAAJPEAUIStorageFolder_23_PEAUHSTRING____W4NameCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_3__Z__QEAPEAU423___QEAPEAU5___QEAW4623__Z(
                     (__int64)&v31,
                     (int)v6,
                     v14,
                     (int)&v29,
                     (__int64)v27,
                     (__int64)&v24);
  v16 = *v15;
  *v15 = 0LL;
  v29 = v16;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
  v17 = newString;
  v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v32, (const WCHAR **)off_1800DC0C0, v18);
  v20 = WindowsConcatString((HSTRING)v19[1].Reserved.Reserved1, v17, a2);
  if ( v20 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x53,
      (__int64)"shellcommon\\shell\\inc\\CopyEdgeAssetsHelper.h",
      (const char *)(unsigned int)v20,
      v23);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v29);
  WindowsDeleteString(newString);
  newString = 0LL;
  WindowsDeleteString(string);
  string = 0LL;
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v28);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v30);
  return 0LL;
}
