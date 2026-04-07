/*
 * XREFs of ?get_HasTaggedWindowRect@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800FB340
 * Callers:
 *     <none>
 * Callees:
 *     ?HasTaggedWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x1800FAEB8 (-HasTaggedWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::get_HasTaggedWindowRect(
        __int64 a1)
{
  bool HasTaggedWindowRect; // al
  bool *v2; // rdx

  HasTaggedWindowRect = winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::HasTaggedWindowRect((winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *)((a1 - 8) & -(__int64)(a1 != 0)));
  *v2 = HasTaggedWindowRect;
  return 0LL;
}
