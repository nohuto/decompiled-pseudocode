/*
 * XREFs of ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x14038F25C
 * Callers:
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1401894F8 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14034F110 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x14038E710 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14038EFEC (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     DxgkGetDisplayModeList @ 0x140415680 (DxgkGetDisplayModeList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgIsRemoteSessionUsingWddmMonitors(__int64 a1)
{
  struct DXGPROCESS *Current; // rax
  __int64 v2; // rax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
    return 0LL;
  v2 = *((_QWORD *)Current + 11);
  if ( !v2 )
    return 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *))(v2 + 240))(0LL, 0LL, &v4);
  return v4;
}
