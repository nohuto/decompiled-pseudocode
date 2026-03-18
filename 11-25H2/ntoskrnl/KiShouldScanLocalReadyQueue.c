/*
 * XREFs of KiShouldScanLocalReadyQueue @ 0x14046B83C
 * Callers:
 *     KiUpdateRunTime @ 0x140273230 (KiUpdateRunTime.c)
 *     KiNormalPriorityReadyScan @ 0x14031A434 (KiNormalPriorityReadyScan.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiShouldScanLocalReadyQueue(__int64 a1)
{
  return !KiForceParkingConfiguration || (*(_BYTE *)(a1 + 35) & 0x20) == 0;
}
