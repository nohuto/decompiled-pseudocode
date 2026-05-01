/*
 * XREFs of ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1802A8C88
 * Callers:
 *     _lambda_8564353b7dc6971d7da83ff0ca7e4bd3_::operator() @ 0x18046E804 (_lambda_8564353b7dc6971d7da83ff0ca7e4bd3_--operator().c)
 *     _lambda_c5b63f338e787c1dc9ce32ee8c9a5927_::operator() @ 0x18046ECA4 (_lambda_c5b63f338e787c1dc9ce32ee8c9a5927_--operator().c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18005508C (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180055520 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ?InvokeEnsureInputAppIsActivated@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180056314 (-InvokeEnsureInputAppIsActivated@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?StartActivity@RelaunchInputAppAfterTermination@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1800E1BF4 (-StartActivity@RelaunchInputAppAfterTermination@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800E2810 (-reset@-$shared_object@V-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgR_ea_1800E2810.c)
 *     ??1?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800E2868 (--1-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsP_ea_1800E2868.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E28F4 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E36A8 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ??1RelaunchInputAppAfterTermination@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802CCC74 (--1RelaunchInputAppAfterTermination@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::RelaunchInputAppAfterTermination(
        KeyboardHosting::TabTipAdapter *this)
{
  DWORD v2; // edx
  SC_HANDLE v3; // rax
  int IsReady; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8[2]; // [rsp+20h] [rbp-168h] BYREF
  _BYTE v9[272]; // [rsp+28h] [rbp-160h] BYREF
  volatile signed __int32 *v10; // [rsp+138h] [rbp-50h] BYREF
  _BYTE v11[48]; // [rsp+140h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v8,
    (__int64)"RelaunchInputAppAfterTermination");
  *(_QWORD *)v8 = &TouchKeyboardExperienceTelemetryLogger::RelaunchInputAppAfterTermination::`vftable';
  TouchKeyboardExperienceTelemetryLogger::RelaunchInputAppAfterTermination::StartActivity((TouchKeyboardExperienceTelemetryLogger::RelaunchInputAppAfterTermination *)v8);
  if ( GetSystemMetrics(0x2000) )
    goto LABEL_4;
  v3 = OpenSCManagerW(0LL, 0LL, 1u);
  if ( v3 )
  {
    CloseServiceHandle(v3);
  }
  else if ( GetLastError() == 1115 )
  {
LABEL_4:
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v8, v2);
    *(_QWORD *)v8 = &TouchKeyboardExperienceTelemetryLogger::RelaunchInputAppAfterTermination::`vftable';
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((volatile signed __int32 **)v8);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v11);
    wil::details::shared_object<wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v10);
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v9);
    return 0LL;
  }
  IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady(this);
  v6 = IsReady;
  if ( IsReady >= 0 )
  {
    IsReady = KeyboardHosting::TabTipAdapter::InvokeEnsureInputAppIsActivated(this);
    v6 = IsReady;
    if ( IsReady >= 0 )
      goto LABEL_4;
    v7 = 3159LL;
  }
  else
  {
    v7 = 3158LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)IsReady);
  TouchKeyboardExperienceTelemetryLogger::RelaunchInputAppAfterTermination::~RelaunchInputAppAfterTermination((TouchKeyboardExperienceTelemetryLogger::RelaunchInputAppAfterTermination *)v8);
  return v6;
}
