/*
 * XREFs of RtlCopyToUser @ 0x14018D054
 * Callers:
 *     NtQueryCompositionSurfaceStatistics @ 0x140034E50 (NtQueryCompositionSurfaceStatistics.c)
 *     NtQueryCompositionSurfaceFrameRate @ 0x140037EC0 (NtQueryCompositionSurfaceFrameRate.c)
 *     NtFlipObjectQueryEndpointConnected @ 0x140042370 (NtFlipObjectQueryEndpointConnected.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x140043640 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x140043E20 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtBindCompositionSurface @ 0x1400442C0 (NtBindCompositionSurface.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1400450D0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtOpenCompositionSurfaceRealizationInfo @ 0x1400453C0 (NtOpenCompositionSurfaceRealizationInfo.c)
 *     NtValidateCompositionSurfaceHandle @ 0x140046C90 (NtValidateCompositionSurfaceHandle.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x140046D80 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1400472D0 (NtQueryCompositionSurfaceBinding.c)
 *     NtCreateCompositionSurfaceHandle @ 0x140047630 (NtCreateCompositionSurfaceHandle.c)
 *     NtFlipObjectQueryNextMessageToProducer @ 0x140047940 (NtFlipObjectQueryNextMessageToProducer.c)
 *     NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x140049D20 (NtTokenManagerCreateFlipObjectReturnTokenHandle.c)
 *     NtFlipObjectConsumerAcquirePresent @ 0x14004CA70 (NtFlipObjectConsumerAcquirePresent.c)
 *     NtFlipObjectConsumerBeginProcessPresent @ 0x14004E050 (NtFlipObjectConsumerBeginProcessPresent.c)
 *     NtTokenManagerCreateCompositionTokenHandle @ 0x140052780 (NtTokenManagerCreateCompositionTokenHandle.c)
 *     NtFlipObjectOpen @ 0x140052AE0 (NtFlipObjectOpen.c)
 *     NtTokenManagerOpenSectionAndEvents @ 0x14005A660 (NtTokenManagerOpenSectionAndEvents.c)
 *     NtFlipObjectConsumerQueryBufferInfo @ 0x14005C260 (NtFlipObjectConsumerQueryBufferInfo.c)
 *     NtTokenManagerCreateFlipObjectTokenHandle @ 0x140099730 (NtTokenManagerCreateFlipObjectTokenHandle.c)
 *     NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x140099AE0 (NtTokenManagerGetAnalogExclusiveSurfaceUpdates.c)
 *     NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x140099CE0 (NtTokenManagerGetAnalogExclusiveTokenEvent.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x14009C660 (NtOpenCompositionSurfaceSectionInfo.c)
 *     CFlipPropertySetBase::WriteSerializedProperties__lambda_2ad1fa16415b29e006cebd519cba1c33___ @ 0x14009DC3C (CFlipPropertySetBase--WriteSerializedProperties__lambda_2ad1fa16415b29e006cebd519cba1c33___.c)
 *     NtFlipObjectCreate @ 0x14009DF20 (NtFlipObjectCreate.c)
 *     NtFlipObjectQueryLostEvent @ 0x14009E1B0 (NtFlipObjectQueryLostEvent.c)
 *     RtlCopyToUser$thunk$8481748130428616498 @ 0x1400A3020 (RtlCopyToUser$thunk$8481748130428616498.c)
 *     NtDxgkGetProperties @ 0x1402FC800 (NtDxgkGetProperties.c)
 * Callees:
 *     ProbeForRead_0 @ 0x140064FF6 (ProbeForRead_0.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
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
