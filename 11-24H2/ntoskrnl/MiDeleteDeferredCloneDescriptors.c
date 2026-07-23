/*
 * XREFs of MiDeleteDeferredCloneDescriptors @ 0x1404C83F8
 * Callers:
 *     MiDeleteCloneZombies @ 0x140489754 (MiDeleteCloneZombies.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     RtlpInterlockedFlushSList @ 0x1406B48B0 (RtlpInterlockedFlushSList.c)
 */

_SLIST_ENTRY *__fastcall MiDeleteDeferredCloneDescriptors(__int64 a1)
{
  _SLIST_ENTRY *v2; // rsi
  PSLIST_ENTRY v3; // rdi
  unsigned __int64 *v4; // rbp
  _SLIST_ENTRY *v5; // rbx

  v2 = 0LL;
  v3 = RtlpInterlockedFlushSList((PSLIST_HEADER)(*(_QWORD *)(a1 + 1040) + 1072LL));
  if ( v3 )
  {
    v4 = (unsigned __int64 *)(a1 + 640);
    do
    {
      v5 = v3 - 5;
      v3 = v3->Next;
      RtlAvlRemoveNode(v4, (__int64)v5);
      v5->Next = v2;
      v2 = v5;
    }
    while ( v3 );
  }
  return v2;
}
