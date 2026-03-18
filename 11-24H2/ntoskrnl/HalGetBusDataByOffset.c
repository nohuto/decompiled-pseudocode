/*
 * XREFs of HalGetBusDataByOffset @ 0x140488FB0
 * Callers:
 *     HalGetBusData @ 0x14053D660 (HalGetBusData.c)
 *     HalpWhackICHUsbSmi @ 0x1405622D0 (HalpWhackICHUsbSmi.c)
 *     HalpPiix4Detect @ 0x140B6AA1C (HalpPiix4Detect.c)
 *     KdpSysReadBusData @ 0x140B78540 (KdpSysReadBusData.c)
 * Callees:
 *     HalpGetPCIData @ 0x14026640C (HalpGetPCIData.c)
 *     HalpGetSetCmosData @ 0x140425794 (HalpGetSetCmosData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

// local variable allocation has failed, the output may be wrong!
ULONG __stdcall HalGetBusDataByOffset(
        BUS_DATA_TYPE BusDataType,
        ULONG BusNumber,
        ULONG SlotNumber,
        PVOID Buffer,
        ULONG Offset,
        ULONG Length)
{
  char v8; // bl
  size_t v9; // r14
  ULONG v10; // r15d
  ULONG v11; // esi
  ULONG *v12; // r9
  __int64 v13; // rcx
  int v14; // eax
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  ULONG v17; // [rsp+80h] [rbp+8h] BYREF

  v8 = BusNumber;
  if ( BusDataType == Cmos )
    return HalpGetSetCmosData(*(__int64 *)&BusDataType, SlotNumber, Buffer, Length, 0);
  if ( BusDataType != PCIConfiguration || BusNumber > HalpMaxPciBus || BusNumber < HalpMinPciBus )
    return 0;
  v17 = 0;
  v9 = Length;
  v10 = Offset;
  v11 = BusNumber >> 8;
  if ( !qword_140E00CE0 )
    return HalpGetPCIData(v11, v8, SlotNumber, (char *)Buffer, v10, v9);
  v12 = &v17;
  v13 = SlotNumber & 0x1F;
  LOBYTE(v12) = BusNumber;
  LOBYTE(v13) = 1;
  v14 = guard_dispatch_icall_no_overrides(v13, retaddr, (unsigned __int16)v11, v12);
  if ( v14 == -1073741810 )
    return HalpGetPCIData(v11, v8, SlotNumber, (char *)Buffer, v10, v9);
  if ( v14 < 0 )
    memset_0(Buffer, 255, v9);
  return v17;
}
