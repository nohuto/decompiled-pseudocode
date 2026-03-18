/*
 * XREFs of IopReleasePassiveInterruptBlockLock @ 0x14045714C
 * Callers:
 *     IoProcessPassiveInterrupts @ 0x1403BFCA4 (IoProcessPassiveInterrupts.c)
 *     IopPassiveInterruptWorker @ 0x140456EC0 (IopPassiveInterruptWorker.c)
 *     IopDereferencePassiveInterruptBlock @ 0x14045704C (IopDereferencePassiveInterruptBlock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IopReleasePassiveInterruptBlockLock(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rdx

  v2 = a2;
  result = KxReleaseSpinLock((volatile signed __int64 *)(a1 + 56));
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = v2;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  }
  __writecr8(v2);
  return result;
}
