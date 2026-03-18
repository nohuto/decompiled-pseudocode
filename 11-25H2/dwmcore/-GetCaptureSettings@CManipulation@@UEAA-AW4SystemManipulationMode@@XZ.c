/*
 * XREFs of ?GetCaptureSettings@CManipulation@@UEAA?AW4SystemManipulationMode@@XZ @ 0x1801F1ED0
 * Callers:
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@PEAVIDCompositionInteractionStats@@PEAW4PointerResult@@@Z @ 0x1801F1A9C (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulation::GetCaptureSettings(__int64 a1)
{
  return *(unsigned int *)(a1 + 384);
}
