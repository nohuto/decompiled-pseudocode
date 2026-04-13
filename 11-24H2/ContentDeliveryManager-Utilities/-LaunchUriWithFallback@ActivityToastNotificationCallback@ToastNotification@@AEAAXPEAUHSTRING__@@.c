/*
 * XREFs of ?LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@0@Z @ 0x180068F74
 * Callers:
 *     ??R_lambda_f0f613184e0e47442428064dff914436_@@QEBA@XZ @ 0x180067508 (--R_lambda_f0f613184e0e47442428064dff914436_@@QEBA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A31C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UILauncherOptions@System@Windows@@@wil@@YA?AV?$com_ptr_t@UILauncherOptions@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800652B0 (--$ActivateInstance@UILauncherOptions@System@Windows@@@wil@@YA-AV-$com_ptr_t@UILauncherOptions@S.c)
 *     ??$GetActivationFactory@UILauncherStatics@System@Windows@@@wil@@YA?AV?$com_ptr_t@UILauncherStatics@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18006578C (--$GetActivationFactory@UILauncherStatics@System@Windows@@@wil@@YA-AV-$com_ptr_t@UILauncherStati.c)
 *     ??$GetActivationFactory@UIUriRuntimeClassFactory@Foundation@Windows@@@wil@@YA?AV?$com_ptr_t@UIUriRuntimeClassFactory@Foundation@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800658CC (--$GetActivationFactory@UIUriRuntimeClassFactory@Foundation@Windows@@@wil@@YA-AV-$com_ptr_t@UIUr.c)
 *     ??$call_and_wait_for_completion@UILauncherStatics@System@Windows@@PEAUIUriRuntimeClass@Foundation@3@PEAUILauncherOptions@23@PEAPEAU?$IAsyncOperation@_N@53@$$ZPEAU453@PEAU623@@wil@@YA?A_PPEAUILauncherStatics@System@Windows@@P8123@EAAJPEAUIUriRuntimeClass@Foundation@3@PEAUILauncherOptions@23@PEAPEAU?$IAsyncOperation@_N@53@@Z$$QEAPEAU453@$$QEAPEAU623@@Z @ 0x18006696C (--$call_and_wait_for_completion@UILauncherStatics@System@Windows@@PEAUIUriRuntimeClass@Foundatio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall ToastNotification::ActivityToastNotificationCallback::LaunchUriWithFallback(
        ToastNotification::ActivityToastNotificationCallback *this,
        __int64 a2,
        HSTRING a3)
{
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  __int64 v12; // r8
  int v13; // [rsp+20h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v15; // [rsp+38h] [rbp-28h] BYREF
  __int64 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  ToastNotification::ActivityToastNotificationCallback *v20; // [rsp+70h] [rbp+10h] BYREF
  __int64 v21; // [rsp+88h] [rbp+28h] BYREF

  v20 = this;
  wil::GetActivationFactory<Windows::Foundation::IUriRuntimeClassFactory>((const WCHAR *)&v15, a2, (unsigned int)a3);
  v21 = 0LL;
  v5 = *v15;
  v21 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v5 + 48))(v15, a2, &v21);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xF2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v6,
      v13);
  wil::ActivateInstance<Windows::System::ILauncherOptions>((__int64)&v14);
  if ( WindowsGetStringLen(a3) )
  {
    v20 = 0LL;
    v9 = *v15;
    v20 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, ToastNotification::ActivityToastNotificationCallback **))(v9 + 48))(
            v15,
            a3,
            &v20);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xF9,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v10,
        v13);
    v11 = (*(__int64 (__fastcall **)(__int64, ToastNotification::ActivityToastNotificationCallback *))(*(_QWORD *)v14 + 128LL))(
            v14,
            v20);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xFA,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v11,
        v13);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v20);
  }
  wil::GetActivationFactory<Windows::System::ILauncherStatics>((const WCHAR *)&v16, v7, v8);
  v17 = v14;
  v18 = v21;
  ___call_and_wait_for_completion_UILauncherStatics_System_Windows__PEAUIUriRuntimeClass_Foundation_3_PEAUILauncherOptions_23_PEAPEAU__IAsyncOperation__N_53___ZPEAU453_PEAU623__wil__YA_A_PPEAUILauncherStatics_System_Windows__P8123_EAAJPEAUIUriRuntimeClass_Foundation_3_PEAUILauncherOptions_23_PEAPEAU__IAsyncOperation__N_53__Z__QEAPEAU453___QEAPEAU623__Z(
    (__int64)&v20,
    v16,
    v12,
    &v18,
    &v17);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v16);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v14);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v21);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v15);
}
