/*
 * XREFs of PspSetPagePriorityLimitJobTree @ 0x1407784F0
 * Callers:
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408EBCAC (PspEnumJobsAndProcessesInJobHierarchy.c)
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
