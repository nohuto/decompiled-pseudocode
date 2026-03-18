/*
 * XREFs of UsbhTrapBadIrp @ 0x1400399A0
 * Callers:
 *     UsbhGenDispatch @ 0x14002BE30 (UsbhGenDispatch.c)
 * Callees:
 *     USBHUB_TriggerCallBacks @ 0x14004E8F4 (USBHUB_TriggerCallBacks.c)
 */

void __fastcall __noreturn UsbhTrapBadIrp(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  if ( BugCheckParameter3 )
    USBHUB_TriggerCallBacks(BugCheckParameter3);
  KeBugCheckEx(0xFEu, 8uLL, 2uLL, BugCheckParameter3, BugCheckParameter4);
}
