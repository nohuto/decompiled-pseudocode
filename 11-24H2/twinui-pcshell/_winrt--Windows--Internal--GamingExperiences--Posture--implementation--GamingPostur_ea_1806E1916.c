/*
 * XREFs of _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x1806E1916
 * Callers:
 *     <none>
 * Callees:
 *     ??1SystemDialogActivity@GamingPostureUXTelemetryProvider@@QEAA@XZ @ 0x18032D3F8 (--1SystemDialogActivity@GamingPostureUXTelemetryProvider@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync__ResumeCoro_1_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 296) = *(_QWORD *)(a2 + 72) + 512LL;
  GamingPostureUXTelemetryProvider::SystemDialogActivity::~SystemDialogActivity(*(GamingPostureUXTelemetryProvider::SystemDialogActivity **)(a2 + 296));
}
