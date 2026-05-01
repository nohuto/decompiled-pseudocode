/*
 * XREFs of ?RegisterForStartReady@PriorityBoostHelper@@QEAAJPEAUIServiceProvider@@@Z @ 0x18005FC8C
 * Callers:
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801B41A0 (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PriorityBoostHelper::RegisterForStartReady(PriorityBoostHelper *this, struct IServiceProvider *a2)
{
  const char *v4; // r9
  _QWORD *v5; // r14
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v7; // ebx
  UINT v8; // eax
  const char *v9; // r9
  UINT v10; // eax
  __int64 v11; // rdx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( GetCurrentThreadId() != *((_DWORD *)this + 26) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x18,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      v4);
  v5 = (_QWORD *)((char *)this + 56);
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IImmersiveWindowMessageService,
         &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
         (char *)this + 56);
  if ( v7 < 0 )
  {
    v11 = 25LL;
    goto LABEL_8;
  }
  v8 = RegisterWindowMessageW(L"HostExperienceManager.StartReadyMessage");
  *((_DWORD *)this + 29) = v8;
  if ( !v8 )
  {
    v13 = 31LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v13,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
             v9);
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v5 + 24LL))(
         *v5,
         v8,
         ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
         (char *)this + 96);
  if ( v7 < 0 )
  {
    v11 = 32LL;
    goto LABEL_8;
  }
  v10 = RegisterWindowMessageW(L"HostExperienceManager.ResetActivationTimeoutPolicyMessage");
  *((_DWORD *)this + 28) = v10;
  if ( !v10 )
  {
    v13 = 37LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v13,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
             v9);
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v5 + 24LL))(
         *v5,
         v10,
         ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
         (char *)this + 100);
  if ( v7 < 0 )
  {
    v11 = 38LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  return 0LL;
}
