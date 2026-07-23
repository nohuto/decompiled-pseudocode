/*
 * XREFs of IommuFlushTb @ 0x140561CB0
 * Callers:
 *     HalpIommuFlushDmaDomain @ 0x140230910 (HalpIommuFlushDmaDomain.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x140539A0C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
      guard_dispatch_icall_no_overrides(*(_QWORD *)(i[2] + 16LL), *(unsigned int *)(v1 + 16));
    KxReleaseSpinLock((volatile signed __int64 *)(v1 + 24));
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return 0LL;
}
