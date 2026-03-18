/*
 * XREFs of PsGetCurrentProcessSessionId @ 0x140331630
 * Callers:
 *     EtwpEventWriteFull @ 0x140328590 (EtwpEventWriteFull.c)
 *     PopPowerRequestCreateCommon @ 0x1403313A8 (PopPowerRequestCreateCommon.c)
 *     PsIsSessionInCurrentServerSilo @ 0x1405E6DC8 (PsIsSessionInCurrentServerSilo.c)
 *     IoGetContainerInformation @ 0x1407152B0 (IoGetContainerInformation.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     EtwpWriteUserEvent @ 0x140920F90 (EtwpWriteUserEvent.c)
 *     PfpProcessScenarioPhase @ 0x14093289C (PfpProcessScenarioPhase.c)
 *     NtSetInformationObject @ 0x1409FB980 (NtSetInformationObject.c)
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentProcessSessionId()
{
  unsigned int v0; // ecx
  _KPROCESS *Process; // rax
  unsigned __int64 CycleTime; // rdx
  unsigned int v3; // eax

  v0 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  CycleTime = Process[1].CycleTime;
  if ( !CycleTime || (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
    v3 = -1;
  else
    v3 = *(_DWORD *)(CycleTime + 8);
  if ( v3 != -1 )
    return v3;
  return v0;
}
