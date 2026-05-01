/*
 * XREFs of ?RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z @ 0x180190AEC
 * Callers:
 *     ??$MakeAndInitialize@VUwpWindowManagerBridge@@UIUwpWindowManagerBridge@@PEAVUwpWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIUwpWindowManagerBridge@@$$QEAPEAVUwpWindowEventDispatcher@@@Z @ 0x180190890 (--$MakeAndInitialize@VUwpWindowManagerBridge@@UIUwpWindowManagerBridge@@PEAVUwpWindowEventDispat.c)
 * Callees:
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180019118 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ?IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18001AAA8 (-IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x18004CBA0 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1800F24B4 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil.c)
 *     ?create@?$event_t@V?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x18019108C (-create@-$event_t@V-$shared_storage@V-$unique_any_t@V-$event_t@V-$unique_storage@U-$resource_pol.c)
 *     ??1?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1801910F0 (--1-$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ.c)
 *     ?StartWindowWatcher@UwpWindowManagerBridge@@UEAAJXZ @ 0x1801E8440 (-StartWindowWatcher@UwpWindowManagerBridge@@UEAAJXZ.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1802968EC (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     std::thread::_Start__lambda_2a8f8fa06f2e0b1768a49123f6915af2___ @ 0x1802AAEF8 (std--thread--_Start__lambda_2a8f8fa06f2e0b1768a49123f6915af2___.c)
 *     ??$GetActivationFactory@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1802B30C0 (--$GetActivationFactory@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@In.c)
 *     ?WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802C01C0 (-WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ??$query_to@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1802C4DCC (--$query_to@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@@-$co.c)
 *     ??$?0$0EF@@StringReference@Internal@Windows@@QEAA@AEAY0EF@$$CBG@Z @ 0x1802C78B4 (--$-0$0EF@@StringReference@Internal@Windows@@QEAA@AEAY0EF@$$CBG@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall UwpWindowManagerBridge::RuntimeClassInitialize(
        UwpWindowManagerBridge *this,
        struct IUwpWindowEventDispatcherInternal *a2)
{
  int event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z; // eax
  int v4; // eax
  std::_Ref_count_base *v5; // rbx
  wil **v6; // rdi
  wil *v7; // rcx
  Windows::Internal::ApplicationModel::WindowManagement *v8; // rcx
  __int64 v9; // rcx
  int ActivationFactory; // eax
  const unsigned __int16 *v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  int v14; // eax
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, char *); // rbx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, char *); // rdi
  _QWORD *v21; // rcx
  int v22; // eax
  __int64 v23; // rsi
  __int64 (__fastcall *v24)(__int64, char *); // rdi
  int v25; // eax
  wil *v26; // rcx
  int started; // eax
  int v29; // eax
  UwpWindowManagerBridge *v30; // rbx
  void *v31; // rdx
  CCriticalFailureHandler *v32; // rcx
  const char *v33; // r9
  char v34; // al
  unsigned __int64 *v35; // [rsp+20h] [rbp-C8h]
  unsigned __int64 *v36; // [rsp+28h] [rbp-C0h]
  int v37; // [rsp+20h] [rbp-C8h]
  unsigned int v38[4]; // [rsp+30h] [rbp-B8h] BYREF
  _Thrd_t v39; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v40; // [rsp+50h] [rbp-98h] BYREF
  std::_Ref_count_base *v41[2]; // [rsp+60h] [rbp-88h] BYREF
  UwpWindowManagerBridge *v42; // [rsp+70h] [rbp-78h]
  _QWORD v43[3]; // [rsp+78h] [rbp-70h] BYREF
  __int64 v44[2]; // [rsp+90h] [rbp-58h] BYREF
  _Thrd_t v45; // [rsp+A0h] [rbp-48h] BYREF
  Windows::Internal::ApplicationModel::WindowManagement *retaddr; // [rsp+E8h] [rbp+0h]

  v42 = this;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)this + 37,
    (__int64)a2);
  try
  {
    *(_OWORD *)v41 = 0LL;
    _create___event_t_V__shared_storage_V__unique_any_t_V__event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil___wil___details_wil__Uerr_exception_policy_3__wil__QEAAXW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
      v41,
      1LL);
    event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z((wil::details **)this + 35, 1, 0LL);
    if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x37,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z,
        v37);
    v4 = _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
           (wil::details **)this + 36,
           1,
           0LL);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x39,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v4,
        v37);
    if ( Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagementInProcEnabled(retaddr) )
    {
      v40 = 0LL;
      __ExceptionPtrCreate(&v40);
      if ( this )
        (*(void (__fastcall **)(UwpWindowManagerBridge *))(*(_QWORD *)this + 8LL))(this);
      v5 = v41[1];
      if ( v41[1] )
      {
        _InterlockedAdd((volatile signed __int32 *)v41[1] + 2, 1u);
        v5 = v41[1];
      }
      v6 = (wil **)v41[0];
      v43[0] = v41[0];
      v43[1] = v5;
      v43[2] = this;
      *(_QWORD *)v38 = 0LL;
      v44[0] = (__int64)this;
      v44[1] = (__int64)&v40;
      std::thread::_Start__lambda_2a8f8fa06f2e0b1768a49123f6915af2___(&v39, v43);
      if ( !v39._Id )
        std::_Throw_Cpp_error(1);
      v45 = v39;
      if ( _Thrd_detach(&v45) )
        std::_Throw_Cpp_error(1);
      v39 = 0LL;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v44);
      std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>(v43);
      if ( v6 )
        v7 = *v6;
      else
        v7 = 0LL;
      wil::handle_wait(v7, (void *)0xFFFFFFFFLL);
      if ( __ExceptionPtrToBool(&v40) )
      {
        v39 = 0LL;
        __ExceptionPtrCopy(&v39, &v40);
        std::rethrow_exception(&v39);
      }
      __ExceptionPtrDestroy(&v40);
    }
    else
    {
      v9 = *((_QWORD *)this + 21);
      *((_QWORD *)this + 21) = 0LL;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      if ( WindowsCreateStringReference(
             L"Windows.Internal.ApplicationModel.WindowManagement.Window",
             0x39u,
             (HSTRING_HEADER *)&v45._Id,
             (HSTRING *)&v45) < 0 )
        RaiseException(0xC000000D, 1u, 0, 0LL);
      ActivationFactory = RoGetActivationFactory(
                            v45._Hnd,
                            &GUID_5e75aba7_c424_4076_9d47_409a1eda087f,
                            (char *)this + 168);
      if ( ActivationFactory < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x7B,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)ActivationFactory,
          v37);
      v12 = *((_QWORD *)this + 6);
      *((_QWORD *)this + 6) = 0LL;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v13 = (_QWORD *)Windows::Internal::StringReference::StringReference(
                        (HSTRING *)&v45,
                        (const unsigned __int16 (*)[69])v11);
      v14 = RoGetActivationFactory(*v13, &GUID_b880ce78_2e50_5a73_bfaa_a3f9a8b2f042, (char *)this + 48);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x7C,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v14,
          v37);
      v15 = *((_QWORD *)this + 21);
      v16 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v15 + 48LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 22);
      v17 = v16(v15, (char *)this + 176);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x7E,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v17,
          v37);
      v18 = *((_QWORD *)this + 23);
      *((_QWORD *)this + 23) = 0LL;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher,wil::err_exception_policy>::query_to<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher>(
        (char *)this + 176,
        (char *)this + 184);
      wil::GetActivationFactory<Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleManagerStatics>(v38);
      v19 = *(_QWORD *)v38;
      v20 = *(__int64 (__fastcall **)(__int64, char *))(**(_QWORD **)v38 + 48LL);
      v21 = (_QWORD *)*((_QWORD *)this + 29);
      *((_QWORD *)this + 29) = 0LL;
      if ( v21 )
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v21 + 16LL))(v21, *v21);
      v22 = v20(v19, (char *)this + 232);
      if ( v22 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x82,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v22,
          v37);
      v23 = *((_QWORD *)this + 29);
      v24 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v23 + 120LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 30);
      v25 = v24(v23, (char *)this + 240);
      if ( v25 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x84,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v25,
          v37);
      v8 = *(Windows::Internal::ApplicationModel::WindowManagement **)v38;
      if ( *(_QWORD *)v38 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v38 + 16LL))(*(_QWORD *)v38);
      v5 = v41[1];
    }
    if ( !Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagementInProcEnabled(v8) )
    {
      started = UwpWindowManagerBridge::StartWindowWatcher(this);
      v26 = retaddr;
      if ( started < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x8B,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)started,
          v37);
    }
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
  }
  catch ( ... )
  {
    v29 = wil::ResultFromCaughtException(v26);
    v30 = v42;
    *((_DWORD *)v42 + 76) = v29;
    wil::details::SetEvent(*((wil::details **)v30 + 35), v31);
    v33 = (const char *)*((unsigned int *)v30 + 76);
    v38[0] = *((_DWORD *)v30 + 76);
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v32, (int *)v38);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v33 = (const char *)v38[0];
    }
    if ( (int)v33 >= 0 )
      goto LABEL_59;
    if ( (_DWORD)v33 != -2147024882 && (_DWORD)v33 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v32,
        (int *)v38,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        0x96u,
        v35,
        v36);
      v33 = (const char *)v38[0];
    }
    if ( (int)v33 >= 0 )
LABEL_59:
      v34 = 1;
    else
      v34 = 0;
    if ( !v34 )
    {
      if ( (int)v33 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x96,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          v33);
      return v38[0];
    }
  }
  ViewManagerInteropTraceLogging::WindowEventDispatcher_ConnectedToWindowManager();
  return 0LL;
}
