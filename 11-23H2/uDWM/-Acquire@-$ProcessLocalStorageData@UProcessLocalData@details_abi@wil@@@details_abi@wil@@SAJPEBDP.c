/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18009AB5C
 * Callers:
 *     ?GetShared@?$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUProcessLocalData@23@XZ @ 0x18009B7F4 (-GetShared@-$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUPr.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800219A8 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x180021DD0 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x180024E7C (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wi.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180024F5C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x180024FF8 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800258F8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ??1?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x18009A5D4 (--1-$unique_any_t@V-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18009A5F4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-ReleaseMutex@details@wi.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18009B670 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x18009BF2C (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
        __int64 a1,
        void **a2)
{
  DWORD CurrentProcessId; // eax
  wil::details *Mutex; // rax
  wil::details *v5; // rcx
  void *v6; // rdx
  unsigned int LastErrorFailHr; // ebx
  __int64 v8; // r8
  bool *v9; // r9
  int Pointer; // eax
  void *v11; // rdx
  __int64 v12; // rdx
  _DWORD *v13; // rax
  void *v15; // rdx
  wil::details *v16; // [rsp+30h] [rbp-D0h] BYREF
  wil::details *v17; // [rsp+38h] [rbp-C8h] BYREF
  void *v18; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 0x104uLL, (size_t *)L"Local\\SM0:%lu:%lu:%hs", CurrentProcessId);
  v16 = 0LL;
  Mutex = (wil::details *)CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    &v16,
    Mutex);
  if ( !v16 )
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v5);
LABEL_15:
    __1__unique_any_t_V__mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil___wil__QEAA_XZ(
      &v16,
      v6);
    return LastErrorFailHr;
  }
  _acquire___mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBA_AV__unique_any_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil___2_PEAKKH_Z(
    (HANDLE *)&v16,
    &v17);
  v18 = 0LL;
  Pointer = wil::details_abi::SemaphoreValue::TryGetPointer(Name, &v18, v8, v9);
  LastErrorFailHr = Pointer;
  if ( Pointer < 0 )
  {
    v12 = 296LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"wil",
      (const char *)(unsigned int)Pointer,
      120);
    __1__unique_any_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil___wil__QEAA_XZ(
      &v17,
      v15);
    goto LABEL_15;
  }
  v13 = v18;
  if ( v18 )
  {
    *a2 = v18;
    *(_DWORD *)*a2 = *v13 + 1;
  }
  else
  {
    Pointer = wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(Name);
    LastErrorFailHr = Pointer;
    if ( Pointer < 0 )
    {
      v12 = 304LL;
      goto LABEL_14;
    }
  }
  if ( v17 )
    wil::details::ReleaseMutex(v17, v11);
  if ( v16 )
    wil::details::CloseHandle(v16, v11);
  return 0LL;
}
