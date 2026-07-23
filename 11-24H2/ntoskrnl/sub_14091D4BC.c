/*
 * XREFs of sub_14091D4BC @ 0x14091D4BC
 * Callers:
 *     WbCreateHeapExecutedBlock @ 0x1409203B8 (WbCreateHeapExecutedBlock.c)
 *     sub_1409DB564 @ 0x1409DB564 (sub_1409DB564.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     sub_14091D6A4 @ 0x14091D6A4 (sub_14091D6A4.c)
 */

__int64 __fastcall sub_14091D4BC(UCHAR *Source1, unsigned int a2)
{
  int v2; // ebx

  if ( !Source1 || a2 <= 0x20 || (v2 = sub_14091D6A4(Source1 + 32, a2 - 32), v2 >= 0) )
    v2 = -1073741811;
  SddlpFree(0LL);
  return (unsigned int)v2;
}
