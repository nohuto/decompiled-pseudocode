/*
 * XREFs of IopReleasePassiveInterruptBlockLock @ 0x140456D24
 * Callers:
 *     IoProcessPassiveInterrupts @ 0x140206710 (IoProcessPassiveInterrupts.c)
 *     IopPassiveInterruptWorker @ 0x140456A40 (IopPassiveInterruptWorker.c)
 *     IopDereferencePassiveInterruptBlock @ 0x140456C24 (IopDereferencePassiveInterruptBlock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
