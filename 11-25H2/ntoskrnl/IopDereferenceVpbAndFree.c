/*
 * XREFs of IopDereferenceVpbAndFree @ 0x140441A14
 * Callers:
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     IoVerifyVolume @ 0x140AB22D0 (IoVerifyVolume.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopDereferenceVpbAndFree(__int64 a1)
{
  void *v2; // rbx
  KIRQL v3; // al
  bool v4; // zf
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx

  v2 = 0LL;
  v3 = KeAcquireQueuedSpinLock(9uLL);
  v4 = (*(_DWORD *)(a1 + 28))-- == 1;
  v5 = v3;
  if ( v4 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) != a1 && (*(_BYTE *)(a1 + 4) & 4) == 0 )
    v2 = (void *)a1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)KeGetPcr()->NtTib.ArbitraryUserPointer + 6);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = v5;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
  }
  __writecr8(v5);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
