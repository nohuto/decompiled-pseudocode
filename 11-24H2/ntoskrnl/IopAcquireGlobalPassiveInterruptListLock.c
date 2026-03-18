/*
 * XREFs of IopAcquireGlobalPassiveInterruptListLock @ 0x140457184
 * Callers:
 *     IopInsertPassiveInterruptBlock @ 0x140456E24 (IopInsertPassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x140456FDC (IopFindPassiveInterruptBlock.c)
 *     IopDereferencePassiveInterruptBlock @ 0x14045704C (IopDereferencePassiveInterruptBlock.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
    KiRaiseIrqlProcessIrqlFlags(a1, 12LL);
  }
  *v1 = CurrentIrql;
  KxAcquireSpinLock(&PassiveInterruptListLock);
}
