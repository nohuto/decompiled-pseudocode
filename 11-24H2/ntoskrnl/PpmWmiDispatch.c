/*
 * XREFs of PpmWmiDispatch @ 0x1409B37E0
 * Callers:
 *     WmipForwardWmiIrp @ 0x1409B3294 (WmipForwardWmiIrp.c)
 * Callees:
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     PpmWmiRegisterInfo @ 0x14075B2B4 (PpmWmiRegisterInfo.c)
 *     PpmWmiGetAllData @ 0x1409B38B0 (PpmWmiGetAllData.c)
 */

NTSTATUS __fastcall PpmWmiDispatch(int a1, __int64 *a2, unsigned int a3, _DWORD *a4, __int64 a5, int *a6)
{
  char v6; // bl
  char v7; // r10
  NTSTATUS result; // eax
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx

  v6 = 0;
  v7 = 0;
  if ( a1 > 5 )
  {
    if ( a1 == 8 )
    {
      result = PpmWmiRegisterInfo(*(_DWORD *)(a5 - 35076), (__int64)a2, a3, a4, a6);
LABEL_6:
      if ( result < 0 )
        return result;
      return 0;
    }
    goto LABEL_46;
  }
  if ( a1 != 5 )
  {
    if ( !a1 )
    {
      v7 = 1;
LABEL_5:
      result = PpmWmiGetAllData((int)a5 - 232, (_DWORD)a2, a3, (_DWORD)a4, (__int64)a6, v7);
      goto LABEL_6;
    }
    v9 = a1 - 1;
    if ( !v9 )
      goto LABEL_5;
    if ( v9 == 3 )
    {
      v6 = 1;
      goto LABEL_12;
    }
LABEL_46:
    *a6 = 0;
    return -1073741808;
  }
LABEL_12:
  *a6 = 0;
  v10 = *a2;
  v11 = *(_QWORD *)&PPM_PERFSTATE_CHANGE_GUID.Data1 - *a2;
  if ( *(_QWORD *)&PPM_PERFSTATE_CHANGE_GUID.Data1 == *a2 )
    v11 = *(_QWORD *)PPM_PERFSTATE_CHANGE_GUID.Data4 - a2[1];
  if ( v11 )
  {
    v13 = *(_QWORD *)&PPM_PERFSTATE_DOMAIN_CHANGE_GUID.Data1 - v10;
    if ( *(_QWORD *)&PPM_PERFSTATE_DOMAIN_CHANGE_GUID.Data1 == v10 )
      v13 = *(_QWORD *)PPM_PERFSTATE_DOMAIN_CHANGE_GUID.Data4 - a2[1];
    if ( v13 )
    {
      v14 = *(_QWORD *)&PPM_IDLESTATE_CHANGE_GUID.Data1 - v10;
      if ( *(_QWORD *)&PPM_IDLESTATE_CHANGE_GUID.Data1 == v10 )
        v14 = *(_QWORD *)PPM_IDLESTATE_CHANGE_GUID.Data4 - a2[1];
      if ( v14 )
      {
        v15 = *(_QWORD *)&PPM_IDLE_ACCOUNTING_EX_GUID.Data1 - v10;
        if ( *(_QWORD *)&PPM_IDLE_ACCOUNTING_EX_GUID.Data1 == v10 )
          v15 = *(_QWORD *)PPM_IDLE_ACCOUNTING_EX_GUID.Data4 - a2[1];
        if ( v15 )
        {
          v16 = *(_QWORD *)&PPM_THERMALCONSTRAINT_GUID.Data1 - v10;
          if ( *(_QWORD *)&PPM_THERMALCONSTRAINT_GUID.Data1 == v10 )
            v16 = *(_QWORD *)PPM_THERMALCONSTRAINT_GUID.Data4 - a2[1];
          if ( v16 )
          {
            v17 = *(_QWORD *)&PPM_THERMAL_POLICY_CHANGE_GUID.Data1 - v10;
            if ( *(_QWORD *)&PPM_THERMAL_POLICY_CHANGE_GUID.Data1 == v10 )
              v17 = *(_QWORD *)PPM_THERMAL_POLICY_CHANGE_GUID.Data4 - a2[1];
            if ( v17 )
              return -1073741163;
            v12 = &WmiThermalPolicyEventEnabled;
          }
          else
          {
            v12 = &WmiThermalEventEnabled;
          }
        }
        else
        {
          v12 = (volatile signed __int32 *)&WmiIdleAccntEventEnabled;
        }
      }
      else
      {
        v12 = (volatile signed __int32 *)&WmiIdleStateEventEnabled;
      }
    }
    else
    {
      v12 = &WmiPerfStateDomainEventEnabled;
    }
  }
  else
  {
    v12 = &WmiPerfStateEventEnabled;
  }
  if ( v6 )
  {
    if ( _InterlockedIncrement(v12) == 1 && v12 == (volatile signed __int32 *)&WmiIdleAccntEventEnabled )
      KiSetTimerEx((__int64)&PpmWmiIdleAccountingTimer, 0LL, 10000, 0, (__int64)&PpmWmiIdleAccountingDpc);
  }
  else if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 && v12 == (volatile signed __int32 *)&WmiIdleAccntEventEnabled )
  {
    KeCancelTimer(&PpmWmiIdleAccountingTimer);
  }
  return 0;
}
