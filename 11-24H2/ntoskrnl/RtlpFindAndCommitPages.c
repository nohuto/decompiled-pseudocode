/*
 * XREFs of RtlpFindAndCommitPages @ 0x1405E9D48
 * Callers:
 *     RtlpExtendHeap @ 0x1405E9AF4 (RtlpExtendHeap.c)
 * Callees:
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x1404467BC (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpCreateUCREntry @ 0x1405E93F0 (RtlpCreateUCREntry.c)
 *     RtlpRemoveUCRBlock @ 0x1405EACB0 (RtlpRemoveUCRBlock.c)
 *     RtlpUpdateHeapRates @ 0x1405EB098 (RtlpUpdateHeapRates.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405F025C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1405F056C (RtlpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x1405F0AE8 (RtlpFindUCREntry.c)
 *     ZwAllocateVirtualMemory @ 0x1406A76B0 (ZwAllocateVirtualMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpFindAndCommitPages(ULONG_PTR a1, ULONG_PTR *a2)
{
  __int64 UCREntry; // rax
  __int64 v5; // r14
  __int64 v6; // rdi
  char v7; // bp
  __int64 v8; // rax
  __int64 v9; // rdi
  int updated; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r9
  ULONG_PTR v20; // rdx
  ULONG_PTR v21; // rdx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF

  UCREntry = RtlpFindUCREntry(a1, *a2);
  v5 = UCREntry;
  if ( UCREntry == a1 + 240 )
    return 0LL;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && *(_QWORD *)(UCREntry + 40) < *a2 )
  {
    DbgPrint("(UCRBlock->Size >= *Size)");
    RtlpHeapHandleError();
  }
  v6 = UCREntry - 16;
  v7 = 0;
  v8 = *(unsigned __int8 *)(UCREntry - 16 + 14);
  if ( (_BYTE)v8 )
    v9 = (v6 & 0xFFFFFFFFFFFF0000uLL) - (v8 << 16) + 0x10000;
  else
    v9 = a1;
  BaseAddress = *(PVOID *)(v5 + 32);
  if ( RtlpHeapKey != *(_QWORD *)(a1 + 360) )
  {
    updated = guard_dispatch_icall_no_overrides(a1, &BaseAddress);
  }
  else
  {
    v14 = (*a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    *a2 = v14;
    if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                         v14,
                         *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 672),
                         a1,
                         (unsigned __int64 *)(a1 + 376)) )
      ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, a2, 0x1000u, 4u);
    updated = RtlpUpdateHeapRates(a1, 2LL);
  }
  if ( updated < 0 )
  {
    ++*(_DWORD *)(a1 + 640);
    return 0LL;
  }
  v16 = v5 - 16;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v11 = *(unsigned int *)(a1 + 136);
    *(_DWORD *)(v16 + 8) ^= v11;
    LOBYTE(v11) = *(_BYTE *)(v16 + 8) ^ *(_BYTE *)(v16 + 9) ^ *(_BYTE *)(v16 + 10);
    if ( *(_BYTE *)(v16 + 11) != (_BYTE)v11 )
      RtlpAnalyzeHeapFailure(a1, v5 - 16);
  }
  *(_BYTE *)(v16 + 10) = 0;
  *(_BYTE *)(v16 + 15) = 0;
  RtlpRemoveUCRBlock(v11, v5, v12, v13);
  --*(_DWORD *)(v9 + 84);
  *(_DWORD *)(v9 + 80) -= *(_QWORD *)(v5 + 40) >> 12;
  v17 = *(_QWORD *)(v5 + 40) + *(_QWORD *)(a1 + 576);
  ++*(_DWORD *)(a1 + 616);
  --*(_DWORD *)(a1 + 612);
  *(_QWORD *)(a1 + 576) = v17;
  v18 = *(_QWORD *)(v5 + 40);
  if ( v18 >= 0xFF000 )
    *(_QWORD *)(a1 + 584) -= v18;
  v19 = *(_QWORD *)(v5 + 40);
  v20 = *a2;
  if ( v19 > *a2 || v19 + *(_QWORD *)(v5 + 32) == *(_QWORD *)(v9 + 72) )
  {
    RtlpCreateUCREntry(a1, v9, v20 - 48 + *(_QWORD *)(v5 + 32), v19 - v20, v5 - 16, (__int64 *)a2);
    *a2 *= 16LL;
  }
  else
  {
    *a2 = v20 + 16LL * *(unsigned __int16 *)(v16 + 8);
  }
  *(_BYTE *)(v16 + 11) = 0;
  v21 = *(_QWORD *)(v9 + 40);
  if ( v21 != v9 )
  {
    if ( ((unsigned __int64)(v16 - v9) >> 16) + 1 >= 0xFE )
      RtlpLogHeapFailure(3, v21, v5 - 16, v9, 0LL, 0LL);
    v7 = ((unsigned int)(v16 - v9) >> 16) + 1;
  }
  *(_BYTE *)(v16 + 14) = v7;
  return v5 - 16;
}
