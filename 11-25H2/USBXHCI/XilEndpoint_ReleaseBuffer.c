/*
 * XREFs of XilEndpoint_ReleaseBuffer @ 0x140001CBC
 * Callers:
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1400017C0 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_EvaluateContextCompletion @ 0x140001B00 (Endpoint_EvaluateContextCompletion.c)
 *     Endpoint_EvtEndpointCleanupCallback @ 0x140002440 (Endpoint_EvtEndpointCleanupCallback.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1400392F0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1400475E0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1400034F4 (CommonBuffer_ReleaseBuffer.c)
 */

__int64 __fastcall XilEndpoint_ReleaseBuffer(__int64 a1)
{
  return CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)a1 + 120LL));
}
