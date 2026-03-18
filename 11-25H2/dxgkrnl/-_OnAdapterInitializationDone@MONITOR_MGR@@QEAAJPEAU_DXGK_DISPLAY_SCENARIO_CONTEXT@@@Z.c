/*
 * XREFs of ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026DB9C
 * Callers:
 *     ?MonitorInitializeAdapterDone@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140267A74 (-MonitorInitializeAdapterDone@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026C3D4 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1403C6D30 (-DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_OnAdapterInitializationDone(
        MONITOR_MGR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  int EmergentSimulatedTarget; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ecx
  __int64 result; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  v6 = *((_QWORD *)this + 3);
  WdLogGlobalForLineNumber = 438;
  EmergentSimulatedTarget = DmmGetEmergentSimulatedTarget(*(void *const *)(v6 + 16), (unsigned int *)this + 22);
  v10 = *((_DWORD *)this + 22);
  if ( EmergentSimulatedTarget < 0 )
  {
    if ( v10 != -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 452;
    }
  }
  else if ( v10 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 448;
  }
  MONITOR_MGR::_CreateBootPersistentMonitors(this, a2, v8, v9);
  result = 0LL;
  *((_BYTE *)this + 21) = 1;
  return result;
}
