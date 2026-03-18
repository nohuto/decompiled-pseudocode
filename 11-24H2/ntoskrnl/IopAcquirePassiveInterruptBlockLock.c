/*
 * XREFs of IopAcquirePassiveInterruptBlockLock @ 0x1404571D0
 * Callers:
 *     IoProcessPassiveInterrupts @ 0x1403BFCA4 (IoProcessPassiveInterrupts.c)
 *     IopPassiveInterruptWorker @ 0x140456EC0 (IopPassiveInterruptWorker.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall IopAcquirePassiveInterruptBlockLock(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // bl

  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 12LL);
  }
  *a2 = CurrentIrql;
  KxAcquireSpinLock((PKSPIN_LOCK)(v3 + 56));
}
