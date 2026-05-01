/*
 * XREFs of ??1SizeOrModeChangeFadeOutAnimationTimerCallbackActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18046CAA8
 * Callers:
 *     ?SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180474600 (-SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 *     _TouchKeyboardExperienceManager::SizeOrModeChangeFadeOutAnimationTimerCallback_::_1_::dtor$0 @ 0x1806EDAEB (_TouchKeyboardExperienceManager--SizeOrModeChangeFadeOutAnimationTimerCallback_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180083D38 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeFadeOutAnimationTimerCallbackActivity::~SizeOrModeChangeFadeOutAnimationTimerCallbackActivity(
        TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeFadeOutAnimationTimerCallbackActivity *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeFadeOutAnimationTimerCallbackActivity::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
