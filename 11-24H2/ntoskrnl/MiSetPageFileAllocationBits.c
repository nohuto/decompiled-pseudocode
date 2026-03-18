/*
 * XREFs of MiSetPageFileAllocationBits @ 0x140367504
 * Callers:
 *     MiFindPageFileWriteCluster @ 0x140367BDC (MiFindPageFileWriteCluster.c)
 *     MiFindFreePageFileSpace @ 0x140367D88 (MiFindFreePageFileSpace.c)
 *     MiGatherPagefilePages @ 0x14039C8C8 (MiGatherPagefilePages.c)
 * Callees:
 *     RtlSetBits @ 0x14024BCC0 (RtlSetBits.c)
 */

__int64 __fastcall MiSetPageFileAllocationBits(__int64 a1, ULONG a2, ULONG a3)
{
  __int64 result; // rax

  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 80) + 8LL), a2, a3);
  result = *(_DWORD *)(a1 + 12) - a3;
  *(_DWORD *)(a1 + 12) = result;
  return result;
}
