/*
 * XREFs of ??1TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802CCCCC
 * Callers:
 *     ?TerminateStaleInputApp@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180253ED4 (-TerminateStaleInputApp@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     _TouchKeyboardExperienceManager::TerminateStaleInputApp_::_1_::dtor$0 @ 0x1806EDB21 (_TouchKeyboardExperienceManager--TerminateStaleInputApp_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E28F4 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::~TerminateStaleInputApp(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
