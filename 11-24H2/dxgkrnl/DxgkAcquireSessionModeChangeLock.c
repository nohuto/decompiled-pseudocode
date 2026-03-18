/*
 * XREFs of DxgkAcquireSessionModeChangeLock @ 0x140293650
 * Callers:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1400395DC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DxgkGetVirtualRefreshRateInfo @ 0x140291AD0 (DxgkGetVirtualRefreshRateInfo.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x140292040 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x140296DA0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 *     DxgkUpdateGdiInfo @ 0x14030D570 (DxgkUpdateGdiInfo.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x14031CB7C (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     DxgkGetDpiOverrideForSource @ 0x14033B0B0 (DxgkGetDpiOverrideForSource.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x140344ACC (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     DxgkDisplayOnOff @ 0x140345280 (DxgkDisplayOnOff.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x140345CB0 (DxgkUseAdapterViewInCurrentSession.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140347618 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1403C17B4 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1403C5760 (DxgkDisplayConfigDeviceInfo.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140409620 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     DxgkGetAdapterDeviceDesc @ 0x140412B00 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkGetDisplayModeList @ 0x140415680 (DxgkGetDisplayModeList.c)
 *     DpiGdoDispatchInternalIoctl @ 0x14042BEA0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140012FC0 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall DxgkAcquireSessionModeChangeLock(char a1)
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v9; // eax

  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    v4 = (volatile signed __int32 *)((char *)SessionData + 18552);
    if ( a1 )
    {
      DXGPUSHLOCK::AcquireExclusive((struct DXGSESSIONDATA *)((char *)SessionData + 18552));
    }
    else
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v4, 0LL) )
      {
        DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)v4, v5, v6);
        ExAcquirePushLockSharedEx(v4, 0LL);
      }
      _InterlockedIncrement(v4 + 4);
    }
    return 0LL;
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 433;
    v9 = PsGetCurrentProcessSessionId();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v9,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
