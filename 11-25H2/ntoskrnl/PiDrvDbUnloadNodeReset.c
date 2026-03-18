/*
 * XREFs of PiDrvDbUnloadNodeReset @ 0x1404DA9E0
 * Callers:
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140A92360 (PiDrvDbUnloadNodeWorkerCallback.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
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
