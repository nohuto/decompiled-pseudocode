/*
 * XREFs of PspValidateJobAssignmentUILimits @ 0x140ACF1F8
 * Callers:
 *     PspAssignProcessToJob @ 0x140A105B0 (PspAssignProcessToJob.c)
 * Callees:
 *     PspDoesJobHierarchyPermitUILimits @ 0x140ACF180 (PspDoesJobHierarchyPermitUILimits.c)
 */

char __fastcall PspValidateJobAssignmentUILimits(__int64 a1, __int64 a2, int a3)
{
  int v3; // ecx

  if ( a3 != 4 || (*(_DWORD *)(a1 + 1552) & 0x10) == 0 )
    return 1;
  v3 = *(_DWORD *)(a1 + 1556) & 0x10;
  if ( (*(_DWORD *)(a2 + 1552) & 0x10) == 0 )
    return PspDoesJobHierarchyPermitUILimits(a2, v3 != 0 ? 1 : 3);
  if ( v3 )
    return 0;
  return (*(_DWORD *)(a2 + 1556) & 0x10) != 0;
}
