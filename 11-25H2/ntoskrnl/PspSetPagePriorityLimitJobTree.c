/*
 * XREFs of PspSetPagePriorityLimitJobTree @ 0x140768A10
 * Callers:
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408DC8DC (PspEnumJobsAndProcessesInJobHierarchy.c)
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
