/*
 * XREFs of ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x180069218
 * Callers:
 *     ??R_lambda_f0f613184e0e47442428064dff914436_@@QEBA@XZ @ 0x180067508 (--R_lambda_f0f613184e0e47442428064dff914436_@@QEBA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A31C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003FC38 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ??$QueueTask@V_lambda_9381c80c14e95fe77b42b10959c65c30_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_9381c80c14e95fe77b42b10959c65c30_@@@Z @ 0x1800660A4 (--$QueueTask@V_lambda_9381c80c14e95fe77b42b10959c65c30_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 *     ??0_lambda_9381c80c14e95fe77b42b10959c65c30_@@QEAA@AEBV?$com_ptr_t@VActivityToastNotificationCallback@ToastNotification@@Uerr_exception_policy@wil@@@wil@@QEAVActivityToastNotificationCallback@ToastNotification@@AEBVActivityWrapper@MobilityExperience@@AEBV?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@2@@Z @ 0x180066C10 (--0_lambda_9381c80c14e95fe77b42b10959c65c30_@@QEAA@AEBV-$com_ptr_t@VActivityToastNotificationCal.c)
 *     ??0?$com_ptr_t@VActivityToastNotificationCallback@ToastNotification@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVActivityToastNotificationCallback@ToastNotification@@@Z @ 0x180066EC0 (--0-$com_ptr_t@VActivityToastNotificationCallback@ToastNotification@@Uerr_exception_policy@wil@@.c)
 *     ??0?$com_ptr_t@U?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAU?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@Z @ 0x180066F10 (--0-$com_ptr_t@U-$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@.c)
 *     ??1_lambda_9381c80c14e95fe77b42b10959c65c30_@@QEAA@XZ @ 0x180067184 (--1_lambda_9381c80c14e95fe77b42b10959c65c30_@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VActivityToastNotificationCallback@ToastNotification@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180067210 (--1-$com_ptr_t@VActivityToastNotificationCallback@ToastNotification@@Uerr_exception_policy@wil@@.c)
 *     ?SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ @ 0x1800696FC (-SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800698EC (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::PublishCompletedActivity(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v6; // rdx
  int v7; // eax
  void *v8; // rdx
  wil::details *Event; // rbx
  unsigned int v10; // r8d
  const char *v11; // r9
  __int64 *v12; // rax
  __int64 v13; // rcx
  int v14; // ebx
  int v16; // [rsp+20h] [rbp-40h]
  int v17; // [rsp+20h] [rbp-40h]
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v19[40]; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v21; // [rsp+A8h] [rbp+48h] BYREF

  MobilityExperience::ActivityWrapper::SetActivityComplete((MobilityExperience::ActivityWrapper *)a2);
  wil::com_ptr_t<Windows::Foundation::Collections::IMapView<enum ContentManagement::WindowPosition,unsigned int>,wil::err_exception_policy>::com_ptr_t<Windows::Foundation::Collections::IMapView<enum ContentManagement::WindowPosition,unsigned int>,wil::err_exception_policy>(
    &v21,
    a2[1]);
  LOBYTE(v6) = 1;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 104LL))(v21, v6);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x104,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v7,
      v16);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v21);
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
    wil::details::in1diag3::Throw_GetLastError(retaddr, v8, v10, v11);
  GetLastError();
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (wil::details **)(a1 + 80),
    Event);
  wil::com_ptr_t<ToastNotification::ActivityToastNotificationCallback,wil::err_exception_policy>::com_ptr_t<ToastNotification::ActivityToastNotificationCallback,wil::err_exception_policy>(
    &v18,
    a1);
  wil::com_ptr_t<Windows::Foundation::Collections::IMapView<enum ContentManagement::WindowPosition,unsigned int>,wil::err_exception_policy>::com_ptr_t<Windows::Foundation::Collections::IMapView<enum ContentManagement::WindowPosition,unsigned int>,wil::err_exception_policy>(
    &v21,
    a3);
  v12 = (__int64 *)_lambda_9381c80c14e95fe77b42b10959c65c30_::_lambda_9381c80c14e95fe77b42b10959c65c30_(
                     (__int64)v19,
                     &v18,
                     a1,
                     (const struct MobilityExperience::ActivityWrapper *)a2,
                     &v21);
  v14 = Windows::Internal::ComTaskPool::QueueTask<_lambda_9381c80c14e95fe77b42b10959c65c30_>(v13, v12);
  _lambda_9381c80c14e95fe77b42b10959c65c30_::~_lambda_9381c80c14e95fe77b42b10959c65c30_((_lambda_9381c80c14e95fe77b42b10959c65c30_ *)v19);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x114,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v14,
      v17);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v21);
  wil::com_ptr_t<ToastNotification::ActivityToastNotificationCallback,wil::err_exception_policy>::~com_ptr_t<ToastNotification::ActivityToastNotificationCallback,wil::err_exception_policy>(&v18);
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(a2 + 1);
}
