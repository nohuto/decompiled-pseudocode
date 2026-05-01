/*
 * XREFs of ??1?$unique_ptr@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@U?$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@@std@@QEAA@XZ @ 0x18032D1FC
 * Callers:
 *     ??1GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAA@XZ @ 0x18032D384 (--1GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UE.c)
 *     ??0GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA@AEBUhstring@6@AEBUguid@6@AEBU?$com_ptr@UIServiceProvider@@@6@@Z @ 0x18033D328 (--0GamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QE.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x18033E610 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18033E610.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::GamingPostureSystemDialog_::_1_::dtor$4 @ 0x1806E17F0 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E17F0.c)
 * Callees:
 *     ??R?$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@QEBAXPEAVSystemDialogActivity@GamingPostureUXTelemetryProvider@@@Z @ 0x18032D73C (--R-$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@QEBAXPEAVSyste.c)
 */

__int64 __fastcall std::unique_ptr<GamingPostureUXTelemetryProvider::SystemDialogActivity>::~unique_ptr<GamingPostureUXTelemetryProvider::SystemDialogActivity>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<GamingPostureUXTelemetryProvider::SystemDialogActivity>::operator()();
  return result;
}
