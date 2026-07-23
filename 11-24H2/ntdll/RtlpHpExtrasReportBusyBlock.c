/*
 * XREFs of RtlpHpExtrasReportBusyBlock @ 0x1800EB7D8
 * Callers:
 *     RtlpHpSegReportBusyBlock @ 0x1800EB774 (RtlpHpSegReportBusyBlock.c)
 *     RtlpHpLargeAllocReport @ 0x18011D070 (RtlpHpLargeAllocReport.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpExtrasReportBusyBlock(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  unsigned __int16 *v4; // r8
  __int16 v5; // dx
  __int64 result; // rax

  v3 = *(_QWORD *)a2 + *(_QWORD *)(a2 + 8) + 16LL;
  if ( (*(_DWORD *)(a1 + 20) & 0x2000) == 0 )
    v3 = *(_QWORD *)a2 + *(_QWORD *)(a2 + 8);
  v4 = (unsigned __int16 *)((v3 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)(a2 + 24) = *((_QWORD *)v4 + 1);
  v5 = *(_WORD *)(a2 + 18) | 0x10;
  *(_WORD *)(a2 + 18) = v5;
  *(_WORD *)(a2 + 18) = v5 | (*((_BYTE *)v4 + 2) >> 4 << 8);
  result = *v4;
  *(_WORD *)(a2 + 32) = result;
  return result;
}
