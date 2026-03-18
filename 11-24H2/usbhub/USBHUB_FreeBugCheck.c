/*
 * XREFs of USBHUB_FreeBugCheck @ 0x14004E83C
 * Callers:
 *     UsbhDriverUnload @ 0x14004F680 (UsbhDriverUnload.c)
 * Callees:
 *     <none>
 */

void __fastcall USBHUB_FreeBugCheck(struct _KBUGCHECK_REASON_CALLBACK_RECORD *P)
{
  if ( P )
  {
    KeDeregisterBugCheckReasonCallback(P);
    ExFreePoolWithTag(P, 0);
  }
}
