/*
 * XREFs of AcpiPccUpdateCommandCompleteStatus @ 0x140064380
 * Callers:
 *     AcpiPccCommandComplete @ 0x140050C90 (AcpiPccCommandComplete.c)
 *     AcpiPccEjectInterface @ 0x140050E7C (AcpiPccEjectInterface.c)
 *     AcpiPccReleaseSubspace @ 0x140064010 (AcpiPccReleaseSubspace.c)
 * Callees:
 *     AcpiPccReadRegister @ 0x140053D9C (AcpiPccReadRegister.c)
 *     AcpiPccWriteRegister @ 0x140053E14 (AcpiPccWriteRegister.c)
 *     AcpiPccClearGenericStatusFields @ 0x140064120 (AcpiPccClearGenericStatusFields.c)
 */

void __fastcall AcpiPccUpdateCommandCompleteStatus(__int64 a1)
{
  char v2; // cl
  unsigned __int64 Register; // rax

  if ( a1 )
  {
    v2 = *(_BYTE *)a1;
    if ( (unsigned __int8)(v2 - 3) > 0xFBu )
    {
      AcpiPccClearGenericStatusFields(a1, 0xFFF8u);
    }
    else if ( (unsigned __int8)(v2 - 3) <= 1u )
    {
      Register = AcpiPccReadRegister((unsigned __int8 *)(a1 + 296));
      AcpiPccWriteRegister((unsigned __int8 *)(a1 + 296), *(_QWORD *)(a1 + 320) | Register & *(_QWORD *)(a1 + 312));
    }
  }
}
