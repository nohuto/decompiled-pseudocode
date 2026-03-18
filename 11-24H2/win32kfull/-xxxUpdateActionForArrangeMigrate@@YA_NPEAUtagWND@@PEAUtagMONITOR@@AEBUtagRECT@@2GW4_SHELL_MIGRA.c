/*
 * XREFs of ?xxxUpdateActionForArrangeMigrate@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x1402D15D4
 * Callers:
 *     ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402CEA84 (-xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@P.c)
 *     ?xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEAK@Z @ 0x1402CF4B8 (-xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@P.c)
 *     ?xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402D1294 (-xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?MaxStateFromAwpState@@YA?AW4_WINDOW_PLACEMENT_STATE@@W4State@AdvancedWindowPos@@@Z @ 0x1402C9DE4 (-MaxStateFromAwpState@@YA-AW4_WINDOW_PLACEMENT_STATE@@W4State@AdvancedWindowPos@@@Z.c)
 *     ?xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAW4State@AdvancedWindowPos@@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x1402D0DE8 (-xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_.c)
 */

bool __fastcall xxxUpdateActionForArrangeMigrate(
        struct tagRECT *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        unsigned __int16 a5,
        int a6,
        struct tagRECT *a7,
        int *a8,
        _DWORD *a9)
{
  struct tagRECT v9; // xmm0
  bool result; // al
  int v11; // eax
  int v12[4]; // [rsp+50h] [rbp-28h] BYREF
  struct tagRECT v13; // [rsp+60h] [rbp-18h] BYREF

  v9 = *a7;
  v12[0] = 3;
  v13 = v9;
  result = xxxMigrateArrangedRect(a1, a2, a3, a4, a5, a6, &v13, v12, a8, a9);
  if ( result )
  {
    v11 = MaxStateFromAwpState(v12[0]);
    if ( a6 == 2 )
    {
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          a9[1] |= 0x40u;
        }
        else if ( v11 == 3 )
        {
          a9[1] |= 0x80u;
        }
        else
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2096);
        }
      }
      else
      {
        a9[1] |= 0x20u;
      }
    }
    else
    {
      *a9 |= 0x20u;
      a9[10] = v11;
    }
    return 1;
  }
  return result;
}
