/*
 * XREFs of DbgkpSuspendProcess @ 0x140939394
 * Callers:
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     DbgkForwardException @ 0x140938C20 (DbgkForwardException.c)
 *     DbgkpSendApiMessage @ 0x14093A238 (DbgkpSendApiMessage.c)
 *     DbgkpSendErrorMessage @ 0x14093A900 (DbgkpSendErrorMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140A3020C (DbgkpSendApiMessageLpc.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     PsFreezeProcess @ 0x14093A750 (PsFreezeProcess.c)
 */

char __fastcall DbgkpSuspendProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (unsigned __int8)PsFreezeProcess(a1, 0LL) )
    return 1;
  KeLeaveCriticalRegionThread();
  return 0;
}
