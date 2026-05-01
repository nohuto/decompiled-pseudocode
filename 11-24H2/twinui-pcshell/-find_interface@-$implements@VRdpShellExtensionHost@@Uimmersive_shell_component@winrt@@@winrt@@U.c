/*
 * XREFs of ?find_interface@?$implements@VRdpShellExtensionHost@@Uimmersive_shell_component@winrt@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180674870
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@@12@@Z @ 0x1802DEAF8 (--$find@U-$find_iid_traits@UGamingPostureController@implementation@Posture@GamingExperiences@Int.c)
 */

__int64 __fastcall winrt::implements<RdpShellExtensionHost,winrt::immersive_shell_component>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1 - 32;
  v3 = *a2 == winrt::impl::guid_v<IObjectWithSite>;
  v5[0] = v2;
  v5[1] = (__int64)a2;
  if ( !v3 || a2[1] != 0x52733D00AA0029A2LL )
  {
    if ( *a2 == winrt::impl::guid_v<IServiceProvider> && a2[1] == 0xFA096000AA003480uLL )
      return (v2 + 8) & -(__int64)(v2 != 0);
    else
      return winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController>>(v5);
  }
  return v2;
}
