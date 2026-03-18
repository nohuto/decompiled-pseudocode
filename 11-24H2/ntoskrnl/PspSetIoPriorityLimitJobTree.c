/*
 * XREFs of PspSetIoPriorityLimitJobTree @ 0x140777DA4
 * Callers:
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408EBCAC (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

void __fastcall PspSetIoPriorityLimitJobTree(char *Object, int a2)
{
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v4) = 0;
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  if ( a2 != *((_DWORD *)Object + 272) )
  {
    *((_DWORD *)Object + 272) = a2;
    PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)&v4, 5);
  }
  ExReleaseResourceLite((PERESOURCE)(Object + 56));
}
