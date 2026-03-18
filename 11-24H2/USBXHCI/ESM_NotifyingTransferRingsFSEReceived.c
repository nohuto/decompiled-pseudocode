/*
 * XREFs of ESM_NotifyingTransferRingsFSEReceived @ 0x14002D1E0
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_NotifyTransferRingsFSEReceived @ 0x14002D204 (Endpoint_SM_NotifyTransferRingsFSEReceived.c)
 */

__int64 __fastcall ESM_NotifyingTransferRingsFSEReceived(__int64 a1)
{
  Endpoint_SM_NotifyTransferRingsFSEReceived(*(_QWORD *)(a1 + 960));
  return 29LL;
}
