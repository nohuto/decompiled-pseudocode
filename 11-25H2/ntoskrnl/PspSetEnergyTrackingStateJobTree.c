/*
 * XREFs of PspSetEnergyTrackingStateJobTree @ 0x1408DAC64
 * Callers:
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PspIsContextAdmin @ 0x1408D9DA4 (PspIsContextAdmin.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408DC8DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspSetEnergyTrackingStateJobTree(char *Object, _DWORD *a2)
{
  if ( (*a2 & 0xFFFFFFF3) != 0 || (~*a2 & a2[1]) != 0 )
    return 3221225485LL;
  if ( !PspIsContextAdmin() )
    return 3221225506LL;
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  *((_QWORD *)Object + 226) = *(_QWORD *)a2;
  PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)a2, 5);
  ExReleaseResourceLite((PERESOURCE)(Object + 56));
  return 0LL;
}
