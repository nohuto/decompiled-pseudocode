/*
 * XREFs of PepDevicePowerControlCallback @ 0x140003EB0
 * Callers:
 *     <none>
 * Callees:
 *     PepPlatformIdleVeto @ 0x140003FFC (PepPlatformIdleVeto.c)
 *     PepUpdatePerformanceConstraint @ 0x140006288 (PepUpdatePerformanceConstraint.c)
 *     PepProcessorIdleVeto @ 0x14000E7D4 (PepProcessorIdleVeto.c)
 *     PepUpdateIdleState @ 0x14000E87C (PepUpdateIdleState.c)
 *     PepUpdatePlatformState @ 0x14000E9A0 (PepUpdatePlatformState.c)
 *     PepGetParkingPageInfo @ 0x14003C238 (PepGetParkingPageInfo.c)
 */

__int64 __fastcall PepDevicePowerControlCallback(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  *a7 = 0LL;
  v7 = *a2 - *(_QWORD *)&GUID_PPM_PERF_CONSTRAINT_CHANGE.Data1;
  if ( *a2 == *(_QWORD *)&GUID_PPM_PERF_CONSTRAINT_CHANGE.Data1 )
    v7 = a2[1] - *(_QWORD *)GUID_PPM_PERF_CONSTRAINT_CHANGE.Data4;
  if ( !v7 )
    return PepUpdatePerformanceConstraint();
  v8 = *a2 - PEP_PPM_POWER_CONTROL_QUERY_PARKING_PAGE;
  if ( *a2 == PEP_PPM_POWER_CONTROL_QUERY_PARKING_PAGE )
    v8 = a2[1] + 0xC20B498CB535555LL;
  if ( v8 )
  {
    v9 = *a2 - *(_QWORD *)&GUID_PROCESSOR_IDLE_VETO.Data1;
    if ( *a2 == *(_QWORD *)&GUID_PROCESSOR_IDLE_VETO.Data1 )
      v9 = a2[1] - *(_QWORD *)GUID_PROCESSOR_IDLE_VETO.Data4;
    if ( v9 )
    {
      v10 = *a2 - *(_QWORD *)&GUID_PLATFORM_IDLE_VETO.Data1;
      if ( *a2 == *(_QWORD *)&GUID_PLATFORM_IDLE_VETO.Data1 )
        v10 = a2[1] - *(_QWORD *)GUID_PLATFORM_IDLE_VETO.Data4;
      if ( v10 )
      {
        v12 = *a2 - *(_QWORD *)&GUID_PROCESSOR_IDLE_UPDATE.Data1;
        if ( *a2 == *(_QWORD *)&GUID_PROCESSOR_IDLE_UPDATE.Data1 )
          v12 = a2[1] - *(_QWORD *)GUID_PROCESSOR_IDLE_UPDATE.Data4;
        if ( v12 )
        {
          v13 = *a2 - *(_QWORD *)&GUID_PLATFORM_IDLE_UPDATE.Data1;
          if ( *a2 == *(_QWORD *)&GUID_PLATFORM_IDLE_UPDATE.Data1 )
            v13 = a2[1] - *(_QWORD *)GUID_PLATFORM_IDLE_UPDATE.Data4;
          if ( v13 )
            return 3221225659LL;
          if ( a4 >= 0xC )
            return PepUpdatePlatformState(a1, a3);
        }
        else if ( a4 >= 0xC )
        {
          return PepUpdateIdleState(a1, a3);
        }
      }
      else if ( a4 >= 0xC )
      {
        return PepPlatformIdleVeto(a1, a3);
      }
    }
    else if ( a4 >= 0xC )
    {
      return PepProcessorIdleVeto(a1, a3);
    }
    return 3221225507LL;
  }
  else if ( a6 >= 0x10 )
  {
    result = PepGetParkingPageInfo(a1, a5);
    if ( (int)result < 0 )
      *a7 = 0LL;
  }
  else
  {
    *a7 = 16LL;
    return 3221225626LL;
  }
  return result;
}
