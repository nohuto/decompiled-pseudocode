/*
 * XREFs of ?reset@?$unique_ptr@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@U?$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@@std@@QEAAXPEAVSystemDialogActivity@GamingPostureUXTelemetryProvider@@@Z @ 0x180340404
 * Callers:
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1_::_1_::catch$96 @ 0x1806E1B6E (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E1B6E.c)
 * Callees:
 *     ??R?$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@QEBAXPEAVSystemDialogActivity@GamingPostureUXTelemetryProvider@@@Z @ 0x18032D73C (--R-$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@QEBAXPEAVSyste.c)
 */

void __fastcall std::unique_ptr<GamingPostureUXTelemetryProvider::SystemDialogActivity>::reset(
        GamingPostureUXTelemetryProvider::SystemDialogActivity **a1,
        GamingPostureUXTelemetryProvider::SystemDialogActivity *a2)
{
  GamingPostureUXTelemetryProvider::SystemDialogActivity *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    std::default_delete<GamingPostureUXTelemetryProvider::SystemDialogActivity>::operator()((__int64)a1, v2);
}
