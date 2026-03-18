/*
 * XREFs of IopReleaseGlobalPassiveInterruptListLock @ 0x140456CE8
 * Callers:
 *     IopInsertPassiveInterruptBlock @ 0x1404569A8 (IopInsertPassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x140456BB4 (IopFindPassiveInterruptBlock.c)
 *     IopDereferencePassiveInterruptBlock @ 0x140456C24 (IopDereferencePassiveInterruptBlock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
