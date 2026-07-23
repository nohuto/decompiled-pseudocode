/*
 * XREFs of PspSetPagePriorityLimitJobTree @ 0x1407786B0
 * Callers:
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14085D4DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

void __fastcall PspSetPagePriorityLimitJobTree(char *Object, int a2)
{
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  if ( a2 != *((_DWORD *)Object + 274) )
  {
    *((_DWORD *)Object + 274) = a2;
    PspEnumJobsAndProcessesInJobHierarchy(Object, 0LL, 5);
  }
  ExReleaseResourceLite((PERESOURCE)(Object + 56));
}
