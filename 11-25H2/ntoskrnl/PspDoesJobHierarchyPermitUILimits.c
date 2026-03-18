/*
 * XREFs of PspDoesJobHierarchyPermitUILimits @ 0x140A60890
 * Callers:
 *     PspAssignProcessToJob @ 0x140A0E960 (PspAssignProcessToJob.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408DC8DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

bool __fastcall PspDoesJobHierarchyPermitUILimits(__int64 a1, char a2)
{
  __int64 v2; // r8
  char v3; // bl

  v2 = *(_QWORD *)(a1 + 1304);
  v3 = 0;
  while ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 1552) & 0x10) != 0 )
      return v3;
    v2 = *(_QWORD *)(v2 + 1304);
  }
  return (a2 & 1) != 0
      || (int)PspEnumJobsAndProcessesInJobHierarchy(
                (char *)a1,
                (int)PspDoesJobHierarchyPermitUILimitsCallback,
                0,
                0,
                a1,
                1) >= 0;
}
