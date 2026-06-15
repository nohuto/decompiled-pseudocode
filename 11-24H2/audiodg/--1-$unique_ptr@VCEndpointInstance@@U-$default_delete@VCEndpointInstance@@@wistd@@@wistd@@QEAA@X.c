/*
 * XREFs of ??1?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x140058084
 * Callers:
 *     _CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor$6 @ 0x14009437B (_CEndpointInstance--CreateSpatialStreamEndpointInstance_--_1_--dtor$6.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$13 @ 0x14009634A (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$13.c)
 * Callees:
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x1400399A0 (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 */

CEndpointInstance *__fastcall wistd::unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>::~unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>(
        CEndpointInstance **a1)
{
  CEndpointInstance *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return CEndpointInstance::`scalar deleting destructor'(result);
  return result;
}
