/*
 * XREFs of IopReleaseGlobalPassiveInterruptListLock @ 0x140457110
 * Callers:
 *     IopInsertPassiveInterruptBlock @ 0x140456E24 (IopInsertPassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x140456FDC (IopFindPassiveInterruptBlock.c)
 *     IopDereferencePassiveInterruptBlock @ 0x14045704C (IopDereferencePassiveInterruptBlock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IopReleaseGlobalPassiveInterruptListLock(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdx

  v1 = a1;
  result = KxReleaseSpinLock((volatile signed __int64 *)&PassiveInterruptListLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = v1;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  }
  __writecr8(v1);
  return result;
}
