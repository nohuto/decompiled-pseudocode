/*
 * XREFs of MmIssueMemoryListCommand @ 0x1407EDC20
 * Callers:
 *     NtManagePartition @ 0x140933FF0 (NtManagePartition.c)
 *     PfpLogEventRequest @ 0x140AA86F4 (PfpLogEventRequest.c)
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     MmPerformMemoryListCommand @ 0x140B6DB74 (MmPerformMemoryListCommand.c)
 */

__int64 __fastcall MmIssueMemoryListCommand(unsigned int a1, KPROCESSOR_MODE a2, __int64 a3)
{
  if ( a1 > 5 )
    return 3221225485LL;
  if ( a1 == 3 || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a2) )
    return MmPerformMemoryListCommand(a1, a3);
  return 3221225569LL;
}
