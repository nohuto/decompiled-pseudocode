/*
 * XREFs of PsGetCurrentThreadId @ 0x1404330A0
 * Callers:
 *     HalpNotifyActorIfPmuAvailable @ 0x1406FDEA0 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpRequestPmuAccess @ 0x1406FE420 (HalpRequestPmuAccess.c)
 *     PoShutdownBugCheck @ 0x140753440 (PoShutdownBugCheck.c)
 *     EtwpCovSampContextPruneModules @ 0x140ADA1B8 (EtwpCovSampContextPruneModules.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return *(HANDLE *)&KeGetCurrentThread()[1].CurrentRunTime;
}
