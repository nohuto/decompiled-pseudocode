/*
 * XREFs of sub_1408FABDC @ 0x1408FABDC
 * Callers:
 *     WbCreateHeapExecutedBlock @ 0x1408FDAD8 (WbCreateHeapExecutedBlock.c)
 *     sub_1409E17B4 @ 0x1409E17B4 (sub_1409E17B4.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406B3990 (RtlCompareMemory.c)
 *     SddlpFree @ 0x140863910 (SddlpFree.c)
 *     sub_1408FADC4 @ 0x1408FADC4 (sub_1408FADC4.c)
 */

__int64 __fastcall sub_1408FABDC(UCHAR *Source1, unsigned int a2)
{
  int v2; // ebx

  if ( !Source1 || a2 <= 0x20 || (v2 = sub_1408FADC4(Source1 + 32, a2 - 32), v2 >= 0) )
    v2 = -1073741811;
  SddlpFree(0LL);
  return (unsigned int)v2;
}
