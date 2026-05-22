/*
 * XREFs of ?OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x1800AABE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AppModel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180026A00 (-AppModel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowMa.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180026A60 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManageme.c)
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180026AAC (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002721C (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManage.c)
 *     ?Window@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180027494 (-Window@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowMa.c)
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18006D738 (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ??$call@AEAV_lambda_eae43cc28720a0d43884919512fd9bb9_@@@?$factory_cache_entry@UWindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIWindowStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_eae43cc28720a0d43884919512fd9bb9_@@@Z @ 0x1800A9F00 (--$call@AEAV_lambda_eae43cc28720a0d43884919512fd9bb9_@@@-$factory_cache_entry@UWindowInProc@Wind.c)
 *     _lambda_e08e03aa5b167d5be50e1fd6214815c7_::operator() @ 0x1800AA1C4 (_lambda_e08e03aa5b167d5be50e1fd6214815c7_--operator().c)
 *     ??R_lambda_eae43cc28720a0d43884919512fd9bb9_@@QEBA@AEBUIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@Z @ 0x1800AA238 (--R_lambda_eae43cc28720a0d43884919512fd9bb9_@@QEBA@AEBUIWindowStatics@WindowManagement@Applicati.c)
 *     ?FindTopLevelWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x1800AA524 (-FindTopLevelWindow@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 *     ?FindWindowW@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x1800AA568 (-FindWindowW@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 *     ?HostAppView@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800AA654 (-HostAppView@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPrev.c)
 *     ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@Foundation@Windows@winrt@@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@34@@impl@winrt@@QEBA@XZ @ 0x1800AA70C (-Value@-$consume_Windows_Foundation_IReference@U-$IReference@W4AppModelFrameworkKind@WindowManag.c)
 *     ?ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z @ 0x1800AA800 (-ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z.c)
 *     ?ReparentWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K0@Z @ 0x1800AB4B0 (-ReparentWindow@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K0@Z.c)
 *     ?UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z @ 0x1800AB7D8 (-UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall CUIHierarchy::OnUniversalPropertyChanged(
        CUIHierarchy *a1,
        winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *a2,
        __int64 *a3)
{
  void (__fastcall ***v6)(_QWORD, void *, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)); // rcx
  void (__fastcall ***v7)(_QWORD, __int64 *, __int64 *); // rcx
  void (__fastcall ***v8)(_QWORD, void *, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)); // rcx
  __int64 (__fastcall ***v9)(_QWORD, void *, __int64 *); // r14
  unsigned int v10; // ebx
  __int64 *v11; // rax
  __int64 v12; // rdx
  bool v13; // bl
  char v14; // r9
  __int64 *v15; // [rsp+28h] [rbp-69h] BYREF
  __int64 v16; // [rsp+30h] [rbp-61h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, void *, __int64 *); // [rsp+38h] [rbp-59h] BYREF
  __int64 *v18; // [rsp+40h] [rbp-51h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, void *, __int64 *); // [rsp+48h] [rbp-49h] BYREF
  unsigned int *v20; // [rsp+50h] [rbp-41h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, void *, __int64 *); // [rsp+58h] [rbp-39h] BYREF
  __int64 *v22; // [rsp+60h] [rbp-31h] BYREF
  __int64 v23; // [rsp+68h] [rbp-29h] BYREF
  __int64 v24; // [rsp+70h] [rbp-21h] BYREF
  __int64 v25[2]; // [rsp+78h] [rbp-19h] BYREF
  int v26; // [rsp+88h] [rbp-9h] BYREF
  __int64 v27; // [rsp+90h] [rbp-1h] BYREF
  __int64 v28; // [rsp+98h] [rbp+7h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+Fh] BYREF
  _QWORD v30[8]; // [rsp+A8h] [rbp+17h] BYREF
  unsigned int v31; // [rsp+110h] [rbp+7Fh] BYREF

  if ( (unsigned int)winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<enum winrt::Windows::Internal::ApplicationModel::WindowManagement::AppModelFrameworkKind>,enum winrt::Windows::Internal::ApplicationModel::WindowManagement::AppModelFrameworkKind>::Value(a3) == 5 )
  {
    v6 = (void (__fastcall ***)(_QWORD, void *, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))*a3;
    if ( *a3 )
    {
      v17 = 0LL;
      (**v6)(
        v6,
        &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppModelEventArgs>,
        &v17);
      v19 = v17;
    }
    else
    {
      v19 = 0LL;
    }
    winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::Id(
      (__int64 *)&v19,
      &v31);
    v20 = &v31;
    v25[1] = (__int64)&qword_180246BA8;
    _InterlockedIncrement64(&qword_180246BA8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics> )
    {
      _lambda_eae43cc28720a0d43884919512fd9bb9_::operator()(
        &v20,
        (__int64)&v18,
        (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>);
      _InterlockedDecrement64(&qword_180246BA8);
    }
    else
    {
      _InterlockedDecrement64(&qword_180246BA8);
      winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::call<_lambda_eae43cc28720a0d43884919512fd9bb9_ &>(
        v7,
        (__int64)&v18,
        (__int64)&v20);
    }
    v8 = (void (__fastcall ***)(_QWORD, void *, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))*winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::AppModel(&v18, &v27);
    if ( v8 )
    {
      v21 = 0LL;
      (**v8)(
        v8,
        &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>,
        &v21);
      v9 = v21;
      v17 = v21;
    }
    else
    {
      v17 = 0LL;
      v9 = 0LL;
    }
    winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v27);
    v10 = 0;
    if ( v9 )
    {
      winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>::HostAppView(
        &v17,
        &v15);
      if ( v15 )
      {
        v11 = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::Window(
                &v15,
                &v28);
        v10 = *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::Id(
                 v11,
                 &v26);
        winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v28);
      }
      winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v15);
    }
    CUIHierarchy::FindTopLevelWindow((__int64)a1, v25);
    CUIHierarchy::ReparentWindow(a1, &v16, v31, v10);
    v12 = v16;
    if ( v16 )
    {
      if ( !*(_BYTE *)(v16 + 48) )
      {
        v29 = *((_QWORD *)ISMStatics::GetForegroundManager() + 27);
        CUIHierarchy::FindWindowW((__int64)a1, &v23, v29);
        CUIHierarchy::FindTopLevelWindow((__int64)a1, (__int64 *)&v22);
        v30[0] = a1;
        v30[1] = &v29;
        v30[2] = &v23;
        v15 = (__int64 *)v25[0];
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v15);
        lambda_e08e03aa5b167d5be50e1fd6214815c7_::operator()((__int64)v30, (struct CUIWindow **)&v15);
        v15 = v22;
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v15);
        lambda_e08e03aa5b167d5be50e1fd6214815c7_::operator()((__int64)v30, (struct CUIWindow **)&v15);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
        v12 = v16;
      }
      CUIHierarchy::UpdateInputDisabledStateOnWindowAddition(a1, *(_QWORD *)(v12 + 16));
      CUIHierarchy::ModifyInputDisabledStateAndPropagate((__int64)a1, *(_QWORD *)(v16 + 16), 1, 1);
      CUIHierarchy::ModifyInputDisabledStateAndPropagate((__int64)a1, *(_QWORD *)(v16 + 16), 1, 0);
      v13 = 0;
      CUIHierarchy::FindWindowW((__int64)a1, &v24, *(_QWORD *)(v16 + 24));
      if ( v24 )
        v13 = *(_DWORD *)(v24 + 32) != 0;
      if ( *(_BYTE *)(v16 + 48) )
        v14 = 0;
      else
        v14 = v13;
      CUIHierarchy::ModifyInputDisabledStateAndPropagate((__int64)a1, *(_QWORD *)(v16 + 16), 4, v14);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v25);
    winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v17);
    winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v18);
    winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v19);
  }
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow(a2);
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)a3);
}
