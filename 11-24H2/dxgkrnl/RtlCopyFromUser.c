/*
 * XREFs of RtlCopyFromUser @ 0x140064F88
 * Callers:
 *     ??$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x140019A5C (--$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlip.c)
 *     NtNotifyPresentToCompositionSurface @ 0x140028FC0 (NtNotifyPresentToCompositionSurface.c)
 *     ??$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipPropertySet@@@Z @ 0x140040790 (--$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipProp.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x140043640 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtBindCompositionSurface @ 0x1400442C0 (NtBindCompositionSurface.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1400450D0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtOpenCompositionSurfaceRealizationInfo @ 0x1400453C0 (NtOpenCompositionSurfaceRealizationInfo.c)
 *     NtFlipObjectSetContent @ 0x140045AC0 (NtFlipObjectSetContent.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x140046D80 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1400472D0 (NtQueryCompositionSurfaceBinding.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1400480B0 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x140049D20 (NtTokenManagerCreateFlipObjectReturnTokenHandle.c)
 *     NtTokenManagerThread @ 0x14004E480 (NtTokenManagerThread.c)
 *     NtTokenManagerCreateCompositionTokenHandle @ 0x140052780 (NtTokenManagerCreateCompositionTokenHandle.c)
 *     NtFlipObjectAddPoolBuffer @ 0x140053010 (NtFlipObjectAddPoolBuffer.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1400537D0 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtFlipObjectQueryBufferAvailableEvent @ 0x1400547F0 (NtFlipObjectQueryBufferAvailableEvent.c)
 *     NtFlipObjectAddContent @ 0x140055F80 (NtFlipObjectAddContent.c)
 *     NtFlipObjectRemoveContent @ 0x14005A800 (NtFlipObjectRemoveContent.c)
 *     NtFlipObjectConsumerQueryBufferInfo @ 0x14005C260 (NtFlipObjectConsumerQueryBufferInfo.c)
 *     NtTokenManagerCreateFlipObjectTokenHandle @ 0x140099730 (NtTokenManagerCreateFlipObjectTokenHandle.c)
 *     NtConfirmCompositionSurfaceIndependentFlipEntry @ 0x14009C4E0 (NtConfirmCompositionSurfaceIndependentFlipEntry.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x14009C660 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceStatistics @ 0x14009C980 (NtSetCompositionSurfaceStatistics.c)
 *     NtFlipObjectConsumerAdjustUsageReference @ 0x14009DE30 (NtFlipObjectConsumerAdjustUsageReference.c)
 *     NtFlipObjectPresentCancel @ 0x14009E0C0 (NtFlipObjectPresentCancel.c)
 *     NtFlipObjectRemovePoolBuffer @ 0x14009E2E0 (NtFlipObjectRemovePoolBuffer.c)
 *     RtlCopyFromUser$thunk$11487580757436585079 @ 0x1400A3010 (RtlCopyFromUser$thunk$11487580757436585079.c)
 * Callees:
 *     ProbeForRead_0 @ 0x140064FF6 (ProbeForRead_0.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 */

__int64 (*__fastcall RtlCopyFromUser(void *a1, void *Src, size_t Size))(void)
{
  __int64 (*result)(void); // rax

  result = _uma_functions;
  if ( _uma_functions )
    return (__int64 (*)(void))_uma_functions();
  if ( Size )
  {
    ProbeForRead_0(Src, Size, 1u);
    return (__int64 (*)(void))RtlCopyVolatileMemory(a1, Src, Size);
  }
  return result;
}
