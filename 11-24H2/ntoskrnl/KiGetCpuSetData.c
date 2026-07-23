/*
 * XREFs of KiGetCpuSetData @ 0x1404AE710
 * Callers:
 *     KeQueryCpuSetInformation @ 0x140A70FAC (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetCpuSetData(int a1, int a2)
{
  return KiCpuSetData + 16LL * (unsigned int)(a2 + (a1 << 6));
}
