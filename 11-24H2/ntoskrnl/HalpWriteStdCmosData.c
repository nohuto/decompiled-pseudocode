/*
 * XREFs of HalpWriteStdCmosData @ 0x1404190C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpWriteCmosDataByPort @ 0x1404190E0 (HalpWriteCmosDataByPort.c)
 */

__int64 __fastcall HalpWriteStdCmosData(int a1, int a2, int a3)
{
  return HalpWriteCmosDataByPort(a1, a2, a1, a2, a3);
}
