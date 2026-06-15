/*
 * XREFs of ?GetControllableSystemEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAUAudioEffectInternal@@PEAIPEAX@Z @ 0x140048A10
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140002028 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$Write@U_tlgWrapperPtrSize@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU_tlgWrapperPtrSize@@3@Z @ 0x14000208C (--$Write@U_tlgWrapperPtrSize@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000764C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079E0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     ??0?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x140063948 (--0-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@Y.c)
 *     ??1?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x14006395C (--1-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@Y.c)
 *     ??A?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAAEAUAUDIO_SYSTEMEFFECT@@_K@Z @ 0x140063968 (--A-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@Y.c)
 *     ??I?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAPEAPEAUAUDIO_SYSTEMEFFECT@@XZ @ 0x14006397C (--I-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@Y.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetControllableSystemEffectsListRemote(
        CAPOWrapperSrv *this,
        struct AudioEffectInternal **a2,
        unsigned int *a3,
        void *a4)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rdi
  unsigned int v10; // ebx
  __int64 (__fastcall *v11)(__int64, __int64, unsigned int *, void *); // rbx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdx
  const struct _tlgProvider_t *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  _BOOL8 v20; // rcx
  __int64 v21; // r8
  struct AudioEffectInternal *v22; // r10
  __int64 i; // r11
  _OWORD *v24; // rax
  unsigned int v25; // r11d
  __int64 v26; // r9
  __int64 v27; // r10
  __int64 v28; // r8
  __int64 v29; // rax
  unsigned int v30; // r11d
  __int64 v31; // r9
  __int64 v32; // r10
  __int64 v33; // r8
  int v34; // r11d
  __int64 v35; // r9
  const struct _tlgProvider_t *v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // ecx
  unsigned int v41; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v42[16]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+48h] [rbp-B8h] BYREF
  int v44; // [rsp+50h] [rbp-B0h]
  unsigned int *v45; // [rsp+58h] [rbp-A8h] BYREF
  int v46; // [rsp+60h] [rbp-A0h]
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
  if ( v9 )
  {
    wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(v42);
    v11 = *(__int64 (__fastcall **)(__int64, __int64, unsigned int *, void *))(*(_QWORD *)v9 + 32LL);
    v12 = wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator&(v42);
    v13 = v11(v9, v12, a3, a4);
    v10 = v13;
    if ( v13 < 0 )
    {
      v15 = (unsigned int)v13;
      v16 = 366LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
        (const char *)v15);
      wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::~unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(v42);
      goto LABEL_16;
    }
    if ( *a3 )
    {
      v22 = (struct AudioEffectInternal *)CoTaskMemAlloc(24LL * *a3);
      if ( !v22 )
      {
        v10 = -2147024882;
        v16 = 380LL;
        v15 = 2147942414LL;
        goto LABEL_5;
      }
      for ( i = 0LL; (unsigned int)i < *a3; *((_DWORD *)v22 + 2 * v35 + 5) = v20 )
      {
        v24 = (_OWORD *)wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                          v42,
                          (unsigned int)i,
                          v21,
                          3 * i);
        *(_OWORD *)(v27 + 8 * v26) = *v24;
        v29 = wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                v42,
                v25,
                v28,
                v26);
        *(_DWORD *)(v32 + 8 * v31 + 16) = *(_DWORD *)(v29 + 16);
        v20 = *(_DWORD *)(wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                            v42,
                            v30,
                            v33,
                            v31)
                        + 20) == 1;
        i = (unsigned int)(v34 + 1);
      }
      *a2 = v22;
      v36 = AudioDgTelemetryProvider::Provider(v20);
      if ( *(_DWORD *)v36 > 4u )
      {
        v43 = (__int64)*a2;
        v39 = *a3;
        v45 = a3;
        v46 = 4;
        v44 = 24 * v39;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
          (int)v36,
          (int)&unk_1400AFCEA,
          v37,
          v38,
          (__int64)&v45,
          &v43);
      }
    }
    else
    {
      v17 = AudioDgTelemetryProvider::Provider(v14);
      if ( *(_DWORD *)v17 > 4u )
      {
        v41 = *a3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          (int)v17,
          (int)&unk_1400AFD4A,
          v18,
          v19,
          (__int64)&v41);
      }
    }
    wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::~unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(v42);
    v10 = 0;
    goto LABEL_16;
  }
  v10 = -2147467263;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x16B,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
    (const char *)0x80004001LL);
LABEL_16:
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v10;
}
