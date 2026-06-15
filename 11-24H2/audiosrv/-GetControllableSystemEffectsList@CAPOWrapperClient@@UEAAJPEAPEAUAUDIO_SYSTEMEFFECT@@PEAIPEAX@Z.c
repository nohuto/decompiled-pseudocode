/*
 * XREFs of ?GetControllableSystemEffectsList@CAPOWrapperClient@@UEAAJPEAPEAUAUDIO_SYSTEMEFFECT@@PEAIPEAX@Z @ 0x1800ABBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x180024FB0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800252E8 (--1CPerfTracker@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??0?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x1800AB988 (--0-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??1?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x1800AB99C (--1-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??A?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAAEAUAUDIO_SYSTEMEFFECT@@_K@Z @ 0x1800AB9A8 (--A-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@Y.c)
 *     ??I?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAPEAPEAUAUDIO_SYSTEMEFFECT@@XZ @ 0x1800AB9BC (--I-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@Y.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPOWrapperClient::GetControllableSystemEffectsList(
        CAPOWrapperClient *this,
        struct AUDIO_SYSTEMEFFECT **a2,
        unsigned int *a3,
        void *a4)
{
  struct AudioSrvTelemetryProvider *v8; // rax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64, unsigned int *, void *); // rbx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // r9
  __int64 v15; // rdx
  struct AUDIO_SYSTEMEFFECT *v16; // r10
  unsigned int i; // r11d
  _OWORD *v18; // rax
  unsigned int v19; // r11d
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // rax
  unsigned int v23; // r11d
  __int64 v24; // r9
  __int64 v25; // r10
  __int64 v26; // rax
  int v27; // r11d
  __int64 v28; // r9
  LARGE_INTEGER v30[2]; // [rsp+30h] [rbp-138h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-128h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  if ( !*((_QWORD *)this + 8) || !g_ADGProcess )
  {
    v13 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x100,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)0x80070057LL);
    return v13;
  }
  v8 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    *((const struct _tlgProvider_t **)v8 + 1),
    "SystemEffect_GetControllableEffectsList",
    (const char *const)this + 108);
  wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(v30);
  v9 = *((_QWORD *)this + 8);
  v10 = *(__int64 (__fastcall **)(__int64, __int64, unsigned int *, void *))(*(_QWORD *)v9 + 56LL);
  v11 = wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator&((__int64)v30);
  v12 = v10(v9, v11, a3, a4);
  v13 = v12;
  if ( v12 >= 0 )
  {
    if ( *a3 )
    {
      v16 = (struct AUDIO_SYSTEMEFFECT *)CoTaskMemAlloc(24LL * *a3);
      if ( !v16 )
      {
        v13 = -2147024882;
        v15 = 269LL;
        v14 = 2147942414LL;
        goto LABEL_9;
      }
      for ( i = 0; i < *a3; *((_DWORD *)v16 + 2 * v28 + 5) = *(_DWORD *)(v26 + 20) != 0 )
      {
        v18 = (_OWORD *)wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                          v30,
                          i);
        *(_OWORD *)(v21 + 8 * v20) = *v18;
        v22 = wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                v30,
                v19);
        *(_DWORD *)(v25 + 8 * v24 + 16) = *(_DWORD *)(v22 + 16);
        v26 = wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                v30,
                v23);
        i = v27 + 1;
      }
      *a2 = v16;
    }
    else
    {
      *a2 = 0LL;
    }
    v13 = 0;
    goto LABEL_14;
  }
  v14 = (unsigned int)v12;
  v15 = 260LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
    (const char *)v14);
LABEL_14:
  wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>((__int64)v30);
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v13;
}
