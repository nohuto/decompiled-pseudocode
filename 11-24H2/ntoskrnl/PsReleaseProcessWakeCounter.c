/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x140898050
 * Callers:
 *     EtwpReleaseQueueEntry @ 0x140831B1C (EtwpReleaseQueueEntry.c)
 *     AlpcpCancelMessage @ 0x14089C73C (AlpcpCancelMessage.c)
 *     PopPowerRequestDelete @ 0x1409A1090 (PopPowerRequestDelete.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140A0DD9C (PopPowerRequestSpecialRequestSet.c)
 *     PopPowerRequestSpecialRequestClear @ 0x140A0DEBC (PopPowerRequestSpecialRequestClear.c)
 *     AlpcpAcceptConnectPort @ 0x140A1ED20 (AlpcpAcceptConnectPort.c)
 *     PspCloseActivityReference @ 0x140A9A780 (PspCloseActivityReference.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x1408999A0 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsReleaseProcessWakeCounter(__int64 a1)
{
  return PspChargeProcessWakeCounter((PVOID)(a1 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
}
