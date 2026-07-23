/*
 * XREFs of SyspartGetFirmwarePartition @ 0x1406F4790
 * Callers:
 *     BiGetSystemPartition @ 0x1406F46F0 (BiGetSystemPartition.c)
 * Callees:
 *     SiGetSystemDeviceName @ 0x140A3A6D8 (SiGetSystemDeviceName.c)
 *     SiQuerySystemInformationString @ 0x140A7AA58 (SiQuerySystemInformationString.c)
 */

__int64 __fastcall SyspartGetFirmwarePartition(void *a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax

  result = SiQuerySystemInformationString(SystemFirmwarePartitionInformation, a1);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
    return SiGetSystemDeviceName(SiGetFirmwareSystemPartition, a1, a2, a3);
  return result;
}
