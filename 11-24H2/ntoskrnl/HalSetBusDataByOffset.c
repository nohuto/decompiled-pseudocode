/*
 * XREFs of HalSetBusDataByOffset @ 0x140489430
 * Callers:
 *     HalSetBusData @ 0x14053AF90 (HalSetBusData.c)
 *     HalpPiix4Detect @ 0x140B6C308 (HalpPiix4Detect.c)
 *     KdpSysWriteBusData @ 0x140B7A5A8 (KdpSysWriteBusData.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140419CB4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140419D98 (HalpAcquireCmosSpinLock.c)
 *     HalpSetPCIData @ 0x140489544 (HalpSetPCIData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

ULONG __stdcall HalSetBusDataByOffset(
        BUS_DATA_TYPE BusDataType,
        ULONG BusNumber,
        ULONG SlotNumber,
        PVOID Buffer,
        ULONG Offset,
        ULONG Length)
{
  char v8; // si
  ULONG v9; // ebx
  ULONG v11; // esi
  ULONG v12; // ebx
  __int64 v13; // rdx
  size_t Size; // [rsp+28h] [rbp-50h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v8 = BusNumber;
  if ( BusDataType )
  {
    if ( BusDataType == PCIConfiguration )
    {
      v9 = BusNumber >> 8;
      if ( !qword_140E00CE0 || (unsigned int)guard_dispatch_icall_no_overrides(0LL, retaddr) == -1073741810 )
      {
        LODWORD(Size) = Length;
        LOBYTE(BusNumber) = v8;
        return HalpSetPCIData((unsigned __int16)v9, BusNumber, SlotNumber, (int)Buffer, Offset, Size);
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v11 = HalpCmosBusParameterTable;
    v12 = SlotNumber;
    if ( SlotNumber + Length - 1 <= HalpCmosBusParameterTable )
      v11 = SlotNumber + Length - 1;
    HalpAcquireCmosSpinLock();
    if ( SlotNumber <= v11 )
    {
      do
      {
        LOBYTE(v13) = *(_BYTE *)Buffer;
        guard_dispatch_icall_no_overrides(v12++, v13);
        Buffer = (char *)Buffer + 1;
      }
      while ( v12 <= v11 );
    }
    HalpReleaseCmosSpinLock();
    return v12 - SlotNumber;
  }
}
