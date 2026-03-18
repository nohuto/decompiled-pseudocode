/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x1408B0AE0
 * Callers:
 *     PopPowerRequestSpecialRequestSet @ 0x140862C10 (PopPowerRequestSpecialRequestSet.c)
 *     PopPowerRequestSpecialRequestClear @ 0x140862D30 (PopPowerRequestSpecialRequestClear.c)
 *     AlpcpCancelMessage @ 0x1408AC700 (AlpcpCancelMessage.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14098C750 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpAcceptConnectPort @ 0x1409F5B30 (AlpcpAcceptConnectPort.c)
 *     EtwpReleaseQueueEntry @ 0x1409FB268 (EtwpReleaseQueueEntry.c)
 *     PopPowerRequestDelete @ 0x140A414A0 (PopPowerRequestDelete.c)
 *     PspCloseActivityReference @ 0x140A9A1D0 (PspCloseActivityReference.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x1408B2120 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsReleaseProcessWakeCounter(__int64 a1)
{
  return PspChargeProcessWakeCounter((PVOID)(a1 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
}
