/*
 * XREFs of ??1InputAppResumed@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180236560
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::OnInputAppResumed_::_1_::dtor$0 @ 0x1806D15B2 (_KeyboardHosting--TabTipAdapter--OnInputAppResumed_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026AB0 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_T.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::InputAppResumed::~InputAppResumed(
        TouchKeyboardExperienceTelemetryLogger::InputAppResumed *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::InputAppResumed::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
