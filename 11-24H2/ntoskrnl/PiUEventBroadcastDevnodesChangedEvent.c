/*
 * XREFs of PiUEventBroadcastDevnodesChangedEvent @ 0x140A568C0
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140A56790 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsGetSessionById @ 0x1403C2E70 (PsGetSessionById.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PiUEventBroadcastDevnodesChangedEvent(unsigned int a1)
{
  NTSTATUS result; // eax
  void *SessionById; // rbx
  unsigned int ExplicitScope; // [rsp+50h] [rbp+8h] BYREF

  ExplicitScope = a1;
  if ( a1 == -1 )
    return ZwUpdateWnfStateData(&WNF_PNPA_DEVNODES_CHANGED, 0LL, 0, 0LL, 0LL, 0, 0);
  SessionById = (void *)PsGetSessionById(a1);
  result = 0;
  if ( SessionById )
  {
    ZwUpdateWnfStateData(&WNF_PNPA_DEVNODES_CHANGED_SESSION, 0LL, 0, 0LL, &ExplicitScope, 0, 0);
    return ObfDereferenceObjectWithTag(SessionById, 0x79517350u);
  }
  return result;
}
