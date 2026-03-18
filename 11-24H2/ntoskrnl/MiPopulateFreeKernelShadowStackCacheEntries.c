/*
 * XREFs of MiPopulateFreeKernelShadowStackCacheEntries @ 0x14068004C
 * Callers:
 *     MiInitializePartition @ 0x1407EC758 (MiInitializePartition.c)
 * Callees:
 *     InitializeSListHead @ 0x14045FE80 (InitializeSListHead.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiPopulateFreeKernelShadowStackCacheEntries(union _SLIST_HEADER *a1)
{
  union _SLIST_HEADER *v1; // rsi
  struct _SLIST_ENTRY *Alignment; // rbx
  __int64 v3; // rdi
  struct _SLIST_ENTRY *v4; // rdi

  v1 = a1 + 28;
  Alignment = (struct _SLIST_ENTRY *)a1[28].Alignment;
  v3 = 1536LL * (unsigned __int16)KeNumberNodes;
  InitializeSListHead(a1 + 28);
  v4 = &Alignment[2 * v3];
  while ( Alignment < v4 )
  {
    RtlpInterlockedPushEntrySList(v1, Alignment);
    Alignment += 2;
  }
}
