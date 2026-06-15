/*
 * XREFs of AudioServerResetEndpoint @ 0x180047AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180047C8C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?ResetEndpoint@CVADServer@@UEAAJ_K@Z @ 0x1800A3870 (-ResetEndpoint@CVADServer@@UEAAJ_K@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

__int64 __fastcall AudioServerResetEndpoint(void *a1, unsigned __int64 a2)
{
  struct _FILETIME pftDueTime; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  _BYTE pv[56]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v9[16]; // [rsp+68h] [rbp-40h] BYREF
  _BYTE v10[16]; // [rsp+78h] [rbp-30h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v9, a1);
  pftDueTime = g_AudioHealthMonitor;
  AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, pftDueTime);
  v5 = CVADServer::ResetEndpoint((CVADServer *)a1, a2);
  v6 = v5;
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerResetEndpoint", 3241, v5);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, v10);
  return v6;
}
