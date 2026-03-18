/*
 * XREFs of UsbhCancelOutOfBandwidthTimer @ 0x140039B0C
 * Callers:
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1400369F0 (UsbhSelectConfigOrInterfaceComplete.c)
 * Callees:
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     Log @ 0x1400298B0 (Log.c)
 */

void __fastcall UsbhCancelOutOfBandwidthTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 PortData; // rax

  PortData = UsbhGetPortData(a1, a2, a3, a4);
  if ( PortData )
    Log(a1, 8, 1869567096, PortData, _InterlockedExchange64((volatile __int64 *)(PortData + 688), 0LL));
}
