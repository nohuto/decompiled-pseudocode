/*
 * XREFs of ?RouteInput@PointerInputMediator@@CAXIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x18006AD4C
 * Callers:
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x180089FF8 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18008A99C (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

void __fastcall PointerInputMediator::RouteInput(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int *a4,
        struct tagTELEMETRY_POINTER_FRAME_TIMES *a5,
        int a6)
{
  NtUserSetManipulationInputTarget(a1, a2, a3, a4, a5, a6);
}
