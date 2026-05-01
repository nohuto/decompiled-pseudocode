/*
 * XREFs of _UwpWindowEventDispatcher::EnsureDuplicateViewDestroyed_::_1_::dtor$2 @ 0x1806E8A92
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowEventDispatcher::EnsureDuplicateViewDestroyed_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy(a2 + 80);
}
