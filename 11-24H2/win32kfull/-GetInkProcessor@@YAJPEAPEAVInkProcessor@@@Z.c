/*
 * XREFs of ?GetInkProcessor@@YAJPEAPEAVInkProcessor@@@Z @ 0x1401B0EB8
 * Callers:
 *     EditionRimDeviceReadNotification @ 0x140270070 (EditionRimDeviceReadNotification.c)
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402B31E8 (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402B3220 (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402B3258 (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetInkProcessor(struct InkProcessor **a1, __int64 a2)
{
  struct InkProcessor *v3; // rdx

  v3 = *(struct InkProcessor **)(W32GetUserSessionState(a1, a2) + 3280);
  *a1 = v3;
  return v3 == 0LL ? 0xC0000001 : 0;
}
