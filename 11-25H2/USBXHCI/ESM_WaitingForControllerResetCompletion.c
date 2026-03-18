/*
 * XREFs of ESM_WaitingForControllerResetCompletion @ 0x140055EE0
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_OkToCompleteEndpointResetRequest @ 0x140047848 (Endpoint_SM_OkToCompleteEndpointResetRequest.c)
 */

__int64 __fastcall ESM_WaitingForControllerResetCompletion(__int64 a1, __int64 a2, int a3)
{
  Endpoint_SM_OkToCompleteEndpointResetRequest(*(_QWORD *)(a1 + 960), a2, a3);
  return 1000LL;
}
