/*
 * XREFs of MiPopulateFreeKernelShadowStackCacheEntries @ 0x14067482C
 * Callers:
 *     MiInitializePartition @ 0x1407DC8B8 (MiInitializePartition.c)
 * Callees:
 *     InitializeSListHead @ 0x140460EA0 (InitializeSListHead.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiPopulateFreeKernelShadowStackCacheEntries(_SLIST_HEADER *a1)
{
  _SLIST_HEADER *v1; // rsi
  _SLIST_ENTRY *Alignment; // rbx
  __int64 v3; // rdi
  _SLIST_ENTRY *v4; // rdi

  v1 = a1 + 28;
  Alignment = (_SLIST_ENTRY *)a1[28].Alignment;
  v3 = 1536LL * (unsigned __int16)KeNumberNodes;
  InitializeSListHead(a1 + 28);
  v4 = &Alignment[2 * v3];
  while ( Alignment < v4 )
  {
    RtlpInterlockedPushEntrySList(v1, Alignment);
    Alignment += 2;
  }
}
