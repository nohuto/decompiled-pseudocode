/*
 * XREFs of KeAllocateInterrupt @ 0x140482F48
 * Callers:
 *     IopConnectInterrupt @ 0x1409C0880 (IopConnectInterrupt.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     MmAllocateIndependentPages @ 0x140A85350 (MmAllocateIndependentPages.c)
 */

PSLIST_ENTRY __fastcall KeAllocateInterrupt(__int64 a1)
{
  _SLIST_HEADER *v1; // rbp
  unsigned int v3; // r14d
  PSLIST_ENTRY result; // rax
  _SLIST_ENTRY *v5; // rbx
  __int64 v6; // rsi

  v1 = (_SLIST_HEADER *)(a1 + 14336);
  v3 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL);
  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList(v1);
    if ( result )
      break;
    result = (PSLIST_ENTRY)MmAllocateIndependentPages(4096LL, v3);
    v5 = result;
    if ( !result )
      return result;
    v6 = 12LL;
    do
    {
      RtlpInterlockedPushEntrySList(v1, v5);
      v5 += 20;
      --v6;
    }
    while ( v6 );
  }
  result[18].Next = (_SLIST_ENTRY *)a1;
  return result;
}
