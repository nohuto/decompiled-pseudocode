/*
 * XREFs of IopSetDiskIoAttributionFromProcess @ 0x14025D350
 * Callers:
 *     IoPageReadEx @ 0x14025C000 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14025CAE0 (IoSetDiskIoAttributionFromThread.c)
 *     IoSetIoAttributionIrp @ 0x1404A3090 (IoSetIoAttributionIrp.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x14025CCA4 (IopSetDiskIoAttributionExtension.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IopSetDiskIoAttributionFromProcess(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  KIRQL v6; // al
  __int64 v7; // rbx
  unsigned __int64 v8; // rbp

  v2 = 0LL;
  if ( !*(_QWORD *)(a2 + 1752) )
    return 3221226021LL;
  v6 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  v7 = *(_QWORD *)(a2 + 1752);
  v8 = v6;
  if ( v7 )
    v2 = *(_QWORD *)(v7 + 24);
  ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v8);
  __writecr8(v8);
  if ( !v7 )
    return 3221226021LL;
  result = IopSetDiskIoAttributionExtension(a1, v2, (__int64)KeGetCurrentThread(), 0);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
