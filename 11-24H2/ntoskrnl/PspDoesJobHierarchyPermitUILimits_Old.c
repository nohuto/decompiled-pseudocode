/*
 * XREFs of PspDoesJobHierarchyPermitUILimits_Old @ 0x1407776D8
 * Callers:
 *     PspDoesJobHierarchyPermitUILimits @ 0x140AD10F4 (PspDoesJobHierarchyPermitUILimits.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408EBCAC (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

bool __fastcall PspDoesJobHierarchyPermitUILimits_Old(_QWORD *a1, char a2)
{
  __int64 v2; // r8
  char v3; // bl

  v2 = a1[163];
  v3 = 0;
  while ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 1552) & 0x10) != 0 )
      return v3;
    v2 = *(_QWORD *)(v2 + 1304);
  }
  return (a2 & 1) != 0 || (int)PspEnumJobsAndProcessesInJobHierarchy(a1, (__int64)a1, 1) >= 0;
}
