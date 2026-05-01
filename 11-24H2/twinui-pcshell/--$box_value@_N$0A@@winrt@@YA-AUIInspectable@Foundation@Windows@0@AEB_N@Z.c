/*
 * XREFs of ??$box_value@_N$0A@@winrt@@YA?AUIInspectable@Foundation@Windows@0@AEB_N@Z @ 0x1804AD2DC
 * Callers:
 *     ?SetDashboardButtonEnabled@DashboardTaskbarSettings@@YAX_N@Z @ 0x1805DE454 (-SetDashboardButtonEnabled@DashboardTaskbarSettings@@YAX_N@Z.c)
 * Callees:
 *     ?make@?$reference_traits@_N@impl@winrt@@SA@_N@Z @ 0x1804AD800 (-make@-$reference_traits@_N@impl@winrt@@SA@_N@Z.c)
 */

__int64 __fastcall winrt::box_value<bool,0>(__int64 a1, _BYTE *a2)
{
  LOBYTE(a2) = *a2;
  winrt::impl::reference_traits<bool>::make(a1, a2);
  return a1;
}
