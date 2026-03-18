/*
 * XREFs of ?GetInkProcessor@@YAJPEAPEAVInkProcessor@@@Z @ 0x1C01FD804
 * Callers:
 *     InkProcessorOnPointerMessagePosted @ 0x1C0155CA0 (InkProcessorOnPointerMessagePosted.c)
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01FD83C (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01FD908 (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C01FD9AC (-InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01FDA48 (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01FDAEC (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z @ 0x1C01FDB90 (-InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z.c)
 *     InkProcessorIsInkDevice @ 0x1C01FDC80 (InkProcessorIsInkDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetInkProcessor(struct InkProcessor **a1)
{
  struct InkProcessor *v2; // rdx

  v2 = *(struct InkProcessor **)(SGDGetUserSessionState(a1) + 3440);
  *a1 = v2;
  return v2 == 0LL ? 0xC0000001 : 0;
}
