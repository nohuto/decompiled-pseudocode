/*
 * XREFs of KiShouldScanLocalReadyQueue @ 0x140469A40
 * Callers:
 *     KiNormalPriorityReadyScan @ 0x140251B60 (KiNormalPriorityReadyScan.c)
 *     KiUpdateRunTime @ 0x14029BDF0 (KiUpdateRunTime.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiShouldScanLocalReadyQueue(__int64 a1)
{
  return !KiForceParkingConfiguration || (*(_BYTE *)(a1 + 35) & 0x20) == 0;
}
