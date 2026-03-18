/*
 * XREFs of UsbhPindicatorWorker @ 0x14003E7F0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Usbh_PIND_Timeout_Action @ 0x14003ED80 (Usbh_PIND_Timeout_Action.c)
 */

__int64 __fastcall UsbhPindicatorWorker(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax

  FdoExt(a1);
  result = UsbhGetPortData(a1, a2, v6, v7);
  if ( result )
    return Usbh_PIND_Timeout_Action(a1, result, a3);
  return result;
}
