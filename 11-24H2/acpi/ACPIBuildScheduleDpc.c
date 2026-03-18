/*
 * XREFs of ACPIBuildScheduleDpc @ 0x14001E47C
 * Callers:
 *     ACPIBuildCompleteMustSucceed @ 0x14001E380 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildCompleteCommon @ 0x14001E430 (ACPIBuildCompleteCommon.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x14001E810 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildRunMethodRequest @ 0x14001F5EC (ACPIBuildRunMethodRequest.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x140029D5C (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x14003C4B8 (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x140045940 (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPITableLoad @ 0x14004A4E0 (ACPITableLoad.c)
 *     ACPITableUnload @ 0x1400683A0 (ACPITableUnload.c)
 * Callees:
 *     <none>
 */

char ACPIBuildScheduleDpc()
{
  int v0; // eax

  v0 = AcpiBuildDpcFlags | 2;
  AcpiBuildDpcFlags = v0;
  if ( (v0 & 1) == 0 )
  {
    AcpiBuildDpcFlags = v0 | 1;
    LOBYTE(v0) = KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
  }
  return v0;
}
