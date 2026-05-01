/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e28d7d1a5cb321cb0de231b4cced5c98___::Run @ 0x1801DFB80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$try_query@UIControlCenterExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIControlCenterExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801448F4 (--$try_query@UIControlCenterExperienceManager@Experience@Shell@Internal@Windows@@@-$com_ptr_t@UI.c)
 *     ?CompleteHide@CControlCenterExperienceManager@@AEAAJXZ @ 0x18041E478 (-CompleteHide@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?EM_DismissAnimationTimeout@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ @ 0x18041EBF4 (-EM_DismissAnimationTimeout@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e28d7d1a5cb321cb0de231b4cced5c98___::Run(
        __int64 a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::IControlCenterExperienceManager>(
    (__int64 *)(a1 + 24),
    &v4);
  if ( v4 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 446LL) )
    {
      ControlCenterUITelemetry::ControlCenterTelemetry::EM_DismissAnimationTimeout();
      *(_BYTE *)(*(_QWORD *)(a1 + 16) + 446LL) = 0;
      v2 = CControlCenterExperienceManager::CompleteHide(*(CControlCenterExperienceManager **)(a1 + 16));
      if ( v2 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4C5,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v2);
    }
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v4);
}
