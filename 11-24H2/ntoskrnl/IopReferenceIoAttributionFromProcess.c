/*
 * XREFs of IopReferenceIoAttributionFromProcess @ 0x14043F740
 * Callers:
 *     IopSetDiskIoAttributionExtension @ 0x1403743E4 (IopSetDiskIoAttributionExtension.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IopReferenceIoAttributionFromProcess(__int64 a1, char a2, _QWORD *a3)
{
  KIRQL v7; // al
  __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned int v10; // ecx

  if ( !*(_QWORD *)(a1 + 1752) )
    return 3221226021LL;
  v7 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  v8 = *(_QWORD *)(a1 + 1752);
  v9 = v7;
  if ( v8 )
  {
    if ( a2 )
    {
      *a3 = *(_QWORD *)(v8 + 24);
    }
    else
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 32)) <= 1 )
        __fastfail(0xEu);
      *a3 = v8;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v9);
  __writecr8(v9);
  v10 = 0;
  if ( !v8 )
    return (unsigned int)-1073741275;
  return v10;
}
