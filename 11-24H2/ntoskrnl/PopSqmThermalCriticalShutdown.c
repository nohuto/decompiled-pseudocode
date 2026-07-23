/*
 * XREFs of PopSqmThermalCriticalShutdown @ 0x1407653F0
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140499AC0 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopSqmThermalCriticalEvent @ 0x140765228 (PopSqmThermalCriticalEvent.c)
 */

void *__fastcall PopSqmThermalCriticalShutdown(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 140), 1);
}
