/*
 * XREFs of PoNotifyVSyncChange @ 0x1403B5600
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1403B5638 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 */

LONG __fastcall PoNotifyVSyncChange(char a1)
{
  PpmAcquireLock(&PopFxSystemLatencyLock);
  PopFxVSyncEnabled = a1;
  PoFxSendSystemLatencyUpdate();
  return PpmReleaseLock(&PopFxSystemLatencyLock);
}
