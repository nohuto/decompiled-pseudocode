/*
 * XREFs of AudioSessionGetDisplayOptions @ 0x1800489C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioSessionGetDisplayOptions(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  struct _FILETIME pftDueTime; // rbx
  _BYTE pv[64]; // [rsp+30h] [rbp-48h] BYREF

  v2 = *a1;
  pftDueTime = g_AudioHealthMonitor;
  AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, pftDueTime);
  pftDueTime.dwLowDateTime = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 176LL))(v2, a2);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return pftDueTime.dwLowDateTime;
}
