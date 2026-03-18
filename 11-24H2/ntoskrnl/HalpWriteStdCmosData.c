/*
 * XREFs of HalpWriteStdCmosData @ 0x140425210
 * Callers:
 *     <none>
 * Callees:
 *     HalpWriteCmosDataByPort @ 0x140425230 (HalpWriteCmosDataByPort.c)
 */

__int64 __fastcall HalpWriteStdCmosData(int a1, int a2, int a3)
{
  return HalpWriteCmosDataByPort(a1, a2, a1, a2, a3);
}
