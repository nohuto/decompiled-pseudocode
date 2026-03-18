/*
 * XREFs of ?GetCaptureSettings@CManipulation@@UEAA?AW4SystemManipulationMode@@XZ @ 0x18008CC30
 * Callers:
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@PEAVIDCompositionInteractionStats@@PEAW4PointerResult@@@Z @ 0x18008C7FC (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulation::GetCaptureSettings(__int64 a1)
{
  return *(unsigned int *)(a1 + 384);
}
