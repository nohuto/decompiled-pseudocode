/*
 * XREFs of PfpEventHandleFullBuffer @ 0x1403240C0
 * Callers:
 *     PfFbLogEntryComplete @ 0x140324110 (PfFbLogEntryComplete.c)
 *     PfLogEvent @ 0x140324B30 (PfLogEvent.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     PfTFullEventListAdd @ 0x14048924C (PfTFullEventListAdd.c)
 */

unsigned int __fastcall PfpEventHandleFullBuffer(__int64 a1)
{
  unsigned int result; // eax

  result = PfTFullEventListAdd();
  if ( !*(_DWORD *)(a1 + 740) )
  {
    result = *(unsigned __int16 *)(a1 + 544);
    if ( result >= (unsigned int)(2 * KeNumberProcessors_0 + 4) >> 1 )
      return KeSetEvent((PRKEVENT)(a1 + 736), 0, 0);
  }
  return result;
}
