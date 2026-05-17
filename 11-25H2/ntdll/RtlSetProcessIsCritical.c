/*
 * XREFs of RtlSetProcessIsCritical @ 0x180147170
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationProcess @ 0x180163540 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x1801635A0 (NtSetInformationProcess.c)
 */

NTSTATUS __fastcall RtlSetProcessIsCritical(unsigned __int8 a1, _BYTE *a2, char a3)
{
  int v4; // edi
  NTSTATUS result; // eax
  int ProcessInformation; // [rsp+50h] [rbp+18h] BYREF

  ProcessInformation = 0;
  v4 = a1;
  if ( a2 )
    *a2 = 0;
  if ( a3 && (NtCurrentTeb()->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) == 0 )
    return -1073741823;
  if ( a2 )
  {
    result = NtQueryInformationProcess(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               ProcessBreakOnTermination,
               &ProcessInformation,
               4u,
               0LL);
    if ( result < 0 )
      return result;
    *a2 = ProcessInformation;
  }
  ProcessInformation = v4;
  return NtSetInformationProcess(-1LL, 29LL, &ProcessInformation, 4LL);
}
