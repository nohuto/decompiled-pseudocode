/*
 * XREFs of PopSqmThermalCriticalShutdown @ 0x140755F60
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14049FAD0 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopSqmThermalCriticalEvent @ 0x140755D98 (PopSqmThermalCriticalEvent.c)
 */

void *__fastcall PopSqmThermalCriticalShutdown(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 140), 1);
}
