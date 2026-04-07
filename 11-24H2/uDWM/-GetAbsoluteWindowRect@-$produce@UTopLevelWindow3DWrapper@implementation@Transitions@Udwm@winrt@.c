/*
 * XREFs of ?GetAbsoluteWindowRect@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x1800E6570
 * Callers:
 *     <none>
 * Callees:
 *     ??$detach_from@URect@Foundation@Windows@winrt@@@impl@winrt@@YA?A_P$$QEAURect@Foundation@Windows@1@@Z @ 0x18004035C (--$detach_from@URect@Foundation@Windows@winrt@@@impl@winrt@@YA-A_P$$QEAURect@Foundation@Windows@.c)
 *     ?GetAbsoluteWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x1800404A8 (-GetAbsoluteWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURec.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::GetAbsoluteWindowRect(
        __int64 a1,
        _OWORD *a2)
{
  _BYTE v4[16]; // [rsp+20h] [rbp-28h] BYREF

  winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::GetAbsoluteWindowRect(
    (a1 - 8) & -(__int64)(a1 != 0),
    (__int64)v4);
  *a2 = *(_OWORD *)winrt::impl::detach_from<winrt::Windows::Foundation::Rect>();
  return 0LL;
}
