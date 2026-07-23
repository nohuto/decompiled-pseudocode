/*
 * XREFs of DbgkpResumeProcess @ 0x140A5A3B4
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     DbgkpSendErrorMessage @ 0x1409E93F0 (DbgkpSendErrorMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140A24CFC (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendApiMessage @ 0x140A5A2C0 (DbgkpSendApiMessage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     PsThawMultiProcess @ 0x1404E6564 (PsThawMultiProcess.c)
 */

void __fastcall DbgkpResumeProcess(__int64 a1)
{
  PsThawMultiProcess(a1, 0, 1u);
  KeLeaveCriticalRegion();
}
