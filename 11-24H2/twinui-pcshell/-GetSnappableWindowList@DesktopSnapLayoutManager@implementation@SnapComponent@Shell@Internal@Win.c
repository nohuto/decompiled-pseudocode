/*
 * XREFs of ?GetSnappableWindowList@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AV?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@XZ @ 0x180272F20
 * Callers:
 *     ?GetSnappableWindowSuggestions@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AU?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@7@UWindowId@UI@67@@Z @ 0x180273284 (-GetSnappableWindowSuggestions@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Inter.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18002CBE4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x18004E0E8 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18007DA98 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?IsSnappableWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NPEAUIVirtualDesktopManagerInternal@@@Z @ 0x18008C420 (-IsSnappableWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NPEAUIVi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEAU?$com_ptr@UIApplicationView@@@winrt@@@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@AEAAPEAU?$com_ptr@UIApplicationView@@@winrt@@QEAU23@AEAU23@@Z @ 0x1801AA058 (--$_Emplace_reallocate@AEAU-$com_ptr@UIApplicationView@@@winrt@@@-$vector@U-$com_ptr@UIApplicati.c)
 *     ??$create_instance@UIServiceProvider@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x180210C8C (--$create_instance@UIServiceProvider@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802116FC (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Micros.c)
 *     std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x18028F210 (std--_Sort_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 *__fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetSnappableWindowList(
        __int64 *a1)
{
  IUnknown *v2; // rbx
  unsigned int v3; // eax
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  SnapLayoutHelpers *v7; // rsi
  int (__fastcall *v8)(SnapLayoutHelpers *, void **); // rbx
  struct IApplicationView *v9; // rdx
  SnapLayoutHelpers *v10; // rbx
  __int64 *v11; // rdx
  __int64 v12; // r9
  int v14; // [rsp+28h] [rbp-59h]
  char v15; // [rsp+38h] [rbp-49h]
  SnapLayoutHelpers *v16; // [rsp+40h] [rbp-41h] BYREF
  void *ppvOut; // [rsp+48h] [rbp-39h] BYREF
  int v18; // [rsp+50h] [rbp-31h]
  __int64 v19; // [rsp+58h] [rbp-29h] BYREF
  bool v20[8]; // [rsp+60h] [rbp-21h] BYREF
  SnapLayoutHelpers *v21; // [rsp+68h] [rbp-19h] BYREF
  IUnknown *punk; // [rsp+70h] [rbp-11h] BYREF
  unsigned int v23; // [rsp+78h] [rbp-9h] BYREF
  SnapLayoutHelpers *v24[2]; // [rsp+80h] [rbp-1h] BYREF
  __int64 v25; // [rsp+90h] [rbp+Fh] BYREF
  int v26; // [rsp+98h] [rbp+17h]
  int v27; // [rsp+A0h] [rbp+1Fh] BYREF
  __int128 v28; // [rsp+A8h] [rbp+27h] BYREF
  __int64 *v29; // [rsp+B8h] [rbp+37h]
  GUID v30; // [rsp+C0h] [rbp+3Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v29 = a1;
  v18 = 0;
  v30 = CLSID_ImmersiveShell;
  winrt::create_instance<IServiceProvider>((__int64)&punk, (int)&v30);
  v2 = punk;
  if ( !punk )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x191,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
      (const char *)0x80004005LL,
      v14);
  *(_QWORD *)v20 = 0LL;
  ((void (__fastcall *)(IUnknown *, SID *, GUID *, bool *))punk->lpVtbl[1].QueryInterface)(
    punk,
    &SID_VirtualDesktopManager,
    &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
    v20);
  ppvOut = 0LL;
  v27 = 0;
  v28 = 0LL;
  v3 = IUnknown_QueryService(
         v2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &winrt::impl::guid_v<IApplicationViewCollection>,
         &ppvOut);
  winrt::check_hresult(&v16, v3, &v27);
  v4 = (__int64 *)ppvOut;
  *(_QWORD *)&v30.Data1 = ppvOut;
  v18 = 2;
  if ( !ppvOut )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x19B,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
      (const char *)0x80004002LL,
      v14);
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v18 = 3;
  v19 = 0LL;
  v5 = *v4;
  v19 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 32))(v4, &v19);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1A0,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
      (const char *)(unsigned int)v6,
      v14);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
    (__int64)&v25,
    v19);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
    (__int64)&v23,
    (__int64)&v25,
    0);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
    (__int64)&v27,
    (__int64)&v25,
    v26);
  while ( v23 != v27 || v24[1] != *((SnapLayoutHelpers **)&v28 + 1) )
  {
    v7 = v24[0];
    v21 = v24[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
    ppvOut = 0LL;
    v8 = *(int (__fastcall **)(SnapLayoutHelpers *, void **))(*(_QWORD *)v7 + 80LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&ppvOut);
    if ( v8(v7, &ppvOut) >= 0 && SnapLayoutHelpers::IsSnappableWindow(v7, v9, 0LL, *(__int64 **)v20) )
    {
      v10 = 0LL;
      v16 = 0LL;
      if ( v7 )
      {
        winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>((__int64 *)&v16);
        v10 = v7;
        v16 = v7;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
      }
      v11 = (__int64 *)a1[1];
      if ( v11 == (__int64 *)a1[2] )
      {
        std::vector<winrt::com_ptr<IApplicationView>>::_Emplace_reallocate<winrt::com_ptr<IApplicationView> &>(
          a1,
          (__int64)v11,
          (__int64 *)&v16);
      }
      else
      {
        *v11 = (__int64)v10;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
        a1[1] += 8LL;
      }
      winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>((__int64 *)&v16);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppvOut);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
    ++v23;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v23);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v24);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
  LOBYTE(v12) = v15;
  std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
    *a1,
    a1[1],
    (a1[1] - *a1) >> 3,
    v12);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
  winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v30);
  if ( *(_QWORD *)v20 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)v20);
  winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&punk);
  return a1;
}
