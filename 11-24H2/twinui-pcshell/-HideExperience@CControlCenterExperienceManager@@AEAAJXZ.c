/*
 * XREFs of ?HideExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x180374DA0
 * Callers:
 *     ?Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z @ 0x18020EA60 (-Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseHideExperienceRequestedEvent@CControlCenterExperienceManager@@AEAAJ_N_K11@Z @ 0x1801228CC (-RaiseHideExperienceRequestedEvent@CControlCenterExperienceManager@@AEAAJ_N_K11@Z.c)
 *     ??$com_weak_query@PEAVCControlCenterExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCControlCenterExperienceManager@@@Z @ 0x180169E18 (--$com_weak_query@PEAVCControlCenterExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@U.c)
 *     ??1Item@AgileRegistrationList@@QEAA@XZ @ 0x180298CE4 (--1Item@AgileRegistrationList@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802C0C34 (--4-$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_polic.c)
 *     _lambda_bf3a05332e284c078092dab55d26056a_::_lambda_bf3a05332e284c078092dab55d26056a_ @ 0x18036BB58 (_lambda_bf3a05332e284c078092dab55d26056a_--_lambda_bf3a05332e284c078092dab55d26056a_.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_e42ff9ffcd3368a4558d518826f3b602___ @ 0x180372B84 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_e42ff9ffcd3368a4558d518826f3b602___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::HideExperience(CControlCenterExperienceManager *this)
{
  int v2; // eax
  __int64 *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  volatile signed __int32 *v7; // r8
  int v8; // ebx
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  CControlCenterExperienceManager *v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  if ( *((_DWORD *)this + 40) == 2 )
  {
    v2 = CControlCenterExperienceManager::RaiseHideExperienceRequestedEvent(this, *((_BYTE *)this + 760));
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4B6,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
    *((_BYTE *)this + 446) = 1;
    v12 = 0LL;
    v13 = this;
    v3 = wil::com_weak_query<CControlCenterExperienceManager *>(&v14, (__int64 *)&v13);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData,wil::err_exception_policy>::operator=(
      &v12,
      v3);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
    v4 = lambda_bf3a05332e284c078092dab55d26056a_::_lambda_bf3a05332e284c078092dab55d26056a_(v10, (__int64)this, &v12);
    v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_e42ff9ffcd3368a4558d518826f3b602___(v6, v5, v7, v4);
    AgileRegistrationList::Item::~Item((AgileRegistrationList::Item *)v10);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4CC,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
  }
  return 0LL;
}
