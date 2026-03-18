/*
 * XREFs of SyspartDirectGetSystemDisk @ 0x140A44D50
 * Callers:
 *     <none>
 * Callees:
 *     SiGetSystemDeviceName @ 0x140A44DA8 (SiGetSystemDeviceName.c)
 */

__int64 __fastcall SyspartDirectGetSystemDisk(__int64 a1, unsigned int a2, __int64 a3)
{
  return SiGetSystemDeviceName(SiGetSystemDisk, a1, a2, a3);
}
