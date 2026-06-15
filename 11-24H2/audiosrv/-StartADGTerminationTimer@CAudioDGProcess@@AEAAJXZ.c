/*
 * XREFs of ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180021D9C
 * Callers:
 *     ?s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x180020040 (-s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ??1CAPOWrapperClient@@UEAA@XZ @ 0x180022F7C (--1CAPOWrapperClient@@UEAA@XZ.c)
 *     AUDIOSERVER_rundown @ 0x180052820 (AUDIOSERVER_rundown.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18006449C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     wil::details::lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___::_lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___ @ 0x180070E08 (wil--details--lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___--_lambda_call__lambda_b85f.c)
 *     AudioServerDisconnect @ 0x180081E50 (AudioServerDisconnect.c)
 *     HAUDIOSRVDIAGNOSTICS_rundown @ 0x1800AB790 (HAUDIOSRVDIAGNOSTICS_rundown.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x1800AB7E0 (s_adGetDeviceGraphWnfStateName.c)
 *     AudioServerReleaseAudioStreamHandle @ 0x180111370 (AudioServerReleaseAudioStreamHandle.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioDGProcess::StartADGTerminationTimer(CAudioDGProcess *this)
{
  struct CAudioThreadPool *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  v2 = ThreadPool;
  if ( !*((_QWORD *)this + 17) )
    *((_QWORD *)this + 17) = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), CAudioDGProcess *))(*(_QWORD *)ThreadPool + 8LL))(
                               ThreadPool,
                               CAudioDGProcess::OnADGInactivityTimerFiredHandler,
                               this);
  pvData = 0;
  pcbData = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
         L"AudioDGInactiveTimeout",
         0x18u,
         0LL,
         &pvData,
         &pcbData) )
  {
    v3 = 300LL;
    pvData = 300;
  }
  else
  {
    v3 = pvData;
  }
  v4 = *((_QWORD *)this + 17);
  if ( v4 )
  {
    v8 = -10000000 * v3;
    (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, __int64 *, _QWORD, _DWORD))(*(_QWORD *)v2 + 24LL))(
      v2,
      v4,
      &v8,
      0LL,
      0);
  }
  return 0LL;
}
