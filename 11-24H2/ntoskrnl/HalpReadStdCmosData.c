/*
 * XREFs of HalpReadStdCmosData @ 0x140425BF0
 * Callers:
 *     <none>
 * Callees:
 *     HalpReadCmosDataByPort @ 0x140425C10 (HalpReadCmosDataByPort.c)
 */

__int64 __fastcall HalpReadStdCmosData(int a1, int a2, int a3)
{
  return HalpReadCmosDataByPort(a1, a2, a1, a2, a3);
}
