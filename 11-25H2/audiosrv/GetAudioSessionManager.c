/*
 * XREFs of GetAudioSessionManager @ 0x180012C30
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x1800132E0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180014F50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002153C (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18002C450 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetAudioSessionManager(__int64 a1, const unsigned __int16 *a2, struct _FILETIME **a3, _DWORD *a4)
{
  struct _FILETIME v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // r10
  CEndpointStoreCache *v11; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // r10
  int EndpointStore; // eax
  unsigned int v14; // ebx
  __int64 v15; // rax
  int v16; // eax
  struct _FILETIME *v17; // rax
  volatile int *v18; // rdx
  struct _FILETIME *v19; // rdi
  struct _FILETIME v20; // r8
  struct _FILETIME v21; // rbx
  struct _FILETIME v23; // [rsp+20h] [rbp-50h] BYREF
  struct _FILETIME pftDueTime; // [rsp+28h] [rbp-48h] BYREF
  _QWORD pv[2]; // [rsp+30h] [rbp-40h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-30h]
  const wchar_t *v27; // [rsp+48h] [rbp-28h]
  struct _FILETIME v28; // [rsp+50h] [rbp-20h]
  char v29; // [rsp+58h] [rbp-18h]
  int v30; // [rsp+5Ch] [rbp-14h]
  int v31; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v8 = g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  v10 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v10;
  CurrentThreadId = GetCurrentThreadId();
  v27 = L"GetAudioSessionManager";
  v28 = v8;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  if ( (unsigned int)v9 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v9 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v9 / 3, 0);
    }
  }
  pftDueTime = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v11, a2, (struct CEndpointStore **)&pftDueTime);
  v14 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x581,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)EndpointStore,
      v23.dwLowDateTime);
LABEL_19:
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(&pftDueTime);
    goto LABEL_16;
  }
  v15 = *(_QWORD *)g_PolicyManager;
  v23 = 0LL;
  v16 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, struct _FILETIME *))(v15 + 32))(
          g_PolicyManager,
          a1,
          &v23);
  v14 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x588,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v16,
      v23.dwLowDateTime);
    if ( v23 )
      (*(void (__fastcall **)(struct _FILETIME))(**(_QWORD **)&v23 + 16LL))(v23);
    goto LABEL_19;
  }
  v17 = (struct _FILETIME *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v19 = v17;
  if ( !v17 )
  {
    v14 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)0x8007000ELL,
      v23.dwLowDateTime);
    if ( v23 )
      (*(void (__fastcall **)(struct _FILETIME))(**(_QWORD **)&v23 + 16LL))(v23);
    goto LABEL_19;
  }
  v20 = v23;
  v21 = pftDueTime;
  *v17 = pftDueTime;
  if ( v21 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(*(_QWORD *)&v21 + 12LL), v18);
  v19[1] = v20;
  if ( v20 )
    (*(void (__fastcall **)(struct _FILETIME))(**(_QWORD **)&v20 + 8LL))(v20);
  LOBYTE(v19[2].dwLowDateTime) = 0;
  *a3 = v19;
  *a4 = (*(__int64 (__fastcall **)(struct _FILETIME))(**(_QWORD **)&v23 + 112LL))(v23) == 0;
  if ( v23 )
    (*(void (__fastcall **)(struct _FILETIME))(**(_QWORD **)&v23 + 16LL))(v23);
  if ( v21 )
    ((void (__fastcall *)(_QWORD))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release)(v21);
  v14 = 0;
LABEL_16:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v14;
}
