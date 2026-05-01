/*
 * XREFs of ?GetStoredSystemDialogResult@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAKAEBUhstring@7@@Z @ 0x18033AEA4
 * Callers:
 *     ?GetStoredSystemDialogResult@?$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@34567@@impl@winrt@@UEAAHPEAXPEAI@Z @ 0x18033AE70 (-GetStoredSystemDialogResult@-$produce@UGamingPostureConfiguration@factory_implementation@Postur.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x18033E610 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18033E610.c)
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     _anonymous_namespace_::GetConfigurationValue_unsigned_long_ @ 0x180338AB8 (_anonymous_namespace_--GetConfigurationValue_unsigned_long_.c)
 */

__int64 __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::GetStoredSystemDialogResult(
        const struct winrt::hstring *a1)
{
  const unsigned __int16 *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8

  v1 = winrt::hstring::c_str(a1);
  return anonymous_namespace_::GetConfigurationValue_unsigned_long_((__int64)v1, v2, v3, 1, L"SystemDialogResults");
}
