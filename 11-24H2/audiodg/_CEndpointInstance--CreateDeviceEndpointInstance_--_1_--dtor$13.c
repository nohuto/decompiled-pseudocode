/*
 * XREFs of _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$13 @ 0x14009634A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CEndpointInstance *__fastcall CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>::~unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>((CEndpointInstance **)(a2 + 512));
}
