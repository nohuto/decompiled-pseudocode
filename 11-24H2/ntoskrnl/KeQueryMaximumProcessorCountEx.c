/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x14033E440
 * Callers:
 *     PpmEventHgsHardwareTable @ 0x140203014 (PpmEventHgsHardwareTable.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140206A10 (KeQueryLogicalProcessorRelationship.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14025F524 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14033E4C0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x1403C576C (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     ExpGetSystemProcessorInformation @ 0x14045B258 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x140477728 (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpAllocateFannedOutPushLock @ 0x14047B80C (ExpAllocateFannedOutPushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14047BB30 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x140496708 (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1404AC03C (ExpSaPageGroupDescriptorFree.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1404BBBC4 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     PpmEventHgsNormalizedTable @ 0x1404C6EBC (PpmEventHgsNormalizedTable.c)
 *     HalpHvInitMcaPcrContext @ 0x1404CE1F8 (HalpHvInitMcaPcrContext.c)
 *     KeStartProfile @ 0x1404D6890 (KeStartProfile.c)
 *     KeQueryMaximumProcessorCount @ 0x1405BAA20 (KeQueryMaximumProcessorCount.c)
 *     RtlpHpEnvTlsAlloc @ 0x140605E4C (RtlpHpEnvTlsAlloc.c)
 *     ExpSaInitialize @ 0x14065A654 (ExpSaInitialize.c)
 *     PpmHeteroRegisterWpsUpdatesAmd @ 0x140765CF0 (PpmHeteroRegisterWpsUpdatesAmd.c)
 *     EtwpAllocatePmcData @ 0x1407A7064 (EtwpAllocatePmcData.c)
 *     EtwpInitializeSiloState @ 0x1407A815C (EtwpInitializeSiloState.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407B1F9C (EtwpCovSampCaptureContextStart.c)
 *     EtwpInitLoggerContext @ 0x1408309D4 (EtwpInitLoggerContext.c)
 *     KeInitializeProcess @ 0x140A4EB18 (KeInitializeProcess.c)
 *     EtwpCovSampCaptureFlushStats @ 0x140AD9E2C (EtwpCovSampCaptureFlushStats.c)
 *     HalpDmaAllocateMappingResources @ 0x140C1019C (HalpDmaAllocateMappingResources.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140C309B8 (PopDetectSimulatedHeteroProcessors.c)
 *     PpmInitHeteroEngine @ 0x140C316D8 (PpmInitHeteroEngine.c)
 *     ExpInitSystemPhase1 @ 0x140C40A64 (ExpInitSystemPhase1.c)
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
