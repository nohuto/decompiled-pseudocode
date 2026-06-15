/*
 * XREFs of AudioVolumeConnect @ 0x18000FEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     atexit @ 0x1800A7F5C (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800AE2AC (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioVolumeConnect(__int64 a1, const WCHAR *a2, _QWORD *a3)
{
  struct _FILETIME v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // r10
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // ebx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  int v18; // [rsp+20h] [rbp-A9h]
  WINBOOL fPending; // [rsp+30h] [rbp-99h] BYREF
  __int64 v20; // [rsp+38h] [rbp-91h] BYREF
  unsigned int Pid; // [rsp+40h] [rbp-89h] BYREF
  unsigned int v22; // [rsp+44h] [rbp-85h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-81h] BYREF
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp-79h] BYREF
  __int64 v25; // [rsp+58h] [rbp-71h]
  _QWORD pv[2]; // [rsp+60h] [rbp-69h] BYREF
  DWORD CurrentThreadId; // [rsp+70h] [rbp-59h]
  const wchar_t *v28; // [rsp+78h] [rbp-51h]
  struct _FILETIME v29; // [rsp+80h] [rbp-49h]
  char v30; // [rsp+88h] [rbp-41h]
  __int64 v31; // [rsp+8Ch] [rbp-3Dh]
  union _RTL_RUN_ONCE *v32; // [rsp+98h] [rbp-31h] BYREF
  int v33; // [rsp+A0h] [rbp-29h]
  unsigned __int16 *v34; // [rsp+B0h] [rbp-19h] BYREF
  int v35; // [rsp+B8h] [rbp-11h]
  int v36; // [rsp+BCh] [rbp-Dh]
  void *v37; // [rsp+C0h] [rbp-9h]
  int v38; // [rsp+C8h] [rbp-1h]
  int v39; // [rsp+CCh] [rbp+3h]
  const WCHAR *v40; // [rsp+D0h] [rbp+7h]
  int v41; // [rsp+D8h] [rbp+Fh]
  int v42; // [rsp+DCh] [rbp+13h]
  unsigned int *v43; // [rsp+E0h] [rbp+17h]
  __int64 v44; // [rsp+E8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v5 = g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  Context = 0LL;
  fPending = 0;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v32 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801CF7B0;
    qword_1801CF7B8 = 0LL;
    byte_1801CF7C0 = 0;
    dword_1801CF7C4 = 0;
    qword_1801CF7B0 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801CF7C8 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v33 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v32);
  }
  v7 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v7;
  CurrentThreadId = GetCurrentThreadId();
  v28 = L"AudioVolumeConnect";
  v29 = v5;
  v30 = 0;
  v31 = 0LL;
  if ( (unsigned int)v6 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v6 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v6 / 3, 0);
    }
  }
  *a3 = 0LL;
  v9 = *(_QWORD *)g_pVolumeProvider;
  v20 = 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IVolumeProvider *, const WCHAR *, __int64 *))(v9 + 40))(
          g_pVolumeProvider,
          a2,
          &v20);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v14 = v20;
    v20 = 0LL;
    *a3 = v14;
    Pid = 0;
    I_RpcBindingInqLocalClientPID(0LL, &Pid);
    v15 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *(_DWORD *)v15 > 4u
      && (*(_BYTE *)(v15 + 16) & 2) != 0
      && (*(_QWORD *)(v15 + 24) & 2LL) == *(_QWORD *)(v15 + 24) )
    {
      v22 = Pid;
      v43 = &v22;
      v44 = 4LL;
      if ( a2 )
      {
        v16 = -1LL;
        do
          ++v16;
        while ( a2[v16] );
        v17 = 2 * v16 + 2;
      }
      else
      {
        a2 = &LocaleName;
        v17 = 2;
      }
      v40 = a2;
      v41 = v17;
      v42 = 0;
      pftDueTime.dwLowDateTime = 184549376;
      pftDueTime.dwHighDateTime = 4;
      v25 = 2LL;
      v34 = *(unsigned __int16 **)(v15 + 8);
      v35 = *v34;
      v36 = 2;
      v37 = &unk_1801A32E1;
      v38 = 43;
      v39 = 1;
      fPending = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwEventWriteTransfer(*(_QWORD *)(v15 + 32), &pftDueTime, 0LL, 0LL, 4, &v34);
    }
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    v12 = 0;
  }
  else
  {
    v12 = -2004287484;
    if ( v10 == -2004287484 )
    {
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9D,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
        (const char *)(unsigned int)v10,
        v18);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
      v12 = v11;
    }
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v12;
}
