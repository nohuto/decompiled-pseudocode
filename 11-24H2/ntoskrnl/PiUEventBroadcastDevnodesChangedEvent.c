/*
 * XREFs of PiUEventBroadcastDevnodesChangedEvent @ 0x140A5E4A0
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140A5E370 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PsGetSessionById @ 0x140349430 (PsGetSessionById.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
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
