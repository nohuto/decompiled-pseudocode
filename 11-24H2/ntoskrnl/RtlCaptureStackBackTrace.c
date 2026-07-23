/*
 * XREFs of RtlCaptureStackBackTrace @ 0x140231C20
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14022CFA0 (ExpApplyPriorityBoost.c)
 *     SepGetStackTraceHash @ 0x140231520 (SepGetStackTraceHash.c)
 *     MiShowBadMapper @ 0x140275730 (MiShowBadMapper.c)
 *     PsLeavePriorityRegion @ 0x14027D050 (PsLeavePriorityRegion.c)
 *     PsBoostThreadIo @ 0x14027DF60 (PsBoostThreadIo.c)
 *     PsBoostThreadIoEx @ 0x14027E3A0 (PsBoostThreadIoEx.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140288470 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     FsRtlReleaseEofLock @ 0x1402E0940 (FsRtlReleaseEofLock.c)
 *     ExpFreeOwnerEntry @ 0x14031EC90 (ExpFreeOwnerEntry.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140322FB0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExpReleaseResourceForThreadLite @ 0x140357E60 (ExpReleaseResourceForThreadLite.c)
 *     PsEnterPriorityRegion @ 0x1403EB900 (PsEnterPriorityRegion.c)
 *     RtlGetCallersAddress @ 0x1404504E0 (RtlGetCallersAddress.c)
 *     RtlStdLogStackTrace @ 0x1404850C0 (RtlStdLogStackTrace.c)
 *     MiCaptureStackTraceCallout @ 0x1404B7F98 (MiCaptureStackTraceCallout.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     KasaniReport @ 0x1405A7020 (KasaniReport.c)
 *     KcsaniInsertInDatabase @ 0x1405AB7F0 (KcsaniInsertInDatabase.c)
 *     RtlpHpHeapHandleError @ 0x1405F05B4 (RtlpHpHeapHandleError.c)
 *     CarInitializeTelemetryData @ 0x140615160 (CarInitializeTelemetryData.c)
 *     UcOnUnexpectedCodePath @ 0x14069573C (UcOnUnexpectedCodePath.c)
 *     CmpLogDirtyVectorUse @ 0x140887384 (CmpLogDirtyVectorUse.c)
 *     VfPendingFinishLogging @ 0x140B93A70 (VfPendingFinishLogging.c)
 *     ViFaultsInjectionNotification @ 0x140B98BEC (ViFaultsInjectionNotification.c)
 *     VfDeadlockInitializeResource @ 0x140B9A0B0 (VfDeadlockInitializeResource.c)
 *     ViIrqlLogCRStackTrace @ 0x140B9F6F8 (ViIrqlLogCRStackTrace.c)
 *     IovpLogStackCallout @ 0x140BA8B20 (IovpLogStackCallout.c)
 *     ViPtCaptureStackTraceCallout @ 0x140BA9380 (ViPtCaptureStackTraceCallout.c)
 *     VfDeadlockReleaseResource @ 0x140BA95AC (VfDeadlockReleaseResource.c)
 *     ViKeIrqlLogCommon @ 0x140BAA2A0 (ViKeIrqlLogCommon.c)
 *     VfDeadlockAcquireResource @ 0x140BAA3C4 (VfDeadlockAcquireResource.c)
 *     VfCheckUserHandle @ 0x140BAB228 (VfCheckUserHandle.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140233100 (RtlWalkFrameChain.c)
 */

USHORT __stdcall RtlCaptureStackBackTrace(
        ULONG FramesToSkip,
        ULONG FramesToCapture,
        PVOID *BackTrace,
        PULONG BackTraceHash)
{
  ULONG v4; // edi
  ULONG v7; // ebx
  ULONG i; // eax
  unsigned int v9; // r8d
  ULONG v10; // edx
  __int64 v11; // rcx

  v4 = 0xFFFF;
  if ( FramesToCapture <= 0xFFFF )
    v4 = FramesToCapture;
  if ( FramesToSkip > 0xFE
    || (v7 = FramesToSkip + 1, i = RtlWalkFrameChain(BackTrace, v4 + v7, v7 << 8), v9 = i, i <= v7) )
  {
    LOWORD(i) = 0;
  }
  else if ( BackTraceHash )
  {
    v10 = 0;
    for ( i = 0; i < v4; v10 += LODWORD(BackTrace[v11]) )
    {
      if ( i + v7 >= v9 )
        break;
      v11 = i++;
    }
    *BackTraceHash = v10;
  }
  else
  {
    LOWORD(i) = i - v7;
  }
  return i;
}
