/*
 * XREFs of ?TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x180477724
 * Callers:
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180251C20 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x180472E10 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180055520 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E36A8 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1801CFC34 (-UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180228570 (-UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C4CCC (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1TerminateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18046CAFC (--1TerminateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@TerminateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x180474A14 (-StartActivity@TerminateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     TerminateAppByName @ 0x180477648 (TerminateAppByName.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::TerminateInputApp(RTL_SRWLOCK *this, char *a2)
{
  __int64 Ptr; // rcx
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  DWORD v10; // edx
  RTL_SRWLOCK *v12[2]; // [rsp+20h] [rbp-178h] BYREF
  volatile signed __int32 *v13[42]; // [rsp+30h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v13,
    (__int64)"TerminateInputApp");
  v13[0] = (volatile signed __int32 *)&TouchKeyboardExperienceTelemetryLogger::TerminateInputApp::`vftable';
  TouchKeyboardExperienceTelemetryLogger::TerminateInputApp::StartActivity((TouchKeyboardExperienceTelemetryLogger::TerminateInputApp *)v13);
  Ptr = (__int64)this[47].Ptr;
  if ( !Ptr )
  {
    v5 = -2147418113;
    v6 = 2147549183LL;
    v7 = 3873LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v6);
    goto LABEL_13;
  }
  v8 = TerminateAppByName(Ptr, a2);
  v5 = v8;
  if ( v8 < 0 )
  {
    v7 = 3874LL;
LABEL_5:
    v6 = (unsigned int)v8;
    goto LABEL_6;
  }
  v8 = TouchKeyboardExperienceManager::UnregisterForApplicationStateChanges((TouchKeyboardExperienceManager *)this);
  v5 = v8;
  if ( v8 < 0 )
  {
    v7 = 3876LL;
    goto LABEL_5;
  }
  if ( !std::_Atomic_storage<bool,1>::load((__int64)&this[126].Ptr + 4) )
  {
    v9 = TouchKeyboardExperienceManager::UnregisterForViewEvents((TouchKeyboardExperienceManager *)this);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF30,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
  }
  wil::AcquireSRWLockExclusive(v12, this + 72);
  HIDWORD(this[70].Ptr) = 0;
  LOBYTE(this[71].Ptr) = 0;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v12);
  LODWORD(this[77].Ptr) = 0;
  HIDWORD(this[77].Ptr) = 0;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v13, v10);
  v5 = 0;
LABEL_13:
  TouchKeyboardExperienceTelemetryLogger::TerminateInputApp::~TerminateInputApp(v13);
  return v5;
}
