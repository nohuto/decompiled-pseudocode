/*
 * XREFs of ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x14030C710
 * Callers:
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x140078A58 (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 *     DxgkModifyVSyncWaiterInternal @ 0x1401ADA80 (DxgkModifyVSyncWaiterInternal.c)
 *     DxgkOpenVerticalBlankEventInternal @ 0x1401AEE90 (DxgkOpenVerticalBlankEventInternal.c)
 *     ?DmmCheckMonitorPowerState@@YAJPEAXI@Z @ 0x140257A94 (-DmmCheckMonitorPowerState@@YAJPEAXI@Z.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402BCA10 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x14030B7B8 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14030BDEC (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     DxgkCheckMonitorPowerState @ 0x140408DE0 (DxgkCheckMonitorPowerState.c)
 *     DxgkDispMgrSourceOperation @ 0x140414C50 (DxgkDispMgrSourceOperation.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

bool __fastcall DXGADAPTER::IsVSyncAvailable(DXGADAPTER *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx

  v2 = a2;
  if ( !*((_QWORD *)this + 390) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10618;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsDisplayAdapter()", 10618LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = *((_QWORD *)this + 390);
  if ( !v4 )
    return 0;
  if ( (unsigned int)v2 >= *(_DWORD *)(v4 + 96) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6448;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      6448LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return *(_BYTE *)(4024 * v2 + *(_QWORD *)(v4 + 128) + 760) != 0;
}
