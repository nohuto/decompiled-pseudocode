/*
 * XREFs of HalpReleasePmuAccessRequest @ 0x140543780
 * Callers:
 *     HalAllocateHardwareCounters @ 0x1406F1880 (HalAllocateHardwareCounters.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x1406F20B0 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpPmuArbiterPeriodicWorkItem @ 0x1406F23C0 (HalpPmuArbiterPeriodicWorkItem.c)
 * Callees:
 *     <none>
 */

__int64 HalpReleasePmuAccessRequest()
{
  return (unsigned int)_InterlockedCompareExchange(&dword_140FC15E8, 0, 1);
}
