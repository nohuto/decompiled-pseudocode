/*
 * XREFs of ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x18036E254
 * Callers:
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800E6C60 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x18036D090 (CActionCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     ?HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x18036E3A0 (-HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windo.c)
 *     ?OnDismiss@CActionCenterExperienceManager@@UEAAJXZ @ 0x18036EE30 (-OnDismiss@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18036EFBC (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x180370C80 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 *     ?put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z @ 0x180372200 (-put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseHideExperienceRequestedEvent@CActionCenterExperienceManager@@AEAAJ_N@Z @ 0x1800E6568 (-RaiseHideExperienceRequestedEvent@CActionCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ??1Item@AgileRegistrationList@@QEAA@XZ @ 0x180298CE4 (--1Item@AgileRegistrationList@@QEAA@XZ.c)
 *     ??$com_weak_query@PEAVCActionCenterExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCActionCenterExperienceManager@@@Z @ 0x1802A9E98 (--$com_weak_query@PEAVCActionCenterExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Ue.c)
 *     ??4?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802C0C34 (--4-$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_polic.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_28132f5df19164a3808f46d0aa9e9f4d___ @ 0x18036B930 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_28132f5df19164a3808f46d0aa9e9f4d___.c)
 *     _lambda_bf3a05332e284c078092dab55d26056a_::_lambda_bf3a05332e284c078092dab55d26056a_ @ 0x18036BB58 (_lambda_bf3a05332e284c078092dab55d26056a_--_lambda_bf3a05332e284c078092dab55d26056a_.c)
 *     ?CompleteHide@CActionCenterExperienceManager@@AEAAJXZ @ 0x18036CE58 (-CompleteHide@CActionCenterExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::Hide(CActionCenterExperienceManager *this)
{
  int v2; // eax
  __int64 *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  volatile signed __int32 *v7; // r8
  int v8; // ebx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  CActionCenterExperienceManager *v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  if ( *((_DWORD *)this + 42) == 2 )
  {
    if ( *((_BYTE *)this + 368) )
    {
      CActionCenterExperienceManager::CompleteHide(this);
    }
    else
    {
      if ( !*((_BYTE *)this + 369) )
      {
        v2 = CActionCenterExperienceManager::RaiseHideExperienceRequestedEvent(this);
        if ( v2 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x409,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            (const char *)(unsigned int)v2);
      }
      *((_BYTE *)this + 369) = 1;
      v12 = 0LL;
      v13 = this;
      v3 = wil::com_weak_query<CActionCenterExperienceManager *>(&v14, &v13);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData,wil::err_exception_policy>::operator=(
        &v12,
        v3);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
      v4 = lambda_bf3a05332e284c078092dab55d26056a_::_lambda_bf3a05332e284c078092dab55d26056a_(v10, (__int64)this, &v12);
      v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_28132f5df19164a3808f46d0aa9e9f4d___(
             v6,
             v5,
             v7,
             v4);
      AgileRegistrationList::Item::~Item((AgileRegistrationList::Item *)v10);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x421,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v8);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
    }
  }
  return 0LL;
}
