/*
 * XREFs of MmIssueMemoryListCommand @ 0x1407EE1F0
 * Callers:
 *     NtManagePartition @ 0x1408F6B10 (NtManagePartition.c)
 *     PfpLogEventRequest @ 0x140AA3778 (PfpLogEventRequest.c)
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     MmPerformMemoryListCommand @ 0x140B6F414 (MmPerformMemoryListCommand.c)
 */

__int64 __fastcall MmIssueMemoryListCommand(unsigned int a1, KPROCESSOR_MODE a2, __int64 a3)
{
  if ( a1 > 5 )
    return 3221225485LL;
  if ( a1 == 3 || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a2) )
    return MmPerformMemoryListCommand(a1, a3);
  return 3221225569LL;
}
