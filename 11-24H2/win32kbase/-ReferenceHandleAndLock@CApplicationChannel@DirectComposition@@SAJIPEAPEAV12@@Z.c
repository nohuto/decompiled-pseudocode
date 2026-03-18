/*
 * XREFs of ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x14006DF90
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x14004BFC8 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x14006CDFC (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x14006DD50 (NtDCompositionSetChannelCommitCompletionEvent.c)
 *     NtDCompositionReleaseAllResources @ 0x14006DDD0 (NtDCompositionReleaseAllResources.c)
 *     NtDCompositionSetChannelConnectionId @ 0x14006DE70 (NtDCompositionSetChannelConnectionId.c)
 *     NtDCompositionWaitForChannel @ 0x14006DF10 (NtDCompositionWaitForChannel.c)
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x14006FDF0 (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 *     NtDCompositionCommitChannel @ 0x1400A5430 (NtDCompositionCommitChannel.c)
 *     NtDCompositionSynchronize @ 0x1400EEE00 (NtDCompositionSynchronize.c)
 *     NtDCompositionGetDeletedResources @ 0x140107870 (NtDCompositionGetDeletedResources.c)
 *     NtDCompositionTelemetrySetApplicationId @ 0x14011BF10 (NtDCompositionTelemetrySetApplicationId.c)
 *     NtDCompositionCreateAndBindSharedSection @ 0x14011C8C0 (NtDCompositionCreateAndBindSharedSection.c)
 *     NtDCompositionGetFrameIdFromBatchId @ 0x14011E480 (NtDCompositionGetFrameIdFromBatchId.c)
 *     NtDCompositionNotifySuperWetInkWork @ 0x140223540 (NtDCompositionNotifySuperWetInkWork.c)
 *     NtVisualCaptureBits @ 0x140223D10 (NtVisualCaptureBits.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ReferenceHandleAndLock(
        __int64 a1,
        struct DirectComposition::CApplicationChannel **a2)
{
  struct DirectComposition::CApplicationChannel *v2; // rdi
  int v4; // ebp
  int v5; // r15d
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v7; // rsi
  struct _ERESOURCE *v8; // rbx
  struct _RTL_GENERIC_TABLE *v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  struct _ERESOURCE *v12; // rdi
  _DWORD Buffer[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]

  v2 = 0LL;
  v4 = 0;
  v5 = a1;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  if ( !CurrentProcessWin32Process )
    return 3221225473LL;
  if ( !*CurrentProcessWin32Process )
    return 3221225473LL;
  v7 = CurrentProcessWin32Process[32];
  if ( !v7 )
    return 3221225473LL;
  v8 = *(struct _ERESOURCE **)(v7 + 8);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v8, 1u);
  v9 = *(struct _RTL_GENERIC_TABLE **)v7;
  Buffer[0] = v5;
  Buffer[1] = 0;
  v10 = 0LL;
  v15 = 0LL;
  v11 = RtlLookupElementGenericTable(v9, Buffer);
  if ( v11 && (v10 = v11[1]) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  else
    v4 = -1073741790;
  ExReleaseResourceLite(*(PERESOURCE *)(v7 + 8));
  KeLeaveCriticalRegion();
  if ( v10 )
  {
    v12 = *(struct _ERESOURCE **)(v10 + 32);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v12, 1u);
    v2 = (struct DirectComposition::CApplicationChannel *)v10;
  }
  if ( v4 < 0 )
    return (unsigned int)v4;
  if ( (*(unsigned int (__fastcall **)(struct DirectComposition::CApplicationChannel *))(*(_QWORD *)v2 + 8LL))(v2) == 1 )
  {
    *a2 = v2;
    return (unsigned int)v4;
  }
  (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v2)(v2);
  return 3221225485LL;
}
