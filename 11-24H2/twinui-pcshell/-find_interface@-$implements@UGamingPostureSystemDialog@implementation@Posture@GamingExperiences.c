/*
 * XREFs of ?find_interface@?$implements@UGamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@U134567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180336A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog,winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialog>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureSystemDialog>
    && a2[1] == 0x4F536F30F0E25190LL )
  {
    return (a1 + 16) & -(__int64)(a1 != 0);
  }
  else
  {
    return 0LL;
  }
}
