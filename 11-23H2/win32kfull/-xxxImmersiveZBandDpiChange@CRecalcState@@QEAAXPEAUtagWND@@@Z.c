/*
 * XREFs of ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1C02262B8
 * Callers:
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext@@@Z @ 0x1C005CDD8 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C005AE1C (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00A4B9C (UpdateMonitorForWindowAndChildren.c)
 *     xxxNotifyMonitorChanged @ 0x1C00A4DDC (xxxNotifyMonitorChanged.c)
 *     IsNonImmersiveBand @ 0x1C00AD39C (IsNonImmersiveBand.c)
 *     _MonitorFromRect @ 0x1C00AE960 (_MonitorFromRect.c)
 *     GetWindowDpiLastNotify @ 0x1C00EDCC0 (GetWindowDpiLastNotify.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddddddd @ 0x1C0226BC0 (WPP_RECORDER_AND_TRACE_SF_qddddddd.c)
 */

void __fastcall CRecalcState::xxxImmersiveZBandDpiChange(CRecalcState *this, struct tagWND *a2)
{
  int v3; // edx
  int v4; // r8d
  char v5; // bp
  __int64 v6; // rbx
  __int16 WindowDpiLastNotify; // ax
  __int16 v8; // r9
  char v9; // dl
  int v10; // r9d
  __int64 v11; // r10
  char v12; // dl
  char v13; // r8
  __int64 v14; // r11
  int v15; // edx
  int v16; // r9d
  void *v17; // r8
  __int64 v18; // [rsp+40h] [rbp-68h]
  int v19; // [rsp+48h] [rbp-60h]
  struct tagBWL *v20; // [rsp+B0h] [rbp+8h] BYREF

  v20 = this;
  if ( *((_QWORD *)a2 + 2) != gptiCurrent )
  {
    LODWORD(v20) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1009);
  }
  if ( IsNonImmersiveBand((__int64)a2) )
  {
    LODWORD(v20) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1010);
  }
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v3) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v3) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v4) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v4) = 0;
  }
  if ( (_BYTE)v3 || (_BYTE)v4 )
  {
    v18 = *(_QWORD *)a2;
    WPP_RECORDER_AND_TRACE_SF_qddddddd(WPP_GLOBAL_Control->AttachedDevice, v3, v4, (_DWORD)gFullLog);
  }
  v6 = MonitorFromRect(*((_QWORD *)a2 + 5) + 88LL, 0LL, *(unsigned int *)(*((_QWORD *)a2 + 5) + 288LL));
  if ( v6 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a2);
    if ( v8 != WindowDpiLastNotify )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v9 = 0;
      }
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = GetWindowDpiLastNotify((__int64)a2);
        LODWORD(v18) = v10;
        WPP_RECORDER_AND_TRACE_SF_dd(*(_QWORD *)(v11 + 24), v12, v13, (__int64)gFullLog, 4u, 7u, 0x23u, v14, v18, v19);
      }
      v20 = 0LL;
      if ( (unsigned int)UpdateMonitorForWindowAndChildren((struct tagWND **)a2, v6, (__int64 *)&v20, 0) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v15) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v5 = 0;
        }
        if ( (_BYTE)v15 || v5 )
        {
          v17 = &WPP_be08460427f83b68b58b8518e40b91a4_Traceguids;
          LOBYTE(v17) = v5;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v15,
            (_DWORD)v17,
            v16,
            5,
            7,
            36,
            (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
        }
        xxxNotifyMonitorChanged(a2, (struct tagRECT *)(*((_QWORD *)a2 + 5) + 88LL), v20, 0);
      }
    }
  }
}
