/*
 * XREFs of ?OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18047DE0C
 * Callers:
 *     _lambda_2f931dcef3c075f3fb52ee5cb82c048c_::operator() @ 0x18046D77C (_lambda_2f931dcef3c075f3fb52ee5cb82c048c_--operator().c)
 *     _lambda_c5b63f338e787c1dc9ce32ee8c9a5927_::operator() @ 0x18046ECA4 (_lambda_c5b63f338e787c1dc9ce32ee8c9a5927_--operator().c)
 * Callees:
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E10BC (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgR.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800E17F4 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ??1InputAppTerminated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18023658C (--1InputAppTerminated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@InputAppTerminated@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1802AD1F4 (-StartActivity@InputAppTerminated@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KeyboardHosting::TabTipAdapter::OnInputAppTerminated(KeyboardHosting::TabTipAdapter *this)
{
  DWORD v2; // edx
  _QWORD v3[42]; // [rsp+20h] [rbp-168h] BYREF

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v3,
    (__int64)"InputAppTerminated");
  v3[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppTerminated::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InputAppTerminated::StartActivity((TouchKeyboardExperienceTelemetryLogger::InputAppTerminated *)v3);
  *((_BYTE *)this + 390) = 0;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 296LL))(*((_QWORD *)this + 15));
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v3,
    v2);
  TouchKeyboardExperienceTelemetryLogger::InputAppTerminated::~InputAppTerminated((TouchKeyboardExperienceTelemetryLogger::InputAppTerminated *)v3);
}
