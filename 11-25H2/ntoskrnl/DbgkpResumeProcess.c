/*
 * XREFs of DbgkpResumeProcess @ 0x140A60364
 * Callers:
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     DbgkpSendErrorMessage @ 0x1408B6DA4 (DbgkpSendErrorMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x1409CDD5C (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendApiMessage @ 0x140A60270 (DbgkpSendApiMessage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     PsThawMultiProcess @ 0x1404EBCE4 (PsThawMultiProcess.c)
 */

void __fastcall DbgkpResumeProcess(__int64 a1)
{
  PsThawMultiProcess(a1, 0, 1u);
  KeLeaveCriticalRegion();
}
