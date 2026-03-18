/*
 * XREFs of ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1402738DC
 * Callers:
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140274608 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@@Z @ 0x140274970 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x140274BAC (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x140274E90 (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

int __fastcall MONITOR_MGR::_DeleteTargetFromPersistencyRegistry(MONITOR_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rdi
  MONITOR_MGR *v7; // rcx
  int result; // eax
  const WCHAR *v9; // rdx
  NTSTATUS v10; // eax
  NTSTATUS v11; // ebx
  PCWSTR Path; // [rsp+20h] [rbp-68h] BYREF
  WCHAR ValueName[32]; // [rsp+30h] [rbp-58h] BYREF

  v4 = a2;
  v6 = (unsigned int)a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = (unsigned int)a2;
  WdLogGlobalForLineNumber = 4114;
  if ( v4 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4118;
  }
  result = MONITOR_MGR::_PersistencyRegNameFromTargetID(v7, v4, ValueName);
  if ( result >= 0 )
  {
    Path = 0LL;
    result = MONITOR_MGR::_OpenPersistencyRegistry(this, 0xF003Fu, (void **)&Path);
    if ( result >= 0 )
    {
      v9 = Path;
      if ( !Path )
      {
        WdLogSingleEntry0(1LL);
        v9 = Path;
        WdLogGlobalForLineNumber = 4146;
      }
      v10 = RtlDeleteRegistryValue(0x40000000u, v9, ValueName);
      v11 = v10;
      if ( v10 < 0 )
      {
        WdLogSingleEntry2(2LL, v6, v10);
        WdLogGlobalForLineNumber = 4157;
      }
      ZwClose((HANDLE)Path);
      return v11;
    }
  }
  return result;
}
