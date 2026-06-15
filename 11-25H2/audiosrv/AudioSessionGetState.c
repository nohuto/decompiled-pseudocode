/*
 * XREFs of AudioSessionGetState @ 0x180010FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     atexit @ 0x1800A7F5C (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800AE2AC (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioSessionGetState(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _FILETIME v3; // rsi
  __int64 v4; // rdi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v8; // eax
  unsigned int v9; // ebx
  union _RTL_RUN_ONCE *v11; // [rsp+20h] [rbp-50h] BYREF
  int v12; // [rsp+28h] [rbp-48h]
  _QWORD pv[2]; // [rsp+30h] [rbp-40h] BYREF
  DWORD v14; // [rsp+40h] [rbp-30h]
  const wchar_t *v15; // [rsp+48h] [rbp-28h]
  struct _FILETIME v16; // [rsp+50h] [rbp-20h]
  char v17; // [rsp+58h] [rbp-18h]
  __int64 v18; // [rsp+5Ch] [rbp-14h]
  __int64 fPending; // [rsp+A0h] [rbp+30h] BYREF
  LPVOID Context; // [rsp+B0h] [rbp+40h] BYREF

  v2 = *a1;
  v3 = g_AudioHealthMonitor;
  v4 = g_AudioSrvWatchDogTimerInMs;
  Context = 0LL;
  LODWORD(fPending) = 0;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v11 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801CF7B0;
    qword_1801CF7B0 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801CF7B8 = 0LL;
    byte_1801CF7C0 = 0;
    dword_1801CF7C4 = 0;
    qword_1801CF7C8 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v12 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v11);
  }
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v16 = v3;
  v14 = CurrentThreadId;
  v15 = L"AudioSessionGetState";
  v17 = 0;
  v18 = 0LL;
  if ( (unsigned int)v4 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      fPending = -10000 * v4 / 3;
      SetThreadpoolTimer(ThreadpoolTimer, (PFILETIME)&fPending, (unsigned int)v4 / 3, 0);
    }
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 144LL))(v2, a2);
  v9 = v8;
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionGetState", 0x679u, v8);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v9;
}
