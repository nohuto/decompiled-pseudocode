/*
 * XREFs of ?get_SkipRestoreFromMaximizeTransition@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEA_N@Z @ 0x180095EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$detach_from@_N@impl@winrt@@YA?A_P$$QEA_N@Z @ 0x180095EEC (--$detach_from@_N@impl@winrt@@YA-A_P$$QEA_N@Z.c)
 *     ?SkipRestoreFromMaximizeTransition@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x180095EF8 (-SkipRestoreFromMaximizeTransition@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::get_SkipRestoreFromMaximizeTransition(
        __int64 a1)
{
  char v1; // al
  _BYTE *v2; // rdx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(v4) = winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::SkipRestoreFromMaximizeTransition((winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *)((a1 - 8) & -(__int64)(a1 != 0)));
  v1 = winrt::impl::detach_from<bool>(&v4);
  *v2 = v1;
  return 0LL;
}
