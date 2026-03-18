/*
 * XREFs of ViGrowPoolAllocation @ 0x140612280
 * Callers:
 *     VfHandlePoolAlloc @ 0x140BA8AA0 (VfHandlePoolAlloc.c)
 * Callees:
 *     KeZeroSinglePage @ 0x1406B3350 (KeZeroSinglePage.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

PSLIST_ENTRY __fastcall ViGrowPoolAllocation(union _SLIST_HEADER *a1)
{
  __int64 Pool2; // rax
  union _SLIST_HEADER *v3; // rdi
  __int64 v4; // rbx
  __int64 v6; // rsi

  Pool2 = ExAllocatePool2(0x240uLL);
  v3 = a1 + 5;
  v4 = Pool2;
  if ( !Pool2 )
    return RtlpInterlockedPopEntrySList(a1 + 5);
  KeZeroSinglePage(Pool2);
  *(_QWORD *)(v4 + 8) = a1;
  *(_QWORD *)(v4 + 16) = 556929861LL;
  RtlpInterlockedPushEntrySList(a1 + 4, (PSLIST_ENTRY)v4);
  v6 = 126LL;
  do
  {
    v4 += 32LL;
    *(_QWORD *)(v4 + 16) = 1LL;
    RtlpInterlockedPushEntrySList(v3, (PSLIST_ENTRY)v4);
    --v6;
  }
  while ( v6 );
  *(_QWORD *)(v4 + 48) = 1LL;
  return (PSLIST_ENTRY)(v4 + 32);
}
