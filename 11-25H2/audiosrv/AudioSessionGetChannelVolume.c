/*
 * XREFs of AudioSessionGetChannelVolume @ 0x180048EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioSessionGetChannelVolume(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rsi
  struct _FILETIME pftDueTime; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  _BYTE pv[64]; // [rsp+30h] [rbp-48h] BYREF

  v3 = *a1;
  pftDueTime = g_AudioHealthMonitor;
  AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, pftDueTime);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v3 + 336LL))(v3, a2, a3);
  v8 = v7;
  if ( v7 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionGetChannelVolume", 2227, v7);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v8;
}
