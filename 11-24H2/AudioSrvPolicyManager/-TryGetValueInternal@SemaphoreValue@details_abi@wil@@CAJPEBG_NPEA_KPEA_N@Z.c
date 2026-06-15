/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800261F8
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x180026178 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001B9E0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180022870 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180023B90 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180025CA0 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     StringCopyWorkerW @ 0x180025DBC (StringCopyWorkerW.c)
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
  __int64 v8; // rdx
  const char *v9; // r9
  int ValueFromSemaphore; // eax
  __int64 v11; // rdx
  int v12; // edi
  wil::details *v13; // rax
  const char *v14; // r9
  void *v15; // rdx
  int v16; // eax
  void *v17; // rdx
  void *v18; // rdx
  size_t v20; // [rsp+28h] [rbp-E0h]
  int v21[2]; // [rsp+38h] [rbp-D0h] BYREF
  wil::details *v22; // [rsp+40h] [rbp-C8h] BYREF
  wil::details *v23; // [rsp+48h] [rbp-C0h] BYREF
  wchar_t pszDest[264]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+280h] [rbp+178h]

  LastError = 0;
  *a3 = 0LL;
  StringCopyWorkerW(pszDest, 0x104uLL, a3, pszSrc, v20);
  StringCchCatW(pszDest, v6, L"_p0");
  v7 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, pszDest);
  v23 = v7;
  if ( v7 )
  {
    v21[1] = 0;
    v21[0] = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v7, &v21[1]);
    v12 = ValueFromSemaphore;
    if ( ValueFromSemaphore >= 0 )
    {
      StringCchCatW(pszDest, v11, L"h");
      v13 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, pszDest);
      v22 = v13;
      if ( !v13 )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD9, (int)"wil", v14);
        __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
          &v22,
          v15);
        goto LABEL_12;
      }
      v16 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v13, v21);
      v12 = v16;
      if ( v16 >= 0 )
      {
        __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
          &v22,
          v17);
        v8 = (__int64)v21[0] << 31;
        *a3 = v8 | v21[1];
        goto LABEL_12;
      }
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0xDB, (int)"wil", (const char *)(unsigned int)v16);
      __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
        &v22,
        v18);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD3,
        (int)"wil",
        (const char *)(unsigned int)ValueFromSemaphore);
    }
    LastError = v12;
  }
  else if ( GetLastError() != 2 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xCD, (int)"wil", v9);
  }
LABEL_12:
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    &v23,
    (void *)v8);
  return LastError;
}
