/*
 * XREFs of ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x14003C4B8
 * Callers:
 *     ACPIDispatchIrpDepPdoQueryID @ 0x14003C120 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPICleanDeviceDependenciesWithTreeLock @ 0x14003C470 (ACPICleanDeviceDependenciesWithTreeLock.c)
 *     ACPIDispatchIrpDepFilterQueryID @ 0x1400608E0 (ACPIDispatchIrpDepFilterQueryID.c)
 *     ACPITableNotifyFreeObject @ 0x1400680F0 (ACPITableNotifyFreeObject.c)
 * Callees:
 *     ACPIBuildScheduleDpc @ 0x14001E47C (ACPIBuildScheduleDpc.c)
 */

void __fastcall ACPIBuildProcessDelayedDependencyExternalTrigger(PVOID a1)
{
  char v2; // bl
  PVOID *v3; // rdx
  PVOID *v4; // rcx

  v2 = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  v3 = (PVOID *)AcpiBuildDelayedDependencyList;
  if ( AcpiBuildDelayedDependencyList != &AcpiBuildDelayedDependencyList )
  {
    do
    {
      v4 = v3;
      v3 = (PVOID *)*v3;
      if ( v4[5] == a1 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)v4 + 6, 4, 1);
        v2 = 1;
      }
    }
    while ( v3 != &AcpiBuildDelayedDependencyList );
    if ( v2 )
      ACPIBuildScheduleDpc();
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
}
