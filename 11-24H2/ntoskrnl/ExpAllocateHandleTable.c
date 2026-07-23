/*
 * XREFs of ExpAllocateHandleTable @ 0x14094D2D4
 * Callers:
 *     ExDupHandleTable @ 0x140891770 (ExDupHandleTable.c)
 *     RtlpInitializeHandleTableForAtomTable @ 0x14094CFD0 (RtlpInitializeHandleTableForAtomTable.c)
 *     ExCreateHandleTable @ 0x14094D1CC (ExCreateHandleTable.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1403C8EA0 (PsReturnProcessPagedPoolQuota.c)
 *     PsChargeProcessPagedPoolQuota @ 0x14089EAD0 (PsChargeProcessPagedPoolQuota.c)
 *     ExpAllocateLowLevelTable @ 0x14094D3F8 (ExpAllocateLowLevelTable.c)
 *     ExpInsertLowLevelTableIntoFreeList @ 0x14094D60C (ExpInsertLowLevelTableIntoFreeList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAllocateHandleTable(ULONG_PTR BugCheckParameter1, char a2)
{
  __int64 Pool2; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 LowLevelTable; // rax
  __int64 v8; // r9
  __int64 v9; // rbp
  __int64 result; // rax

  Pool2 = ExAllocatePool2(0x108uLL, (unsigned int)((ExpFreeListCount + 1) << 6), 0x6274624Fu);
  if ( !Pool2 )
    return 0LL;
  if ( BugCheckParameter1 && (int)PsChargeProcessPagedPoolQuota(BugCheckParameter1, 0x80uLL) < 0 )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0x6274624Fu);
    return 0LL;
  }
  *(_QWORD *)(Pool2 + 16) = BugCheckParameter1;
  v5 = (unsigned int)ExpFreeListCount;
  *(_DWORD *)(Pool2 + 40) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
  if ( (_DWORD)v5 )
  {
    v6 = (_QWORD *)(Pool2 + 64);
    do
    {
      *v6 = 0LL;
      v6 += 8;
      --v5;
    }
    while ( v5 );
  }
  LowLevelTable = ExpAllocateLowLevelTable(Pool2, 0LL);
  v9 = LowLevelTable;
  if ( !LowLevelTable )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0x6274624Fu);
    if ( BugCheckParameter1 )
      PsReturnProcessPagedPoolQuota(BugCheckParameter1, 0x80uLL);
    return 0LL;
  }
  LOBYTE(v8) = a2;
  ExpInsertLowLevelTableIntoFreeList(Pool2, LowLevelTable, Pool2 + 64, v8);
  *(_QWORD *)(Pool2 + 8) = v9;
  if ( BugCheckParameter1 )
    *(_BYTE *)(Pool2 + 44) |= 0x10u;
  *(_QWORD *)(Pool2 + 56) = 0LL;
  result = Pool2;
  *(_QWORD *)(Pool2 + 48) = 0LL;
  return result;
}
