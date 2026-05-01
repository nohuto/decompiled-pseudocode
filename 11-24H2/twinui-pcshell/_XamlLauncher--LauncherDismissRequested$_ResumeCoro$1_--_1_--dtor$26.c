/*
 * XREFs of _XamlLauncher::LauncherDismissRequested$_ResumeCoro$1_::_1_::dtor$26 @ 0x1806EC520
 * Callers:
 *     <none>
 * Callees:
 *     ??1_parameters_@?4??cancel_asynchronously@?$await_adapter@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@CA?AUfire_and_forget@4@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@4@@Z@QEAA@XZ @ 0x18022D030 (--1_parameters_@-4--cancel_asynchronously@-$await_adapter@U-$IAsyncOperation@W4GamingPostureSyst.c)
 */

void __fastcall XamlLauncher::LauncherDismissRequested__ResumeCoro_1_::_1_::dtor_26(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 152) = *(_QWORD *)(a2 + 240) + 152LL;
  `winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>,1>::cancel_asynchronously'::`5'::_parameters_::~_parameters_(*(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a2 + 152));
}
