/*
 * XREFs of PsGetCurrentProcessSessionId @ 0x140425EC0
 * Callers:
 *     EtwpEventWriteFull @ 0x14030D050 (EtwpEventWriteFull.c)
 *     PopPowerRequestCreateCommon @ 0x140425C44 (PopPowerRequestCreateCommon.c)
 *     PsIsSessionInCurrentServerSilo @ 0x1405DAC78 (PsIsSessionInCurrentServerSilo.c)
 *     IoGetContainerInformation @ 0x1407091B0 (IoGetContainerInformation.c)
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     PfpProcessScenarioPhase @ 0x1408EA25C (PfpProcessScenarioPhase.c)
 *     EtwpWriteUserEvent @ 0x1409245D0 (EtwpWriteUserEvent.c)
 *     NtSetInformationObject @ 0x1409FE700 (NtSetInformationObject.c)
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
