/*
 * XREFs of ESM_PurgingTransferRingQueuesIfNeeded @ 0x140032810
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_PurgeTransferRingQueuesIfNeeded @ 0x140032834 (Endpoint_SM_PurgeTransferRingQueuesIfNeeded.c)
 */

__int64 __fastcall ESM_PurgingTransferRingQueuesIfNeeded(__int64 a1)
{
  Endpoint_SM_PurgeTransferRingQueuesIfNeeded(*(_QWORD *)(a1 + 960));
  return 29LL;
}
