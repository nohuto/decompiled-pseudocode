/*
 * XREFs of EtwTracePointerDeviceOutOfRangeMessageStop @ 0x140155710
 * Callers:
 *     ApiSetPostPointerDeviceOutOfRangeMessage @ 0x1401255DC (ApiSetPostPointerDeviceOutOfRangeMessage.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x140092790 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTracePointerDeviceOutOfRangeMessageStop(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &PointerDeviceOutOfRangeMessageStop, &W32kControlGuid);
  return result;
}
