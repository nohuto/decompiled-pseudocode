/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cfac895c1aa223c03d84cf9f53dd90fa___::Run @ 0x180041EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CompleteHide@CActionCenterExperienceManager@@AEAAJXZ @ 0x180018214 (-CompleteHide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ??$try_query@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180041FF4 (--$try_query@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@-$com_ptr_t@UIW.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EM_DismissAnimationTimeout@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x180418510 (-EM_DismissAnimationTimeout@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cfac895c1aa223c03d84cf9f53dd90fa___::Run(
        __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::IActionCenterExperienceManager>(
    a1 + 24,
    &v7);
  if ( v7 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 433LL) )
    {
      NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DismissAnimationTimeout();
      *(_BYTE *)(*(_QWORD *)(a1 + 16) + 433LL) = 0;
      v4 = CActionCenterExperienceManager::CompleteHide(*(CActionCenterExperienceManager **)(a1 + 16), v2, v3);
      if ( v4 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3EE,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v4,
          v5);
    }
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
}
