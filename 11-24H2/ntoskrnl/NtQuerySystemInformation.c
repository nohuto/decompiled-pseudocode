/*
 * XREFs of NtQuerySystemInformation @ 0x140AE28B0
 * Callers:
 *     HalpTimerConfigureQpcBypass @ 0x140547F3C (HalpTimerConfigureQpcBypass.c)
 *     AlpcpInitSystem @ 0x14073FD1C (AlpcpInitSystem.c)
 * Callees:
 *     KeQueryPrimaryGroupThread @ 0x140480638 (KeQueryPrimaryGroupThread.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 */

NTSTATUS __cdecl NtQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  __int16 *p_PrimaryGroupThread; // rdx
  unsigned int *v6; // r11
  SYSTEM_INFORMATION_CLASS v8; // r10d
  unsigned int v9; // r8d
  __int16 PrimaryGroupThread; // [rsp+40h] [rbp+8h] BYREF

  p_PrimaryGroupThread = 0LL;
  v6 = ReturnLength;
  PrimaryGroupThread = 0;
  v8 = SystemInformationClass;
  switch ( SystemInformationClass )
  {
    case SystemProcessorPerformanceInformation:
    case SystemInterruptInformation:
    case SystemProcessorIdleInformation:
    case SystemProcessorPowerInformation:
    case SystemProcessorIdleCycleTimeInformation:
    case SystemProcessorPerformanceDistribution:
    case SystemProcessorCycleTimeInformation:
    case SystemProcessorPerformanceInformationEx:
      PrimaryGroupThread = KeQueryPrimaryGroupThread((__int64)KeGetCurrentThread());
      goto LABEL_3;
    case SystemLogicalProcessorInformation:
LABEL_3:
      p_PrimaryGroupThread = &PrimaryGroupThread;
      v9 = 2;
      return ExpQuerySystemInformation(
               v8,
               p_PrimaryGroupThread,
               v9,
               (unsigned __int64)SystemInformation,
               SystemInformationLength,
               v6);
    case SystemLogicalProcessorAndGroupInformation:
    case SystemNodeDistanceInformation:
    case SystemInterruptSteeringInformation:
    case SystemFeatureConfigurationInformation:
    case SystemFeatureConfigurationSectionInformation:
    case SystemBuildVersionInformation:
    case SystemSingleProcessorRelationshipInformation:
    case SystemOriginalImageFeatureInformation:
    case SystemMemoryNumaInformation:
    case SystemMemoryNumaPerformanceInformation:
    case SystemRuntimeAttestationReport:
      return -1073741821;
    default:
      v9 = 0;
      return ExpQuerySystemInformation(
               v8,
               p_PrimaryGroupThread,
               v9,
               (unsigned __int64)SystemInformation,
               SystemInformationLength,
               v6);
  }
}
