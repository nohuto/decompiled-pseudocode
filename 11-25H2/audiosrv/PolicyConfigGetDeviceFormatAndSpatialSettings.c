/*
 * XREFs of PolicyConfigGetDeviceFormatAndSpatialSettings @ 0x180101C60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     MIDL_user_allocate @ 0x180042530 (MIDL_user_allocate.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006B87C (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ??1?$out_param_t@V?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1800A5BE8 (--1-$out_param_t@V-$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTa.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PolicyConfigGetDeviceFormatAndSpatialSettings(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void **a4,
        void **a5,
        unsigned int *a6,
        void **a7)
{
  __int64 pftDueTime; // rbx
  unsigned int v9; // edi
  struct AudioSrvTelemetryProvider *v12; // rax
  __int64 v13; // rdx
  int v14; // esi
  __int64 v15; // rax
  __int64 (__fastcall *v16)(CPolicyConfig *, __int64, _QWORD, __int64 *, int *, unsigned int *, __int64 *); // rax
  __int64 v17; // rdx
  void *v18; // rax
  __int64 v19; // rdx
  void *v20; // rax
  _OWORD *v21; // rcx
  _OWORD *v22; // rax
  __int64 v23; // rax
  void *v24; // rax
  void *Src; // [rsp+48h] [rbp-71h] BYREF
  unsigned int v27; // [rsp+50h] [rbp-69h] BYREF
  _OWORD *v28; // [rsp+58h] [rbp-61h] BYREF
  void *v29; // [rsp+60h] [rbp-59h] BYREF
  _OWORD **v30; // [rsp+68h] [rbp-51h] BYREF
  int v31[2]; // [rsp+70h] [rbp-49h] BYREF
  char v32; // [rsp+78h] [rbp-41h]
  void **v33; // [rsp+80h] [rbp-39h] BYREF
  __int64 v34; // [rsp+88h] [rbp-31h] BYREF
  char v35; // [rsp+90h] [rbp-29h]
  void **p_Src; // [rsp+98h] [rbp-21h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-19h] BYREF
  char v38; // [rsp+A8h] [rbp-11h]
  struct _TP_TIMER *pv[7]; // [rsp+B0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+47h]

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  v12 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v12 + 1),
    v9,
    (struct _TP_TIMER *)L"PolicyConfigGetDeviceFormatAndSpatialSettings",
    pftDueTime);
  if ( !a4 )
  {
    v13 = 2839LL;
LABEL_5:
    v14 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x80004003LL);
    goto LABEL_39;
  }
  *a4 = 0LL;
  if ( !a5 )
  {
    v13 = 2842LL;
    goto LABEL_5;
  }
  *a5 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  Src = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v27 = 0;
  v15 = *(_QWORD *)g_PolicyConfig;
  v34 = 0LL;
  v35 = 1;
  *(_QWORD *)v31 = 0LL;
  v16 = *(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, __int64 *, int *, unsigned int *, __int64 *))(v15 + 272);
  v32 = 1;
  if ( a7 )
  {
    v37 = 0LL;
    v33 = &v29;
    v38 = 1;
    v30 = &v28;
    p_Src = &Src;
    v14 = v16(g_PolicyConfig, a2, a3, &v37, v31, &v27, &v34);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&p_Src);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v30);
    wil::details::out_param_t<wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v33);
    if ( v14 < 0 )
    {
      v17 = 2878LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v14);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &v29,
        0LL);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v28,
        0LL);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &Src,
        0LL);
      if ( *a4 )
      {
        operator delete(*a4);
        *a4 = 0LL;
      }
      if ( *a5 )
      {
        operator delete(*a5);
        *a5 = 0LL;
      }
LABEL_15:
      if ( *a7 )
      {
        operator delete(*a7);
        *a7 = 0LL;
      }
      goto LABEL_39;
    }
  }
  else
  {
    v30 = &v28;
    v33 = &Src;
    v14 = v16(g_PolicyConfig, a2, a3, &v34, v31, &v27, 0LL);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v33);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v30);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB46,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v14);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &v29,
        0LL);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v28,
        0LL);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &Src,
        0LL);
      if ( *a4 )
      {
        operator delete(*a4);
        *a4 = 0LL;
      }
      if ( *a5 )
      {
        operator delete(*a5);
        *a5 = 0LL;
      }
      goto LABEL_39;
    }
  }
  v18 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
  *a4 = v18;
  if ( v18 )
  {
    memcpy_0(v18, Src, *((unsigned __int16 *)Src + 8) + 18LL);
    v20 = MIDL_user_allocate(0x48uLL);
    *a5 = v20;
    v21 = v20;
    if ( v20 )
    {
      v22 = v28;
      *v21 = *v28;
      v21[1] = v22[1];
      v21[2] = v22[2];
      v21[3] = v22[3];
      *((_QWORD *)v21 + 8) = *((_QWORD *)v22 + 8);
      v23 = v27;
      if ( a6 )
        *a6 = v27;
      if ( a7 )
      {
        v24 = MIDL_user_allocate(834 * v23);
        *a7 = v24;
        if ( !v24 )
        {
          v14 = -2147024882;
          v17 = 2907LL;
          goto LABEL_11;
        }
        memcpy_0(v24, v29, 834LL * v27);
      }
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &v29,
        0LL);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v28,
        0LL);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &Src,
        0LL);
      v14 = 0;
      goto LABEL_39;
    }
    v19 = 2896LL;
  }
  else
  {
    v19 = 2892LL;
  }
  v14 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)0x8007000ELL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v29,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v28,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &Src,
    0LL);
  if ( *a4 )
  {
    operator delete(*a4);
    *a4 = 0LL;
  }
  if ( *a5 )
  {
    operator delete(*a5);
    *a5 = 0LL;
  }
  if ( a7 )
    goto LABEL_15;
LABEL_39:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v14;
}
