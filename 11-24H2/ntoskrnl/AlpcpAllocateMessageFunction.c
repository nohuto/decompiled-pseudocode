/*
 * XREFs of AlpcpAllocateMessageFunction @ 0x140894520
 * Callers:
 *     ExAllocateFromPagedLookasideList @ 0x1403EFFF0 (ExAllocateFromPagedLookasideList.c)
 *     AlpcpAllocateBlob @ 0x140893EF0 (AlpcpAllocateBlob.c)
 *     AlpcpAllocateMessage @ 0x140894000 (AlpcpAllocateMessage.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14073FB50 (AlpcpAllocateMessageFromExtendedTables.c)
 *     ExCreateHandleEx @ 0x1408490F0 (ExCreateHandleEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void *__fastcall AlpcpAllocateMessageFunction(__int64 a1, ULONG_PTR a2, ULONG a3)
{
  __int64 Pool2; // rax
  void *v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 Handle; // rax

  Pool2 = ExAllocatePool2(0x100uLL, a2, a3);
  v4 = (void *)Pool2;
  if ( !Pool2 )
    return v4;
  v5 = Pool2 + 48;
  memset_0((void *)(Pool2 + 48), 0, 0x118uLL);
  Handle = ExCreateHandleEx((unsigned int *)AlpcMessageTable, v5, 0, 0, 0LL);
  if ( Handle || (Handle = AlpcpAllocateMessageFromExtendedTables(v5)) != 0 )
  {
    *(_DWORD *)(v5 + 264) = Handle | 0x80000000;
    return v4;
  }
  ExFreePoolWithTag(v4, 0);
  return 0LL;
}
