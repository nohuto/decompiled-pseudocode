/*
 * XREFs of MiStoreGetWriteSupport @ 0x1402D9790
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x1402DAA60 (ExpAllocatePoolWithTagFromNode.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     VfHandlePoolAlloc @ 0x140B98AC0 (VfHandlePoolAlloc.c)
 */

PSLIST_ENTRY __fastcall MiStoreGetWriteSupport(_SLIST_HEADER *a1)
{
  PSLIST_ENTRY result; // rax
  ULONG_PTR v2; // r9
  __int64 v3; // [rsp+40h] [rbp-18h] BYREF
  int v4; // [rsp+48h] [rbp-10h]
  int v5; // [rsp+4Ch] [rbp-Ch]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  result = RtlpInterlockedPopEntrySList(a1 + 86);
  if ( !result )
  {
    v5 = 0;
    v2 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
    LODWORD(v2) = v2 | 0x80000000;
    if ( (ExpPoolFlags & 8) != 0 )
    {
      v3 = 1LL;
      v4 = 32;
      return (PSLIST_ENTRY)VfHandlePoolAlloc(
                             NonPagedPool,
                             0x40uLL,
                             0x58uLL,
                             0x57536D4Du,
                             LowPoolPriority,
                             (__int64)&v3,
                             1,
                             retaddr);
    }
    else
    {
      return (PSLIST_ENTRY)ExpAllocatePoolWithTagFromNode(0x40uLL, 0x58uLL, 0x57536D4DuLL, v2);
    }
  }
  return result;
}
