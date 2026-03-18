/*
 * XREFs of ESM_CheckingIfEndpointShouldBeStopped @ 0x14002ED80
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_WasDoorbellRungSinceMappingStart @ 0x14002ED9C (Endpoint_SM_WasDoorbellRungSinceMappingStart.c)
 */

__int64 __fastcall ESM_CheckingIfEndpointShouldBeStopped(__int64 a1)
{
  return Endpoint_SM_WasDoorbellRungSinceMappingStart(*(_QWORD *)(a1 + 960));
}
