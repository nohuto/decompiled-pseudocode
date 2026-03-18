/*
 * XREFs of ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x140045940
 * Callers:
 *     ACPIDispatchIrp @ 0x14001ADE0 (ACPIDispatchIrp.c)
 * Callees:
 *     ACPIBuildScheduleDpc @ 0x14001E47C (ACPIBuildScheduleDpc.c)
 *     ACPIDevicePowerFlushQueue @ 0x14003DF5C (ACPIDevicePowerFlushQueue.c)
 *     ACPIBuildProcessDelayedDependencyShouldDelayRequest @ 0x140045A14 (ACPIBuildProcessDelayedDependencyShouldDelayRequest.c)
 *     ACPIBuildFlushQueue @ 0x1400B67FC (ACPIBuildFlushQueue.c)
 */

void __fastcall ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck(__int64 a1)
{
  char v2; // di
  KIRQL v3; // al
  PVOID *v4; // rbx
  KIRQL v5; // r14
  PVOID *v6; // rsi
  __int64 v7; // rdx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
  v4 = (PVOID *)AcpiBuildDelayedDependencyList;
  v5 = v3;
  if ( AcpiBuildDelayedDependencyList != &AcpiBuildDelayedDependencyList )
  {
    do
    {
      v6 = v4;
      v4 = (PVOID *)*v4;
      if ( v6[10] && !(unsigned __int8)ACPIBuildProcessDelayedDependencyShouldDelayRequest() )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)v6 + 6, 4, 1);
        v2 = 1;
      }
    }
    while ( v4 != &AcpiBuildDelayedDependencyList );
    if ( v2 )
      ACPIBuildScheduleDpc();
  }
  KeReleaseSpinLock(&AcpiBuildQueueLock, v5);
  if ( v2 )
  {
    LOBYTE(v7) = 1;
    ACPIBuildFlushQueue(a1, v7);
    ACPIDevicePowerFlushQueue(a1);
  }
}
