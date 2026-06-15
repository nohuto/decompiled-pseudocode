/*
 * XREFs of PolicyConfigGetDeviceFormatAndSpatialSettings @ 0x180107430
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     MIDL_user_allocate @ 0x18003F650 (MIDL_user_allocate.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18005DA98 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ??1?$out_param_t@V?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1800A1FF8 (--1-$out_param_t@V-$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTa.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD900 (--1-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@QEAA.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD920 (--1-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std@@@s.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer@$00@@@Z @ 0x1800B0B28 (-reset@-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer_Old@$00@@@Z @ 0x1800B0B4C (-reset@-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std.c)
 *     _lambda_4a543277d9c921e33bd9dfb8d5328f97_::operator() @ 0x180105544 (_lambda_4a543277d9c921e33bd9dfb8d5328f97_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 PolicyConfigGetDeviceFormatAndSpatialSettings(__int64 a1, __int64 a2, unsigned int a3, ...)
{
  struct _TP_TIMER **v5; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v7; // edi
  struct AudioSrvTelemetryProvider *v8; // rax
  struct _TP_TIMER **v9; // rax
  struct _TP_TIMER **v10; // rsi
  __int64 v11; // rbx
  unsigned int v12; // edi
  struct AudioSrvTelemetryProvider *v13; // rax
  struct _TP_TIMER **v14; // rax
  __int64 v15; // rdx
  int v16; // ebx
  _QWORD *v17; // rax
  bool v18; // zf
  __int64 v19; // rax
  __int64 (__fastcall *v20)(CPolicyConfig *, __int64, _QWORD, __int64 *, int *, unsigned int *, __int64 *); // rax
  __int64 v21; // rdx
  void *v22; // rax
  _OWORD *v23; // rdx
  _OWORD *v24; // rax
  unsigned int *v25; // rcx
  __int64 v26; // rax
  void *v27; // r9
  void *Src; // [rsp+48h] [rbp-81h] BYREF
  unsigned int v30; // [rsp+50h] [rbp-79h] BYREF
  _OWORD *v31; // [rsp+58h] [rbp-71h] BYREF
  void *v32; // [rsp+60h] [rbp-69h] BYREF
  void *v33; // [rsp+68h] [rbp-61h] BYREF
  void *v34; // [rsp+70h] [rbp-59h] BYREF
  _OWORD **v35; // [rsp+78h] [rbp-51h] BYREF
  int v36[2]; // [rsp+80h] [rbp-49h] BYREF
  char v37; // [rsp+88h] [rbp-41h]
  void **p_Src; // [rsp+90h] [rbp-39h] BYREF
  __int64 v39; // [rsp+98h] [rbp-31h] BYREF
  char v40; // [rsp+A0h] [rbp-29h]
  _QWORD v41[3]; // [rsp+A8h] [rbp-21h] BYREF
  char v42; // [rsp+C0h] [rbp-9h]
  void **v43; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v44; // [rsp+D0h] [rbp+7h] BYREF
  char v45; // [rsp+D8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+47h]
  _QWORD *v47; // [rsp+130h] [rbp+67h] BYREF
  va_list va; // [rsp+130h] [rbp+67h]
  _QWORD *v49; // [rsp+138h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+138h] [rbp+6Fh]
  unsigned int *v51; // [rsp+140h] [rbp+77h]
  _QWORD *v52; // [rsp+148h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+148h] [rbp+7Fh]
  va_list va3; // [rsp+150h] [rbp+87h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v47 = va_arg(va1, _QWORD *);
  va_copy(va2, va1);
  v49 = va_arg(va2, _QWORD *);
  v51 = va_arg(va2, unsigned int *);
  va_copy(va3, va2);
  v52 = va_arg(va3, _QWORD *);
  v34 = 0LL;
  v33 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v5 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v5 )
    {
      pftDueTime = (__int64)g_AudioHealthMonitor;
      v7 = g_AudioSrvWatchDogTimerInMs;
      v8 = AudioSrvTelemetryProvider::Instance();
      v9 = CWatchdogTimer<1>::CWatchdogTimer<1>(
             v5,
             *((struct _TP_TIMER **)v8 + 1),
             v7,
             (struct _TP_TIMER *)L"PolicyConfigGetDeviceFormatAndSpatialSettings",
             pftDueTime);
    }
    else
    {
      v9 = 0LL;
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(&v34, v9);
  }
  else
  {
    v10 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v10 )
    {
      v11 = (__int64)g_AudioHealthMonitor;
      v12 = g_AudioSrvWatchDogTimerInMs;
      v13 = AudioSrvTelemetryProvider::Instance();
      v14 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(
              v10,
              *((struct _TP_TIMER **)v13 + 1),
              v12,
              (struct _TP_TIMER *)L"PolicyConfigGetDeviceFormatAndSpatialSettings",
              v11);
    }
    else
    {
      v14 = 0LL;
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v33, v14);
  }
  if ( v47 )
  {
    *v47 = 0LL;
    if ( !v49 )
    {
      v15 = 2913LL;
      goto LABEL_14;
    }
    *v49 = 0LL;
    v17 = v52;
    if ( v52 )
    {
      *v52 = 0LL;
      v17 = v52;
    }
    Src = 0LL;
    va_copy((va_list)v41, va);
    v18 = v17 == 0LL;
    v31 = 0LL;
    va_copy((va_list)&v41[1], va1);
    v32 = 0LL;
    va_copy((va_list)&v41[2], va2);
    v30 = 0;
    v19 = *(_QWORD *)g_PolicyConfig;
    v39 = 0LL;
    v40 = 1;
    *(_QWORD *)v36 = 0LL;
    v20 = *(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, __int64 *, int *, unsigned int *, __int64 *))(v19 + 272);
    v37 = 1;
    if ( v18 )
    {
      v35 = &v31;
      p_Src = &Src;
      v16 = v20(g_PolicyConfig, a2, a3, &v39, v36, &v30, 0LL);
      wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&p_Src);
      wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v35);
      if ( v16 < 0 )
      {
        v21 = 2957LL;
        goto LABEL_20;
      }
    }
    else
    {
      v44 = 0LL;
      p_Src = &v32;
      v45 = 1;
      v35 = &v31;
      v43 = &Src;
      v16 = v20(g_PolicyConfig, a2, a3, &v44, v36, &v30, &v39);
      wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v43);
      wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v35);
      wil::details::out_param_t<wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&p_Src);
      if ( v16 < 0 )
      {
        v21 = 2949LL;
        goto LABEL_20;
      }
    }
    v22 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
    *v47 = v22;
    if ( v22 )
    {
      memcpy_0(v22, Src, *((unsigned __int16 *)Src + 8) + 18LL);
      v23 = MIDL_user_allocate(0x48uLL);
      *v49 = v23;
      if ( v23 )
      {
        v24 = v31;
        v25 = v51;
        *v23 = *v31;
        v23[1] = v24[1];
        v23[2] = v24[2];
        v23[3] = v24[3];
        *((_QWORD *)v23 + 8) = *((_QWORD *)v24 + 8);
        v26 = v30;
        if ( v25 )
          *v25 = v30;
        if ( v52 )
        {
          v27 = MIDL_user_allocate(834 * v26);
          *v52 = v27;
          if ( !v27 )
          {
            v16 = -2147024882;
            v21 = 2978LL;
            goto LABEL_20;
          }
          memcpy_0(v27, v32, 834LL * v30);
        }
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          &v32,
          0LL);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v31,
          0LL);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          &Src,
          0LL);
        v16 = 0;
        goto LABEL_34;
      }
      v16 = -2147024882;
      v21 = 2967LL;
    }
    else
    {
      v16 = -2147024882;
      v21 = 2963LL;
    }
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v16);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v32,
      0LL);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v31,
      0LL);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &Src,
      0LL);
    v42 = 0;
    lambda_4a543277d9c921e33bd9dfb8d5328f97_::operator()((__int64)v41);
    goto LABEL_34;
  }
  v15 = 2910LL;
LABEL_14:
  v16 = -2147467261;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)0x80004003LL);
LABEL_34:
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v33);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v34);
  return (unsigned int)v16;
}
