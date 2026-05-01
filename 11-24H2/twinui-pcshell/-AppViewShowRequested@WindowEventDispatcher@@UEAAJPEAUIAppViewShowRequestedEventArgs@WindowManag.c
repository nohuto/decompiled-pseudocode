/*
 * XREFs of ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041BCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18029F300 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ??$query@UIUniversalAppModelPreview@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModelPreview@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1802C0670 (--$query@UIUniversalAppModelPreview@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_p.c)
 *     ??$WindowEventDispatcher_OnAppViewShowRequested@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI0@Z @ 0x1802C8E00 (--$WindowEventDispatcher_OnAppViewShowRequested@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI.c)
 *     _lambda_27d41e6f978e0f5a6483d2ed3ecdf382_::__lambda_27d41e6f978e0f5a6483d2ed3ecdf382_ @ 0x1802CD778 (_lambda_27d41e6f978e0f5a6483d2ed3ecdf382_--__lambda_27d41e6f978e0f5a6483d2ed3ecdf382_.c)
 *     wil::ScopeExit__lambda_7aa11f23cd4c27c8dfc8a34bb768def3___ @ 0x18030C768 (wil--ScopeExit__lambda_7aa11f23cd4c27c8dfc8a34bb768def3___.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_ef35ad339df693097d70a532b21bbd6c___ @ 0x180414290 (Microsoft--WRL--Callback_IAsyncCallback__lambda_ef35ad339df693097d70a532b21bbd6c___.c)
 *     _lambda_ec5d955e16bd0abce266b4b0ac713b48_::_lambda_ec5d955e16bd0abce266b4b0ac713b48_ @ 0x180417918 (_lambda_ec5d955e16bd0abce266b4b0ac713b48_--_lambda_ec5d955e16bd0abce266b4b0ac713b48_.c)
 *     wil::details::ScopeExitFn__lambda_0273da5863e2aca574d16cb8b069f392___::_ScopeExitFn__lambda_0273da5863e2aca574d16cb8b069f392___ @ 0x1804188F0 (wil--details--ScopeExitFn__lambda_0273da5863e2aca574d16cb8b069f392___--_ScopeExitFn__lambda_0273.c)
 *     ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x1804206D0 (-IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Interna.c)
 *     ?TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ExperienceKind@WindowManagement@ApplicationModel@Internal@5@W4ViewSizePreference@345@2USize@Foundation@5@PEAUIAsyncCallback@@@Z @ 0x180424710 (-TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall WindowEventDispatcher::AppViewShowRequested(
        WindowEventDispatcher *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *a2)
{
  __int64 (**v4)(void); // rax
  __int64 (*v5)(void); // rax
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  _QWORD *v12; // rax
  int v13; // eax
  __int64 (**v14)(void); // rax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  const char *v21; // r9
  __int64 result; // rax
  int v23; // [rsp+20h] [rbp-B8h]
  int v24; // [rsp+50h] [rbp-88h] BYREF
  int v25; // [rsp+54h] [rbp-84h] BYREF
  int v26; // [rsp+58h] [rbp-80h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v27; // [rsp+60h] [rbp-78h] BYREF
  __int64 *v28; // [rsp+68h] [rbp-70h] BYREF
  __int64 v29; // [rsp+70h] [rbp-68h] BYREF
  __int64 v30; // [rsp+78h] [rbp-60h] BYREF
  volatile int *v31; // [rsp+80h] [rbp-58h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v32; // [rsp+88h] [rbp-50h] BYREF
  __int64 v33; // [rsp+90h] [rbp-48h] BYREF
  __int64 v34; // [rsp+98h] [rbp-40h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-38h] BYREF
  char v36; // [rsp+A8h] [rbp-30h]
  _QWORD v37[5]; // [rsp+B0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  unsigned int v39; // [rsp+E8h] [rbp+10h] BYREF
  unsigned int v40; // [rsp+F0h] [rbp+18h] BYREF
  int v41; // [rsp+F8h] [rbp+20h] BYREF

  v4 = *(__int64 (***)(void))a2;
  v28 = 0LL;
  v5 = *v4;
  try
  {
    v6 = v5();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3E7,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        v23);
    v27 = 0LL;
    v7 = *v28;
    v27 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(v7 + 48))(
           v28,
           &v27);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3EA,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v8,
        v23);
    v32 = 0LL;
    if ( !IsComponentAppViewAndGetKindAndModel(
            v27,
            (enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind *)&v39,
            &v32) )
    {
      wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelPreview>(
        (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v32,
        &v34);
      v26 = 0;
      v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v34 + 48LL))(v34, &v26);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x3F3,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v9,
          v23);
      v29 = 0LL;
      v10 = *v28;
      v29 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v10 + 80))(v28, &v29);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x3F6,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v11,
          v23);
      lambda_ec5d955e16bd0abce266b4b0ac713b48_::_lambda_ec5d955e16bd0abce266b4b0ac713b48_(&v35, (__int64 *)&v28, &v29);
      Microsoft::WRL::Callback_IAsyncCallback__lambda_ef35ad339df693097d70a532b21bbd6c___(&v31);
      lambda_27d41e6f978e0f5a6483d2ed3ecdf382_::__lambda_27d41e6f978e0f5a6483d2ed3ecdf382_(&v35);
      v12 = winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
              v37,
              (__int64)&v31);
      wil::ScopeExit__lambda_7aa11f23cd4c27c8dfc8a34bb768def3___((__int64)&v35, v12);
      v40 = 0;
      v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v27 + 48LL))(
              v27,
              &v40);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x408,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v13,
          v23);
      v14 = *(__int64 (***)(void))a2;
      v30 = 0LL;
      v15 = ((__int64 (__fastcall *)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, __int64 *))v14[8])(
              a2,
              &v30);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x40B,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v15,
          v23);
      v39 = 0;
      v16 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v30 + 48LL))(v30, &v39);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x40D,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v16,
          v23);
      v25 = 0;
      v17 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 80LL))(
              a2,
              &v25);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x410,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v17,
          v23);
      v24 = 0;
      v18 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 72LL))(
              a2,
              &v24);
      if ( v18 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x414,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v18,
          v23);
      v41 = 0;
      v19 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 48LL))(
              a2,
              &v41);
      if ( v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x418,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v19,
          v23);
      ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewShowRequested<unsigned int &,unsigned int &>(
        (int *)&v40,
        (int *)&v39);
      v33 = 0LL;
      v20 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, __int64 *))(*(_QWORD *)a2 + 56LL))(
              a2,
              &v33);
      if ( v20 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x41D,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v20,
          v23);
      WindowEventDispatcher::TryShowAsViewModeAsync((char *)this - 16, v40, v39, v41 == 2, v26, v25, v24, v33, v31);
      v36 = 0;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v30);
      wil::details::ScopeExitFn__lambda_0273da5863e2aca574d16cb8b069f392___::_ScopeExitFn__lambda_0273da5863e2aca574d16cb8b069f392___(&v35);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v29);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v34);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v32);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v27);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v28);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x43C,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v21);
  }
  return result;
}
