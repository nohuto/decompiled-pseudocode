/*
 * XREFs of VfVolatileClearDifRuleClass @ 0x1406148D0
 * Callers:
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 *     VfDriverUnloadImage @ 0x140B8A5C0 (VfDriverUnloadImage.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     CarCleanup @ 0x1406164FC (CarCleanup.c)
 *     CarDeregisterRuleClassConfiguration @ 0x140616860 (CarDeregisterRuleClassConfiguration.c)
 *     DifDeregisterPlugin @ 0x1406186B8 (DifDeregisterPlugin.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     VfClearDifWithoutReboot @ 0x140B83890 (VfClearDifWithoutReboot.c)
 */

__int64 VfVolatileClearDifRuleClass()
{
  unsigned int v0; // ebx
  char *v1; // rsi
  unsigned int i; // edi
  int *v3; // rdi
  __int64 v4; // rsi

  v0 = 0;
  if ( !ViFullyInitialized || (VfOptionFlags & 0x800) != 0 )
  {
    ExWaitForRundownProtectionRelease(&DifRebootlessRundown);
    v1 = &DifPluginStates;
    _InterlockedExchange64((volatile __int64 *)&DifRebootlessRundown, 1LL);
    for ( i = 0; i < 0x40; ++i )
    {
      if ( *v1 )
        DifDeregisterPlugin(i);
      ++v1;
    }
    v3 = &DifKernelPluginRules;
    v4 = 4LL;
    do
    {
      CarDeregisterRuleClassConfiguration((unsigned int)*v3);
      v3 += 4;
      --v4;
    }
    while ( v4 );
    if ( ViWdmThunksWithIatIndex )
    {
      ExFreePoolWithTag(ViWdmThunksWithIatIndex, 0x6D4D7644u);
      ViWdmThunksWithIatIndex = 0LL;
    }
    CarCleanup();
    VfDifRunningWithoutReboot = 0;
    DifIsVolatileMode = 0;
    DifpPoolTags = 0LL;
    qword_140E67F40 = 0LL;
    xmmword_140E67F30 = 0LL;
    VfAllowedVolatileRC = 0LL;
    VfRuleClasses = 0LL;
    DifpPoolTagsSize = 0;
    DifpPoolTagsSizeBytes = 0;
    VfOptionFlags = 0;
    MmVerifierData = 0;
    VfClearDifWithoutReboot();
  }
  else
  {
    return (unsigned int)-1073738628;
  }
  return v0;
}
