/*
 * XREFs of AcpiPccReadRegister @ 0x140053D9C
 * Callers:
 *     AcpiPccUpdateDoorbellRegister @ 0x140053D60 (AcpiPccUpdateDoorbellRegister.c)
 *     AcpiPccIsCommandCompleteSet @ 0x140064150 (AcpiPccIsCommandCompleteSet.c)
 *     AcpiPccReadErrorStatus @ 0x140064260 (AcpiPccReadErrorStatus.c)
 *     AcpiPccUpdateCommandCompleteStatus @ 0x140064380 (AcpiPccUpdateCommandCompleteStatus.c)
 * Callees:
 *     ReadIoMemRaw @ 0x14003FE60 (ReadIoMemRaw.c)
 */

unsigned __int64 __fastcall AcpiPccReadRegister(unsigned __int8 *a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 IoMemRaw; // rax
  unsigned __int8 v4; // cl
  unsigned __int8 v5; // cl

  v1 = 0LL;
  if ( !(unsigned __int8)RtlIsZeroMemory(a1, 12LL) && *a1 <= 1u )
  {
    IoMemRaw = ReadIoMemRaw(*(unsigned __int8 **)(a1 + 4), *a1, a1[3]);
    v1 = IoMemRaw;
    if ( IoMemRaw )
    {
      v4 = a1[2];
      if ( v4 )
        v1 = IoMemRaw >> v4;
      v5 = a1[1];
      if ( v5 < 0x40u )
        v1 &= (1LL << v5) - 1;
    }
  }
  return v1;
}
