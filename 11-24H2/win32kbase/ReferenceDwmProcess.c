/*
 * XREFs of ReferenceDwmProcess @ 0x14006F910
 * Callers:
 *     ?CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ @ 0x14006F730 (-CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ.c)
 *     OpenDwmHandle @ 0x14006F814 (OpenDwmHandle.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x1402235E0 (NtDCompositionSendDwmLpcMessage.c)
 *     ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x140232210 (-CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1402346E4 (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140234E98 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReferenceDwmProcess(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v2; // rbx

  UserSessionState = W32GetUserSessionState(a1);
  v2 = *(_QWORD *)(UserSessionState + 70808);
  if ( v2 )
    ObReferenceObjectByPointer(*(PVOID *)(UserSessionState + 70808), 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  return v2;
}
