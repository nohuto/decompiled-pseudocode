/*
 * XREFs of ESM_CompletingResetRequestWhenEndpointNotHalted @ 0x14002C3F0
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_CompleteResetRequestFromClient @ 0x14002C414 (Endpoint_SM_CompleteResetRequestFromClient.c)
 */

__int64 __fastcall ESM_CompletingResetRequestWhenEndpointNotHalted(__int64 a1)
{
  Endpoint_SM_CompleteResetRequestFromClient(*(_QWORD *)(a1 + 960));
  return 29LL;
}
