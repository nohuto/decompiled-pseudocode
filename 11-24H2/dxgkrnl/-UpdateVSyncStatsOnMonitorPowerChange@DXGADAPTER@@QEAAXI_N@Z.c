/*
 * XREFs of ?UpdateVSyncStatsOnMonitorPowerChange@DXGADAPTER@@QEAAXI_N@Z @ 0x140058838
 * Callers:
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1402903F4 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?MonitorPowerStateChange@VSYNC_TIME_STATS@@QEAAXW4VSYNC_TIME_STATS_TYPE@@@Z @ 0x140058908 (-MonitorPowerStateChange@VSYNC_TIME_STATS@@QEAAXW4VSYNC_TIME_STATS_TYPE@@@Z.c)
 */

void __fastcall DXGADAPTER::UpdateVSyncStatsOnMonitorPowerChange(DXGADAPTER *this, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v3; // eax
  char v5; // di
  __int64 v6; // rdx
  __int64 v7; // r8

  v3 = *((_DWORD *)this + 464);
  if ( a2 < v3 )
  {
    VSYNC_TIME_STATS::MonitorPowerStateChange(
      *((_QWORD *)this + 551) + 112LL * ((*((_DWORD *)this + 744) & 0x10) != 0 ? a2 : 0),
      (a3 ^ 1u) + 1);
  }
  else
  {
    v5 = a2;
    WdLogSingleEntry2(2LL, a2, v3);
    WdLogGlobalForLineNumber = 2521;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          0LL,
          v6,
          v7,
          0LL,
          0,
          -1,
          L"Invalid VidPnSourceId:%u. Should be less than :%u",
          v5,
          *((_DWORD *)this + 464),
          0,
          0,
          0);
    }
  }
}
