/*
 * XREFs of KiIntSteerAssignCpuSet @ 0x1405C1860
 * Callers:
 *     KeIntSteerAssignCpuSet @ 0x1405C1718 (KeIntSteerAssignCpuSet.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x1405C17B0 (KeIntSteerAssignCpuSetForGsiv.c)
 * Callees:
 *     KiIntSteerComputeCpuSet @ 0x1404A16C4 (KiIntSteerComputeCpuSet.c)
 *     KiIntSteerClearCpuSetAssignment @ 0x1405C1A5C (KiIntSteerClearCpuSetAssignment.c)
 */

__int64 __fastcall KiIntSteerAssignCpuSet(__int64 a1, __int16 a2, __int64 a3)
{
  int v4; // edx

  if ( *(_BYTE *)(a1 + 132) )
  {
    if ( *(_WORD *)(a1 + 72) == a2 )
    {
      if ( *(_QWORD *)(a1 + 136) == a3 )
      {
        return 0;
      }
      else
      {
        *(_QWORD *)(a1 + 136) = a3;
        v4 = KiIntSteerComputeCpuSet(a1);
        if ( v4 < 0 )
          KiIntSteerClearCpuSetAssignment(a1);
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v4;
}
