/*
 * XREFs of PopSqmThermalHibernate @ 0x140765A44
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14049EC88 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopSqmThermalCriticalEvent @ 0x140765858 (PopSqmThermalCriticalEvent.c)
 */

void *__fastcall PopSqmThermalHibernate(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 188), 0);
}
