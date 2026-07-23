/*
 * XREFs of RtlpDynamicLookasideFlush @ 0x140470094
 * Callers:
 *     ExpHpCompactHeapCallback @ 0x1403C7C20 (ExpHpCompactHeapCallback.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1406A8640 (RtlpInterlockedFlushSList.c)
 */

PSLIST_ENTRY __fastcall RtlpDynamicLookasideFlush(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  PSLIST_ENTRY v3; // rbx
  unsigned __int64 v4; // rcx
  PSLIST_ENTRY v5; // rax
  _SLIST_ENTRY *v7; // rcx

  v2 = ~*a1;
  v3 = 0LL;
  while ( v2 )
  {
    _BitScanForward64(&v4, v2);
    v2 ^= 1LL << v4;
    v5 = RtlpInterlockedFlushSList((PSLIST_HEADER)&a1[8 * v4 + 8]);
    if ( v3 )
    {
      while ( 1 )
      {
        v7 = v5;
        if ( !v5 )
          break;
        v5 = v5->Next;
        v7->Next = v3;
        v3 = v7;
      }
    }
    else
    {
      v3 = v5;
    }
  }
  return v3;
}
