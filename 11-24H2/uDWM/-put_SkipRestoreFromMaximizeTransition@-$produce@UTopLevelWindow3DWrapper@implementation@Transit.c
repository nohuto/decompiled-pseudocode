/*
 * XREFs of ?put_SkipRestoreFromMaximizeTransition@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAH_N@Z @ 0x1800E6850
 * Callers:
 *     <none>
 * Callees:
 *     ?SkipRestoreFromMaximizeTransition@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEB_N@Z @ 0x1800E6600 (-SkipRestoreFromMaximizeTransition@TopLevelWindow3DWrapper@implementation@Transitio_ea_1800E6600.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::put_SkipRestoreFromMaximizeTransition(
        __int64 a1,
        bool a2)
{
  bool v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::SkipRestoreFromMaximizeTransition(
    (winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *)((a1 - 8) & -(__int64)(a1 != 0)),
    &v3);
  return 0LL;
}
