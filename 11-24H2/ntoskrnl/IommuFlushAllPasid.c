/*
 * XREFs of IommuFlushAllPasid @ 0x140563F90
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
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
      guard_dispatch_icall_no_overrides(*(_QWORD *)(i[2] + 16LL), 0xFFFFFFFFLL, *(unsigned int *)(a1 + 16), 0LL);
    KxReleaseSpinLock((volatile signed __int64 *)(a1 + 24));
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return 0LL;
}
