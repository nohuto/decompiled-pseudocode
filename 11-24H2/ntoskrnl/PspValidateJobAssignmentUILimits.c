/*
 * XREFs of PspValidateJobAssignmentUILimits @ 0x140AD119C
 * Callers:
 *     PspAssignProcessToJob @ 0x140A173D0 (PspAssignProcessToJob.c)
 * Callees:
 *     Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline @ 0x1405E57CC (Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x140AD10F4 (PspDoesJobHierarchyPermitUILimits.c)
 */

char __fastcall PspValidateJobAssignmentUILimits(__int64 a1, __int64 a2, int a3)
{
  int v6; // ecx

  if ( (unsigned int)Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a3 == 4 && (*(_DWORD *)(a1 + 1552) & 0x10) != 0 )
    {
      v6 = *(_DWORD *)(a1 + 1556) & 0x10;
      if ( (*(_DWORD *)(a2 + 1552) & 0x10) == 0 )
        return PspDoesJobHierarchyPermitUILimits((char *)a2, v6 != 0 ? 1 : 3);
      if ( !v6 )
        return (*(_DWORD *)(a2 + 1556) & 0x10) != 0;
      return 0;
    }
  }
  else if ( a3 == 4 && (*(_DWORD *)(a1 + 1552) & 0x10) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 1552) & 0x10) == 0 )
      return PspDoesJobHierarchyPermitUILimits((char *)a2, 1);
    return 0;
  }
  return 1;
}
