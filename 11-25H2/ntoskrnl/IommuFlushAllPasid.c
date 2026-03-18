/*
 * XREFs of IommuFlushAllPasid @ 0x1405616F0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
      guard_dispatch_icall_no_overrides(*(_QWORD *)(i[2] + 16LL));
    KxReleaseSpinLock((volatile signed __int64 *)(a1 + 24));
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return 0LL;
}
