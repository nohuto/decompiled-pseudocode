/*
 * XREFs of RtlpFindAndCommitPages @ 0x1405EC7B4
 * Callers:
 *     RtlpExtendHeap @ 0x1405EC560 (RtlpExtendHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402B2E04 (RtlpLogHeapFailure.c)
 *     DbgPrint @ 0x1402CB260 (DbgPrint.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x14045135C (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpCreateUCREntry @ 0x1405EBE80 (RtlpCreateUCREntry.c)
 *     RtlpRemoveUCRBlock @ 0x1405ED6C8 (RtlpRemoveUCRBlock.c)
 *     RtlpUpdateHeapRates @ 0x1405EDAB0 (RtlpUpdateHeapRates.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405F2C1C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1405F2F2C (RtlpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x1405F34A8 (RtlpFindUCREntry.c)
 *     ZwAllocateVirtualMemory @ 0x1406A6710 (ZwAllocateVirtualMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpFindAndCommitPages(ULONG_PTR a1, ULONG_PTR *a2)
{
  __int64 UCREntry; // rax
  __int64 v5; // r9
  __int64 v6; // r14
  __int64 v7; // rdi
  char v8; // bp
  __int64 v9; // rax
  __int64 v10; // rdi
  int updated; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r9
  ULONG_PTR v20; // rdx
  ULONG_PTR v21; // rdx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF

  UCREntry = RtlpFindUCREntry(a1, *a2);
  v6 = UCREntry;
  if ( UCREntry == a1 + 240 )
    return 0LL;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && *(_QWORD *)(UCREntry + 40) < *a2 )
  {
    DbgPrint("(UCRBlock->Size >= *Size)");
    RtlpHeapHandleError();
  }
  v7 = UCREntry - 16;
  v8 = 0;
  v9 = *(unsigned __int8 *)(UCREntry - 16 + 14);
  if ( (_BYTE)v9 )
    v10 = (v7 & 0xFFFFFFFFFFFF0000uLL) - (v9 << 16) + 0x10000;
  else
    v10 = a1;
  BaseAddress = *(PVOID *)(v6 + 32);
  if ( RtlpHeapKey != *(_QWORD *)(a1 + 360) )
  {
    updated = guard_dispatch_icall_no_overrides(a1, &BaseAddress, a2, v5);
  }
  else
  {
    v15 = (*a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    *a2 = v15;
    if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                         v15,
                         *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664),
                         a1,
                         (unsigned __int64 *)(a1 + 376)) )
      ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, a2, 0x1000u, 4u);
    updated = RtlpUpdateHeapRates(a1, 2LL);
  }
  if ( updated < 0 )
  {
    ++*(_DWORD *)(a1 + 632);
    return 0LL;
  }
  v17 = v6 - 16;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v12 = *(unsigned int *)(a1 + 136);
    *(_DWORD *)(v17 + 8) ^= v12;
    LOBYTE(v12) = *(_BYTE *)(v17 + 8) ^ *(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10);
    if ( *(_BYTE *)(v17 + 11) != (_BYTE)v12 )
      RtlpAnalyzeHeapFailure(a1, v6 - 16);
  }
  *(_BYTE *)(v17 + 10) = 0;
  *(_BYTE *)(v17 + 15) = 0;
  RtlpRemoveUCRBlock(v12, v6, v13, v14);
  --*(_DWORD *)(v10 + 84);
  *(_DWORD *)(v10 + 80) -= *(_QWORD *)(v6 + 40) >> 12;
  *(_QWORD *)(a1 + 576) += *(_QWORD *)(v6 + 40);
  ++*(_DWORD *)(a1 + 608);
  --*(_DWORD *)(a1 + 604);
  v18 = *(_QWORD *)(v6 + 40);
  if ( v18 >= 0xFF000 )
    *(_QWORD *)(a1 + 584) -= v18;
  v19 = *(_QWORD *)(v6 + 40);
  v20 = *a2;
  if ( v19 > *a2 || v19 + *(_QWORD *)(v6 + 32) == *(_QWORD *)(v10 + 72) )
  {
    RtlpCreateUCREntry(a1, v10, v20 - 48 + *(_QWORD *)(v6 + 32), v19 - v20, v6 - 16, (__int64 *)a2);
    *a2 *= 16LL;
  }
  else
  {
    *a2 = v20 + 16LL * *(unsigned __int16 *)(v17 + 8);
  }
  *(_BYTE *)(v17 + 11) = 0;
  v21 = *(_QWORD *)(v10 + 40);
  if ( v21 != v10 )
  {
    if ( ((unsigned __int64)(v17 - v10) >> 16) + 1 >= 0xFE )
      RtlpLogHeapFailure(3, v21, v6 - 16, v10, 0LL, 0LL);
    v8 = ((unsigned int)(v17 - v10) >> 16) + 1;
  }
  *(_BYTE *)(v17 + 14) = v8;
  return v6 - 16;
}
