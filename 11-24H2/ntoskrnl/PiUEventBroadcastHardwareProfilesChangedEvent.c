/*
 * XREFs of PiUEventBroadcastHardwareProfilesChangedEvent @ 0x140724878
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140A5E370 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PsGetSessionById @ 0x140349430 (PsGetSessionById.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 */

LONG_PTR __fastcall PiUEventBroadcastHardwareProfilesChangedEvent(unsigned int a1, __int64 a2)
{
  LONG_PTR result; // rax
  void *SessionById; // rdi

  if ( a1 == -1 )
    return ZwUpdateWnfStateData((__int64)&WNF_PNPA_HARDWAREPROFILES_CHANGED, a2);
  SessionById = (void *)PsGetSessionById(a1);
  result = 0LL;
  if ( SessionById )
  {
    ZwUpdateWnfStateData((__int64)&WNF_PNPA_HARDWAREPROFILES_CHANGED_SESSION, a2);
    return ObfDereferenceObjectWithTag(SessionById, 0x79517350u);
  }
  return result;
}
