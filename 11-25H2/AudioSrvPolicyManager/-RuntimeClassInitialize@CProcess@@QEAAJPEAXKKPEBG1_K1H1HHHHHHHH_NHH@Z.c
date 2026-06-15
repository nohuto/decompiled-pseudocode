/*
 * XREFs of ?RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x1800135AC
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800082D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180001974 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000B8F0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180012CA0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180013BD0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEBK@Z @ 0x180015710 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@AEAAPEAKQEAKAEBK@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800174C0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??$find@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@K@std@@@std@@@std@@K@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@K@std@@@std@@@0@V10@V10@AEBK@Z @ 0x180018B3C (--$find@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@K@std@@@std@@@std@@K@std@@YA-AV-$_Ve.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180018FE0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800192D4 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x180019BFC (-SetupProcessTerminationWatcher@CProcess@@IEAAJXZ.c)
 *     ?ClearSmtcSubscriptions@CProcess@@QEAAXXZ @ 0x18001A020 (-ClearSmtcSubscriptions@CProcess@@QEAAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001B8B0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1800225EC (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180022918 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?ResetDataFlowAccessCheckResults@CProcess@@QEAAXXZ @ 0x18003686C (-ResetDataFlowAccessCheckResults@CProcess@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::RuntimeClassInitialize(
        CProcess *this,
        HANDLE hSourceHandle,
        int a3,
        int a4,
        unsigned __int16 *a5,
        const unsigned __int16 *a6,
        HANDLE TargetHandle,
        unsigned __int16 *a8,
        DWORD a9,
        const unsigned __int16 *a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        DWORD a19,
        int a20,
        int a21)
{
  HANDLE *v23; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v25; // rax
  const char *v27; // r9
  __int64 result; // rax
  void *v29; // rbx
  const unsigned __int16 *v30; // r15
  __int64 v31; // rdi
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r14
  unsigned __int16 *v34; // rax
  void *v35; // rbx
  const unsigned __int16 *v36; // r15
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // r14
  unsigned __int16 *v39; // rax
  const unsigned __int16 *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r9
  int v44; // eax
  unsigned int v45; // ebx
  const char *v46; // r9
  const unsigned __int16 *v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // eax
  unsigned int v51; // ebx
  int v52; // eax
  unsigned int v53; // ebx
  DWORD v54; // r14d
  unsigned int v55; // r15d
  HANDLE v56; // rbx
  void *v57; // rdi
  HANDLE v58; // rax
  DWORD *v59; // rdx
  DWORD v60; // ebx
  HANDLE v61; // rax
  unsigned int v62; // ebx
  const struct _tlgProvider_t *v63; // rax
  unsigned int v64; // ebx
  unsigned __int16 **dwDesiredAccess; // [rsp+20h] [rbp-78h]
  unsigned __int16 **dwDesiredAccessa; // [rsp+20h] [rbp-78h]
  unsigned __int64 *bInheritHandle; // [rsp+28h] [rbp-70h]
  unsigned __int64 *bInheritHandlea; // [rsp+28h] [rbp-70h]
  DWORD dwOptions; // [rsp+30h] [rbp-68h]
  DWORD dwOptionsa; // [rsp+30h] [rbp-68h]
  _OWORD ProcessInformation[2]; // [rsp+40h] [rbp-58h] BYREF
  DWORD dwProcessId[4]; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v74; // [rsp+A0h] [rbp+8h] BYREF

  *((_DWORD *)this + 40) = a3;
  *((_DWORD *)this + 41) = a4;
  *((_DWORD *)this + 48) = a9;
  *((_DWORD *)this + 105) = a11;
  *((_DWORD *)this + 106) = a12;
  *((_DWORD *)this + 107) = a13;
  *((_DWORD *)this + 108) = a14;
  *((_DWORD *)this + 110) = a16;
  *((_DWORD *)this + 111) = a17;
  *((_DWORD *)this + 116) = a18;
  *((_DWORD *)this + 109) = a15;
  *((_QWORD *)this + 26) = TargetHandle;
  *((_BYTE *)this + 786) = a19;
  *((_DWORD *)this + 117) = a20;
  *((_DWORD *)this + 118) = a21;
  if ( hSourceHandle )
  {
    v23 = (HANDLE *)((char *)this + 152);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (char *)this + 152,
      0LL);
    CurrentProcess = GetCurrentProcess();
    v25 = GetCurrentProcess();
    if ( !DuplicateHandle(v25, hSourceHandle, CurrentProcess, v23, 0x101000u, 0, 0) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0xA1F,
               (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
               v27);
  }
  v29 = (void *)*((_QWORD *)this + 21);
  if ( v29 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v74);
    CoTaskMemFree(v29);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v74);
  }
  *((_QWORD *)this + 21) = 0LL;
  v30 = a5;
  v31 = -1LL;
  v32 = -1LL;
  do
    ++v32;
  while ( a5[v32] );
  try
  {
    v33 = v32 + 1;
    if ( v32 + 1 >= v32 && (*((_QWORD *)this + 21) = 0LL, v74 = 0LL, is_mul_ok(v33, 2uLL)) )
    {
      v34 = (unsigned __int16 *)CoTaskMemAlloc(2 * v33);
      *((_QWORD *)this + 21) = v34;
      if ( v34 )
      {
        StringCchCopyNExW(v34, v32 + 1, v30, v32, dwDesiredAccess, bInheritHandle, dwOptions);
        v35 = (void *)*((_QWORD *)this + 23);
        if ( v35 )
        {
          wil::last_error_context::last_error_context((wil::last_error_context *)&v74);
          CoTaskMemFree(v35);
          wil::last_error_context::~last_error_context((wil::last_error_context *)&v74);
        }
        *((_QWORD *)this + 23) = 0LL;
        v36 = a8;
        v37 = -1LL;
        do
          ++v37;
        while ( a8[v37] );
        v38 = v37 + 1;
        if ( v37 + 1 >= v37 && (*((_QWORD *)this + 23) = 0LL, v74 = 0LL, is_mul_ok(v38, 2uLL)) )
        {
          v39 = (unsigned __int16 *)CoTaskMemAlloc(2 * v38);
          *((_QWORD *)this + 23) = v39;
          if ( v39 )
          {
            StringCchCopyNExW(v39, v37 + 1, v36, v37, dwDesiredAccessa, bInheritHandlea, dwOptionsa);
            v40 = a6;
            if ( a6 )
            {
              wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
                (char *)this + 176,
                0LL);
              v43 = -1LL;
              do
                ++v43;
              while ( v40[v43] );
              v44 = _AllocStringWorker<CTCoAllocPolicy>(v42, v41, v40, v43);
              v45 = v44;
              if ( v44 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xA2E,
                  (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                  (const char *)(unsigned int)v44);
                return v45;
              }
            }
            v47 = a10;
            if ( a10 )
            {
              wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
                (char *)this + 200,
                0LL);
              do
                ++v31;
              while ( v47[v31] );
              v50 = _AllocStringWorker<CTCoAllocPolicy>(v49, v48, v47, v31);
              v51 = v50;
              if ( v50 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xA32,
                  (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                  (const char *)(unsigned int)v50);
                return v51;
              }
            }
            if ( hSourceHandle )
            {
              v52 = CProcess::SetupProcessTerminationWatcher(this);
              v53 = v52;
              if ( v52 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xA3B,
                  (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                  (const char *)(unsigned int)v52);
                return v53;
              }
            }
            v54 = *((_DWORD *)this + 40);
            a19 = v54;
            v55 = 0;
            TargetHandle = 0LL;
            wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
              &TargetHandle,
              0LL);
            v56 = GetCurrentProcess();
            v57 = (void *)*((_QWORD *)this + 19);
            v58 = GetCurrentProcess();
            if ( !DuplicateHandle(v58, v57, v56, &TargetHandle, 0x1000u, 0, 0) )
              goto LABEL_42;
            while ( 1 )
            {
              v59 = (DWORD *)*((_QWORD *)this + 17);
              if ( v59 == *((DWORD **)this + 18) )
              {
                std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>((char *)this + 128, v59, &a19);
              }
              else
              {
                *v59 = v54;
                *((_QWORD *)this + 17) += 4LL;
              }
              v54 = 0;
              a19 = 0;
              v60 = 0;
              if ( TargetHandle )
              {
                memset(ProcessInformation, 0, sizeof(ProcessInformation));
                *(_OWORD *)dwProcessId = 0LL;
                if ( NtQueryInformationProcess(TargetHandle, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL) >= 0 )
                {
                  v54 = dwProcessId[2];
                  a19 = dwProcessId[2];
                  v60 = dwProcessId[2];
                  if ( *(_QWORD *)std::find<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned long>>>,unsigned long>(
                                    &v74,
                                    *((_QWORD *)this + 16),
                                    *((_QWORD *)this + 17),
                                    &a19) != *((_QWORD *)this + 17) )
                  {
                    v63 = AudioSrvPolicyManagerTelemetryProvider::Provider();
                    if ( *(_DWORD *)v63 > 4u )
                    {
                      a19 = *((_DWORD *)this + 40);
                      a9 = v54;
                      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                        (__int64)v63,
                        (__int64)&unk_18005AB46);
                    }
LABEL_42:
                    CProcess::ResetDataFlowAccessCheckResults(this);
                    CProcess::ClearSmtcSubscriptions(this);
                    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TargetHandle);
                    return 0LL;
                  }
                  v61 = OpenProcess(0x1000u, 0, v54);
                  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
                    &TargetHandle,
                    v61);
                }
              }
              ++v55;
              if ( !v60 || v55 >= 0xA )
                goto LABEL_42;
            }
          }
          v62 = -2147024882;
        }
        else
        {
          v62 = -2147024362;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA27,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          (const char *)v62);
        return v62;
      }
      v64 = -2147024882;
    }
    else
    {
      v64 = -2147024362;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA25,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)v64);
    result = v64;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA6A,
                           (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                           v46);
  }
  return result;
}
