/*
 * XREFs of EtwpGetStackLookasideListEntry @ 0x1404407E0
 * Callers:
 *     EtwpEventWriteFull @ 0x140328590 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140920F90 (EtwpWriteUserEvent.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
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
      _InterlockedIncrement(&dword_140E28E9C);
      if ( dword_140E28E9C > dword_140E28EA0 )
        _InterlockedExchange(&dword_140E28EA0, dword_140E28E9C);
    }
    else
    {
      if ( dword_140E28E90 > 0 )
        _InterlockedIncrement(&dword_140E28EA4);
      return 0LL;
    }
  }
  return result;
}
