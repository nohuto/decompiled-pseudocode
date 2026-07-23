/*
 * XREFs of PspThreadIndexCleanup @ 0x1408FE880
 * Callers:
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PspThreadIndexCleanup(__int64 a1, int a2)
{
  __int64 v2; // rdi
  _SLIST_HEADER *v4; // rbx
  _SLIST_ENTRY *v5; // rdx
  PSLIST_ENTRY v6; // rax

  v2 = *(_QWORD *)(a1 + 544);
  v4 = *(_SLIST_HEADER **)(v2 + 2048);
  if ( v4 )
  {
    v5 = *(_SLIST_ENTRY **)(a1 + 1920);
    if ( v5 )
      RtlpInterlockedPushEntrySList(*(PSLIST_HEADER *)(v2 + 2048), v5);
    if ( a2 )
    {
      *(_QWORD *)(v2 + 2048) = 0LL;
      while ( 1 )
      {
        v6 = RtlpInterlockedPopEntrySList(v4);
        if ( !v6 )
          break;
        ExFreePoolWithTag(v6, 0);
      }
      ExFreePoolWithTag(v4, 0);
    }
  }
}
