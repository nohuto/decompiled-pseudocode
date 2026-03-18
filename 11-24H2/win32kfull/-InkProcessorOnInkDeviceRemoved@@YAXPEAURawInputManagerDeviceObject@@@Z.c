/*
 * XREFs of ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402B3258
 * Callers:
 *     EditionDevicePnpNotification @ 0x14012DDD0 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1401EE990 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     ?GetInkProcessor@@YAJPEAPEAVInkProcessor@@@Z @ 0x1401B0EB8 (-GetInkProcessor@@YAJPEAPEAVInkProcessor@@@Z.c)
 *     ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402EA8E4 (-OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall InkProcessorOnInkDeviceRemoved(struct RawInputManagerDeviceObject *a1, __int64 a2)
{
  struct InkProcessor *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( (int)GetInkProcessor(&v3, a2) >= 0 )
    InkProcessor::OnDeviceRemoved(v3, a1);
}
