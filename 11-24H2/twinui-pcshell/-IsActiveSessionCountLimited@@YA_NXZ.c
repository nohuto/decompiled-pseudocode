/*
 * XREFs of ?IsActiveSessionCountLimited@@YA_NXZ @ 0x18004EAAC
 * Callers:
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x18004E988 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     ?IsAllowedSku@@YA_NXZ @ 0x180061428 (-IsAllowedSku@@YA_NXZ.c)
 *     ?ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180275CF8 (-ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@.c)
 *     _lambda_e6ba7e900466894b21600c641e756e2e_::operator() @ 0x1802AE59C (_lambda_e6ba7e900466894b21600c641e756e2e_--operator().c)
 *     ?ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1802C1080 (-ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ @ 0x18045F370 (-IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

bool IsActiveSessionCountLimited(void)
{
  ULONGLONG v0; // rax
  DWORDLONG v1; // rdi
  bool v2; // bl
  _OSVERSIONINFOEXW VersionInformation; // [rsp+20h] [rbp-138h] BYREF

  memset_0(&VersionInformation, 0, sizeof(VersionInformation));
  v0 = VerSetConditionMask(0LL, 0x40u, 6u);
  VersionInformation.dwOSVersionInfoSize = 284;
  v1 = v0;
  VersionInformation.wSuiteMask = 16;
  v2 = VerifyVersionInfoW(&VersionInformation, 0x40u, v0);
  VersionInformation.wSuiteMask = 256;
  return !(v2 & !VerifyVersionInfoW(&VersionInformation, 0x40u, v1));
}
