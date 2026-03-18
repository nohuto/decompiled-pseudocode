/*
 * XREFs of MmIssueMemoryListCommand @ 0x1407DDD80
 * Callers:
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 *     NtManagePartition @ 0x14093B600 (NtManagePartition.c)
 *     PfpLogEventRequest @ 0x140AA366C (PfpLogEventRequest.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     MmPerformMemoryListCommand @ 0x140B5EAC0 (MmPerformMemoryListCommand.c)
 */

__int64 __fastcall MmIssueMemoryListCommand(unsigned int a1, KPROCESSOR_MODE a2, __int64 a3)
{
  if ( a1 > 5 )
    return 3221225485LL;
  if ( a1 == 3 || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a2) )
    return MmPerformMemoryListCommand(a1, a3);
  return 3221225569LL;
}
