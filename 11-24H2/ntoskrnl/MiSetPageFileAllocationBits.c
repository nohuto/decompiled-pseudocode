/*
 * XREFs of MiSetPageFileAllocationBits @ 0x1403C4D5C
 * Callers:
 *     MiGatherPagefilePages @ 0x1402F9BC8 (MiGatherPagefilePages.c)
 *     MiFindPageFileWriteCluster @ 0x1403C41E0 (MiFindPageFileWriteCluster.c)
 *     MiFindFreePageFileSpace @ 0x1403C438C (MiFindFreePageFileSpace.c)
 * Callees:
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 */

__int64 __fastcall MiSetPageFileAllocationBits(__int64 a1, ULONG a2, ULONG a3)
{
  __int64 result; // rax

  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 80) + 8LL), a2, a3);
  result = *(_DWORD *)(a1 + 12) - a3;
  *(_DWORD *)(a1 + 12) = result;
  return result;
}
