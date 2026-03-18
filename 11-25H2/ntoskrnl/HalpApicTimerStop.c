/*
 * XREFs of HalpApicTimerStop @ 0x14055E7D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpApicTimerInitialize @ 0x14055E650 (HalpApicTimerInitialize.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpApicTimerStop()
{
  HalpApicTimerInitialize();
  return guard_dispatch_icall_no_overrides(896LL);
}
