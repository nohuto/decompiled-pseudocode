/*
 * XREFs of RtlpHpLargeAllocReport @ 0x18011D070
 * Callers:
 *     RtlpHpLargeWalkHeap @ 0x18009F9A0 (RtlpHpLargeWalkHeap.c)
 * Callees:
 *     RtlpHpExtrasReportBusyBlock @ 0x1800EB7D8 (RtlpHpExtrasReportBusyBlock.c)
 */

__int64 __fastcall RtlpHpLargeAllocReport(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 result; // rax

  *(_QWORD *)a3 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFF0000uLL;
  v3 = *(unsigned __int16 *)(a2 + 24);
  v4 = *(_QWORD *)(a2 + 32);
  *(_BYTE *)(a3 + 17) = 64;
  *(_WORD *)(a3 + 18) = 16385;
  *(_QWORD *)(a3 + 8) = (v4 & 0xFFFFFFFFFFFFF000uLL) - v3;
  *(_BYTE *)(a3 + 16) = *(_BYTE *)(a2 + 24);
  result = *(unsigned __int16 *)(a2 + 24);
  *(_QWORD *)(a3 + 36) = result;
  if ( (*(_BYTE *)(a2 + 32) & 1) != 0 )
    return RtlpHpExtrasReportBusyBlock(a1, a3);
  return result;
}
