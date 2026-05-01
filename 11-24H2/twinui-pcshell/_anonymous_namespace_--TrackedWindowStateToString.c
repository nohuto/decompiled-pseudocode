/*
 * XREFs of _anonymous_namespace_::TrackedWindowStateToString @ 0x180507118
 * Callers:
 *     ?OnGroupWindowTemplateApplied@GamingPosturePositioner@@UEAAXPEAUHWND__@@KKUtagRECT@@1K@Z @ 0x180503F40 (-OnGroupWindowTemplateApplied@GamingPosturePositioner@@UEAAXPEAUHWND__@@KKUtagRECT@@1K@Z.c)
 *     std::_Func_impl_no_alloc__lambda_7c3c4e67715d49f836fa4955fab08a4a__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_::_Do_call @ 0x180507D10 (std--_Func_impl_no_alloc__lambda_7c3c4e67715d49f836fa4955fab08a4a__void_HWND_____un_ea_180507D10.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall anonymous_namespace_::TrackedWindowStateToString(int a1)
{
  int v1; // ecx
  int v2; // ecx

  if ( !a1 )
    return L"TWS_RESTORED";
  v1 = a1 - 1;
  if ( !v1 )
    return L"TWS_MAXIMIZED";
  v2 = v1 - 1;
  if ( !v2 )
    return L"TWS_MINIMIZED";
  if ( v2 == 1 )
    return L"TWS_ARRANGED";
  return 0LL;
}
