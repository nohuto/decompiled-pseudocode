/*
 * XREFs of SyspartGetSystemPartition @ 0x140A7A9EC
 * Callers:
 *     BiMapEfiDeviceForSpaces @ 0x1404B1240 (BiMapEfiDeviceForSpaces.c)
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 * Callees:
 *     SiGetSystemDeviceName @ 0x140A3A6D8 (SiGetSystemDeviceName.c)
 *     SiQuerySystemInformationString @ 0x140A7AA58 (SiQuerySystemInformationString.c)
 */

__int64 __fastcall SyspartGetSystemPartition(void *a1, unsigned int a2, unsigned int *a3)
{
  __int64 result; // rax

  result = SiQuerySystemInformationString(SystemSystemPartitionInformation, a1);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
    return SiGetSystemDeviceName((__int64)SiGetSystemPartition, a1, a2, a3);
  return result;
}
