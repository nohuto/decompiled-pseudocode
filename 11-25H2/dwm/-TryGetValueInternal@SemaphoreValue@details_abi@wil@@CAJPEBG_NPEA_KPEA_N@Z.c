/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x14000B5BC
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x14000B53C (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140004EE0 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400070DC (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x140008B08 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14000AC28 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x14000B18C (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     StringCopyWorkerW @ 0x14000B244 (StringCopyWorkerW.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        STRSAFE_PCNZWCH pszSrc,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  unsigned int LastError; // ebx
  __int64 v6; // rdx
  wil::details *v7; // rax
  void *v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  int ValueFromSemaphore; // eax
  __int64 v12; // rdx
  int v13; // edi
  wil::details *v14; // rax
  __int64 v15; // r8
  const char *v16; // r9
  void *v17; // rdx
  int v18; // eax
  void *v19; // rdx
  void *v20; // rdx
  size_t v22; // [rsp+28h] [rbp-E0h]
  int v23[2]; // [rsp+38h] [rbp-D0h] BYREF
  wil::details *v24; // [rsp+40h] [rbp-C8h] BYREF
  wil::details *v25; // [rsp+48h] [rbp-C0h] BYREF
  wchar_t pszDest[264]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+280h] [rbp+178h]

  LastError = 0;
  *a3 = 0LL;
  StringCopyWorkerW(pszDest, 0x104uLL, a3, pszSrc, v22);
  StringCchCatW(pszDest, v6, L"_p0");
  v7 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, pszDest);
  v25 = v7;
  if ( v7 )
  {
    v23[1] = 0;
    v23[0] = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v7, &v23[1]);
    v13 = ValueFromSemaphore;
    if ( ValueFromSemaphore >= 0 )
    {
      StringCchCatW(pszDest, v12, L"h");
      v14 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, pszDest);
      v24 = v14;
      if ( !v14 )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD9, v15, v16);
        __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
          &v24,
          v17);
        goto LABEL_12;
      }
      v18 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v14, v23);
      v13 = v18;
      if ( v18 >= 0 )
      {
        __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
          &v24,
          v19);
        v8 = (void *)(v23[1] | (unsigned __int64)((__int64)v23[0] << 31));
        *a3 = (unsigned __int64)v8;
        goto LABEL_12;
      }
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0xDB, (__int64)"wil", (const char *)(unsigned int)v18);
      __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
        &v24,
        v20);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD3,
        (__int64)"wil",
        (const char *)(unsigned int)ValueFromSemaphore);
    }
    LastError = v13;
  }
  else if ( GetLastError() != 2 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xCD, v9, v10);
  }
LABEL_12:
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    &v25,
    v8);
  return LastError;
}
