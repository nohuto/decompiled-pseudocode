/*
 * XREFs of ?UnpinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x1805664E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18002CBE4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18007DA98 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802116FC (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Micros.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180296A94 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$_Move_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00@Z @ 0x180343DF0 (--$_Move_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAV12@@std@.c)
 *     ??1VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180564108 (--1VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?StartActivity@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180564E80 (-StartActivity@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtualDesktop@@@Z @ 0x1805655DC (-Stop@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtu.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=1
__int64 __fastcall VirtualPinnedAppsHandler::UnpinAppID(VirtualPinnedAppsHandler *this, const unsigned __int16 *a2)
{
  __int64 v4; // rdx
  const WCHAR *v5; // rbx
  const WCHAR *v6; // rsi
  const WCHAR *v7; // rcx
  int v9; // eax
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rbx
  __int64 *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-1F8h]
  struct IVirtualDesktop *v22; // [rsp+30h] [rbp-1E8h] BYREF
  __int64 v23; // [rsp+38h] [rbp-1E0h] BYREF
  __int64 v24; // [rsp+40h] [rbp-1D8h] BYREF
  RTL_SRWLOCK *v25; // [rsp+48h] [rbp-1D0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-1C8h] BYREF
  unsigned int v27; // [rsp+58h] [rbp-1C0h] BYREF
  __int64 v28[2]; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 v29; // [rsp+70h] [rbp-1A8h] BYREF
  int v30; // [rsp+78h] [rbp-1A0h]
  int v31; // [rsp+80h] [rbp-198h] BYREF
  __int64 v32[3]; // [rsp+88h] [rbp-190h] BYREF
  volatile signed __int32 *v33[42]; // [rsp+A0h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 9) + 32LL))(*((_QWORD *)this + 9), &v25);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v33,
    (__int64)"VirtualDesktopUnpinAppActivity");
  v33[0] = (volatile signed __int32 *)&VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity *)v33);
  if ( !*((_QWORD *)this + 10) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9F,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)0x80070490LL,
      bIgnoreCase);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 440LL))(*((_QWORD *)this + 6)) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA0,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)0x8007139FLL,
      bIgnoreCase);
  v5 = (const WCHAR *)*((_QWORD *)this + 11);
  v6 = (const WCHAR *)*((_QWORD *)this + 12);
  while ( v5 != v6 )
  {
    v7 = v5;
    if ( *((_QWORD *)v5 + 3) > 7uLL )
      v7 = *(const WCHAR **)v5;
    if ( CompareStringOrdinal(v7, -1, a2, -1, 1) == 2 )
      break;
    v5 += 16;
  }
  if ( v5 == *((const WCHAR **)this + 12) )
  {
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::~VirtualDesktopUnpinAppActivity(v33);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v25);
    return 1LL;
  }
  else
  {
    LOBYTE(v4) = 1;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, const unsigned __int16 *))(**((_QWORD **)this + 7)
                                                                                               + 72LL))(
           *((_QWORD *)this + 7),
           v4,
           L"PinnedApps",
           a2);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA8,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v9);
    std::_Move_unchecked<std::wstring *,std::wstring *>((__int64)(v5 + 16), *((_QWORD *)this + 12), (__int64)v5);
    std::wstring::_Tidy_deallocate((void **)(*((_QWORD *)this + 12) - 32LL));
    *((_QWORD *)this + 12) -= 32LL;
    v23 = 0LL;
    v10 = (__int64 *)*((_QWORD *)this + 10);
    v11 = *v10;
    v23 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64 *, const unsigned __int16 *, __int64 *))(v11 + 40))(v10, a2, &v23);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAC,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v12,
        bIgnoreCase);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
      (__int64)&v29,
      v23);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
      (__int64)&v27,
      (__int64)&v29,
      0);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
      (__int64)&v31,
      (__int64)&v29,
      v30);
    while ( v27 != v31 || v28[1] != v32[1] )
    {
      v16 = v28[0];
      v26 = v28[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v26);
      v24 = 0LL;
      v17 = (__int64 *)*((_QWORD *)this + 6);
      v18 = *v17;
      v24 = 0LL;
      v19 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v18 + 368))(v17, &v24);
      if ( v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB1,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v19,
          bIgnoreCase);
      v20 = (*(__int64 (__fastcall **)(VirtualPinnedAppsHandler *, __int64, __int64))(*(_QWORD *)this + 104LL))(
              this,
              v16,
              v24);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB2,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v20);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
      ++v27;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v27);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v32);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v28);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
    v22 = 0LL;
    v13 = (__int64 *)*((_QWORD *)this + 6);
    v14 = *v13;
    v22 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64 *, struct IVirtualDesktop **))(v14 + 368))(v13, &v22);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB7,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v15,
        bIgnoreCase);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::Stop(
      (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity *)v33,
      a2,
      v22);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::~VirtualDesktopUnpinAppActivity(v33);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v25);
    return 0LL;
  }
}
