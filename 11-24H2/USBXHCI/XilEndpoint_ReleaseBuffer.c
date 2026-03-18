/*
 * XREFs of XilEndpoint_ReleaseBuffer @ 0x14001F92C
 * Callers:
 *     Endpoint_EvaluateContextCompletion @ 0x14001F770 (Endpoint_EvaluateContextCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x14001FC00 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_EvtEndpointCleanupCallback @ 0x14002D310 (Endpoint_EvtEndpointCleanupCallback.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x140038180 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1400478F0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x14001F6A4 (CommonBuffer_ReleaseBuffer.c)
 */

void __fastcall XilEndpoint_ReleaseBuffer(__int64 a1, __int64 a2)
{
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)a1 + 120LL), a2);
}
