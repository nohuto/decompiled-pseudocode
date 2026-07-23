/*
 * XREFs of PsGetCurrentProcessSessionId @ 0x1402BAD30
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x1402BAAB0 (PopPowerRequestCreateCommon.c)
 *     PsIsSessionInCurrentServerSilo @ 0x1405E43C8 (PsIsSessionInCurrentServerSilo.c)
 *     IoGetContainerInformation @ 0x140712E40 (IoGetContainerInformation.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     PfpProcessScenarioPhase @ 0x1408F77E8 (PfpProcessScenarioPhase.c)
 *     NtSetInformationObject @ 0x1409F46C0 (NtSetInformationObject.c)
 *     EtwpWriteUserEvent @ 0x140AD78A0 (EtwpWriteUserEvent.c)
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
