/*
 * XREFs of ??$?4U?$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@$0A@@?$unique_ptr@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@U?$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18033C628
 * Callers:
 *     ??0GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA@AEBUhstring@6@AEBUguid@6@AEBU?$com_ptr@UIServiceProvider@@@6@@Z @ 0x18033D328 (--0GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QE.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x18033E610 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18033E610.c)
 * Callees:
 *     ??R?$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@QEBAXPEAVSystemDialogActivity@GamingPostureUXTelemetryProvider@@@Z @ 0x18032D73C (--R-$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@QEBAXPEAVSyste.c)
 */

GamingPostureUXTelemetryProvider::SystemDialogActivity **__fastcall std::unique_ptr<GamingPostureUXTelemetryProvider::SystemDialogActivity>::operator=<std::default_delete<GamingPostureUXTelemetryProvider::SystemDialogActivity>,0>(
        GamingPostureUXTelemetryProvider::SystemDialogActivity **a1,
        GamingPostureUXTelemetryProvider::SystemDialogActivity **a2)
{
  GamingPostureUXTelemetryProvider::SystemDialogActivity *v2; // rax
  GamingPostureUXTelemetryProvider::SystemDialogActivity *v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    std::default_delete<GamingPostureUXTelemetryProvider::SystemDialogActivity>::operator()((__int64)a1, v4);
  return a1;
}
