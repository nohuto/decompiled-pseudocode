/*
 * XREFs of ?DmmGetVidPnTargetPowerComponentIndex@@YAJQEAXIPEAI@Z @ 0x140189200
 * Callers:
 *     ?TakePowerReference@TARGET_POWER_REFERENCE@@QEAAXQEAXU_DISPLAYCONFIG_DISPLAYMUX_TARGET@@@Z @ 0x1400885DC (-TakePowerReference@TARGET_POWER_REFERENCE@@QEAAXQEAXU_DISPLAYCONFIG_DISPLAYMUX_TARGET@@@Z.c)
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1403CC928 (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetPowerComponentIndex@VIDPN_MGR@@QEAAJIPEAI@Z @ 0x14025AA40 (-GetTargetPowerComponentIndex@VIDPN_MGR@@QEAAJIPEAI@Z.c)
 */

__int64 __fastcall DmmGetVidPnTargetPowerComponentIndex(_QWORD *a1, unsigned int a2, unsigned int *a3)
{
  __int64 result; // rax
  __int64 v7; // rax
  VIDPN_MGR *v8; // rdi
  unsigned int TargetPowerComponentIndex; // ebx
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  if ( !a3 )
  {
    WdLogSingleEntry0(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 9090;
    return result;
  }
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 9103;
    return 3223191554LL;
  }
  v7 = a1[390];
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 9117;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v8 = *(VIDPN_MGR **)(v7 + 104);
  if ( v8 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v10, *(_QWORD *)(v7 + 104));
    TargetPowerComponentIndex = VIDPN_MGR::GetTargetPowerComponentIndex(v8, a2, a3);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v10 + 40));
    return TargetPowerComponentIndex;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 9131;
  }
  return result;
}
