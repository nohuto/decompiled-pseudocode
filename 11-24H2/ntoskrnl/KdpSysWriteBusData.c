/*
 * XREFs of KdpSysWriteBusData @ 0x140B7A5A8
 * Callers:
 *     KdSystemDebugControl @ 0x1407383E0 (KdSystemDebugControl.c)
 *     KdpSetBusData @ 0x140B7A398 (KdpSetBusData.c)
 * Callees:
 *     HalSetBusDataByOffset @ 0x140489430 (HalSetBusDataByOffset.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KdpSysWriteBusData(
        BUS_DATA_TYPE a1,
        ULONG a2,
        ULONG a3,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length,
        _DWORD *a7)
{
  int v7; // eax

  if ( a1 == PCIConfiguration )
    v7 = guard_dispatch_icall_no_overrides(a2, a3);
  else
    v7 = HalSetBusDataByOffset(a1, a2, a3, Buffer, Offset, Length);
  *a7 = v7;
  return Length != v7 ? 0xC0000001 : 0;
}
