/*
 * XREFs of RtlpHpSegReportSegment @ 0x180104E14
 * Callers:
 *     RtlpHpSegWalk @ 0x18002B478 (RtlpHpSegWalk.c)
 * Callees:
 *     RtlpHpSegPageRangeCountCommittedPages @ 0x1800674A0 (RtlpHpSegPageRangeCountCommittedPages.c)
 */

unsigned __int64 __fastcall RtlpHpSegReportSegment(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  unsigned int v7; // esi
  unsigned __int64 v8; // rbp
  int v9; // ecx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 result; // rax

  v3 = *(unsigned __int8 *)(a1 + 10);
  v7 = -*(_DWORD *)a1;
  v8 = a3 + 32LL * *(unsigned __int8 *)(a1 + 10);
  v9 = v3 + RtlpHpSegPageRangeCountCommittedPages(a1, v8, 256 - v3);
  *(_QWORD *)(a2 + 8) = v7;
  v10 = v8;
  v9 <<= 12;
  *(_QWORD *)a2 = a3;
  *(_DWORD *)(a2 + 28) = v7 - v9;
  *(_WORD *)(a2 + 18) = 2;
  *(_BYTE *)(a2 + 17) = 0;
  *(_DWORD *)(a2 + 24) = v9;
  v11 = v8 & *(_QWORD *)a1;
  v8 += 8160LL;
  *(_QWORD *)(a2 + 32) = v11 + ((__int64)(v10 - v11) >> 5 << *(_BYTE *)(a1 + 8));
  result = v8 & *(_QWORD *)a1;
  *(_QWORD *)(a2 + 40) = result + ((__int64)(v8 - result) >> 5 << *(_BYTE *)(a1 + 8));
  return result;
}
