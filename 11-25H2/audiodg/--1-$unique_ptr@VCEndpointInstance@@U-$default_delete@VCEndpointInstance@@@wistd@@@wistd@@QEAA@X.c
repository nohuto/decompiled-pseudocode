/*
 * XREFs of ??1?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x1400581C4
 * Callers:
 *     _CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor$6 @ 0x140094909 (_CEndpointInstance--CreateSpatialStreamEndpointInstance_--_1_--dtor$6.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$13 @ 0x1400968C6 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$13.c)
 * Callees:
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x140039CA0 (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
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
