/*
 * XREFs of ??1TerminateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18046CAFC
 * Callers:
 *     ?TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x180477724 (-TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 *     _TouchKeyboardExperienceManager::TerminateInputApp_::_1_::dtor$0 @ 0x1806EDB0F (_TouchKeyboardExperienceManager--TerminateInputApp_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E28F4 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::TerminateInputApp::~TerminateInputApp(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&TouchKeyboardExperienceTelemetryLogger::TerminateInputApp::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
