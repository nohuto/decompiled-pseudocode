/*
 * XREFs of PspDoesJobHierarchyPermitUILimits @ 0x140ACF180
 * Callers:
 *     PspSetUILimitJobObject @ 0x140778788 (PspSetUILimitJobObject.c)
 *     PspValidateJobAssignmentUILimits @ 0x140ACF1F8 (PspValidateJobAssignmentUILimits.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14085D4DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

bool __fastcall PspDoesJobHierarchyPermitUILimits(__int64 a1, char a2)
{
  __int64 v2; // r8
  char v3; // bl

  v2 = *(_QWORD *)(a1 + 1304);
  v3 = 0;
  while ( 1 )
  {
    if ( !v2 )
      return (a2 & 1) != 0
          || (int)PspEnumJobsAndProcessesInJobHierarchy(
                    (char *)a1,
                    (int)PspDoesJobHierarchyPermitUILimitsCallback,
                    0,
                    0,
                    a1,
                    1) >= 0;
    if ( (*(_DWORD *)(v2 + 1552) & 0x10) != 0 )
      break;
    v2 = *(_QWORD *)(v2 + 1304);
  }
  if ( (a2 & 2) != 0 && (*(_DWORD *)(v2 + 1556) & 0x10) != 0 )
    return (a2 & 1) != 0
        || (int)PspEnumJobsAndProcessesInJobHierarchy(
                  (char *)a1,
                  (int)PspDoesJobHierarchyPermitUILimitsCallback,
                  0,
                  0,
                  a1,
                  1) >= 0;
  return v3;
}
