/*
 * XREFs of EtwpGetStackLookasideListEntry @ 0x1404402F0
 * Callers:
 *     EtwpEventWriteFull @ 0x14030D050 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1409245D0 (EtwpWriteUserEvent.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
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
      _InterlockedIncrement(&dword_140E28C5C);
      if ( dword_140E28C5C > dword_140E28C60 )
        _InterlockedExchange(&dword_140E28C60, dword_140E28C5C);
    }
    else
    {
      if ( dword_140E28C50 > 0 )
        _InterlockedIncrement(&dword_140E28C64);
      return 0LL;
    }
  }
  return result;
}
