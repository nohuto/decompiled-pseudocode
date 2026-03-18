/*
 * XREFs of ESM_RestartingTransferRingQueuesIfNeeded @ 0x140034350
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_RestartTransferRingQueuesIfNeeded @ 0x140034374 (Endpoint_SM_RestartTransferRingQueuesIfNeeded.c)
 */

__int64 __fastcall ESM_RestartingTransferRingQueuesIfNeeded(__int64 a1)
{
  Endpoint_SM_RestartTransferRingQueuesIfNeeded(*(_QWORD *)(a1 + 960));
  return 29LL;
}
