/*
 * XREFs of _BuildDeviceGraphForStream_::_1_::dtor$4 @ 0x1801631EB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall BuildDeviceGraphForStream_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::details::out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>::~out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>((__int64 **)(a2 + 128));
}
