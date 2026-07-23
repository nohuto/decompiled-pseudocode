/*
 * XREFs of PiUEventBroadcastHardwareProfilesChangedEvent @ 0x140718778
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140A5C500 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsGetSessionById @ 0x1403D6DB0 (PsGetSessionById.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PiUEventBroadcastHardwareProfilesChangedEvent(unsigned int a1, const void *a2)
{
  NTSTATUS result; // eax
  void *SessionById; // rdi
  unsigned int ExplicitScope; // [rsp+50h] [rbp+8h] BYREF

  ExplicitScope = a1;
  if ( a1 == -1 )
    return ZwUpdateWnfStateData(&WNF_PNPA_HARDWAREPROFILES_CHANGED, a2, 0x10u, 0LL, 0LL, 0, 0);
  SessionById = (void *)PsGetSessionById(a1);
  result = 0;
  if ( SessionById )
  {
    ZwUpdateWnfStateData(&WNF_PNPA_HARDWAREPROFILES_CHANGED_SESSION, a2, 0x10u, 0LL, &ExplicitScope, 0, 0);
    return ObfDereferenceObjectWithTag(SessionById, 0x79517350u);
  }
  return result;
}
