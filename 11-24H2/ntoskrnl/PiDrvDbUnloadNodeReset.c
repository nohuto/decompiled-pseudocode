/*
 * XREFs of PiDrvDbUnloadNodeReset @ 0x1404D9990
 * Callers:
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140A965B0 (PiDrvDbUnloadNodeWorkerCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PiDrvDbUnloadNodeReset(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  KIRQL v3; // al

  v1 = (KSPIN_LOCK *)(a1 + 424);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 424));
  *(_BYTE *)(a1 + 432) = 0;
  KeReleaseSpinLock(v1, v3);
}
