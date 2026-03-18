/*
 * XREFs of HalGetBusDataByOffset @ 0x140470CB0
 * Callers:
 *     HalGetBusData @ 0x14053AE30 (HalGetBusData.c)
 *     HalpWhackICHUsbSmi @ 0x14055F9D0 (HalpWhackICHUsbSmi.c)
 *     HalpPiix4Detect @ 0x140B5AF1C (HalpPiix4Detect.c)
 *     KdpSysReadBusData @ 0x140B68540 (KdpSysReadBusData.c)
 * Callees:
 *     HalpGetSetCmosData @ 0x14042D6C4 (HalpGetSetCmosData.c)
 *     HalpGetPCIData @ 0x140470DD8 (HalpGetPCIData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  __int64 v12; // rcx
  int v13; // eax
  ULONG v15; // [rsp+30h] [rbp-48h]
  ULONG v16; // [rsp+38h] [rbp-40h]
  PVOID v17; // [rsp+40h] [rbp-38h]
  ULONG *v18; // [rsp+48h] [rbp-30h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  ULONG v20; // [rsp+80h] [rbp+8h] BYREF

  v8 = BusNumber;
  if ( BusDataType == Cmos )
    return HalpGetSetCmosData(*(__int64 *)&BusDataType, SlotNumber, Buffer, Length, 0);
  if ( BusNumber > HalpMaxPciBus || BusNumber < HalpMinPciBus || BusDataType != PCIConfiguration )
    return 0;
  v20 = 0;
  v9 = Length;
  v10 = Offset;
  v11 = BusNumber >> 8;
  if ( qword_140E00CE0
    && (v18 = &v20,
        v17 = Buffer,
        v12 = SlotNumber & 0x1F,
        v16 = Length,
        v15 = Offset,
        LOBYTE(v12) = 1,
        v13 = guard_dispatch_icall_no_overrides(v12, retaddr),
        v13 != -1073741810) )
  {
    if ( v13 < 0 )
      memset_0(Buffer, 255, v9);
    return v20;
  }
  else
  {
    LOBYTE(BusNumber) = v8;
    return HalpGetPCIData((unsigned __int16)v11, *(_QWORD *)&BusNumber, SlotNumber, Buffer, v10, v9, v15, v16, v17, v18);
  }
}
