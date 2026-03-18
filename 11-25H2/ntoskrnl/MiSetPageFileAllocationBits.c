/*
 * XREFs of MiSetPageFileAllocationBits @ 0x1403DB230
 * Callers:
 *     MiGatherPagefilePages @ 0x1403C0730 (MiGatherPagefilePages.c)
 *     MiFindPageFileWriteCluster @ 0x1403D9914 (MiFindPageFileWriteCluster.c)
 *     MiFindFreePageFileSpace @ 0x1403D9AC0 (MiFindFreePageFileSpace.c)
 * Callees:
 *     RtlSetBits @ 0x140339430 (RtlSetBits.c)
 */

__int64 __fastcall MiSetPageFileAllocationBits(__int64 a1, ULONG a2, ULONG a3)
{
  __int64 result; // rax

  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 80) + 8LL), a2, a3);
  result = *(_DWORD *)(a1 + 12) - a3;
  *(_DWORD *)(a1 + 12) = result;
  return result;
}
