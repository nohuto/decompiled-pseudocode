/*
 * XREFs of AudioSessionGetStreamSwitchId @ 0x1800487E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioSessionGetStreamSwitchId(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  struct _FILETIME pftDueTime; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  _BYTE pv[64]; // [rsp+30h] [rbp-48h] BYREF

  v2 = *a1;
  pftDueTime = g_AudioHealthMonitor;
  AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, pftDueTime);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 128LL))(v2, a2);
  v6 = v5;
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionGetStreamSwitchId", 1579, v5);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v6;
}
