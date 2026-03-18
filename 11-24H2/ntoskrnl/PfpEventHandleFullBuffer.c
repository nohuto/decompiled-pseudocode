/*
 * XREFs of PfpEventHandleFullBuffer @ 0x140245E30
 * Callers:
 *     PfFbLogEntryComplete @ 0x140245330 (PfFbLogEntryComplete.c)
 *     PfLogEvent @ 0x140245398 (PfLogEvent.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     PfTFullEventListAdd @ 0x140488B58 (PfTFullEventListAdd.c)
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
