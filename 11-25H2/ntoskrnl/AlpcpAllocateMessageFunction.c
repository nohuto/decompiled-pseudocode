/*
 * XREFs of AlpcpAllocateMessageFunction @ 0x1408AE3F0
 * Callers:
 *     ExAllocateFromPagedLookasideList @ 0x1403F2CC0 (ExAllocateFromPagedLookasideList.c)
 *     AlpcpAllocateBlob @ 0x1408AF0C0 (AlpcpAllocateBlob.c)
 *     AlpcpAllocateMessage @ 0x1408B07D0 (AlpcpAllocateMessage.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x140735C00 (AlpcpAllocateMessageFromExtendedTables.c)
 *     ExCreateHandleEx @ 0x140851070 (ExCreateHandleEx.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void *AlpcpAllocateMessageFunction()
{
  __int64 Pool2; // rax
  void *v1; // rbx
  __int64 v2; // rdi
  unsigned __int64 Handle; // rax

  Pool2 = ExAllocatePool2(0x100uLL);
  v1 = (void *)Pool2;
  if ( !Pool2 )
    return v1;
  v2 = Pool2 + 48;
  memset_0((void *)(Pool2 + 48), 0, 0x118uLL);
  Handle = ExCreateHandleEx((unsigned int *)AlpcMessageTable, v2, 0, 0, 0LL);
  if ( Handle || (Handle = AlpcpAllocateMessageFromExtendedTables(v2)) != 0 )
  {
    *(_DWORD *)(v2 + 264) = Handle | 0x80000000;
    return v1;
  }
  ExFreePoolWithTag(v1, 0);
  return 0LL;
}
