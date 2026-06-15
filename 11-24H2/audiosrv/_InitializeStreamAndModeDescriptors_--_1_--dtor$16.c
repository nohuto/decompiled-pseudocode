/*
 * XREFs of _InitializeStreamAndModeDescriptors_::_1_::dtor$16 @ 0x18016DAAF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeStreamAndModeDescriptors_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)(a2 + 144));
}
