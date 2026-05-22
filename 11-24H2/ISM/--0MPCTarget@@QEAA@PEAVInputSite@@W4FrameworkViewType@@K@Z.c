/*
 * XREFs of ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x1800FF9FC
 * Callers:
 *     ?GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z @ 0x1800FCF8C (-GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z.c)
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x1800FF318 (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180013478 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x18002706C (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18002724C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?GetIdForNamespace@InputSite@@QEBA?AV?$optional@_K@std@@W4InputSiteIdNamespace@@@Z @ 0x18002DA20 (-GetIdForNamespace@InputSite@@QEBA-AV-$optional@_K@std@@W4InputSiteIdNamespace@@@Z.c)
 *     ?CreateWatcher@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@XZ @ 0x18004A9FC (-CreateWatcher@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@XZ.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180052450 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?value@?$optional@_K@std@@QEGAAAEA_KXZ @ 0x180063F10 (-value@-$optional@_K@std@@QEGAAAEA_KXZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006885C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180091D8C (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ?Start@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800A7944 (-Start@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatch.c)
 *     ??$as@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800A8878 (--$as@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@Utype.c)
 *     ?UniversalPropertyChanged@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelWatcher@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x1800AA280 (-UniversalPropertyChanged@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversa.c)
 *     ?MPCTarget_Create_@ISMTracing@@QEAAXPEAUIMPCTarget@@@Z @ 0x1800FFF24 (-MPCTarget_Create_@ISMTracing@@QEAAXPEAUIMPCTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall MPCTarget::MPCTarget(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rsi
  const char *v8; // r9
  int v9; // r8d
  const char *v10; // r9
  __int64 *Watcher; // rdi
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 (__fastcall ***v14)(_QWORD, void *, __int64 *); // rdx
  char *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // ecx
  unsigned int *i; // rbx
  _DWORD *CompositionInputQueue; // rax
  ISMTracing *v21; // rcx
  __int64 v23; // [rsp+20h] [rbp-88h] BYREF
  __int64 *v24; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v25[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v26; // [rsp+40h] [rbp-68h]
  _BYTE v27[12]; // [rsp+48h] [rbp-60h] BYREF
  int v28; // [rsp+54h] [rbp-54h]
  __int128 v29; // [rsp+58h] [rbp-50h]
  __int64 v30; // [rsp+68h] [rbp-40h]
  __int64 v31; // [rsp+70h] [rbp-38h] BYREF
  _DWORD v32[4]; // [rsp+78h] [rbp-30h] BYREF
  __int64 v33; // [rsp+88h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v7 = a1;
  v26 = a1;
  *(_QWORD *)(a1 + 8) = &RefCountedObject::`vftable';
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)a1 = &MPCTarget::`vftable'{for `IMPCTarget'};
  *(_QWORD *)(a1 + 8) = &MPCTarget::`vftable'{for `RefCountedObject'};
  wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
    (_QWORD *)(a1 + 24),
    a2);
  *(_QWORD *)(v7 + 32) = 0LL;
  *(_DWORD *)(v7 + 44) = a3;
  *(_DWORD *)(v7 + 56) = a4;
  *(_QWORD *)(v7 + 64) = 0LL;
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_BYTE *)(v7 + 40) = a3 == 1;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
      v8);
  InputSite::GetIdForNamespace(a2, (__int64)v27, 1);
  if ( v27[8] )
  {
    *(_QWORD *)(v7 + 48) = *(_QWORD *)std::optional<unsigned __int64>::value((__int64)v27);
  }
  else
  {
    *(_QWORD *)(v7 + 48) = 0LL;
    if ( !*(_BYTE *)(a2 + 480) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
        v10);
    v17 = 0LL;
    v18 = v9;
    do
      v32[v17++] = v18++;
    while ( v17 < 4 );
    for ( i = v32; i != (unsigned int *)&v33; ++i )
    {
      CompositionInputQueue = (_DWORD *)LegacyInputSinkData::GetCompositionInputQueue(a2 + 48, *i);
      if ( *CompositionInputQueue == 2 || *CompositionInputQueue == 3 )
      {
        *(_QWORD *)(v7 + 48) = (unsigned int)CompositionInputQueue[2];
        break;
      }
    }
    if ( !*(_QWORD *)(v7 + 48) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x41,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
        v10);
  }
  if ( *(_DWORD *)(v7 + 44) == 6 )
  {
    try
    {
      Watcher = winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc::CreateWatcher(v25);
      v12 = (_QWORD *)(v7 + 64);
      if ( (__int64 *)(v7 + 64) != Watcher )
      {
        if ( *v12 )
          winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)(v7 + 64));
        v13 = *Watcher;
        *Watcher = 0LL;
        *v12 = v13;
      }
      winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)v25);
      v14 = *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(v7 + 64);
      if ( v14 )
      {
        winrt::impl::as<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
          &v24,
          v14);
        *(_QWORD *)&v29 = v7;
        *((_QWORD *)&v29 + 1) = &MPCTarget::OnUniversalPropertyChanged;
        LODWORD(v30) = 0;
        HIDWORD(v30) = v28;
        v15 = (char *)operator new(0x28uLL);
        winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v15 + 8));
        *(_OWORD *)(v16 + 16) = v29;
        *(_QWORD *)(v16 + 32) = v30;
        _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
        *(_QWORD *)v16 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalPropertyChangedEventArgs>,_lambda_f7189cc794088eeaf33bed95e453010f_>::`vftable';
        v23 = v16;
        *(_QWORD *)(v7 + 72) = *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher>::UniversalPropertyChanged(
                                  &v24,
                                  &v31,
                                  &v23);
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v23);
        winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Start((__int64 *)(v7 + 64));
        winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v24);
      }
    }
    catch ( ... )
    {
      v7 = v26;
    }
  }
  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::MPCTarget_Create_(v21, (struct IMPCTarget *)v7);
  }
  return v7;
}
