/*
 * XREFs of ??R?$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@QEBAXPEAVSystemDialogActivity@GamingPostureUXTelemetryProvider@@@Z @ 0x18032D73C
 * Callers:
 *     ??1?$unique_ptr@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@U?$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@@std@@QEAA@XZ @ 0x18032D1FC (--1-$unique_ptr@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@U-$default_delete@VSyste.c)
 *     ??$?4U?$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@$0A@@?$unique_ptr@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@U?$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18033C628 (--$-4U-$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@$0A@@-$uniq.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x18033E610 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18033E610.c)
 *     ?reset@?$unique_ptr@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@U?$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@@std@@QEAAXPEAVSystemDialogActivity@GamingPostureUXTelemetryProvider@@@Z @ 0x180340404 (-reset@-$unique_ptr@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@U-$default_delete@VS.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SystemDialogActivity@GamingPostureUXTelemetryProvider@@QEAA@XZ @ 0x18032D3F8 (--1SystemDialogActivity@GamingPostureUXTelemetryProvider@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<GamingPostureUXTelemetryProvider::SystemDialogActivity>::operator()(
        __int64 a1,
        GamingPostureUXTelemetryProvider::SystemDialogActivity *a2)
{
  if ( a2 )
  {
    GamingPostureUXTelemetryProvider::SystemDialogActivity::~SystemDialogActivity(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x150);
  }
}
