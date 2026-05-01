/*
 * XREFs of ??1VAPositioner_NotifyTrayOfVisibilityActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x18050A33C
 * Callers:
 *     ?NotifyTrayOfVisibility@VoiceAssistantPositioner@@AEAAX_N@Z @ 0x18050C64C (-NotifyTrayOfVisibility@VoiceAssistantPositioner@@AEAAX_N@Z.c)
 *     _VoiceAssistantPositioner::NotifyTrayOfVisibility_::_1_::dtor$0 @ 0x1806F1CB1 (_VoiceAssistantPositioner--NotifyTrayOfVisibility_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0A@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18050B420 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0A@$03$0DAAAAAA@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_NotifyTrayOfVisibilityActivity::~VAPositioner_NotifyTrayOfVisibilityActivity(
        VoiceAssistantPositionerTelemetry::VAPositioner_NotifyTrayOfVisibilityActivity *this)
{
  *(_QWORD *)this = &VoiceAssistantPositionerTelemetry::VAPositioner_NotifyTrayOfVisibilityActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,0,4,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WindowManagementLogging,1,0,4,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,0,4,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
