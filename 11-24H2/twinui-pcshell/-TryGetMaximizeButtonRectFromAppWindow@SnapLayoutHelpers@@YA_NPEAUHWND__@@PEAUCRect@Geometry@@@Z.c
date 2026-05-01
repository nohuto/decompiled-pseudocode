/*
 * XREFs of ?TryGetMaximizeButtonRectFromAppWindow@SnapLayoutHelpers@@YA_NPEAUHWND__@@PEAUCRect@Geometry@@@Z @ 0x1805AC51C
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetMaximizeButtonRectFromTitleBarInfoAsync$_ResumeCoro$1 @ 0x1805C1340 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_1805C1340.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

bool __fastcall SnapLayoutHelpers::TryGetMaximizeButtonRectFromAppWindow(
        HWND hwnd,
        struct tagRECT *lprcDst,
        struct Geometry::CRect *a3)
{
  bool result; // al
  ULONG_PTR dwResult; // [rsp+40h] [rbp-C0h] BYREF
  RECT rc; // [rsp+48h] [rbp-B8h] BYREF
  __int128 pvAttribute; // [rsp+58h] [rbp-A8h] BYREF
  int lParam; // [rsp+70h] [rbp-90h] BYREF
  _BYTE lParam_4[140]; // [rsp+74h] [rbp-8Ch] BYREF

  SetRectEmpty(lprcDst);
  lParam = 140;
  memset_0(lParam_4, 0, 0x88uLL);
  dwResult = 0LL;
  result = SendMessageTimeoutW(hwnd, 0x33Fu, 0LL, (LPARAM)&lParam, 2u, 0x3E8u, &dwResult)
        && (rc = *(RECT *)&lParam_4[88], !IsRectEmpty(&rc))
        && (pvAttribute = 0LL, DwmGetWindowAttribute(hwnd, 9u, &pvAttribute, 0x10u) >= 0)
        && rc.top >= SDWORD1(pvAttribute)
        && CopyRect(lprcDst, &rc);
  return result;
}
