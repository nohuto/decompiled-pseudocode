/*
 * XREFs of ESM_UpdatingTransferRingDequeuePointers @ 0x140009790
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_UpdateTransferRingDequeuePointers @ 0x1400097B4 (Endpoint_SM_UpdateTransferRingDequeuePointers.c)
 */

__int64 __fastcall ESM_UpdatingTransferRingDequeuePointers(__int64 a1)
{
  Endpoint_SM_UpdateTransferRingDequeuePointers(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
