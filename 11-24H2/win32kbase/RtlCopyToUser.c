/*
 * XREFs of RtlCopyToUser @ 0x1402C3008
 * Callers:
 *     NtDCompositionProcessChannelBatchBuffer @ 0x1400B7070 (NtDCompositionProcessChannelBatchBuffer.c)
 *     NtDCompositionGetFrameStatistics @ 0x1400BA540 (NtDCompositionGetFrameStatistics.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1400BD900 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1400BF1A0 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionGetStatistics @ 0x1400D17F0 (NtDCompositionGetStatistics.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1400D8B80 (NtQueryCompositionInputQueueAndTransform.c)
 *     NtQueryCompositionInputSinkLuid @ 0x1400DD000 (NtQueryCompositionInputSinkLuid.c)
 *     NtDCompositionSynchronize @ 0x1400EEE00 (NtDCompositionSynchronize.c)
 *     NtDCompositionGetTargetStatistics @ 0x1400EFC70 (NtDCompositionGetTargetStatistics.c)
 *     NtDCompositionGetDeletedResources @ 0x140107870 (NtDCompositionGetDeletedResources.c)
 *     NtDCompositionGetFrameId @ 0x140112960 (NtDCompositionGetFrameId.c)
 *     ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x14011481C (-_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z.c)
 *     NtDCompositionGetFrameIdFromBatchId @ 0x14011E480 (NtDCompositionGetFrameIdFromBatchId.c)
 *     NtDCompositionCreateChannel @ 0x14011F760 (NtDCompositionCreateChannel.c)
 *     NtQueryCompositionInputIsImplicit @ 0x140126530 (NtQueryCompositionInputIsImplicit.c)
 *     NtCompositionSetDropTarget @ 0x14012B7F0 (NtCompositionSetDropTarget.c)
 *     NtQueryCompositionInputSinkViewId @ 0x140130E60 (NtQueryCompositionInputSinkViewId.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x14016B770 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtDCompositionBeginFrame @ 0x140194290 (NtDCompositionBeginFrame.c)
 *     NtDCompositionCreateConnection @ 0x140223030 (NtDCompositionCreateConnection.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x1402235E0 (NtDCompositionSendDwmLpcMessage.c)
 *     RtlCopyToUser$thunk$8481748130428616498 @ 0x140242020 (RtlCopyToUser$thunk$8481748130428616498.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1401A2356 (ProbeForRead_0.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

void *__fastcall RtlCopyToUser(void *a1, void *Src, size_t Size)
{
  void *result; // rax

  result = 0LL;
  if ( Size )
  {
    ProbeForRead_0(a1, Size, 1u);
    return RtlCopyVolatileMemory(a1, Src, Size);
  }
  return result;
}
