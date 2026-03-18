/*
 * XREFs of RtlpAcquirePropStoreLockShared @ 0x1405EA26C
 * Callers:
 *     RtlQueryPointerMapping @ 0x1405E9F00 (RtlQueryPointerMapping.c)
 *     RtlQueryPropertyStore @ 0x1405E9FC0 (RtlQueryPropertyStore.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int8 __fastcall RtlpAcquirePropStoreLockShared(PEX_SPIN_LOCK SpinLock)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  ExAcquireSpinLockSharedAtDpcLevel(SpinLock);
  return CurrentIrql;
}
