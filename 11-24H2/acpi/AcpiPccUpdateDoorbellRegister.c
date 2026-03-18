/*
 * XREFs of AcpiPccUpdateDoorbellRegister @ 0x140053D60
 * Callers:
 *     AcpiPccRingDoorbell @ 0x140051340 (AcpiPccRingDoorbell.c)
 *     AcpiPccReleaseSubspace @ 0x140064010 (AcpiPccReleaseSubspace.c)
 * Callees:
 *     AcpiPccReadRegister @ 0x140053D9C (AcpiPccReadRegister.c)
 *     AcpiPccWriteRegister @ 0x140053E14 (AcpiPccWriteRegister.c)
 */

__int64 __fastcall AcpiPccUpdateDoorbellRegister(__int64 a1)
{
  __int64 Register; // rax

  Register = AcpiPccReadRegister(a1 + 104);
  return AcpiPccWriteRegister(a1 + 104, *(_QWORD *)(a1 + 80) | Register & *(_QWORD *)(a1 + 88));
}
