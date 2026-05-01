/*
 * XREFs of ??$make@V?$module_count_wrapper@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x18032AB88
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18032E680 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UGamingPostureController@implementation@Postur.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??0?$heap_implements@V?$module_count_wrapper@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x18032C870 (--0-$heap_implements@V-$module_count_wrapper@UGamingPostureController@implementation@Posture@Gam.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::make<wil::details::module_count_wrapper<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController>,>(
        __int64 *a1)
{
  __int64 v2; // rax
  void *v4; // [rsp+40h] [rbp+8h]

  v4 = operator new(0xA8uLL);
  memset_0(v4, 0, 0xA8uLL);
  v2 = winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController>>(v4);
  *a1 = (v2 + 88) & -(__int64)(v2 != 0);
  return a1;
}
