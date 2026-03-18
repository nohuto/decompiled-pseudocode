/*
 * XREFs of ?GetMonitorFromId@CMonitorTopology@@SAPEAUtagMONITOR@@AEBUMonitorId@1@@Z @ 0x1C005C6BC
 * Callers:
 *     ?GetMigrateMonitor@CRecalcState@@AEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C005C524 (-GetMigrateMonitor@CRecalcState@@AEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     ?MinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEBVCRecalcContext@@@Z @ 0x1C0135468 (-MinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEBVC.c)
 *     ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1C0225EB0 (-xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x1C023C82C (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     AreHashesEqual @ 0x1C005E828 (AreHashesEqual.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagMONITOR *__fastcall CMonitorTopology::GetMonitorFromId(
        const struct CMonitorTopology::MonitorId *a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  CMonitorTopology *v5; // rdi
  __int64 v6; // rbp
  unsigned int v7; // esi
  bool v9; // bl
  int v10; // edx

  if ( *((_BYTE *)a1 + 21) )
  {
    v5 = qword_1C035E320;
    v6 = 0LL;
    v7 = 0;
    if ( *((_DWORD *)qword_1C035E320 + 2) )
    {
      while ( !(unsigned __int8)AreHashesEqual((char *)v5 + 72 * v7 + 60, a1, a3) )
      {
        v5 = qword_1C035E320;
        if ( ++v7 >= *((_DWORD *)qword_1C035E320 + 2) )
          return (struct tagMONITOR *)v6;
      }
      v6 = ValidateHmonitor(*((_QWORD *)v5 + 9 * v7 + 2));
      if ( !v6 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 264LL);
    }
    return (struct tagMONITOR *)v6;
  }
  else
  {
    v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 14;
      LOBYTE(v10) = v9;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        a3,
        a4,
        3,
        7,
        14,
        (__int64)&WPP_b503bcdc7a733346aed43161a8297e0b_Traceguids);
    }
    return 0LL;
  }
}
