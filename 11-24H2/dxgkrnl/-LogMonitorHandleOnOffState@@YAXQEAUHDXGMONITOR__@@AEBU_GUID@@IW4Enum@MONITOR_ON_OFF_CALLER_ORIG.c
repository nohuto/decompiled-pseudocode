/*
 * XREFs of ?LogMonitorHandleOnOffState@@YAXQEAUHDXGMONITOR__@@AEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1403C3878
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14037C6F0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140032A4C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1403C3B90 (-LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 */

void __fastcall LogMonitorHandleOnOffState(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // [rsp+50h] [rbp-28h] BYREF
  _BYTE v8[24]; // [rsp+58h] [rbp-20h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorExclusive(&v7, a1);
    v6 = v7;
    if ( v7 )
    {
      LOBYTE(v5) = 1;
      DXGMONITOR::LogMonitorObjectOnOffState(v7, a2, a3, v5);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 6504;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"LogMonitorOnOffState failed _GetMonitorFromHandle",
        6504LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v6 )
    {
      ExReleaseResourceLite((PERESOURCE)(v6 + 40));
      KeLeaveCriticalRegion();
      v7 = 0LL;
    }
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v8);
    if ( v7 )
    {
      ExReleaseResourceLite((PERESOURCE)(v7 + 40));
      KeLeaveCriticalRegion();
    }
  }
}
