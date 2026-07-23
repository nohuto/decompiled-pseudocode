/*
 * XREFs of HalpReleasePmuAccessRequest @ 0x140543930
 * Callers:
 *     HalAllocateHardwareCounters @ 0x1406FB2B0 (HalAllocateHardwareCounters.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x1406FBAE0 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpPmuArbiterPeriodicWorkItem @ 0x1406FBDF0 (HalpPmuArbiterPeriodicWorkItem.c)
 * Callees:
 *     <none>
 */

__int64 HalpReleasePmuAccessRequest()
{
  return (unsigned int)_InterlockedCompareExchange(&dword_140FC1FE8, 0, 1);
}
