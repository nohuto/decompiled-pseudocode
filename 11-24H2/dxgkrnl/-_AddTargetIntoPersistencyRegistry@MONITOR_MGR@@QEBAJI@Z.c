/*
 * XREFs of ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x14027310C
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140273C7C (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACC.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@@Z @ 0x140274970 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x140274BAC (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x140274E90 (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

int __fastcall MONITOR_MGR::_AddTargetIntoPersistencyRegistry(MONITOR_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  MONITOR_MGR *v6; // rcx
  unsigned int v7; // edx
  int result; // eax
  const WCHAR *v9; // rdx
  NTSTATUS v10; // eax
  NTSTATUS v11; // ebx
  unsigned int ValueData; // [rsp+30h] [rbp-9h] BYREF
  PCWSTR Path; // [rsp+38h] [rbp-1h] BYREF
  WCHAR ValueName[32]; // [rsp+40h] [rbp+7h] BYREF

  ValueData = a2;
  v5 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v6 = (MONITOR_MGR *)ValueData;
  *(_QWORD *)(v5 + 24) = ValueData;
  v7 = ValueData;
  WdLogGlobalForLineNumber = 4037;
  if ( ValueData == -1 )
  {
    WdLogSingleEntry0(1LL);
    v7 = -1;
    WdLogGlobalForLineNumber = 4041;
  }
  result = MONITOR_MGR::_PersistencyRegNameFromTargetID(v6, v7, ValueName);
  if ( result >= 0 )
  {
    Path = 0LL;
    result = MONITOR_MGR::_OpenPersistencyRegistry(this, 0x20006u, (void **)&Path);
    if ( result >= 0 )
    {
      v9 = Path;
      if ( !Path )
      {
        WdLogSingleEntry0(1LL);
        v9 = Path;
        WdLogGlobalForLineNumber = 4069;
      }
      v10 = RtlWriteRegistryValue(0x40000000u, v9, ValueName, 4u, &ValueData, 4u);
      v11 = v10;
      if ( v10 < 0 )
      {
        WdLogSingleEntry2(2LL, ValueData, v10);
        WdLogGlobalForLineNumber = 4079;
      }
      ZwClose((HANDLE)Path);
      return v11;
    }
  }
  return result;
}
