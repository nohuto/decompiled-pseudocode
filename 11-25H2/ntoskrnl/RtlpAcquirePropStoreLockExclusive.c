/*
 * XREFs of RtlpAcquirePropStoreLockExclusive @ 0x1405DE0D4
 * Callers:
 *     RtlCompareExchangePointerMapping @ 0x1405DDA30 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x1405DDB80 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePointerMapping @ 0x1405DDF10 (RtlRemovePointerMapping.c)
 *     RtlRemovePropertyStore @ 0x1405DDFF0 (RtlRemovePropertyStore.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
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
