/*
 * XREFs of RtlCopyToUser @ 0x14018AE14
 * Callers:
 *     NtQueryCompositionSurfaceStatistics @ 0x140034F20 (NtQueryCompositionSurfaceStatistics.c)
 *     NtQueryCompositionSurfaceFrameRate @ 0x140038230 (NtQueryCompositionSurfaceFrameRate.c)
 *     NtFlipObjectQueryEndpointConnected @ 0x1400428B0 (NtFlipObjectQueryEndpointConnected.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x140043960 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x140044140 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtBindCompositionSurface @ 0x1400445E0 (NtBindCompositionSurface.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1400453F0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtOpenCompositionSurfaceRealizationInfo @ 0x140045760 (NtOpenCompositionSurfaceRealizationInfo.c)
 *     NtValidateCompositionSurfaceHandle @ 0x140047270 (NtValidateCompositionSurfaceHandle.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x140047360 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtQueryCompositionSurfaceBinding @ 0x140047970 (NtQueryCompositionSurfaceBinding.c)
 *     NtCreateCompositionSurfaceHandle @ 0x140047DF0 (NtCreateCompositionSurfaceHandle.c)
 *     NtFlipObjectQueryNextMessageToProducer @ 0x1400481C0 (NtFlipObjectQueryNextMessageToProducer.c)
 *     NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x14004A5A0 (NtTokenManagerCreateFlipObjectReturnTokenHandle.c)
 *     NtFlipObjectConsumerAcquirePresent @ 0x14004D020 (NtFlipObjectConsumerAcquirePresent.c)
 *     NtFlipObjectConsumerBeginProcessPresent @ 0x14004E750 (NtFlipObjectConsumerBeginProcessPresent.c)
 *     NtTokenManagerCreateCompositionTokenHandle @ 0x140052AD0 (NtTokenManagerCreateCompositionTokenHandle.c)
 *     NtFlipObjectOpen @ 0x140052E30 (NtFlipObjectOpen.c)
 *     NtTokenManagerOpenSectionAndEvents @ 0x14005AC60 (NtTokenManagerOpenSectionAndEvents.c)
 *     NtFlipObjectConsumerQueryBufferInfo @ 0x14005C800 (NtFlipObjectConsumerQueryBufferInfo.c)
 *     NtTokenManagerCreateFlipObjectTokenHandle @ 0x1400974B0 (NtTokenManagerCreateFlipObjectTokenHandle.c)
 *     NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x140097860 (NtTokenManagerGetAnalogExclusiveSurfaceUpdates.c)
 *     NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x140097A60 (NtTokenManagerGetAnalogExclusiveTokenEvent.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x14009A510 (NtOpenCompositionSurfaceSectionInfo.c)
 *     CFlipPropertySetBase::WriteSerializedProperties__lambda_2ad1fa16415b29e006cebd519cba1c33___ @ 0x14009B8DC (CFlipPropertySetBase--WriteSerializedProperties__lambda_2ad1fa16415b29e006cebd519cba1c33___.c)
 *     NtFlipObjectCreate @ 0x14009BBC0 (NtFlipObjectCreate.c)
 *     NtFlipObjectQueryLostEvent @ 0x14009BE50 (NtFlipObjectQueryLostEvent.c)
 *     RtlCopyToUser$thunk$8481748130428616498 @ 0x1400A1020 (RtlCopyToUser$thunk$8481748130428616498.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1400653D6 (ProbeForRead_0.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
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
