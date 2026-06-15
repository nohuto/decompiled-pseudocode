/*
 * XREFs of AudioServerGetAudioEffectsChangedWnfStateName @ 0x1801090A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180047C8C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?GetAudioEffectsChangedWnfStateName@CVADServer@@QEAAJPEA_K@Z @ 0x1801063EC (-GetAudioEffectsChangedWnfStateName@CVADServer@@QEAAJPEA_K@Z.c)
 */

__int64 __fastcall AudioServerGetAudioEffectsChangedWnfStateName(CVADServer *this, unsigned __int64 *a2)
{
  __int64 pftDueTime; // rbx
  unsigned int v5; // edi
  struct AudioSrvTelemetryProvider *v6; // rax
  int AudioEffectsChangedWnfStateName; // eax
  unsigned int v8; // ebx
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v11[16]; // [rsp+68h] [rbp-40h] BYREF
  _BYTE v12[16]; // [rsp+78h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v11, this);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v6 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v6 + 1),
    v5,
    (struct _TP_TIMER *)L"AudioServerGetAudioEffectsChangedWnfStateName",
    pftDueTime);
  AudioEffectsChangedWnfStateName = CVADServer::GetAudioEffectsChangedWnfStateName(this, a2);
  v8 = AudioEffectsChangedWnfStateName;
  if ( AudioEffectsChangedWnfStateName >= 0 )
    v8 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1563,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)AudioEffectsChangedWnfStateName);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, v12);
  return v8;
}
