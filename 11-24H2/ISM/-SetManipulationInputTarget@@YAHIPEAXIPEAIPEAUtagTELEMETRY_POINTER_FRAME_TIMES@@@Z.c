/*
 * XREFs of ?SetManipulationInputTarget@@YAHIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x18006CEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x18008A7BC (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 */

__int64 __fastcall SetManipulationInputTarget(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int *a4,
        struct tagTELEMETRY_POINTER_FRAME_TIMES *a5)
{
  char v6; // [rsp+28h] [rbp-20h]

  v6 = 0;
  PointerInputMediator::RoutePointers(a1, a2, a3, a4, a5, v6, 1);
  return 1LL;
}
