/*
 * XREFs of DbgkpResumeProcess @ 0x14093A32C
 * Callers:
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     DbgkpSendApiMessage @ 0x14093A238 (DbgkpSendApiMessage.c)
 *     DbgkpSendErrorMessage @ 0x14093A900 (DbgkpSendErrorMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140A3020C (DbgkpSendApiMessageLpc.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     PsThawMultiProcess @ 0x1404EEE60 (PsThawMultiProcess.c)
 */

void __fastcall DbgkpResumeProcess(__int64 a1)
{
  PsThawMultiProcess(a1, 0, 1u);
  KeLeaveCriticalRegion();
}
