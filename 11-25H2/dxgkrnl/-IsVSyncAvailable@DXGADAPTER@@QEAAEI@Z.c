/*
 * XREFs of ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x14032A060
 * Callers:
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x140078268 (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 *     DxgkModifyVSyncWaiterInternal @ 0x1401AB5F0 (DxgkModifyVSyncWaiterInternal.c)
 *     DxgkOpenVerticalBlankEventInternal @ 0x1401AC9B0 (DxgkOpenVerticalBlankEventInternal.c)
 *     ?DmmCheckMonitorPowerState@@YAJPEAXI@Z @ 0x140250C5C (-DmmCheckMonitorPowerState@@YAJPEAXI@Z.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402AF120 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x140329108 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14032973C (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     DxgkCheckMonitorPowerState @ 0x14040F790 (DxgkCheckMonitorPowerState.c)
 *     DxgkDispMgrSourceOperation @ 0x14041A4C0 (DxgkDispMgrSourceOperation.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

bool __fastcall DXGADAPTER::IsVSyncAvailable(DXGADAPTER *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx

  v2 = a2;
  if ( !*((_QWORD *)this + 390) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10513;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsDisplayAdapter()", 10513LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = *((_QWORD *)this + 390);
  if ( !v4 )
    return 0;
  if ( (unsigned int)v2 >= *(_DWORD *)(v4 + 96) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6425;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      6425LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return *(_BYTE *)(3984 * v2 + *(_QWORD *)(v4 + 128) + 760) != 0;
}
