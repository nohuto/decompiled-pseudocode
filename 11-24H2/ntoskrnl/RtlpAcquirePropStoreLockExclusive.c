/*
 * XREFs of RtlpAcquirePropStoreLockExclusive @ 0x1405EA224
 * Callers:
 *     RtlCompareExchangePointerMapping @ 0x1405E9B80 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x1405E9CD0 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePointerMapping @ 0x1405EA060 (RtlRemovePointerMapping.c)
 *     RtlRemovePropertyStore @ 0x1405EA140 (RtlRemovePropertyStore.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int8 __fastcall RtlpAcquirePropStoreLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
  return CurrentIrql;
}
