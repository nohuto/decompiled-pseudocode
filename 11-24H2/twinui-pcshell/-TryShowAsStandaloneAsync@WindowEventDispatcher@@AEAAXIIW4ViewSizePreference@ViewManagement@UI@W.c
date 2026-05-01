/*
 * XREFs of ?TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x1804243F8
 * Callers:
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041B3B0 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180049054 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18007D438 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BDC30 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5F2C (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ViewSizePreference@ViewManagement@UI@6@AEAW489UI@6@AEA_KAEAPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@PEAUIWindowingEnvironmentSettings@3456@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ViewSizePreference@ViewManagement@UI@7@2AEA_KAEAPEAUIAsyncCallback@@$$QEAPEAUIPropertySet@Collections@Foundation@7@$$QEAPEAUIWindowingEnvironmentSettings@4567@@Z @ 0x180415F84 (--$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell.c)
 *     ??$WindowEventDispatcher_TryShowAsStandaloneAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI0@Z @ 0x180416C78 (--$WindowEventDispatcher_TryShowAsStandaloneAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAE.c)
 *     ??4?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180418F60 (--4-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x18041E830 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ?GetPendingActivationData@WindowEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18041F510 (-GetPendingActivationData@WindowEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundati.c)
 *     ?GetSharedListener@WindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x18041F768 (-GetSharedListener@WindowEventDispatcher@@AEAA-AV-$shared_ptr@UViewEventRegistration@@@std@@V-$c.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
void WindowEventDispatcher::TryShowAsStandaloneAsync(RTL_SRWLOCK *a1, int a2, int a3, int a4, ...)
{
  __int64 *CachedView; // rax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rbx
  __int64 *v9; // rax
  __int64 *v10; // rdi
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 *SharedListener; // rax
  void (__fastcall *v14)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), RTL_SRWLOCK **); // rdi
  struct Windows::Foundation::Collections::IPropertySet *v15; // rax
  int PendingActivationData; // ecx
  int v17; // eax
  std::_Ref_count_base *v18; // rbx
  int v19; // eax
  int v20; // eax
  int v21; // [rsp+28h] [rbp-81h]
  int v22; // [rsp+28h] [rbp-81h]
  __int64 v23; // [rsp+58h] [rbp-51h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v24; // [rsp+60h] [rbp-49h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, _QWORD *); // [rsp+68h] [rbp-41h] BYREF
  void *v26; // [rsp+70h] [rbp-39h] BYREF
  RTL_SRWLOCK *v27; // [rsp+78h] [rbp-31h] BYREF
  __int64 v28; // [rsp+80h] [rbp-29h] BYREF
  RTL_SRWLOCK *v29; // [rsp+88h] [rbp-21h] BYREF
  __int64 v30; // [rsp+90h] [rbp-19h] BYREF
  __int64 v31; // [rsp+98h] [rbp-11h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v32; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-1h] BYREF
  std::_Ref_count_base *v34; // [rsp+B0h] [rbp+7h]
  std::_Ref_count_base *v35[2]; // [rsp+B8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+47h]
  __int64 (__fastcall ***v37)(_QWORD, GUID *, _QWORD *); // [rsp+F8h] [rbp+4Fh] BYREF
  int v38; // [rsp+100h] [rbp+57h] BYREF
  int v39; // [rsp+108h] [rbp+5Fh] BYREF
  int v40; // [rsp+110h] [rbp+67h] BYREF
  __int64 v41; // [rsp+118h] [rbp+6Fh] BYREF
  va_list va; // [rsp+118h] [rbp+6Fh]
  unsigned __int64 v43; // [rsp+120h] [rbp+77h] BYREF
  va_list va1; // [rsp+120h] [rbp+77h]
  va_list va2; // [rsp+128h] [rbp+7Fh] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v41 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v43 = va_arg(va2, _QWORD);
  v40 = a4;
  v39 = a3;
  v38 = a2;
  ViewManagerInteropTraceLogging::WindowEventDispatcher_TryShowAsStandaloneAsync<unsigned int &,unsigned int &>(
    &v38,
    &v39);
  v25 = 0LL;
  v37 = 0LL;
  *(_OWORD *)v35 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v29, a1 + 59);
  CachedView = WindowEventDispatcher::GetCachedView((__int64)a1, &v23, a2);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::operator=((__int64 *)&v25, CachedView);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
  v8 = v25;
  if ( !v25 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x962,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v21);
  v9 = WindowEventDispatcher::GetCachedView((__int64)a1, &v23, a3);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::operator=((__int64 *)&v37, v9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
  if ( !v37 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x964,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v21);
  v10 = wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
          &v23,
          (__int64 *)&v37);
  v11 = wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
          (__int64 *)&v24,
          (__int64 *)&v25);
  SharedListener = WindowEventDispatcher::GetSharedListener(v12, &v33, v11, v10);
  std::shared_ptr<KBViewInfo>::operator=(v35, SharedListener);
  if ( v34 )
    std::_Ref_count_base::_Decref(v34);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v29);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v25,
    &v28);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v37,
    &v31);
  v27 = 0LL;
  v14 = (void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), RTL_SRWLOCK **))(*v8)[50];
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v27);
  v14(v8, &v27);
  v15 = 0LL;
  v24 = 0LL;
  if ( v43 )
  {
    v24 = 0LL;
    PendingActivationData = WindowEventDispatcher::GetPendingActivationData(a1 + 3, v43, &v24);
    v15 = v24;
    if ( PendingActivationData < 0 || !v24 )
      v43 = 0LL;
  }
  v29 = v27;
  v32 = v15;
  v33 = v31;
  v30 = v28;
  v23 = 0LL;
  v17 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,enum Windows::UI::ViewManagement::ViewSizePreference &,enum Windows::UI::ViewManagement::ViewSizePreference &,unsigned __int64 &,IAsyncCallback * &,Windows::Foundation::Collections::IPropertySet *,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *>(
          &v23,
          &v30,
          &v33,
          &v40,
          (int *)va,
          (__int64 *)va1,
          (__int64 *)va2,
          (__int64 *)&v32,
          (__int64 *)&v29);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x982,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v17,
      v22);
  v26 = 0LL;
  v18 = v35[0];
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
  v19 = AgileGitPtr::CopyLocal(
          (std::_Ref_count_base *)((char *)v18 + 24),
          &GUID_c1659867_0cf6_5f3b_99df_4f036280926c,
          &v26);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x986,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v19,
      v22);
  v20 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v26 + 24LL))(v26, v28, v23);
  if ( v20 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x987,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v20,
      v22);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v27);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v31);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v28);
  if ( v35[1] )
    std::_Ref_count_base::_Decref(v35[1]);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v37);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
}
