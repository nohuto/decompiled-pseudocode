/*
 * XREFs of USBD_AssignUrbToIoStackLocation @ 0x14000BDE4
 * Callers:
 *     USBHwSubmitUrbToUsbdSynch @ 0x14003C0BC (USBHwSubmitUrbToUsbdSynch.c)
 * Callees:
 *     <none>
 */

void __stdcall USBD_AssignUrbToIoStackLocation(USBD_HANDLE USBDHandle, PIO_STACK_LOCATION IoStackLocation, PURB Urb)
{
  if ( (unsigned int)(*((_DWORD *)USBDHandle + 54) - 1538) <= 0xFFFFF9FC )
    IoStackLocation->FileObject = (PFILE_OBJECT)Urb;
  IoStackLocation->Parameters.WMI.ProviderId = (ULONG_PTR)Urb;
}
