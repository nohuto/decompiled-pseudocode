/*
 * XREFs of ?xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C005C250
 * Callers:
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext@@@Z @ 0x1C005CDD8 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C005BEB4 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@W4MigrateWindowOptions@@PEAK@Z @ 0x1C005C088 (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     ?GetMigrateMonitor@CRecalcState@@AEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C005C524 (-GetMigrateMonitor@CRecalcState@@AEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x1C005E700 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00EEC50 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

void __fastcall CRecalcState::xxxMigrate(CRecalcState *this, struct tagWND *a2, struct CRecalcContext *a3)
{
  char v6; // bl
  char v7; // dl
  int v8; // r15d
  struct tagMONITOR *MigrateMonitor; // r12
  char v10; // bp
  int v11; // eax
  int v12; // edx
  int v13; // r8d
  char v14; // al
  int v15; // edx
  int v16; // r9d
  void *v17; // r8

  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v7 = 0;
  }
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      7u,
      0x31u,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
      *(_QWORD *)a2,
      *(_DWORD *)(*((_QWORD *)this + 2) + 4LL));
  v8 = -(*(_BYTE *)a3 != 0);
  MigrateMonitor = CRecalcState::GetMigrateMonitor(this, a2, a3);
  if ( MigrateMonitor )
  {
    v10 = 0;
    if ( (gdwPUDFlags & 0x10000) != 0 && *((_DWORD *)this + 16) == 2 && *((_BYTE *)a3 + 40) )
    {
      v11 = CMonitorTopology::CompareToCurrent(*((_QWORD *)this + 2), 0LL);
      if ( v11 == 16 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v12) = 0;
        }
        if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v12,
            v13,
            (unsigned int)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
            4,
            7,
            50,
            (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
        }
        *((_DWORD *)a2 + 80) |= 0x40000000u;
        v10 = 1;
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v12) = 0;
        }
        if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v12,
            v13,
            (_DWORD)gFullLog,
            4,
            7,
            51,
            (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
            v11);
        }
      }
    }
    v14 = AdvancedWindowPos::xxxMigrateWindow(
            a2,
            (__int64)MigrateMonitor,
            *((_QWORD *)this + 2),
            (unsigned __int8)v8 + 2,
            (int *)a3 + 2);
    if ( v10 )
      *((_DWORD *)a2 + 80) &= ~0x40000000u;
    if ( (v14 & 1) != 0 )
    {
      *((_BYTE *)a3 + 12) = 1;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v15) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v6 = 0;
      if ( (_BYTE)v15 || v6 )
      {
        v17 = &WPP_be08460427f83b68b58b8518e40b91a4_Traceguids;
        LOBYTE(v17) = v6;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v15,
          (_DWORD)v17,
          v16,
          5,
          7,
          52,
          (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
      }
    }
    *((_DWORD *)a3 + 1) = 4;
  }
}
