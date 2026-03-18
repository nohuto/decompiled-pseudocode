/*
 * XREFs of HalpApicTimerQueryCounter @ 0x14055E790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpApicTimerQueryCounter()
{
  return (unsigned int)~guard_dispatch_icall_no_overrides(912LL);
}
