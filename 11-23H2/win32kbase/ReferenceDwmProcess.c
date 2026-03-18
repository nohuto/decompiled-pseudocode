/*
 * XREFs of ReferenceDwmProcess @ 0x1C0086E90
 * Callers:
 *     ?CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ @ 0x1C0086C80 (-CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ.c)
 *     OpenDwmHandle @ 0x1C0086D6C (OpenDwmHandle.c)
 *     UserReferenceDwmProcess @ 0x1C0086E70 (UserReferenceDwmProcess.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x1C00D5730 (NtDCompositionSendDwmLpcMessage.c)
 *     ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x1C0223270 (-CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022683C (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02270D8 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 ReferenceDwmProcess()
{
  __int64 v0; // rbx

  v0 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    ObReferenceObjectByPointer(
      *(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
      0x1FFFFFu,
      (POBJECT_TYPE)PsProcessType,
      0);
  return v0;
}
