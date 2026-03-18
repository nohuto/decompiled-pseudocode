/*
 * XREFs of ?Run@CKstBase@@AEAAKXZ @ 0x18021E968
 * Callers:
 *     ?RunKernelThreadStatic@CKstBase@@CAKPEAX@Z @ 0x1802B7800 (-RunKernelThreadStatic@CKstBase@@CAKPEAX@Z.c)
 * Callees:
 *     ?SetEvent@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBAXXZ @ 0x18007BF7C (-SetEvent@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@w.c)
 *     ?EnterWait@DWM@KST@InputTraceLogging@@SAXXZ @ 0x18021EAEC (-EnterWait@DWM@KST@InputTraceLogging@@SAXXZ.c)
 *     ?ExitWait@DWM@KST@InputTraceLogging@@SAXK@Z @ 0x18021EB24 (-ExitWait@DWM@KST@InputTraceLogging@@SAXK@Z.c)
 *     ?ThreadStart@DWM@KST@InputTraceLogging@@SAXK@Z @ 0x18021EB70 (-ThreadStart@DWM@KST@InputTraceLogging@@SAXK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022AA04 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802412F4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKstBase::Run(CKstBase *this)
{
  signed int v2; // ebx
  DWORD CurrentThreadId; // eax
  const char *v4; // r9
  signed int LastError; // eax
  char v6; // bp
  unsigned int v7; // edi
  const char *v8; // r9
  unsigned int v9; // edi
  int v10; // eax
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  CurrentThreadId = GetCurrentThreadId();
  *((_DWORD *)this + 6) = CurrentThreadId;
  InputTraceLogging::KST::DWM::ThreadStart(CurrentThreadId);
  if ( !(unsigned int)NtKSTInitialize(*((_QWORD *)this + 4), *((_QWORD *)this + 1)) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CKstBase *))(*(_QWORD *)this + 16LL))(this) )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x7B,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
        v4);
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
    if ( v2 >= 0 )
      v2 = -2147467259;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x89,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
      (const char *)(unsigned int)v2,
      v12);
  }
  _SetEvent___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBAXXZ((HANDLE *)this + 5);
  if ( v2 >= 0 )
  {
    v6 = 1;
    while ( v6 )
    {
      InputTraceLogging::KST::DWM::EnterWait();
      v7 = NtKSTWait();
      InputTraceLogging::KST::DWM::ExitWait(v7);
      if ( v7 )
      {
        v9 = v7 - 1;
        if ( !v9 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xA7,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
            v8);
        if ( v9 != 1 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xB0,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
            v8);
        v10 = (*(__int64 (__fastcall **)(CKstBase *))(*(_QWORD *)this + 8LL))(this);
        if ( v10 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xAB,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
            (const char *)(unsigned int)v10,
            v12);
      }
      else
      {
        v6 = 0;
      }
    }
  }
  *((_DWORD *)this + 6) = 0;
  result = (unsigned __int16)v2;
  if ( (v2 & 0x1FFF0000) != 0x70000 )
    return (unsigned int)v2;
  return result;
}
