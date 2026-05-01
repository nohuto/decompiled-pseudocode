/*
 * XREFs of ??$make@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18033A090
 * Callers:
 *     ?GamingPosture_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180338808 (-GamingPosture_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@std.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::make<winrt::Windows::Internal::GamingExperiences::Posture::factory_implementation::GamingPostureConfiguration,>(
        _QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdx
  _QWORD *result; // rax

  v2 = operator new(0x20uLL);
  *v2 = 0LL;
  v3 = v2 + 2;
  v2[1] = 0LL;
  v2[3] = 0LL;
  v2[2] = &winrt::impl::produce<winrt::Windows::Internal::GamingExperiences::Posture::factory_implementation::GamingPostureConfiguration,winrt::Windows::Foundation::IActivationFactory>::`vftable';
  v2[3] = &winrt::impl::produce<winrt::Windows::Internal::GamingExperiences::Posture::factory_implementation::GamingPostureConfiguration,winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  v2[1] = 1LL;
  *v2 = &winrt::impl::heap_implements<winrt::Windows::Internal::GamingExperiences::Posture::factory_implementation::GamingPostureConfiguration>::`vftable';
  result = a1;
  *a1 = v3;
  return result;
}
