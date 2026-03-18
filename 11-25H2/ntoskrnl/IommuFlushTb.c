/*
 * XREFs of IommuFlushTb @ 0x1405617E0
 * Callers:
 *     HalpIommuFlushDmaDomain @ 0x14034975C (HalpIommuFlushDmaDomain.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x14053997C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuFlushTb(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // bl
  _QWORD *i; // rsi

  v1 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() && !*(_BYTE *)(v1 + 56)
    || (_BYTE)KdDebuggerNotPresent
    || HalpTimerProcessorsFrozen <= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    KxAcquireSpinLock((PKSPIN_LOCK)(v1 + 24));
    for ( i = *(_QWORD **)(v1 + 40); i != (_QWORD *)(v1 + 40); i = (_QWORD *)*i )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(i[2] + 16LL));
    KxReleaseSpinLock((volatile signed __int64 *)(v1 + 24));
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return 0LL;
}
