/*
 * XREFs of RtlSetProcessIsCritical @ 0x180147170
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationProcess @ 0x180163540 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x1801635A0 (NtSetInformationProcess.c)
 */

NTSTATUS __cdecl RtlSetProcessIsCritical(BOOLEAN NewValue, PBOOLEAN OldValue, BOOLEAN CheckFlag)
{
  int v4; // edi
  NTSTATUS result; // eax
  int ProcessInformation; // [rsp+50h] [rbp+18h] BYREF

  ProcessInformation = 0;
  v4 = NewValue;
  if ( OldValue )
    *OldValue = 0;
  if ( CheckFlag && (NtCurrentTeb()->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) == 0 )
    return -1073741823;
  if ( OldValue )
  {
    result = NtQueryInformationProcess(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               ProcessBreakOnTermination,
               &ProcessInformation,
               4u,
               0LL);
    if ( result < 0 )
      return result;
    *OldValue = ProcessInformation;
  }
  ProcessInformation = v4;
  return NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
}
