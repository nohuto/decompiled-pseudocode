/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180009E44
 * Callers:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18000A24C (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180002210 (__security_check_cookie.c)
 *     memset_0 @ 0x180002E14 (memset_0.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x180004188 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEB_WPEAX@Z @ 0x1800047A0 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEB_WPEAX@Z.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180004984 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180004F58 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x1800057B0 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005C04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x180006620 (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEB_W_NPEA_KPEA_N@Z @ 0x1800066EC (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEB_W_NPEA_KPEA_N@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180006B28 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180006C40 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180009668 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 */

signed int __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  wil::details *v6; // rcx
  HANDLE v7; // rbx
  DWORD v9; // eax
  void *v10; // rdx
  __int64 v11; // r8
  char *v12; // r9
  void *v13; // r14
  int ValueInternal; // eax
  unsigned int v15; // edi
  __int64 v16; // r8
  const char *v17; // r9
  __int64 v18; // r8
  const char *v19; // r9
  _DWORD *v20; // rcx
  HANDLE v21; // rbx
  char *v22; // rax
  char *v23; // rdi
  unsigned int v24; // esi
  int v25; // eax
  HANDLE ProcessHeap; // rax
  __int64 v27; // r8
  const char *v28; // r9
  __int64 v29; // r8
  const char *v30; // r9
  __int64 v31; // rax
  __int64 v32; // r8
  const char *v33; // r9
  __int64 v34; // r8
  const char *v35; // r9
  HANDLE hHandle; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v37; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 260LL, L"Local\\SM0:%lu:%lu:%hs", CurrentProcessId, 304, a1);
  hHandle = 0LL;
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    &hHandle,
    Mutex);
  v7 = hHandle;
  if ( !hHandle )
    return wil::details::GetLastErrorFailHr(v6);
  v9 = WaitForSingleObjectEx(hHandle, 0xFFFFFFFF, 0);
  if ( v9 == 258 )
  {
    v13 = 0LL;
  }
  else
  {
    if ( (v9 & 0xFFFFFF7F) != 0 )
      wil::details::in1diag3::FailFast_Unexpected(retaddr, v10, v11, v12);
    v13 = v7;
  }
  v38 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal(Name, (__int64)v10, &v38, (bool *)v12);
  v15 = ValueInternal;
  if ( ValueInternal < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x64, (__int64)"wil", (const char *)(unsigned int)ValueInternal);
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6D, (__int64)"wil", (const char *)v15);
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x12B, (__int64)"wil", (const char *)v15);
    if ( v13 && !ReleaseMutex(v13) )
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x9E7, v16, v17);
    if ( !CloseHandle(v7) )
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x9DD, v18, v19);
    return v15;
  }
  v20 = (_DWORD *)(4 * v38);
  if ( 4 * v38 )
  {
    *a2 = v20;
    v21 = hHandle;
    *(_DWORD *)*a2 = *v20 + 1;
    goto LABEL_24;
  }
  *a2 = 0LL;
  v22 = (char *)wil::details::ProcessHeapAlloc(8u, 0x130uLL);
  v23 = v22;
  if ( v22 )
  {
    v37 = 0LL;
    v25 = wil::details_abi::SemaphoreValue::CreateFromPointer(
            (wil::details_abi::SemaphoreValue *)&v37,
            Name,
            (unsigned __int64)v22);
    v24 = v25;
    if ( v25 >= 0 )
    {
      *((_QWORD *)v23 + 2) = v37;
      v31 = *((_QWORD *)&v37 + 1);
      *((_QWORD *)v23 + 1) = v7;
      v21 = 0LL;
      v37 = 0uLL;
      *((_QWORD *)v23 + 3) = v31;
      *(_DWORD *)v23 = 1;
      memset_0(v23 + 40, 0, 0x108uLL);
      *((_QWORD *)v23 + 4) = 0LL;
      wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)(v23 + 40));
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v23 + 232), 0, 0);
      *((_QWORD *)v23 + 34) = 0LL;
      *((_QWORD *)v23 + 35) = 0LL;
      *((_QWORD *)v23 + 36) = 0LL;
      *((_QWORD *)v23 + 37) = 0LL;
      *a2 = v23;
      wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)&v37);
LABEL_24:
      if ( v13 && !ReleaseMutex(v13) )
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x9E7, v32, v33);
      if ( v21 && !CloseHandle(v21) )
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x9DD, v34, v35);
      return 0;
    }
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x14B, (__int64)"wil", (const char *)(unsigned int)v25);
    wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)&v37);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v23);
  }
  else
  {
    v24 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x148, (__int64)"wil", (const char *)0x8007000ELL);
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x134, (__int64)"wil", (const char *)v24);
  if ( v13 && !ReleaseMutex(v13) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x9E7, v27, v28);
  if ( v7 && !CloseHandle(v7) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x9DD, v29, v30);
  return v24;
}
