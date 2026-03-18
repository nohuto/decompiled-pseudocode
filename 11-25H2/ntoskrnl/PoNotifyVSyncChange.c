/*
 * XREFs of PoNotifyVSyncChange @ 0x140203AC0
 * Callers:
 *     <none>
 * Callees:
 *     PoFxSendSystemLatencyUpdate @ 0x140203AF8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 */

__int64 __fastcall PoNotifyVSyncChange(char a1)
{
  PpmAcquireLock(&PopFxSystemLatencyLock);
  PopFxVSyncEnabled = a1;
  PoFxSendSystemLatencyUpdate();
  return PpmReleaseLock(&PopFxSystemLatencyLock);
}
