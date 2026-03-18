/*
 * XREFs of RtlCaptureStackBackTrace @ 0x14027C690
 * Callers:
 *     PsLeavePriorityRegion @ 0x14024CA40 (PsLeavePriorityRegion.c)
 *     PsBoostThreadIo @ 0x14024D950 (PsBoostThreadIo.c)
 *     PsBoostThreadIoEx @ 0x14024DD90 (PsBoostThreadIoEx.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140257E60 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExpApplyPriorityBoost @ 0x140277A10 (ExpApplyPriorityBoost.c)
 *     SepGetStackTraceHash @ 0x14027BF90 (SepGetStackTraceHash.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402D6BE0 (ExpReleaseResourceForThreadLite.c)
 *     ExpFreeOwnerEntry @ 0x14033F7B0 (ExpFreeOwnerEntry.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140343AD0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     MiShowBadMapper @ 0x1403D0830 (MiShowBadMapper.c)
 *     FsRtlReleaseEofLock @ 0x1403D8730 (FsRtlReleaseEofLock.c)
 *     PsEnterPriorityRegion @ 0x1403F54C0 (PsEnterPriorityRegion.c)
 *     RtlGetCallersAddress @ 0x14045B140 (RtlGetCallersAddress.c)
 *     RtlStdLogStackTrace @ 0x14048A298 (RtlStdLogStackTrace.c)
 *     MiCaptureStackTraceCallout @ 0x1404BCE28 (MiCaptureStackTraceCallout.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     KasaniReport @ 0x1405AA0B0 (KasaniReport.c)
 *     KcsaniInsertInDatabase @ 0x1405AE880 (KcsaniInsertInDatabase.c)
 *     RtlpHpHeapHandleError @ 0x1405F2F74 (RtlpHpHeapHandleError.c)
 *     CarInitializeTelemetryData @ 0x140616BA0 (CarInitializeTelemetryData.c)
 *     UcOnUnexpectedCodePath @ 0x14069466C (UcOnUnexpectedCodePath.c)
 *     CmpLogDirtyVectorUse @ 0x1408834D4 (CmpLogDirtyVectorUse.c)
 *     VfPendingFinishLogging @ 0x140B91A70 (VfPendingFinishLogging.c)
 *     ViFaultsInjectionNotification @ 0x140B96BEC (ViFaultsInjectionNotification.c)
 *     VfDeadlockInitializeResource @ 0x140B980B0 (VfDeadlockInitializeResource.c)
 *     ViIrqlLogCRStackTrace @ 0x140B9D6F8 (ViIrqlLogCRStackTrace.c)
 *     IovpLogStackCallout @ 0x140BA6B20 (IovpLogStackCallout.c)
 *     ViPtCaptureStackTraceCallout @ 0x140BA7380 (ViPtCaptureStackTraceCallout.c)
 *     VfDeadlockReleaseResource @ 0x140BA75AC (VfDeadlockReleaseResource.c)
 *     ViKeIrqlLogCommon @ 0x140BA82A0 (ViKeIrqlLogCommon.c)
 *     VfDeadlockAcquireResource @ 0x140BA83C4 (VfDeadlockAcquireResource.c)
 *     VfCheckUserHandle @ 0x140BA9228 (VfCheckUserHandle.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x14027DB70 (RtlWalkFrameChain.c)
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
