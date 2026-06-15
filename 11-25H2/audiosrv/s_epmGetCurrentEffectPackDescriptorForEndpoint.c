/*
 * XREFs of s_epmGetCurrentEffectPackDescriptorForEndpoint @ 0x18006EC60
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentEffectPackDescriptorForEndpoint@CPolicyConfig@@QEAAJPEBGPEAUEffectPackDescriptor@@@Z @ 0x18006ED94 (-GetCurrentEffectPackDescriptorForEndpoint@CPolicyConfig@@QEAAJPEBGPEAUEffectPackDescriptor@@@Z.c)
 */

__int64 __fastcall s_epmGetCurrentEffectPackDescriptorForEndpoint(
        __int64 a1,
        const unsigned __int16 *a2,
        struct EffectPackDescriptor *a3)
{
  struct _FILETIME v3; // rbx
  __int64 v5; // rdi
  __int64 v7; // rcx
  CPolicyConfig *v8; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int CurrentEffectPackDescriptorForEndpoint; // eax
  unsigned int v11; // ebx
  _QWORD pv[2]; // [rsp+20h] [rbp-40h] BYREF
  DWORD CurrentThreadId; // [rsp+30h] [rbp-30h]
  const wchar_t *v15; // [rsp+38h] [rbp-28h]
  struct _FILETIME v16; // [rsp+40h] [rbp-20h]
  char v17; // [rsp+48h] [rbp-18h]
  int v18; // [rsp+4Ch] [rbp-14h]
  int v19; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct _FILETIME pftDueTime; // [rsp+98h] [rbp+38h] BYREF

  v3 = g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v7 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v7;
  v18 = 0;
  v19 = 0;
  CurrentThreadId = GetCurrentThreadId();
  v15 = L"s_epmGetCurrentEffectPackDescriptorForEndpoint";
  v16 = v3;
  v17 = 0;
  if ( (unsigned int)v5 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v5 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v5 / 3, 0);
    }
  }
  CurrentEffectPackDescriptorForEndpoint = CPolicyConfig::GetCurrentEffectPackDescriptorForEndpoint(v8, a2, a3);
  v11 = CurrentEffectPackDescriptorForEndpoint;
  if ( CurrentEffectPackDescriptorForEndpoint >= 0 )
    v11 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAC9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)CurrentEffectPackDescriptorForEndpoint);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v11;
}
