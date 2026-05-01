/*
 * XREFs of _CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1_::_1_::dtor$39 @ 0x1806FF023
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_190ccd1a8be9aac816201cee4203407b_::__lambda_190ccd1a8be9aac816201cee4203407b_ @ 0x1805FF644 (_lambda_190ccd1a8be9aac816201cee4203407b_--__lambda_190ccd1a8be9aac816201cee4203407b_.c)
 */

__int64 __fastcall CLauncherTipContextMenu::GetMenuItemsAsyncHelper__ResumeCoro_1_::_1_::dtor_39(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 360) = *(_QWORD *)(a2 + 512) + 688LL;
  *(_QWORD *)(a2 + 368) = **(_QWORD **)(a2 + 360);
  return lambda_190ccd1a8be9aac816201cee4203407b_::__lambda_190ccd1a8be9aac816201cee4203407b_(*(__int64 **)(a2 + 368));
}
