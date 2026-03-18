/*
 * XREFs of KdAcquireDebuggerLock @ 0x1405AF7F0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KdAcquireDebuggerLock(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  *a1 = CurrentIrql;
  KxAcquireSpinLock(&KdDebuggerLock);
}
