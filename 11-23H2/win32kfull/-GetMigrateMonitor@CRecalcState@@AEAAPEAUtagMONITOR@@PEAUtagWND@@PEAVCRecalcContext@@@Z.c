/*
 * XREFs of ?GetMigrateMonitor@CRecalcState@@AEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C005C524
 * Callers:
 *     ?xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C005C250 (-xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetMonitorFromId@CMonitorTopology@@SAPEAUtagMONITOR@@AEBUMonitorId@1@@Z @ 0x1C005C6BC (-GetMonitorFromId@CMonitorTopology@@SAPEAUtagMONITOR@@AEBUMonitorId@1@@Z.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x1C005DF34 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     ?MinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEBVCRecalcContext@@@Z @ 0x1C0135468 (-MinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEBVC.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagMONITOR *__fastcall CRecalcState::GetMigrateMonitor(
        CRecalcState *this,
        struct tagWND *a2,
        struct CRecalcContext *a3)
{
  __int64 v6; // rdx
  CMonitorTopology *v7; // rcx
  bool v8; // zf
  struct tagRECT *v9; // rax
  struct tagRECT *v10; // rdx
  const struct CMonitorTopology::MonitorData *v11; // rax
  __int64 v12; // r9
  const struct CMonitorTopology::MonitorData *v13; // r13
  struct tagMONITOR *result; // rax
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  char v18; // bl
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // r9d
  PDEVICE_OBJECT v22; // rcx
  char v23; // bl
  struct tagRECT v24; // [rsp+50h] [rbp-38h] BYREF

  if ( !*((_QWORD *)this + 9) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1165LL);
  v6 = *((_QWORD *)a2 + 5);
  v7 = (CMonitorTopology *)*((_QWORD *)this + 2);
  v8 = (*(_BYTE *)(v6 + 31) & 0x20) == 0;
  v9 = (struct tagRECT *)(v6 + 88);
  v10 = (struct tagRECT *)((char *)this + 44);
  if ( v8 )
    v10 = v9;
  v24 = *v10;
  v11 = CMonitorTopology::MonitorDataFromRect(v7, a2, &v24);
  v13 = v11;
  if ( !v11 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (v23 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v23 = 0;
    }
    if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v23,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        v12,
        2u,
        7u,
        0x2Eu,
        (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
        *(_QWORD *)a2);
    *((_DWORD *)a3 + 1) = 2;
    return 0LL;
  }
  result = CMonitorTopology::GetMonitorFromId((const struct CMonitorTopology::MonitorData *)((char *)v11 + 44));
  if ( result )
    return result;
  v18 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v15) = 0;
  }
  if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v15,
      v16,
      v17,
      4,
      7,
      47,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
  }
  if ( CRecalcState::MinimizeOnMonitorRemove(this, a2, v13, a3) )
  {
    *((_DWORD *)a3 + 1) = 3;
    return 0LL;
  }
  v22 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v18 = 0;
  }
  LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v19) = v18;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v19,
      v20,
      v21,
      4,
      7,
      48,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
  }
  return *(struct tagMONITOR **)(GetDispInfo(v22, v19, v20) + 96);
}
