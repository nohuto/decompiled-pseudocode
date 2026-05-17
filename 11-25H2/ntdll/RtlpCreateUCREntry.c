/*
 * XREFs of RtlpCreateUCREntry @ 0x1800290B0
 * Callers:
 *     RtlpFindAndCommitPages @ 0x180029360 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x18003771C (RtlpInitializeHeapSegment.c)
 *     RtlpDeCommitFreeBlock @ 0x180096B50 (RtlpDeCommitFreeBlock.c)
 * Callees:
 *     RtlpFindUCREntry @ 0x180029920 (RtlpFindUCREntry.c)
 *     RtlpUpdateUCRIndexInsert @ 0x180029B84 (RtlpUpdateUCRIndexInsert.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpHeapHandleError @ 0x18005A8A0 (RtlpHeapHandleError.c)
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
  unsigned __int64 v11; // r14
  bool v12; // cc
  bool v13; // zf
  __int64 UCREntry; // rax
  __int64 *v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // r8
  _QWORD *v21; // r9
  unsigned __int64 v22; // rax
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
      RtlpLogHeapFailure(3, v10, (_DWORD)a3 - 16, a2, 0LL, 0LL);
  }
  v12 = RtlpHeapErrorHandlerThreshold < 1;
  *(_BYTE *)(v6 + 14) = v11;
  if ( v12 )
  {
    v13 = a5 == v6;
    goto LABEL_6;
  }
  v13 = a5 == v6;
  if ( a5 <= v6 )
  {
LABEL_6:
    if ( v13 )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("((PHEAP_ENTRY)LastKnownEntry <= Entry)");
  RtlpHeapHandleError(1LL);
LABEL_7:
  *(_WORD *)(v6 + 12) = *(_WORD *)(a1 + 140);
LABEL_8:
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(v6 + 11) = *(_BYTE *)(v6 + 8) ^ *(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10);
    *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( a3[5] )
  {
    UCREntry = RtlpFindUCREntry(a1);
    v15 = *(__int64 **)(UCREntry + 8);
    if ( *v15 == UCREntry )
    {
      *a3 = UCREntry;
      a3[1] = (__int64)v15;
      *v15 = (__int64)a3;
      *(_QWORD *)(UCREntry + 8) = a3;
    }
    else
    {
      RtlpLogHeapFailure(13, 0, UCREntry, 0, *v15, 0LL);
    }
    RtlpUpdateUCRIndexInsert(a1, a3);
  }
  v16 = *(unsigned __int8 *)(v6 + 14);
  if ( (_BYTE)v16 )
    v17 = (v6 & 0xFFFFFFFFFFFF0000uLL) - (v16 << 16) + 0x10000;
  else
    v17 = a1;
  v18 = *(_QWORD *)(v17 + 96);
  v19 = a3 + 2;
  v20 = (_QWORD *)(v17 + 96);
  v21 = *(_QWORD **)(v18 + 8);
  if ( v21 == v20 )
  {
    *v19 = v18;
    a3[3] = (__int64)v20;
    *(_QWORD *)(v18 + 8) = v19;
    *v20 = v19;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, (_DWORD)v20, (_DWORD)v21, 0LL, 0LL);
  }
  ++*(_DWORD *)(a2 + 84);
  *(_DWORD *)(a2 + 80) += (unsigned __int64)a3[5] >> 12;
  *(_QWORD *)(a1 + 576) -= a3[5];
  if ( ++*(_DWORD *)(a1 + 604) > 0xAu
    && !*(_QWORD *)(a1 + 320)
    && (*(_DWORD *)(a1 + 112) & 3) == 2
    && (RtlpDisableHeapLookaside & 1) == 0 )
  {
    *(_DWORD *)(a1 + 120) |= 0x10000000u;
  }
  v22 = a3[5];
  if ( v22 >= 0xFF000 )
    *(_QWORD *)(a1 + 584) += v22;
  result = a6;
  *a6 = (__int64)(v6 - a5) >> 4;
  return result;
}
