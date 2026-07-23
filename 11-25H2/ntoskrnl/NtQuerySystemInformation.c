/*
 * XREFs of NtQuerySystemInformation @ 0x1409DB410
 * Callers:
 *     HalpTimerConfigureQpcBypass @ 0x140547D8C (HalpTimerConfigureQpcBypass.c)
 *     AlpcpInitSystem @ 0x14073629C (AlpcpInitSystem.c)
 * Callees:
 *     KeQueryPrimaryGroupThread @ 0x14048489C (KeQueryPrimaryGroupThread.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 */

NTSTATUS __cdecl NtQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  __int16 *p_PrimaryGroupThread; // rdx
  PULONG v6; // r11
  SYSTEM_INFORMATION_CLASS v8; // r10d
  __int64 v9; // r8
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
      goto LABEL_7;
    case SystemLogicalProcessorInformation:
LABEL_7:
      p_PrimaryGroupThread = &PrimaryGroupThread;
      v9 = 2LL;
      return ExpQuerySystemInformation(
               (unsigned int)v8,
               p_PrimaryGroupThread,
               v9,
               SystemInformation,
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
      return -1073741821;
    default:
      v9 = 0LL;
      return ExpQuerySystemInformation(
               (unsigned int)v8,
               p_PrimaryGroupThread,
               v9,
               SystemInformation,
               SystemInformationLength,
               v6);
  }
}
