/*
 * XREFs of _GetPidlsFromTaskbarLayout_::_1_::dtor$25 @ 0x180704494
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPidlsFromTaskbarLayout_::_1_::dtor_25(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)(a2 + 200));
}
