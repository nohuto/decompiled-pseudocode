/*
 * XREFs of _AudioServerInitialize_Internal_::_1_::dtor$7 @ 0x18016BEBA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioServerInitialize_Internal_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CVADServer,wil::err_returncode_policy>::~com_ptr_t<CVADServer,wil::err_returncode_policy>((volatile signed __int64 **)(a2 + 80));
}
