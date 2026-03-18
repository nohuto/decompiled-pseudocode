/*
 * XREFs of RtlCaptureStackBackTrace @ 0x140347BC0
 * Callers:
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140293DB0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402991C0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExpFreeOwnerEntry @ 0x14029C030 (ExpFreeOwnerEntry.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     PsBoostThreadIo @ 0x1402EA3A0 (PsBoostThreadIo.c)
 *     PsBoostThreadIoEx @ 0x1402EA7E0 (PsBoostThreadIoEx.c)
 *     PsLeavePriorityRegion @ 0x1402EAB00 (PsLeavePriorityRegion.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402FF6B0 (ExpReleaseResourceForThreadLite.c)
 *     ExpApplyPriorityBoost @ 0x140324DC0 (ExpApplyPriorityBoost.c)
 *     MiShowBadMapper @ 0x1403BAD60 (MiShowBadMapper.c)
 *     PsEnterPriorityRegion @ 0x1403F0DA0 (PsEnterPriorityRegion.c)
 *     FsRtlReleaseEofLock @ 0x1403F96E0 (FsRtlReleaseEofLock.c)
 *     RtlGetCallersAddress @ 0x14045BDC0 (RtlGetCallersAddress.c)
 *     RtlStdLogStackTrace @ 0x14048A9EC (RtlStdLogStackTrace.c)
 *     SepGetStackTraceHash @ 0x14048CD74 (SepGetStackTraceHash.c)
 *     MiCaptureStackTraceCallout @ 0x1404BDDF8 (MiCaptureStackTraceCallout.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     KasaniReport @ 0x1405A6720 (KasaniReport.c)
 *     KcsaniInsertInDatabase @ 0x1405AAEF0 (KcsaniInsertInDatabase.c)
 *     RtlpHpHeapHandleError @ 0x1405E6C2C (RtlpHpHeapHandleError.c)
 *     CarInitializeTelemetryData @ 0x14060ABE0 (CarInitializeTelemetryData.c)
 *     UcOnUnexpectedCodePath @ 0x14068920C (UcOnUnexpectedCodePath.c)
 *     CmpLogDirtyVectorUse @ 0x1408815E4 (CmpLogDirtyVectorUse.c)
 *     VfPendingFinishLogging @ 0x140B81A90 (VfPendingFinishLogging.c)
 *     ViFaultsInjectionNotification @ 0x140B86C0C (ViFaultsInjectionNotification.c)
 *     VfDeadlockInitializeResource @ 0x140B880D0 (VfDeadlockInitializeResource.c)
 *     ViIrqlLogCRStackTrace @ 0x140B8D718 (ViIrqlLogCRStackTrace.c)
 *     IovpLogStackCallout @ 0x140B96B40 (IovpLogStackCallout.c)
 *     ViPtCaptureStackTraceCallout @ 0x140B973A0 (ViPtCaptureStackTraceCallout.c)
 *     VfDeadlockReleaseResource @ 0x140B975CC (VfDeadlockReleaseResource.c)
 *     ViKeIrqlLogCommon @ 0x140B982C0 (ViKeIrqlLogCommon.c)
 *     VfDeadlockAcquireResource @ 0x140B983E4 (VfDeadlockAcquireResource.c)
 *     VfCheckUserHandle @ 0x140B99248 (VfCheckUserHandle.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140348060 (RtlWalkFrameChain.c)
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
