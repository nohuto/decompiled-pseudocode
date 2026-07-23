/*
 * XREFs of EtwpGetStackLookasideListEntry @ 0x1404364B0
 * Callers:
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140AD78A0 (EtwpWriteUserEvent.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY EtwpGetStackLookasideListEntry()
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)KeGetCurrentPrcb()->EtwSupport + 24);
  if ( !result )
  {
    result = RtlpInterlockedPopEntrySList(&EtwpStackLookAsideList);
    if ( result )
    {
      _InterlockedIncrement(&dword_140E28FDC);
      if ( dword_140E28FDC > dword_140E28FE0 )
        _InterlockedExchange(&dword_140E28FE0, dword_140E28FDC);
    }
    else
    {
      if ( dword_140E28FD0 > 0 )
        _InterlockedIncrement(&dword_140E28FE4);
      return 0LL;
    }
  }
  return result;
}
