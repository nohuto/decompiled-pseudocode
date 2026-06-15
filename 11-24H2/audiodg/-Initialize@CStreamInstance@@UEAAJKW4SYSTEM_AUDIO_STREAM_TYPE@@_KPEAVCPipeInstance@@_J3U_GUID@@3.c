/*
 * XREFs of ?Initialize@CStreamInstance@@UEAAJKW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J3U_GUID@@3@Z @ 0x140029A10
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000764C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079E0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14002223C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400295F4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x140066954 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CStreamInstance::Initialize(
        __int64 a1,
        DWORD a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int128 *a8,
        __int64 a9)
{
  const struct _tlgProvider_t *v13; // rax
  char *v14; // rbx
  HRESULT v15; // eax
  unsigned int v16; // ebx
  HANDLE v17; // rax
  const char *v18; // r9
  HANDLE v19; // rax
  __int128 v20; // xmm0
  int v22[2]; // [rsp+20h] [rbp-128h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-118h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]

  v13 = AudioDgTelemetryProvider::Provider(a1);
  CPerfTracker::CPerfTracker(&PerformanceCount, v13, "SrvStreamInstance_Initialize", 0LL);
  v14 = 0LL;
  *(_QWORD *)v22 = 0LL;
  if ( a2 )
  {
    v15 = CoImpersonateClient();
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_13;
    }
    v17 = OpenProcess(0x3000u, 0, a2);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)v22,
      v17);
    v14 = *(char **)v22;
    if ( ((*(_QWORD *)v22 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      v19 = OpenProcess(0x2400u, 0, a2);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (void **)v22,
        v19);
      v14 = *(char **)v22;
    }
    if ( ((unsigned __int64)(v14 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x43,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
        v18);
    CoRevertToSelf();
  }
  *(_QWORD *)(a1 + 80) = a5;
  *(_QWORD *)(a1 + 192) = a6;
  *(_DWORD *)(a1 + 112) = a3;
  *(_QWORD *)(a1 + 88) = a4;
  if ( (int *)(a1 + 136) != v22 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)(a1 + 136),
      v14);
    v14 = 0LL;
  }
  *(_QWORD *)(a1 + 200) = a7;
  v20 = *a8;
  *(_QWORD *)(a1 + 272) = a9;
  *(_OWORD *)(a1 + 208) = v20;
  PublishDeviceGraphWnfState();
  if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v14);
  v16 = 0;
LABEL_13:
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v16;
}
