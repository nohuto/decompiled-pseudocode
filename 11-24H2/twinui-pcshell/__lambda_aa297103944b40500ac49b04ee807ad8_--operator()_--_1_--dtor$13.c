/*
 * XREFs of __lambda_aa297103944b40500ac49b04ee807ad8_::operator()_::_1_::dtor$13 @ 0x18070093B
 * Callers:
 *     <none>
 * Callees:
 *     ??1_parameters_@?4??cancel_asynchronously@?$await_adapter@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@CA?AUfire_and_forget@4@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@4@@Z@QEAA@XZ @ 0x18022D030 (--1_parameters_@-4--cancel_asynchronously@-$await_adapter@U-$IAsyncOperation@W4GamingPostureSyst.c)
 */

void __fastcall _lambda_aa297103944b40500ac49b04ee807ad8_::operator()_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 496) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 496) &= ~1u;
    `winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>,1>::cancel_asynchronously'::`5'::_parameters_::~_parameters_((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a2 + 64));
  }
}
