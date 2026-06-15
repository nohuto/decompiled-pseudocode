/*
 * XREFs of ?CollectLiveKernelDump@CAudioHealthMonitor@@AEAAJKPEBG@Z @ 0x1800B430C
 * Callers:
 *     ?LooksLikeWeAreHung@CAudioHealthMonitor@@UEAAXKPEBG@Z @ 0x1800B45A0 (-LooksLikeWeAreHung@CAudioHealthMonitor@@UEAAXKPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?WpRpcBindingFree@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18006E098 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-WpRpcBindingFree@details@wil@@YAX0@ZU-$i.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A23A4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_87e148d1ae83be527ef5c26390f2e40b_::operator() @ 0x1800B4238 (_lambda_87e148d1ae83be527ef5c26390f2e40b_--operator().c)
 *     ?GetAEBBindingHandle@CAudioHealthMonitor@@CAJPEAPEAX@Z @ 0x1800B44B0 (-GetAEBBindingHandle@CAudioHealthMonitor@@CAJPEAPEAX@Z.c)
 */

__int64 __fastcall CAudioHealthMonitor::CollectLiveKernelDump(
        CAudioHealthMonitor *this,
        int a2,
        const unsigned __int16 *a3)
{
  const char *v3; // r9
  unsigned int LastError; // ebx
  int AEBBindingHandle; // eax
  int v6; // eax
  HRESULT v7; // eax
  RPC_BINDING_HANDLE Binding; // [rsp+28h] [rbp-E0h] BYREF
  PCWSTR pwzFile; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v11[5]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v12[528]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+290h] [rbp+188h]
  int v14; // [rsp+2A0h] [rbp+198h] BYREF
  const unsigned __int16 *v15; // [rsp+2A8h] [rbp+1A0h] BYREF

  v15 = a3;
  v14 = a2;
  pwzFile = 0LL;
  if ( (unsigned int)GetTempPath2W(260LL, v12) )
  {
    Binding = 0LL;
    AEBBindingHandle = CAudioHealthMonitor::GetAEBBindingHandle(&Binding);
    LastError = AEBBindingHandle;
    if ( AEBBindingHandle >= 0 )
    {
      v11[0] = &Binding;
      v11[1] = &v15;
      v11[2] = &v14;
      v11[3] = v12;
      v11[4] = &pwzFile;
      v6 = lambda_87e148d1ae83be527ef5c26390f2e40b_::operator()((__int64)v11);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          412LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiohealthmonitor.cpp",
          (const char *)(unsigned int)v6);
      if ( !pwzFile || (v7 = WerRegisterFile(pwzFile, WerRegFileTypeOther, 1u), LastError = v7, v7 >= 0) )
      {
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Binding);
        LastError = 0;
        goto LABEL_12;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A1,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiohealthmonitor.cpp",
        (const char *)(unsigned int)v7);
      DeleteFileW(pwzFile);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x192,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiohealthmonitor.cpp",
        (const char *)(unsigned int)AEBBindingHandle);
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Binding);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x18F,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiohealthmonitor.cpp",
                  v3);
  }
LABEL_12:
  operator delete((void *)pwzFile);
  return LastError;
}
