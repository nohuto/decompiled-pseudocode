/*
 * XREFs of s_tsSessionGetAudioProtocol @ 0x180010BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     atexit @ 0x1800A7F5C (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800AE2AC (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 */

__int64 __fastcall s_tsSessionGetAudioProtocol(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  struct _FILETIME v9; // rdi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int AudioProtocol; // ebx
  WINBOOL fPending; // [rsp+20h] [rbp-60h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-58h] BYREF
  union _RTL_RUN_ONCE *v16; // [rsp+30h] [rbp-50h] BYREF
  int v17; // [rsp+38h] [rbp-48h]
  _QWORD pv[2]; // [rsp+40h] [rbp-40h] BYREF
  DWORD v19; // [rsp+50h] [rbp-30h]
  const wchar_t *v20; // [rsp+58h] [rbp-28h]
  struct _FILETIME v21; // [rsp+60h] [rbp-20h]
  char v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+6Ch] [rbp-14h]

  if ( !(unsigned int)IsTSSessionGetAudioProtocolSupported() )
    return 2147500033LL;
  v8 = g_AudioSrvWatchDogTimerInMs;
  v9 = g_AudioHealthMonitor;
  Context = 0LL;
  fPending = 0;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    qword_1801CF7B8 = 0LL;
    v16 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801CF7B0;
    qword_1801CF7B0 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    byte_1801CF7C0 = 0;
    dword_1801CF7C4 = 0;
    qword_1801CF7C8 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v17 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v16);
  }
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v21 = v9;
  v19 = CurrentThreadId;
  v22 = 0;
  v23 = 0LL;
  v20 = L"s_tsSessionGetAudioProtocol";
  if ( (unsigned int)v8 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      Context = (LPVOID)(-10000 * v8 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, (PFILETIME)&Context, (unsigned int)v8 / 3, 0);
    }
  }
  AudioProtocol = TS_SessionGetAudioProtocol(a1, a2, a3, a4);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return AudioProtocol;
}
