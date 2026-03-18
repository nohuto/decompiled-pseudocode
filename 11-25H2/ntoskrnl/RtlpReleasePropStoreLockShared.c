/*
 * XREFs of RtlpReleasePropStoreLockShared @ 0x1405DE1C0
 * Callers:
 *     RtlQueryPointerMapping @ 0x1405DDDB0 (RtlQueryPointerMapping.c)
 *     RtlQueryPropertyStore @ 0x1405DDE70 (RtlQueryPropertyStore.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall RtlpReleasePropStoreLockShared(volatile LONG *a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx

  v2 = a2;
  ExReleaseSpinLockSharedFromDpcLevel(a1);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  __writecr8(v2);
}
