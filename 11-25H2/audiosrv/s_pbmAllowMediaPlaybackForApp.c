/*
 * XREFs of s_pbmAllowMediaPlaybackForApp @ 0x180047DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall s_pbmAllowMediaPlaybackForApp(__int64 a1, __int64 a2, __int64 a3)
{
  struct _FILETIME pftDueTime; // rbx
  unsigned int v7; // esi
  unsigned int v8; // eax
  _BYTE pv[64]; // [rsp+30h] [rbp-58h] BYREF

  pftDueTime = g_AudioHealthMonitor;
  v7 = 0;
  AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, pftDueTime);
  if ( (unsigned int)IsPbmAllowMediaPlaybackForAppSupported() )
  {
    v8 = PbmAllowMediaPlaybackForApp(a1, a2, a3);
LABEL_5:
    v7 = v8;
    goto LABEL_6;
  }
  if ( g_PolicyManager )
  {
    v8 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64))(*(_QWORD *)g_PolicyManager + 176LL))(
           g_PolicyManager,
           a2);
    goto LABEL_5;
  }
LABEL_6:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v7;
}
