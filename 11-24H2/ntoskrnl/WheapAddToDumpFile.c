/*
 * XREFs of WheapAddToDumpFile @ 0x14065A3DC
 * Callers:
 *     WheaReportHwError @ 0x140420030 (WheaReportHwError.c)
 *     WheaRecoveryBugCheck @ 0x14065A2F0 (WheaRecoveryBugCheck.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 */

char __fastcall WheapAddToDumpFile(__int64 a1, int a2)
{
  char result; // al

  if ( a1 )
  {
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) != 0 )
      return IoAddTriageDumpDataBlock(a1 & 0xFFFFF000, (PVOID)(((a1 & 0xFFF) + 4095 + a2) & 0xFFFFF000));
  }
  return result;
}
