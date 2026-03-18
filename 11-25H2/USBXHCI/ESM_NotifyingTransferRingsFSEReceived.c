/*
 * XREFs of ESM_NotifyingTransferRingsFSEReceived @ 0x14000E730
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_NotifyTransferRingsFSEReceived @ 0x14000E754 (Endpoint_SM_NotifyTransferRingsFSEReceived.c)
 */

__int64 __fastcall ESM_NotifyingTransferRingsFSEReceived(__int64 a1)
{
  Endpoint_SM_NotifyTransferRingsFSEReceived(*(_QWORD *)(a1 + 960));
  return 29LL;
}
