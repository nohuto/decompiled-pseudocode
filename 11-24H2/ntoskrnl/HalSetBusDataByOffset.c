/*
 * XREFs of HalSetBusDataByOffset @ 0x14048F220
 * Callers:
 *     HalSetBusData @ 0x14053D690 (HalSetBusData.c)
 *     HalpPiix4Detect @ 0x140B6AA1C (HalpPiix4Detect.c)
 *     KdpSysWriteBusData @ 0x140B785A8 (KdpSysWriteBusData.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140425E04 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140425EE8 (HalpAcquireCmosSpinLock.c)
 *     HalpSetPCIData @ 0x14048F334 (HalpSetPCIData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
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
  ULONG v9; // ebp
  ULONG v10; // r15d
  ULONG v11; // ebx
  ULONG *v13; // r9
  ULONG v14; // esi
  ULONG v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  size_t Size; // [rsp+28h] [rbp-50h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  ULONG v21; // [rsp+80h] [rbp+8h] BYREF

  v8 = BusNumber;
  if ( BusDataType )
  {
    if ( BusDataType == PCIConfiguration )
    {
      v21 = 0;
      v9 = Length;
      v10 = Offset;
      v11 = BusNumber >> 8;
      if ( !qword_140E00CE0
        || (v13 = &v21,
            LOBYTE(v13) = BusNumber,
            (unsigned int)guard_dispatch_icall_no_overrides(0LL, retaddr, (unsigned __int16)v11, v13) == -1073741810) )
      {
        LODWORD(Size) = v9;
        LOBYTE(BusNumber) = v8;
        return HalpSetPCIData((unsigned __int16)v11, BusNumber, SlotNumber, (int)Buffer, v10, Size);
      }
      else
      {
        return v21;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v14 = HalpCmosBusParameterTable;
    v15 = SlotNumber;
    if ( SlotNumber + Length - 1 <= HalpCmosBusParameterTable )
      v14 = SlotNumber + Length - 1;
    HalpAcquireCmosSpinLock();
    if ( SlotNumber <= v14 )
    {
      do
      {
        LOBYTE(v16) = *(_BYTE *)Buffer;
        guard_dispatch_icall_no_overrides(v15++, v16, v17, v18);
        Buffer = (char *)Buffer + 1;
      }
      while ( v15 <= v14 );
    }
    HalpReleaseCmosSpinLock();
    return v15 - SlotNumber;
  }
}
