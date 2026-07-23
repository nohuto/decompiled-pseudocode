/*
 * XREFs of IopDereferenceVpbAndFree @ 0x140357B78
 * Callers:
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     IoVerifyVolume @ 0x140AB1440 (IoVerifyVolume.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall IopDereferenceVpbAndFree(__int64 a1)
{
  void *v2; // rbx
  KIRQL v3; // al
  __int64 v4; // rdx
  bool v5; // zf
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx

  v2 = 0LL;
  v3 = KeAcquireQueuedSpinLock(9uLL);
  v5 = (*(_DWORD *)(a1 + 28))-- == 1;
  v6 = v3;
  if ( v5 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v4 + 56) != a1 && (*(_BYTE *)(a1 + 4) & 4) == 0 )
      v2 = (void *)a1;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 18, v4);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = v6;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  }
  __writecr8(v6);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
