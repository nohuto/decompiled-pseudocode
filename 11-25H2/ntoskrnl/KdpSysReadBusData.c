/*
 * XREFs of KdpSysReadBusData @ 0x140B68540
 * Callers:
 *     KdSystemDebugControl @ 0x14072E220 (KdSystemDebugControl.c)
 *     KdpGetBusData @ 0x140B67230 (KdpGetBusData.c)
 * Callees:
 *     HalGetBusDataByOffset @ 0x140470CB0 (HalGetBusDataByOffset.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KdpSysReadBusData(
        BUS_DATA_TYPE a1,
        ULONG a2,
        ULONG a3,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length,
        _DWORD *a7)
{
  int BusDataByOffset; // eax

  if ( a1 == PCIConfiguration )
    BusDataByOffset = guard_dispatch_icall_no_overrides(a2);
  else
    BusDataByOffset = HalGetBusDataByOffset(a1, a2, a3, Buffer, Offset, Length);
  *a7 = BusDataByOffset;
  return Length != BusDataByOffset ? 0xC0000001 : 0;
}
