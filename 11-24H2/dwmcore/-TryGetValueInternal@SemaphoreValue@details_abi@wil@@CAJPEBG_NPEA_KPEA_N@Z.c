/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180228784
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x180254E14 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18018D230 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     StringCopyWorkerW @ 0x1801A7220 (StringCopyWorkerW.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18024847C (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18024F9FC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180253C44 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  unsigned int LastError; // ebx
  __int64 v5; // r9
  WCHAR *v6; // rdx
  signed __int64 v7; // rcx
  WCHAR v9; // ax
  WCHAR *v10; // rax
  __int64 v11; // rdx
  WCHAR *v12; // rax
  __int64 v13; // r8
  wil::details *v14; // rax
  void *v15; // rdx
  const char *v16; // r9
  int ValueFromSemaphore; // eax
  int v19; // edi
  wil::details *v20; // rax
  const char *v21; // r9
  void *v22; // rdx
  int v23; // eax
  void *v24; // rdx
  void *v25; // rdx
  size_t v26; // [rsp+20h] [rbp-E0h]
  int v27; // [rsp+30h] [rbp-D0h] BYREF
  int v28; // [rsp+34h] [rbp-CCh] BYREF
  wil::details *v29; // [rsp+38h] [rbp-C8h] BYREF
  wil::details *v30; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  LastError = 0;
  *a3 = 0LL;
  v5 = 260LL;
  v6 = Name;
  v7 = a1 - (char *)Name;
  do
  {
    if ( v5 == -2147483386 )
      break;
    v9 = *(WCHAR *)((char *)v6 + v7);
    if ( !v9 )
      break;
    *v6++ = v9;
    --v5;
  }
  while ( v5 );
  v10 = v6 - 1;
  if ( v5 )
    v10 = v6;
  v11 = 260LL;
  *v10 = 0;
  v12 = Name;
  do
  {
    if ( !*v12 )
      break;
    ++v12;
    --v11;
  }
  while ( v11 );
  if ( v11 )
  {
    v13 = (260 - v11) & -(__int64)(v11 != 0);
    StringCopyWorkerW(&Name[v13], 260 - v13, (size_t *)v13, L"_p0", v26);
  }
  v14 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v30 = v14;
  if ( v14 )
  {
    v28 = 0;
    v27 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v14, &v28);
    v19 = ValueFromSemaphore;
    if ( ValueFromSemaphore >= 0 )
    {
      StringCchCatW(Name, 0x104uLL, L"h");
      v20 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
      v29 = v20;
      if ( !v20 )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD9, (unsigned int)"wil", v21);
        __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
          &v29,
          v22);
        goto LABEL_23;
      }
      v23 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v20, &v27);
      v19 = v23;
      if ( v23 >= 0 )
      {
        __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
          &v29,
          v24);
        v15 = (void *)(v28 | (unsigned __int64)((__int64)v27 << 31));
        *a3 = (unsigned __int64)v15;
        goto LABEL_23;
      }
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0xDB, (int)"wil", (const char *)(unsigned int)v23);
      __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
        &v29,
        v25);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD3,
        (int)"wil",
        (const char *)(unsigned int)ValueFromSemaphore);
    }
    LastError = v19;
  }
  else if ( GetLastError() != 2 )
  {
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xCD, (unsigned int)"wil", v16);
  }
LABEL_23:
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    &v30,
    v15);
  return LastError;
}
