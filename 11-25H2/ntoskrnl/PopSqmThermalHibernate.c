/*
 * XREFs of PopSqmThermalHibernate @ 0x140755F84
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14049FAD0 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopSqmThermalCriticalEvent @ 0x140755D98 (PopSqmThermalCriticalEvent.c)
 */

void *__fastcall PopSqmThermalHibernate(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 188), 0);
}
