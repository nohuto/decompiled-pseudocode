/*
 * XREFs of PiUEventBroadcastDevnodesChangedEvent @ 0x140A5C630
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140A5C500 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsGetSessionById @ 0x1403D6DB0 (PsGetSessionById.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 */

LONG_PTR __fastcall PiUEventBroadcastDevnodesChangedEvent(unsigned int a1)
{
  LONG_PTR result; // rax
  void *SessionById; // rbx

  if ( a1 == -1 )
    return ZwUpdateWnfStateData((__int64)&WNF_PNPA_DEVNODES_CHANGED, 0LL);
  SessionById = (void *)PsGetSessionById(a1);
  result = 0LL;
  if ( SessionById )
  {
    ZwUpdateWnfStateData((__int64)&WNF_PNPA_DEVNODES_CHANGED_SESSION, 0LL);
    return ObfDereferenceObjectWithTag(SessionById, 0x79517350u);
  }
  return result;
}
