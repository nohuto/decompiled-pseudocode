/*
 * XREFs of _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1_::_1_::dtor$3 @ 0x1806E18E4
 * Callers:
 *     <none>
 * Callees:
 *     ??1SystemDialogActivity@GamingPostureUXTelemetryProvider@@QEAA@XZ @ 0x18032D3F8 (--1SystemDialogActivity@GamingPostureUXTelemetryProvider@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync__ResumeCoro_1_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 288) = *(_QWORD *)(a2 + 72) + 176LL;
  GamingPostureUXTelemetryProvider::SystemDialogActivity::~SystemDialogActivity(*(GamingPostureUXTelemetryProvider::SystemDialogActivity **)(a2 + 288));
}
