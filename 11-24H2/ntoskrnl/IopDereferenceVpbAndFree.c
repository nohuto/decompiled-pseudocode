/*
 * XREFs of IopDereferenceVpbAndFree @ 0x1402D68F8
 * Callers:
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     IoVerifyVolume @ 0x140AB7170 (IoVerifyVolume.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = v5;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
  }
  __writecr8(v5);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
