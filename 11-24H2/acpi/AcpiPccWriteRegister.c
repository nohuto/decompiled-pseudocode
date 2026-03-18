/*
 * XREFs of AcpiPccWriteRegister @ 0x140053E14
 * Callers:
 *     AcpiPccUpdateDoorbellRegister @ 0x140053D60 (AcpiPccUpdateDoorbellRegister.c)
 *     AcpiPccUpdateCommandCompleteStatus @ 0x140064380 (AcpiPccUpdateCommandCompleteStatus.c)
 * Callees:
 *     ReadIoMemRaw @ 0x14003FE60 (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x140042BD4 (WriteIoMemRaw.c)
 */

char __fastcall AcpiPccWriteRegister(unsigned __int8 *a1, __int64 a2)
{
  char result; // al
  __int64 IoMemRaw; // rax
  unsigned __int8 v6; // cl
  __int64 v7; // r9

  result = RtlIsZeroMemory(a1, 12LL);
  if ( !result )
  {
    result = *a1;
    if ( *a1 <= 1u )
    {
      if ( a1[2] )
      {
        IoMemRaw = ReadIoMemRaw(*(unsigned __int8 **)(a1 + 4), *a1, a1[3]);
        v6 = a1[2];
        v7 = (__int64)((1 << a1[1]) - 1) << v6;
        a2 = IoMemRaw & ~v7 | v7 & (a2 << v6);
      }
      return WriteIoMemRaw(*(_BYTE **)(a1 + 4), *a1, a1[3], a2);
    }
  }
  return result;
}
