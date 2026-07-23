/*
 * XREFs of KiShouldScanLocalReadyQueue @ 0x140462854
 * Callers:
 *     KiNormalPriorityReadyScan @ 0x140282170 (KiNormalPriorityReadyScan.c)
 *     KiUpdateRunTime @ 0x1402AA8E0 (KiUpdateRunTime.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiShouldScanLocalReadyQueue(__int64 a1)
{
  return !KiForceParkingConfiguration || (*(_BYTE *)(a1 + 35) & 0x20) == 0;
}
