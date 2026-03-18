/*
 * XREFs of ??0MonitorColorState@DxgMonitor@@QEAA@AEAVIMonitorComponentParent@1@AEAVIMonitorRegistry@1@@Z @ 0x1403CD080
 * Callers:
 *     ?CopyInstance@MonitorColorState@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorColorState@DxgMonitor@@U?$default_delete@VMonitorColorState@DxgMonitor@@@wistd@@@wistd@@AEAVIMonitorComponentParent@2@AEAVIMonitorRegistry@2@@Z @ 0x14027ADA0 (-CopyInstance@MonitorColorState@DxgMonitor@@QEBA-AV-$unique_ptr@VMonitorColorState@DxgMonitor@@U.c)
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1403CC928 (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 * Callees:
 *     <none>
 */

DxgMonitor::MonitorColorState *__fastcall DxgMonitor::MonitorColorState::MonitorColorState(
        DxgMonitor::MonitorColorState *this,
        struct DxgMonitor::IMonitorComponentParent *a2,
        struct DxgMonitor::IMonitorRegistry *a3)
{
  DxgMonitor::MonitorColorState *result; // rax

  *((_QWORD *)this + 1) = a3;
  *(_QWORD *)this = a2;
  *((_BYTE *)this + 16) = 0;
  *(_WORD *)((char *)this + 17) = 0;
  *((_BYTE *)this + 19) = 0;
  *(_OWORD *)((char *)this + 20) = 0LL;
  *((_DWORD *)this + 9) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_BYTE *)this + 48) = 0;
  *(_WORD *)((char *)this + 49) = 0;
  *(_DWORD *)((char *)this + 51) = 0;
  *((_BYTE *)this + 55) = 0;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)((char *)this + 76) = 0LL;
  *((_BYTE *)this + 84) = 0;
  *(_WORD *)((char *)this + 85) = 0;
  *(_DWORD *)((char *)this + 87) = 0;
  *((_BYTE *)this + 91) = 0;
  *(_OWORD *)((char *)this + 92) = 0LL;
  *((_DWORD *)this + 27) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_BYTE *)this + 120) = 0;
  *(_WORD *)((char *)this + 121) = 0;
  *((_BYTE *)this + 123) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_BYTE *)this + 128) = 0;
  *(_WORD *)((char *)this + 129) = 0;
  *((_BYTE *)this + 131) = 0;
  *(_OWORD *)((char *)this + 132) = 0LL;
  *(_OWORD *)((char *)this + 148) = 0LL;
  *((_BYTE *)this + 164) = 0;
  *(_WORD *)((char *)this + 165) = 0;
  *((_BYTE *)this + 167) = 0;
  *(_OWORD *)((char *)this + 168) = 0LL;
  *(_OWORD *)((char *)this + 184) = 0LL;
  *((_BYTE *)this + 200) = 0;
  *(_WORD *)((char *)this + 201) = 0;
  *((_BYTE *)this + 203) = 0;
  *(_OWORD *)((char *)this + 204) = 0LL;
  *(_OWORD *)((char *)this + 220) = 0LL;
  *((_BYTE *)this + 236) = 0;
  *(_WORD *)((char *)this + 237) = 0;
  *((_BYTE *)this + 239) = 0;
  *((_OWORD *)this + 15) = 0LL;
  *((_OWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *((_BYTE *)this + 276) = 0;
  *(_WORD *)((char *)this + 277) = 0;
  *((_BYTE *)this + 279) = 0;
  *(_OWORD *)((char *)this + 280) = 0LL;
  *(_OWORD *)((char *)this + 296) = 0LL;
  *((_BYTE *)this + 312) = 0;
  *(_WORD *)((char *)this + 313) = 0;
  *((_BYTE *)this + 315) = 0;
  *(_QWORD *)((char *)this + 316) = 0LL;
  *((_DWORD *)this + 81) = 0;
  *((_BYTE *)this + 328) = 0;
  *(_WORD *)((char *)this + 329) = 0;
  *((_BYTE *)this + 331) = 0;
  *(_QWORD *)((char *)this + 332) = 0LL;
  *((_DWORD *)this + 85) = 0;
  *((_BYTE *)this + 344) = 0;
  *(_WORD *)((char *)this + 345) = 0;
  *((_BYTE *)this + 347) = 0;
  *(_QWORD *)((char *)this + 348) = 0LL;
  *((_DWORD *)this + 89) = 0;
  *((_BYTE *)this + 360) = 0;
  *(_WORD *)((char *)this + 361) = 0;
  *((_BYTE *)this + 363) = 0;
  *(_QWORD *)((char *)this + 364) = 0LL;
  *((_DWORD *)this + 93) = 0;
  *((_BYTE *)this + 376) = 0;
  *(_WORD *)((char *)this + 377) = 0;
  *((_BYTE *)this + 379) = 0;
  *(_QWORD *)((char *)this + 380) = 0LL;
  *(_QWORD *)((char *)this + 388) = 0LL;
  *((_BYTE *)this + 396) = 0;
  *(_WORD *)((char *)this + 397) = 0;
  *((_BYTE *)this + 399) = 0;
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 102) = 0;
  *((_WORD *)this + 206) = 0;
  *((_OWORD *)this + 26) = 0LL;
  *((_OWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_WORD *)this + 228) = 0;
  *((_DWORD *)this + 115) = 0;
  *((_DWORD *)this + 116) = 0x80000000;
  *((_WORD *)this + 234) = 0;
  *((_DWORD *)this + 118) = 0;
  *(_QWORD *)((char *)this + 476) = 1000LL;
  *((_DWORD *)this + 121) = 0;
  *(_OWORD *)((char *)this + 488) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  result = this;
  *((_BYTE *)this + 520) = 0;
  *((_DWORD *)this + 131) = 2;
  *((_BYTE *)this + 528) = 1;
  *((_DWORD *)this + 133) = 2000;
  *((_DWORD *)this + 134) = 1000;
  *((_BYTE *)this + 540) = 0;
  return result;
}
