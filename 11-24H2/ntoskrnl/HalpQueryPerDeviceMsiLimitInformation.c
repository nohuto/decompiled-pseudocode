/*
 * XREFs of HalpQueryPerDeviceMsiLimitInformation @ 0x1406FDE8C
 * Callers:
 *     HaliQuerySystemInformation @ 0x140B6B760 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpQueryPerDeviceMsiLimitInformation(_WORD *a1)
{
  *a1 = HalpInterruptPerDeviceMsiLimit;
  return 0LL;
}
