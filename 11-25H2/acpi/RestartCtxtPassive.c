/*
 * XREFs of RestartCtxtPassive @ 0x1400137F0
 * Callers:
 *     <none>
 * Callees:
 *     InsertReadyQueue @ 0x140013A60 (InsertReadyQueue.c)
 */

void __fastcall RestartCtxtPassive(__int64 a1)
{
  __int64 v2; // rdx

  NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v2 = *(_DWORD *)(a1 + 64) >> 8;
  LOBYTE(v2) = (*(_DWORD *)(a1 + 64) & 0x100) == 0;
  InsertReadyQueue(a1, v2);
  KeReleaseSpinLock(&SpinLock, NewIrql);
}
