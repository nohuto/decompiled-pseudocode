/*
 * XREFs of IopAcquireGlobalPassiveInterruptListLock @ 0x140456D5C
 * Callers:
 *     IopInsertPassiveInterruptBlock @ 0x1404569A8 (IopInsertPassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x140456BB4 (IopFindPassiveInterruptBlock.c)
 *     IopDereferencePassiveInterruptBlock @ 0x140456C24 (IopDereferencePassiveInterruptBlock.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall IopAcquireGlobalPassiveInterruptListLock(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // rdi
  unsigned __int8 CurrentIrql; // bl

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  *v1 = CurrentIrql;
  KxAcquireSpinLock(&PassiveInterruptListLock);
}
