/*
 * XREFs of ?GetControllableSystemEffectsList@CAPOWrapperClient@@UEAAJPEAPEAUAUDIO_SYSTEMEFFECT@@PEAIPEAX@Z @ 0x1800AF300
 * Callers:
 *     <none>
 * Callees:
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18000C640 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x18000C978 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_array_ptr@EU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@2@@wil@@QEAA@XZ @ 0x1800A2FA4 (--1-$unique_any_array_ptr@EU-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@Uempty_de.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPOWrapperClient::GetControllableSystemEffectsList(
        CAPOWrapperClient *this,
        struct AUDIO_SYSTEMEFFECT **a2,
        unsigned int *a3,
        void *a4)
{
  struct AudioSrvTelemetryProvider *v8; // rax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD *, unsigned int *, void *); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // rdx
  struct AUDIO_SYSTEMEFFECT *v15; // r8
  __int64 i; // r9
  __int64 v17; // rdx
  BOOL v18; // ecx
  _QWORD v20[2]; // [rsp+30h] [rbp-138h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-128h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  if ( !*((_QWORD *)this + 8) || !g_ADGProcess )
  {
    v12 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x100,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)0x80070057LL);
    return v12;
  }
  v8 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    *((const struct _tlgProvider_t **)v8 + 1),
    "SystemEffect_GetControllableEffectsList",
    (const char *const)this + 108);
  v9 = *((_QWORD *)this + 8);
  v20[0] = 0LL;
  v20[1] = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD *, unsigned int *, void *))(*(_QWORD *)v9 + 56LL);
  wil::unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>((__int64)v20);
  v11 = v10(v9, v20, a3, a4);
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( *a3 )
    {
      v15 = (struct AUDIO_SYSTEMEFFECT *)CoTaskMemAlloc(24LL * *a3);
      if ( !v15 )
      {
        v12 = -2147024882;
        v14 = 269LL;
        v13 = 2147942414LL;
        goto LABEL_9;
      }
      for ( i = 0LL; (unsigned int)i < *a3; *((_DWORD *)v15 + 2 * v17 + 5) = v18 )
      {
        v17 = 3 * i;
        *(_OWORD *)((char *)v15 + 8 * v17) = *(_OWORD *)(v20[0] + 24 * i);
        *((_DWORD *)v15 + 2 * v17 + 4) = *(_DWORD *)(v20[0] + 24 * i + 16);
        v18 = *(_DWORD *)(v20[0] + 24 * i + 20) != 0;
        i = (unsigned int)(i + 1);
      }
      *a2 = v15;
    }
    else
    {
      *a2 = 0LL;
    }
    v12 = 0;
    goto LABEL_14;
  }
  v13 = (unsigned int)v11;
  v14 = 260LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
    (const char *)v13);
LABEL_14:
  wil::unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>((__int64)v20);
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v12;
}
