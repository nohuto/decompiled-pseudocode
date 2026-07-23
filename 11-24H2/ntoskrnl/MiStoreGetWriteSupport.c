/*
 * XREFs of MiStoreGetWriteSupport @ 0x140276E44
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x1402776D0 (ExpAllocatePoolWithTagFromNode.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     VfHandlePoolAlloc @ 0x140BAAAA0 (VfHandlePoolAlloc.c)
 */

PSLIST_ENTRY __fastcall MiStoreGetWriteSupport(_SLIST_HEADER *a1)
{
  PSLIST_ENTRY result; // rax
  volatile CCHAR v2; // al
  ULONG_PTR v3; // r9
  __int64 v4; // [rsp+40h] [rbp-18h] BYREF
  int v5; // [rsp+48h] [rbp-10h]
  int v6; // [rsp+4Ch] [rbp-Ch]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  result = RtlpInterlockedPopEntrySList(a1 + 86);
  if ( !result )
  {
    v6 = 0;
    v2 = KeNumberProcessorsGroup0[9];
    v3 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
    LODWORD(v3) = v3 | 0x80000000;
    if ( (v2 & 8) != 0 )
    {
      v4 = 1LL;
      v5 = 32;
      return (PSLIST_ENTRY)VfHandlePoolAlloc(
                             NonPagedPool,
                             0x40uLL,
                             0x58uLL,
                             0x57536D4Du,
                             LowPoolPriority,
                             (__int64)&v4,
                             1,
                             retaddr);
    }
    else
    {
      return (PSLIST_ENTRY)ExpAllocatePoolWithTagFromNode(0x40uLL, 0x58uLL, 0x57536D4DuLL, v3);
    }
  }
  return result;
}
