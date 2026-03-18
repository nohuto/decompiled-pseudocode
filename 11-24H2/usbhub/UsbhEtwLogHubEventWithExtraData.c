/*
 * XREFs of UsbhEtwLogHubEventWithExtraData @ 0x14000CF10
 * Callers:
 *     UsbhCreateDevice @ 0x140017858 (UsbhCreateDevice.c)
 *     UsbhInitializeDevice @ 0x14002A2B4 (UsbhInitializeDevice.c)
 *     UsbhDmTimerDpc @ 0x14002FC20 (UsbhDmTimerDpc.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14000D0C0 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x140060F40 (__security_check_cookie.c)
 */

void __fastcall UsbhEtwLogHubEventWithExtraData(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  if ( dword_14006F6D0 )
  {
    FdoExt(a1);
    UsbhEtwWrite(a2, 0LL);
  }
}
