/*
 * XREFs of ?get_GamingAppAumid@?$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@34567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18033C110
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?GamingAppAumid@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SA?AUhstring@7@XZ @ 0x18033ABD8 (-GamingAppAumid@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Win.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingExperiences::Posture::factory_implementation::GamingPostureConfiguration,winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>::get_GamingAppAumid(
        struct winrt::impl::shared_hstring_header *a1,
        struct winrt::impl::shared_hstring_header **a2)
{
  struct winrt::impl::shared_hstring_header *v3; // rax
  struct winrt::impl::shared_hstring_header *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  *a2 = 0LL;
  winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::GamingAppAumid(&v5);
  v3 = v5;
  v5 = 0LL;
  *a2 = v3;
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v5);
  return 0LL;
}
