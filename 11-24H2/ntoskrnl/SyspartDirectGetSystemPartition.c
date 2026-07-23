/*
 * XREFs of SyspartDirectGetSystemPartition @ 0x140A3A6B0
 * Callers:
 *     <none>
 * Callees:
 *     SiGetSystemDeviceName @ 0x140A3A6D8 (SiGetSystemDeviceName.c)
 */

__int64 __fastcall SyspartDirectGetSystemPartition(__int64 a1, unsigned int a2, __int64 a3)
{
  return SiGetSystemDeviceName(SiGetSystemPartition, a1, a2, a3);
}
