/*
 * XREFs of PpmQueryTime @ 0x14044EE8C
 * Callers:
 *     PpmIdleInitializeConcurrency @ 0x14073E060 (PpmIdleInitializeConcurrency.c)
 *     PopPdcIdleResiliencyCallback @ 0x140A1E178 (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 */

void __noreturn PpmQueryTime()
{
  KeQueryPerformanceCounter(0LL);
}
