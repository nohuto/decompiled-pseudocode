/*
 * XREFs of HalpReleasePmuAccessRequest @ 0x140546070
 * Callers:
 *     HalAllocateHardwareCounters @ 0x1406FD670 (HalAllocateHardwareCounters.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x1406FDEA0 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpPmuArbiterPeriodicWorkItem @ 0x1406FE1B0 (HalpPmuArbiterPeriodicWorkItem.c)
 * Callees:
 *     <none>
 */

__int64 HalpReleasePmuAccessRequest()
{
  return (unsigned int)_InterlockedCompareExchange(&dword_140FC1D88, 0, 1);
}
