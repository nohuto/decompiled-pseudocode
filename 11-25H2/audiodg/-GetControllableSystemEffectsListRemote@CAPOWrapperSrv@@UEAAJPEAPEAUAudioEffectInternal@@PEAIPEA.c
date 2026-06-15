/*
 * XREFs of ?GetControllableSystemEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAUAudioEffectInternal@@PEAIPEAX@Z @ 0x140048D10
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140002028 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$Write@U_tlgWrapperPtrSize@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU_tlgWrapperPtrSize@@3@Z @ 0x14000208C (--$Write@U_tlgWrapperPtrSize@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000761C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079B0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAAXXZ @ 0x14004B814 (-reset@-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFre.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetControllableSystemEffectsListRemote(
        CAPOWrapperSrv *this,
        struct AudioEffectInternal **a2,
        unsigned int *a3,
        void *a4)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  const struct _tlgProvider_t *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  _BOOL8 v18; // rcx
  struct AudioEffectInternal *v19; // r8
  __int64 i; // r9
  __int64 v21; // rdx
  const struct _tlgProvider_t *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // ecx
  LPVOID pv; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+38h] [rbp-C8h]
  unsigned int v29; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+48h] [rbp-B8h] BYREF
  int v31; // [rsp+50h] [rbp-B0h]
  unsigned int *v32; // [rsp+58h] [rbp-A8h] BYREF
  int v33; // [rsp+60h] [rbp-A0h]
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v8 = AudioDgTelemetryProvider::Provider((__int64)this);
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    v8,
    "SrvSystemEffect_GetControllableEffectsList",
    (const char *const)this + 140);
  *a2 = 0LL;
  *a3 = 0;
  v9 = *((_QWORD *)this + 14);
  if ( !v9 )
  {
    v10 = -2147467263;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16B,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)0x80004001LL);
    goto LABEL_18;
  }
  pv = 0LL;
  v28 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, LPVOID *, unsigned int *, void *))(*(_QWORD *)v9 + 32LL))(v9, &pv, a3, a4);
  v10 = v11;
  if ( v11 < 0 )
  {
    v13 = (unsigned int)v11;
    v14 = 366LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)v13);
    wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset(&pv);
    goto LABEL_18;
  }
  if ( *a3 )
  {
    v19 = (struct AudioEffectInternal *)CoTaskMemAlloc(24LL * *a3);
    if ( !v19 )
    {
      v10 = -2147024882;
      v14 = 380LL;
      v13 = 2147942414LL;
      goto LABEL_5;
    }
    for ( i = 0LL; (unsigned int)i < *a3; *((_DWORD *)v19 + 2 * v21 + 5) = v18 )
    {
      v21 = 3 * i;
      *(_OWORD *)((char *)v19 + 8 * v21) = *(_OWORD *)((char *)pv + 24 * i);
      *((_DWORD *)v19 + 2 * v21 + 4) = *((_DWORD *)pv + 6 * i + 4);
      v18 = *((_DWORD *)pv + 6 * i + 5) == 1;
      i = (unsigned int)(i + 1);
    }
    *a2 = v19;
    v22 = AudioDgTelemetryProvider::Provider(v18);
    if ( *(_DWORD *)v22 > 4u )
    {
      v30 = (__int64)*a2;
      v25 = *a3;
      v32 = a3;
      v33 = 4;
      v31 = 24 * v25;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        (int)v22,
        (int)&unk_1400AFCC2,
        v23,
        v24,
        (__int64)&v32,
        &v30);
    }
  }
  else
  {
    v15 = AudioDgTelemetryProvider::Provider(v12);
    if ( *(_DWORD *)v15 > 4u )
    {
      v29 = *a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (int)v15,
        (int)&unk_1400AFD22,
        v16,
        v17,
        (__int64)&v29);
    }
  }
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
    v28 = 0LL;
  }
  v10 = 0;
LABEL_18:
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v10;
}
