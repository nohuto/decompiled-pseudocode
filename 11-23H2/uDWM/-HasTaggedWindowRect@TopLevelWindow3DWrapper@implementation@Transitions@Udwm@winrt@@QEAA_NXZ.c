/*
 * XREFs of ?HasTaggedWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x1800FAEB8
 * Callers:
 *     ?GetMaximizeSnapStartRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x1800FADDC (-GetMaximizeSnapStartRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AU.c)
 *     ?get_HasTaggedWindowRect@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800FB340 (-get_HasTaggedWindowRect@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winr.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::HasTaggedWindowRect(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(*((_QWORD *)this + 4) + 336LL);
  return v1 && (*(_BYTE *)(v1 + 678) & 0x20) != 0;
}
