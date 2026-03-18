/*
 * XREFs of HalpInterruptStandardEndOfInterrupt @ 0x1405418F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpInterruptStandardEndOfInterrupt()
{
  return guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16));
}
