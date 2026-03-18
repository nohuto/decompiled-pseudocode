/*
 * XREFs of IopSetDiskIoAttributionFromProcess @ 0x14035DE60
 * Callers:
 *     IoPageReadEx @ 0x14035CA60 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14035D5D0 (IoSetDiskIoAttributionFromThread.c)
 *     IoSetIoAttributionIrp @ 0x1404A7F60 (IoSetIoAttributionIrp.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     IopSetDiskIoAttributionExtension @ 0x14035D794 (IopSetDiskIoAttributionExtension.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
