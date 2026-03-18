/*
 * XREFs of RtlCopyFromUser @ 0x140065368
 * Callers:
 *     ??$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x14000A528 (--$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlip.c)
 *     NtNotifyPresentToCompositionSurface @ 0x140026A70 (NtNotifyPresentToCompositionSurface.c)
 *     ??$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipPropertySet@@@Z @ 0x140040CE0 (--$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipProp.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x140043960 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtBindCompositionSurface @ 0x1400445E0 (NtBindCompositionSurface.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1400453F0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtOpenCompositionSurfaceRealizationInfo @ 0x140045760 (NtOpenCompositionSurfaceRealizationInfo.c)
 *     NtFlipObjectSetContent @ 0x1400460D0 (NtFlipObjectSetContent.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x140047360 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtQueryCompositionSurfaceBinding @ 0x140047970 (NtQueryCompositionSurfaceBinding.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x140048880 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x14004A5A0 (NtTokenManagerCreateFlipObjectReturnTokenHandle.c)
 *     NtTokenManagerThread @ 0x14004EB80 (NtTokenManagerThread.c)
 *     NtTokenManagerCreateCompositionTokenHandle @ 0x140052AD0 (NtTokenManagerCreateCompositionTokenHandle.c)
 *     NtFlipObjectAddPoolBuffer @ 0x140053360 (NtFlipObjectAddPoolBuffer.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x140053B20 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtFlipObjectQueryBufferAvailableEvent @ 0x140054BA0 (NtFlipObjectQueryBufferAvailableEvent.c)
 *     NtFlipObjectAddContent @ 0x1400567D0 (NtFlipObjectAddContent.c)
 *     NtFlipObjectRemoveContent @ 0x14005AE00 (NtFlipObjectRemoveContent.c)
 *     NtFlipObjectConsumerQueryBufferInfo @ 0x14005C800 (NtFlipObjectConsumerQueryBufferInfo.c)
 *     NtTokenManagerCreateFlipObjectTokenHandle @ 0x1400974B0 (NtTokenManagerCreateFlipObjectTokenHandle.c)
 *     NtConfirmCompositionSurfaceIndependentFlipEntry @ 0x14009A390 (NtConfirmCompositionSurfaceIndependentFlipEntry.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x14009A510 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceStatistics @ 0x14009A830 (NtSetCompositionSurfaceStatistics.c)
 *     NtFlipObjectConsumerAdjustUsageReference @ 0x14009BAD0 (NtFlipObjectConsumerAdjustUsageReference.c)
 *     NtFlipObjectPresentCancel @ 0x14009BD60 (NtFlipObjectPresentCancel.c)
 *     NtFlipObjectRemovePoolBuffer @ 0x14009BF80 (NtFlipObjectRemovePoolBuffer.c)
 *     RtlCopyFromUser$thunk$11487580757436585079 @ 0x1400A1010 (RtlCopyFromUser$thunk$11487580757436585079.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1400653D6 (ProbeForRead_0.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
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
