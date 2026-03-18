/*
 * XREFs of PsGetCurrentThreadId @ 0x140436710
 * Callers:
 *     HalpNotifyActorIfPmuAvailable @ 0x1406F20B0 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpRequestPmuAccess @ 0x1406F2630 (HalpRequestPmuAccess.c)
 *     PoShutdownBugCheck @ 0x140747350 (PoShutdownBugCheck.c)
 *     EtwpCovSampContextPruneModules @ 0x140ACF5C8 (EtwpCovSampContextPruneModules.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return *(HANDLE *)&KeGetCurrentThread()[1].CurrentRunTime;
}
