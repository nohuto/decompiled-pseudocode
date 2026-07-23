/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x14031D920
 * Callers:
 *     ExpSaPageGroupDescriptorAllocate @ 0x14026E450 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpAllocateFannedOutPushLock @ 0x14026FE3C (ExpAllocateFannedOutPushLock.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14028FB34 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14031D9A0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14032DFF0 (KeQueryLogicalProcessorRelationship.c)
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x1403B432C (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     ExpGetSystemProcessorInformation @ 0x140450658 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x140473CC8 (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x140491098 (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1404A6528 (ExpSaPageGroupDescriptorFree.c)
 *     PpmEventHgsHardwareTable @ 0x1404A81D4 (PpmEventHgsHardwareTable.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1404B6AD4 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     PpmEventHgsNormalizedTable @ 0x1404C031C (PpmEventHgsNormalizedTable.c)
 *     HalpHvInitMcaPcrContext @ 0x1404C74C4 (HalpHvInitMcaPcrContext.c)
 *     KeStartProfile @ 0x1404CFCE0 (KeStartProfile.c)
 *     KeQueryMaximumProcessorCount @ 0x1405B8050 (KeQueryMaximumProcessorCount.c)
 *     RtlpHpEnvTlsAlloc @ 0x14060348C (RtlpHpEnvTlsAlloc.c)
 *     ExpSaInitialize @ 0x140658D24 (ExpSaInitialize.c)
 *     PpmHeteroRegisterWpsUpdatesAmd @ 0x1407656C0 (PpmHeteroRegisterWpsUpdatesAmd.c)
 *     EtwpAllocatePmcData @ 0x1407A71A4 (EtwpAllocatePmcData.c)
 *     EtwpInitializeSiloState @ 0x1407A829C (EtwpInitializeSiloState.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407B23EC (EtwpCovSampCaptureContextStart.c)
 *     EtwpInitLoggerContext @ 0x1409CFDB8 (EtwpInitLoggerContext.c)
 *     KeInitializeProcess @ 0x140A45798 (KeInitializeProcess.c)
 *     EtwpCovSampCaptureFlushStats @ 0x140ADB670 (EtwpCovSampCaptureFlushStats.c)
 *     HalpDmaAllocateMappingResources @ 0x140C1219C (HalpDmaAllocateMappingResources.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140C32AD8 (PopDetectSimulatedHeteroProcessors.c)
 *     PpmInitHeteroEngine @ 0x140C337F8 (PpmInitHeteroEngine.c)
 *     ExpInitSystemPhase1 @ 0x140C42BB4 (ExpInitSystemPhase1.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryMaximumProcessorCountEx(USHORT GroupNumber)
{
  if ( KeDynamicPartitioningSupported )
  {
    if ( GroupNumber == 0xFFFF || !GroupNumber && KiMaximumGroups == 1 )
      return KeMaximumProcessors;
    else
      return GroupNumber < (USHORT)KiMaximumGroups ? KiMaximumGroupSize : 0;
  }
  else if ( GroupNumber == 0xFFFF )
  {
    return KeNumberProcessors_0;
  }
  else if ( GroupNumber >= (unsigned __int16)KiActiveGroups )
  {
    return 0;
  }
  else
  {
    return __popcnt(KeActiveProcessors.Bitmap[GroupNumber]);
  }
}
