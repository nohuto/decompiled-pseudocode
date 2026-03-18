/*
 * XREFs of KeReleaseInterruptSpinLock @ 0x1404484C0
 * Callers:
 *     <none>
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall KeReleaseInterruptSpinLock(PKINTERRUPT Interrupt, KIRQL OldIrql)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 *ActualLock; // rcx
  __int64 v4; // rdx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v2 = OldIrql;
  if ( !Interrupt->SynchronizeIrql )
    KeBugCheckEx(0x13Bu, 1uLL, (ULONG_PTR)Interrupt, 0LL, 0LL);
  ActualLock = Interrupt->ActualLock;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)ActualLock, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)ActualLock, retaddr);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = v2;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  }
  __writecr8(v2);
}
