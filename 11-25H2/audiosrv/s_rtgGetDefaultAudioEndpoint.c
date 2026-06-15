/*
 * XREFs of s_rtgGetDefaultAudioEndpoint @ 0x180011540
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAG@Z @ 0x180011970 (-GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0.c)
 *     atexit @ 0x1800A7F5C (atexit.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800AE2AC (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 */

__int64 __fastcall s_rtgGetDefaultAudioEndpoint(__int64 a1, unsigned int a2, int a3, _QWORD *a4, _DWORD *a5)
{
  struct _FILETIME v5; // r14
  __int64 v6; // rsi
  _BYTE *v10; // rbx
  _WORD *v11; // r13
  __int64 v12; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  _DWORD *v14; // r14
  int DefaultAudioEndpoint; // eax
  unsigned int v16; // esi
  __int64 v17; // rdi
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdx
  _WORD *v22; // rax
  __int16 v23; // cx
  _WORD *v24; // rcx
  int v25; // eax
  HANDLE ProcessHeap; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-41h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-39h] BYREF
  LPVOID v30; // [rsp+40h] [rbp-31h] BYREF
  union _RTL_RUN_ONCE *v31; // [rsp+48h] [rbp-29h] BYREF
  int v32; // [rsp+50h] [rbp-21h]
  _QWORD pv[2]; // [rsp+58h] [rbp-19h] BYREF
  DWORD CurrentThreadId; // [rsp+68h] [rbp-9h]
  const wchar_t *v35; // [rsp+70h] [rbp-1h]
  struct _FILETIME v36; // [rsp+78h] [rbp+7h]
  char v37; // [rsp+80h] [rbp+Fh]
  __int64 v38; // [rsp+84h] [rbp+13h]
  unsigned __int8 v39; // [rsp+E0h] [rbp+6Fh] BYREF
  _QWORD *v40; // [rsp+E8h] [rbp+77h]

  v40 = a4;
  v5 = g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  v30 = 0LL;
  v39 = 0;
  Context = 0LL;
  fPending = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v31 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801CF7B0;
    qword_1801CF7B8 = 0LL;
    byte_1801CF7C0 = 0;
    dword_1801CF7C4 = 0;
    qword_1801CF7B0 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801CF7C8 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v32 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v31);
  }
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v35 = L"s_rtgGetDefaultAudioEndpoint";
  v36 = v5;
  v37 = 0;
  v38 = 0LL;
  if ( (unsigned int)v6 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      Context = (LPVOID)(-10000 * v6 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, (PFILETIME)&Context, (unsigned int)v6 / 3, 0);
    }
  }
  if ( a3 >= 6 )
  {
    v16 = -2147024809;
    goto LABEL_29;
  }
  if ( !v40 || (v14 = a5) == 0LL )
  {
    v16 = -2147467261;
    goto LABEL_29;
  }
  *a5 = 0;
  DefaultAudioEndpoint = DynamicAudioEndpointManager::GetDefaultAudioEndpoint(v12, a1, a2, (unsigned int)a3, &v39, &v30);
  v10 = v30;
  v16 = DefaultAudioEndpoint;
  if ( DefaultAudioEndpoint < 0 )
    goto LABEL_29;
  if ( !v30 )
  {
    v16 = -2147023728;
    goto LABEL_29;
  }
  v17 = -1LL;
  while ( *((_WORD *)v30 + ++v17) != 0 )
    ;
  v19 = 2 * v17 + 2;
  if ( v19 > 0x40000 || (v11 = operator new[](v19, (const struct std::nothrow_t *)&std::nothrow)) == 0LL )
  {
    v16 = -2147024882;
    goto LABEL_29;
  }
  v20 = v19 >> 1;
  if ( v20 - 1 > 0x7FFFFFFE )
  {
    v16 = -2147024809;
    v25 = -2147024809;
    if ( v20 )
    {
      *v11 = 0;
      goto LABEL_29;
    }
  }
  else
  {
    v21 = 2147483646 - v20;
    v22 = v11;
    do
    {
      if ( !(v21 + v20) )
        break;
      v23 = *(_WORD *)((char *)v22 + v10 - (_BYTE *)v11);
      if ( !v23 )
        break;
      *v22++ = v23;
      --v20;
    }
    while ( v20 );
    v24 = v22 - 1;
    if ( v20 )
      v24 = v22;
    v25 = -2147024774;
    if ( v20 )
      v25 = 0;
    *v24 = 0;
  }
  v16 = v25;
  if ( v25 < 0 )
  {
LABEL_29:
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v11);
    goto LABEL_28;
  }
  *v40 = v11;
  *v14 = v39;
LABEL_28:
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  CoTaskMemFree(0LL);
  CoTaskMemFree(v10);
  return v16;
}
