/*
 * XREFs of PspDoesJobHierarchyPermitUILimits @ 0x140AD10F4
 * Callers:
 *     PspSetUILimitJobObject @ 0x1407785C8 (PspSetUILimitJobObject.c)
 *     PspValidateJobAssignmentUILimits @ 0x140AD119C (PspValidateJobAssignmentUILimits.c)
 * Callees:
 *     Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline @ 0x1405E57CC (Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline.c)
 *     PspDoesJobHierarchyPermitUILimits_Old @ 0x1407776D8 (PspDoesJobHierarchyPermitUILimits_Old.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408EBCAC (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

bool __fastcall PspDoesJobHierarchyPermitUILimits(char *a1, char a2)
{
  char v4; // bl
  __int64 i; // rcx

  v4 = 0;
  if ( !(unsigned int)Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline() )
    return PspDoesJobHierarchyPermitUILimits_Old(a1, a2);
  for ( i = *((_QWORD *)a1 + 163); ; i = *(_QWORD *)(i + 1304) )
  {
    if ( !i )
      return (a2 & 1) != 0
          || (int)PspEnumJobsAndProcessesInJobHierarchy(
                    a1,
                    (int)PspDoesJobHierarchyPermitUILimitsCallback,
                    0,
                    0,
                    (__int64)a1,
                    1) >= 0;
    if ( (*(_DWORD *)(i + 1552) & 0x10) != 0 )
      break;
  }
  if ( (a2 & 2) != 0 && (*(_DWORD *)(i + 1556) & 0x10) != 0 )
    return (a2 & 1) != 0
        || (int)PspEnumJobsAndProcessesInJobHierarchy(
                  a1,
                  (int)PspDoesJobHierarchyPermitUILimitsCallback,
                  0,
                  0,
                  (__int64)a1,
                  1) >= 0;
  return v4;
}
