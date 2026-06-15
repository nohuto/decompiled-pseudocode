/*
 * XREFs of s_pbmGetSoundLevel @ 0x180070930
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall s_pbmGetSoundLevel(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _FILETIME v5; // rbx
  __int64 v7; // r13
  int v11; // edi
  __int64 v12; // r10
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int SoundLevel; // ebx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+38h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+48h] [rbp-28h]
  const wchar_t *v19; // [rsp+50h] [rbp-20h]
  struct _FILETIME v20; // [rsp+58h] [rbp-18h]
  char v21; // [rsp+60h] [rbp-10h]
  __int64 v22; // [rsp+64h] [rbp-Ch]

  v5 = g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  v11 = 0;
  v12 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v12;
  v20 = v5;
  CurrentThreadId = GetCurrentThreadId();
  v19 = L"s_pbmGetSoundLevel";
  v21 = 0;
  v22 = 0LL;
  if ( (unsigned int)v7 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v7 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v7 / 3, 0);
    }
  }
  if ( (unsigned int)IsPbmSoundLevelSupported() )
  {
    SoundLevel = PbmGetSoundLevel(a1, a2, a3, a4, a5);
  }
  else
  {
    if ( g_PolicyManager )
    {
      pftDueTime = 0LL;
      v11 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, struct _FILETIME *))(*(_QWORD *)g_PolicyManager
                                                                                                 + 32LL))(
              g_PolicyManager,
              a1,
              &pftDueTime);
      if ( v11 >= 0 )
        v11 = (*(__int64 (__fastcall **)(struct _FILETIME, __int64, __int64, __int64, __int64))(**(_QWORD **)&pftDueTime
                                                                                              + 344LL))(
                pftDueTime,
                a2,
                a3,
                a4,
                a5);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pftDueTime);
    }
    SoundLevel = v11;
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return SoundLevel;
}
