/*
 * XREFs of SyspartGetFirmwarePartition @ 0x1406F6790
 * Callers:
 *     BiGetSystemPartition @ 0x1406F66F0 (BiGetSystemPartition.c)
 * Callees:
 *     SiGetSystemDeviceName @ 0x140A44DA8 (SiGetSystemDeviceName.c)
 *     SiQuerySystemInformationString @ 0x140A7FFF8 (SiQuerySystemInformationString.c)
 */

__int64 __fastcall SyspartGetFirmwarePartition(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax

  result = SiQuerySystemInformationString(200LL, a1, a2, a3);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
    return SiGetSystemDeviceName(SiGetFirmwareSystemPartition, a1, a2, a3);
  return result;
}
