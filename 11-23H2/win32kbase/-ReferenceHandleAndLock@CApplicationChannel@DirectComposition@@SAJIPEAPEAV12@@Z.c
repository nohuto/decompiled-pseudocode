/*
 * XREFs of ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C00269C4
 * Callers:
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C00082B8 (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0008440 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     NtDCompositionGetFrameIdFromBatchId @ 0x1C000B680 (NtDCompositionGetFrameIdFromBatchId.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C000CAF8 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     NtDCompositionSuspendAnimations @ 0x1C000ED20 (NtDCompositionSuspendAnimations.c)
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1C0020FA0 (NtDCompositionSetChannelCommitCompletionEvent.c)
 *     NtDCompositionTelemetrySetApplicationId @ 0x1C0024FE0 (NtDCompositionTelemetrySetApplicationId.c)
 *     NtDCompositionSynchronize @ 0x1C00268F0 (NtDCompositionSynchronize.c)
 *     NtDCompositionCreateAndBindSharedSection @ 0x1C0093290 (NtDCompositionCreateAndBindSharedSection.c)
 *     NtDCompositionGetDeletedResources @ 0x1C00AA4D0 (NtDCompositionGetDeletedResources.c)
 *     NtDCompositionSetChannelConnectionId @ 0x1C00ADBC0 (NtDCompositionSetChannelConnectionId.c)
 *     NtDCompositionWaitForChannel @ 0x1C00B02F0 (NtDCompositionWaitForChannel.c)
 *     NtDCompositionReleaseAllResources @ 0x1C00B0890 (NtDCompositionReleaseAllResources.c)
 *     NtDCompositionSetDebugCounter @ 0x1C00B8AD0 (NtDCompositionSetDebugCounter.c)
 *     NtDCompositionNotifySuperWetInkWork @ 0x1C0209B10 (NtDCompositionNotifySuperWetInkWork.c)
 *     NtVisualCaptureBits @ 0x1C0209F40 (NtVisualCaptureBits.c)
 * Callees:
 *     ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0026A28 (-ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ReferenceHandleAndLock(
        unsigned int a1,
        struct DirectComposition::CApplicationChannel **a2)
{
  int v3; // edi
  struct DirectComposition::CApplicationChannel *v4; // rbx
  struct DirectComposition::CChannel *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v3 = DirectComposition::CChannel::ReferenceHandleAndLock(a1, &v6);
  if ( v3 >= 0 )
  {
    v4 = v6;
    if ( (*(unsigned int (__fastcall **)(struct DirectComposition::CChannel *))(*(_QWORD *)v6 + 8LL))(v6) == 1 )
    {
      *a2 = v4;
    }
    else
    {
      v3 = -1073741811;
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v4)(v4);
    }
  }
  return (unsigned int)v3;
}
