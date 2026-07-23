/*
 * XREFs of IommuFlushAllPasid @ 0x140561BC0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuFlushAllPasid(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  _QWORD *i; // rdi

  if ( (_BYTE)KdDebuggerNotPresent || HalpTimerProcessorsFrozen <= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 24));
    for ( i = *(_QWORD **)(a1 + 32); i != (_QWORD *)(a1 + 32); i = (_QWORD *)*i )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(i[2] + 16LL), 0xFFFFFFFFLL);
    KxReleaseSpinLock((volatile signed __int64 *)(a1 + 24));
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return 0LL;
}
