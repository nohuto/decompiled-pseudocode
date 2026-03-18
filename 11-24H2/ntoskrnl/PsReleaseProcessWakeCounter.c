/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x14088E750
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x14088CA00 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpCancelMessage @ 0x140894410 (AlpcpCancelMessage.c)
 *     PopPowerRequestDelete @ 0x1409BAA40 (PopPowerRequestDelete.c)
 *     AlpcpAcceptConnectPort @ 0x1409F4F00 (AlpcpAcceptConnectPort.c)
 *     EtwpReleaseQueueEntry @ 0x1409F6E4C (EtwpReleaseQueueEntry.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140A14F84 (PopPowerRequestSpecialRequestSet.c)
 *     PopPowerRequestSpecialRequestClear @ 0x140A150A4 (PopPowerRequestSpecialRequestClear.c)
 *     PspCloseActivityReference @ 0x140A9F3B0 (PspCloseActivityReference.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x14088FD70 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsReleaseProcessWakeCounter(__int64 a1)
{
  return PspChargeProcessWakeCounter(a1 & 0xFFFFFFFFFFFFFFF8uLL, -1, 1, 0LL);
}
