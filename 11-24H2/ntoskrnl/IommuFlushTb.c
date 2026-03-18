/*
 * XREFs of IommuFlushTb @ 0x140564080
 * Callers:
 *     HalpIommuFlushDmaDomain @ 0x14027B380 (HalpIommuFlushDmaDomain.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x14053C180 (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuFlushTb(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // r13
  unsigned __int8 CurrentIrql; // bl
  _QWORD *i; // rsi

  v1 = a1[1];
  v2 = *a1;
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
      guard_dispatch_icall_no_overrides(
        *(_QWORD *)(i[2] + 16LL),
        *(unsigned int *)(v1 + 16),
        *(unsigned int *)(v2 + 16),
        0LL);
    KxReleaseSpinLock((volatile signed __int64 *)(v1 + 24));
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return 0LL;
}
