/*
 * XREFs of ?GetPreferredOutputFormat@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x1800AFA50
 * Callers:
 *     <none>
 * Callees:
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18000C640 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x18000C978 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     CreateAudioMediaType_Unsafe @ 0x1800AABE8 (CreateAudioMediaType_Unsafe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPOWrapperClient::GetPreferredOutputFormat(
        CAPOWrapperClient *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType **a3)
{
  __int64 v6; // rdx
  struct AudioSrvTelemetryProvider *v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int AudioMediaType_Unsafe; // eax
  __int64 v12; // rdx
  LPVOID pv[2]; // [rsp+20h] [rbp-E0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  if ( !*((_QWORD *)this + 3) )
  {
    v6 = 376LL;
LABEL_15:
    v9 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)0x80070057LL);
    return v9;
  }
  if ( !a3 || !a2 )
  {
    v6 = 377LL;
    goto LABEL_15;
  }
  v7 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    *((const struct _tlgProvider_t **)v7 + 1),
    "SystemEffect_GetPreferredOutputFormat",
    (const char *const)this + 68);
  v8 = ((__int64 (__fastcall *)(struct IAudioMediaType *))a2->lpVtbl->GetAudioFormat)(a2);
  if ( v8 )
  {
    v10 = *((_QWORD *)this + 3);
    pv[0] = 0LL;
    AudioMediaType_Unsafe = (*(__int64 (__fastcall **)(__int64, __int64, LPVOID *))(*(_QWORD *)v10 + 80LL))(v10, v8, pv);
    v9 = AudioMediaType_Unsafe;
    if ( AudioMediaType_Unsafe >= 0 )
    {
      AudioMediaType_Unsafe = CreateAudioMediaType_Unsafe(
                                (const struct tWAVEFORMATEX *)pv[0],
                                (unsigned int)*((unsigned __int16 *)pv[0] + 8) + 18,
                                a3);
      v9 = AudioMediaType_Unsafe;
      if ( AudioMediaType_Unsafe >= 0 )
      {
        CoTaskMemFree(pv[0]);
        pv[0] = 0LL;
        v9 = 0;
        goto LABEL_13;
      }
      v12 = 387LL;
    }
    else
    {
      v12 = 384LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)(unsigned int)AudioMediaType_Unsafe);
    CoTaskMemFree(pv[0]);
    pv[0] = 0LL;
  }
  else
  {
    v9 = -2004287480;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)0x88890008LL);
  }
LABEL_13:
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v9;
}
