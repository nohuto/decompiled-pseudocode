/*
 * XREFs of _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806E18B2
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$optional@VActivityThreadWatcher@wil@@@std@@QEAA@XZ @ 0x18032D1AC (--1-$optional@VActivityThreadWatcher@wil@@@std@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync__ResumeCoro_1_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 280) = *(_QWORD *)(a2 + 72) + 32LL;
  std::optional<wil::ActivityThreadWatcher>::~optional<wil::ActivityThreadWatcher>(*(wil::ActivityThreadWatcher **)(a2 + 280));
}
