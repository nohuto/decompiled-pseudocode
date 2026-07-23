/*
 * XREFs of RtlpCreateUCREntry @ 0x1801173C0
 * Callers:
 *     RtlpFindAndCommitPages @ 0x18000D030 (RtlpFindAndCommitPages.c)
 *     RtlpDeCommitFreeBlock @ 0x180010840 (RtlpDeCommitFreeBlock.c)
 *     RtlpInitializeHeapSegment @ 0x180025C40 (RtlpInitializeHeapSegment.c)
 * Callees:
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpInsertUCRBlock @ 0x1800DB980 (RtlpInsertUCRBlock.c)
 *     RtlpReportHeapFailure @ 0x18011D71C (RtlpReportHeapFailure.c)
 */

__int64 *__fastcall RtlpCreateUCREntry(
        unsigned __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 *a6)
{
  unsigned __int64 v6; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  bool v12; // cc
  bool v13; // zf
  __int64 v14; // rax
  int v15; // eax
  unsigned __int64 v16; // rax
  __int64 *result; // rax

  a3[5] = a4;
  v6 = (unsigned __int64)(a3 - 2);
  *(_BYTE *)(v6 + 15) = 3;
  a3[4] = (__int64)(a3 + 6);
  *(_DWORD *)(v6 + 8) = 65540;
  v10 = *(_QWORD *)(a2 + 40);
  if ( v10 == a2 )
  {
    LOBYTE(v11) = 0;
  }
  else
  {
    v11 = ((v6 - a2) >> 16) + 1;
    if ( v11 >= 0xFE )
      RtlpLogHeapFailure(3, v10, (__int64)(a3 - 2), a2, 0LL, 0LL);
  }
  v12 = RtlpHeapErrorHandlerThreshold < 1;
  *(_BYTE *)(v6 + 14) = v11;
  if ( v12 )
  {
    v13 = a5 == v6;
LABEL_13:
    if ( v13 )
      goto LABEL_15;
    goto LABEL_14;
  }
  v13 = a5 == v6;
  if ( a5 <= v6 )
    goto LABEL_13;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("((PHEAP_ENTRY)LastKnownEntry <= Entry)");
  if ( !byte_1801D1908 )
    RtlpReportHeapFailure(1LL);
LABEL_14:
  *(_WORD *)(v6 + 12) = *(_WORD *)(a1 + 140);
LABEL_15:
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(v6 + 11) = *(_BYTE *)(v6 + 8) ^ *(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10);
    *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  RtlpInsertUCRBlock(a1, a3);
  ++*(_DWORD *)(a2 + 84);
  *(_DWORD *)(a2 + 80) += (unsigned __int64)a3[5] >> 12;
  v14 = *(_QWORD *)(a1 + 576) - a3[5];
  v12 = ++*(_DWORD *)(a1 + 612) <= 0xAu;
  *(_QWORD *)(a1 + 576) = v14;
  if ( !v12 && !*(_QWORD *)(a1 + 320) )
  {
    v15 = *(_DWORD *)(a1 + 112);
    if ( (v15 & 1) == 0 && (v15 & 2) != 0 && (RtlpDisableHeapLookaside & 1) == 0 )
      *(_DWORD *)(a1 + 120) |= 0x10000000u;
  }
  v16 = a3[5];
  if ( v16 >= 0xFF000 )
    *(_QWORD *)(a1 + 584) += v16;
  result = a6;
  *a6 = (__int64)(v6 - a5) >> 4;
  return result;
}
