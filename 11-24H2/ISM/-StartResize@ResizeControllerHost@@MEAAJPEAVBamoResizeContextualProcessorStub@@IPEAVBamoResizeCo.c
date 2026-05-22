/*
 * XREFs of ?StartResize@ResizeControllerHost@@MEAAJPEAVBamoResizeContextualProcessorStub@@IPEAVBamoResizeControllerClientProxy@@@Z @ 0x18014F9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1801526F4 (-StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 */

__int64 __fastcall ResizeControllerHost::StartResize(
        ResizeProcessor **this,
        struct BamoResizeContextualProcessorStub *a2,
        unsigned int a3,
        struct BamoResizeControllerClientProxy *a4)
{
  ResizeProcessor::StartResize(this[7], a3, a4);
  return 0LL;
}
