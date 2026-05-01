/*
 * XREFs of _UwpAppStateManager::TerminateApp_::_1_::dtor$0 @ 0x1806F379D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpAppStateManager::TerminateApp_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::~vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>(a2 + 48);
}
