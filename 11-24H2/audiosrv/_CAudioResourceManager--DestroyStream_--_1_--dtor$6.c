/*
 * XREFs of _CAudioResourceManager::DestroyStream_::_1_::dtor$6 @ 0x18016D2E1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::DestroyStream_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)(a2 + 72));
}
