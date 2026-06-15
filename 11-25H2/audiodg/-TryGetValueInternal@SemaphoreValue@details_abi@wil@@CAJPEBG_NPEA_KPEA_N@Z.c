/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x140057284
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x14005E688 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x14001D614 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     StringCopyWorkerW @ 0x140031334 (StringCopyWorkerW.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1400426C8 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x140046214 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1400574C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  __int64 v4; // r9
  WCHAR *v5; // rdx
  signed __int64 v6; // rcx
  WCHAR v8; // ax
  WCHAR *v9; // rax
  __int64 v10; // r8
  WCHAR *v11; // rax
  __int64 v12; // r9
  wil::details *v13; // rax
  wil::details *v14; // rbx
  int ValueFromSemaphore; // eax
  __int64 v16; // rdx
  unsigned int LastError; // edi
  void *v18; // rdx
  wil::details *v19; // rax
  const char *v20; // r9
  wil::details *v21; // rdi
  int v22; // eax
  void *v23; // rdx
  int v24; // esi
  void *v25; // rdx
  void *v26; // rdx
  const char *v28; // r9
  size_t v29; // [rsp+28h] [rbp-E0h]
  int v30; // [rsp+38h] [rbp-D0h] BYREF
  int v31[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  WCHAR Name[264]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+280h] [rbp+178h]

  *a3 = 0LL;
  v4 = 260LL;
  v5 = Name;
  v6 = a1 - (char *)Name;
  do
  {
    if ( v4 == -2147483386 )
      break;
    v8 = *(WCHAR *)((char *)v5 + v6);
    if ( !v8 )
      break;
    *v5++ = v8;
    --v4;
  }
  while ( v4 );
  v9 = v5 - 1;
  v10 = 260LL;
  if ( v4 )
    v9 = v5;
  *v9 = 0;
  v11 = Name;
  do
  {
    if ( !*v11 )
      break;
    ++v11;
    --v10;
  }
  while ( v10 );
  if ( v10 )
  {
    v12 = (260 - v10) & -(__int64)(v10 != 0);
    StringCopyWorkerW(&Name[v12], 260 - v12, (size_t *)v10, L"_p0", v29);
  }
  v13 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v14 = v13;
  if ( v13 )
  {
    v31[0] = 0;
    v30 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v13, v31);
    LastError = ValueFromSemaphore;
    if ( ValueFromSemaphore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD3,
        (int)"wil",
        (const char *)(unsigned int)ValueFromSemaphore);
LABEL_20:
      wil::details::CloseHandle(v14, v18);
      return LastError;
    }
    StringCchCatW(Name, v16, L"h");
    v19 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
    v21 = v19;
    if ( !v19 )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD9, (unsigned int)"wil", v20);
      goto LABEL_20;
    }
    v22 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v19, &v30);
    v24 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0xDB, (int)"wil", (const char *)(unsigned int)v22);
      wil::details::CloseHandle(v21, v25);
      LastError = v24;
      goto LABEL_20;
    }
    wil::details::CloseHandle(v21, v23);
    *a3 = v31[0] | (unsigned __int64)((__int64)v30 << 31);
    wil::details::CloseHandle(v14, v26);
    return 0LL;
  }
  if ( GetLastError() == 2 )
    return 0LL;
  return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xCD, (unsigned int)"wil", v28);
}
