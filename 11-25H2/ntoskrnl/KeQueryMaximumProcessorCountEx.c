/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x1402BD630
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x140266270 (KeQueryLogicalProcessorRelationship.c)
 *     PpmEventHgsHardwareTable @ 0x140268A24 (PpmEventHgsHardwareTable.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x1402A257C (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x1402BCAFC (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402BD440 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExpGetSystemProcessorInformation @ 0x14045C2B8 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x140477AC8 (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpAllocateFannedOutPushLock @ 0x14047B034 (ExpAllocateFannedOutPushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14047B354 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x140496C7C (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1404AAB30 (ExpSaPageGroupDescriptorFree.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1404BCA64 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     PpmEventHgsNormalizedTable @ 0x1404C66FC (PpmEventHgsNormalizedTable.c)
 *     HalpHvInitMcaPcrContext @ 0x1404CE418 (HalpHvInitMcaPcrContext.c)
 *     KeStartProfile @ 0x1404D7A60 (KeStartProfile.c)
 *     KeQueryMaximumProcessorCount @ 0x1405B6B90 (KeQueryMaximumProcessorCount.c)
 *     RtlpHpEnvTlsAlloc @ 0x1405F9B0C (RtlpHpEnvTlsAlloc.c)
 *     ExpSaInitialize @ 0x14064E6CC (ExpSaInitialize.c)
 *     PpmHeteroRegisterWpsUpdatesAmd @ 0x140756230 (PpmHeteroRegisterWpsUpdatesAmd.c)
 *     EtwpAllocatePmcData @ 0x140797C94 (EtwpAllocatePmcData.c)
 *     EtwpInitializeSiloState @ 0x140798D8C (EtwpInitializeSiloState.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407A2BCC (EtwpCovSampCaptureContextStart.c)
 *     KeInitializeProcess @ 0x1409BE04C (KeInitializeProcess.c)
 *     EtwpInitLoggerContext @ 0x140A388E4 (EtwpInitLoggerContext.c)
 *     EtwpCovSampCaptureFlushStats @ 0x140ACF23C (EtwpCovSampCaptureFlushStats.c)
 *     HalpDmaAllocateMappingResources @ 0x140BFF19C (HalpDmaAllocateMappingResources.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140C1F8B8 (PopDetectSimulatedHeteroProcessors.c)
 *     PpmInitHeteroEngine @ 0x140C205D8 (PpmInitHeteroEngine.c)
 *     ExpInitializePushLocks @ 0x140C3170C (ExpInitializePushLocks.c)
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
