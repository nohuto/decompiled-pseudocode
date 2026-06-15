/*
 * XREFs of ?HandleAccessChangeNotification@@YAJPEBG0@Z @ 0x1800C80D4
 * Callers:
 *     s_CapabilityAccessManagerNotification @ 0x1800C8910 (s_CapabilityAccessManagerNotification.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180060E88 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180065D1C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18007CC30 (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A5F68 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?RtlFreeSid@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C7F68 (--1-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-RtlFreeSid@@YAPEAX0@ZU-$integral_cons.c)
 *     ?RevokeSessionsWithoutDataFlowAccess@AudioSessionManagerProvider@@YAJPEBG0@Z @ 0x1800C8540 (-RevokeSessionsWithoutDataFlowAccess@AudioSessionManagerProvider@@YAJPEBG0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HandleAccessChangeNotification(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  HLOCAL v4; // r8
  int v5; // eax
  unsigned int LastError; // ebx
  __int64 v7; // rdx
  HLOCAL v8; // rbx
  const char *v9; // r9
  const unsigned __int16 *v10; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  HLOCAL hMem; // [rsp+58h] [rbp+28h] BYREF
  PSID Sid; // [rsp+60h] [rbp+30h] BYREF
  char v15; // [rsp+68h] [rbp+38h] BYREF

  Sid = 0LL;
  v4 = 0LL;
  hMem = 0LL;
  if ( !a2 )
    goto LABEL_9;
  Sid = 0LL;
  v5 = AppContainerDeriveSidFromMoniker(a2, &Sid);
  LastError = v5;
  if ( v5 < 0 )
  {
    v7 = 41LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_13;
  }
  v8 = hMem;
  if ( hMem )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v15);
    LocalFree(v8);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v15);
  }
  hMem = 0LL;
  if ( ConvertSidToStringSidW(Sid, (LPWSTR *)&hMem) )
  {
    v4 = hMem;
LABEL_9:
    (*(void (__fastcall **)(struct IAudioPolicyManager *, const unsigned __int16 *, HLOCAL, const unsigned __int16 *))(*(_QWORD *)g_PolicyManager + 56LL))(
      g_PolicyManager,
      a2,
      v4,
      a1);
    v5 = AudioSessionManagerProvider::RevokeSessionsWithoutDataFlowAccess((AudioSessionManagerProvider *)hMem, a1, v10);
    LastError = v5;
    if ( v5 >= 0 )
    {
      LastError = 0;
      goto LABEL_13;
    }
    v7 = 53LL;
    goto LABEL_11;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0x2A,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
                v9);
LABEL_13:
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&hMem);
  wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * RtlFreeSid(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * RtlFreeSid(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Sid);
  return LastError;
}
