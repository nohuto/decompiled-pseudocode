/*
 * XREFs of HalpcGetCmosDataByType @ 0x140499700
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmosRangeHandler @ 0x140499724 (HalpCmosRangeHandler.c)
 */

__int64 __fastcall HalpcGetCmosDataByType(int a1, int a2, int a3, int a4)
{
  return HalpCmosRangeHandler(0, a1, a2, a3, a4);
}
