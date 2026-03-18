/*
 * XREFs of PsSetProcessPriorityByClass @ 0x140A334D0
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     PspSetProcessPriorityByClass @ 0x140269154 (PspSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x140A334FC (PspSetProcessForegroundBackgroundRequest.c)
 */

__int64 __fastcall PsSetProcessPriorityByClass(__int64 a1, __int64 a2)
{
  if ( (_DWORD)a2 == 2 )
    return PspSetProcessPriorityByClass(a1, 2);
  LOBYTE(a2) = (_DWORD)a2 == 1;
  return PspSetProcessForegroundBackgroundRequest(a1, a2, 0LL);
}
