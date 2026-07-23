/*
 * XREFs of PsGetCurrentThreadId @ 0x1404251E0
 * Callers:
 *     HalpNotifyActorIfPmuAvailable @ 0x1406FBAE0 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpRequestPmuAccess @ 0x1406FC060 (HalpRequestPmuAccess.c)
 *     PoShutdownBugCheck @ 0x140751760 (PoShutdownBugCheck.c)
 *     EtwpCovSampContextPruneModules @ 0x140ADB9FC (EtwpCovSampContextPruneModules.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return *(HANDLE *)&KeGetCurrentThread()[1].CurrentRunTime;
}
