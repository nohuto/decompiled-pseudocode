/*
 * XREFs of ??$get_runtime_activation_factory_impl@$00@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1802048CC
 * Callers:
 *     ??$get_runtime_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1802048A4 (--$get_runtime_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@YA-.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800472A0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?0Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBUhstring@winrt@@AEBV?$allocator@G@1@@Z @ 0x1800C4940 (--$-0Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBU.c)
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x1801837A0 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     WINRT_IMPL_GetProcAddress @ 0x1802D2AEC (WINRT_IMPL_GetProcAddress.c)
 *     LoadLibraryExW_0 @ 0x1802D2BE9 (LoadLibraryExW_0.c)
 *     RoGetActivationFactory_0 @ 0x1802D2E21 (RoGetActivationFactory_0.c)
 *     WINRT_IMPL_FreeLibrary @ 0x1802D3692 (WINRT_IMPL_FreeLibrary.c)
 *     SetErrorInfo_0 @ 0x1802DB0F9 (SetErrorInfo_0.c)
 *     GetErrorInfo_0 @ 0x1802DB117 (GetErrorInfo_0.c)
 *     ?rfind@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KG_K@Z @ 0x1802DF9A0 (-rfind@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KG_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall winrt::impl::get_runtime_activation_factory_impl<1>(
        _DWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v8; // rcx
  int ActivationFactory_0; // ebx
  HMODULE Library; // rax
  FARPROC ProcAddress; // rax
  const WCHAR *v12; // rcx
  HMODULE v13; // rdi
  FARPROC v14; // rax
  unsigned __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+20h] [rbp-48h] BYREF
  IErrorInfo *pperrinfo; // [rsp+28h] [rbp-40h] BYREF
  LPCWSTR lpLibFileName[4]; // [rsp+30h] [rbp-38h] BYREF

  v8 = *a2;
  if ( winrt_activation_handler )
  {
    *a1 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *))winrt_activation_handler)(v8, a3, a4);
    return a1;
  }
  ActivationFactory_0 = RoGetActivationFactory_0(v8, a3, a4);
  if ( ActivationFactory_0 == -2147221008 )
  {
    Library = LoadLibraryExW_0(L"combase.dll", 0LL, 0x1000u);
    ProcAddress = WINRT_IMPL_GetProcAddress(Library, "CoIncrementMTAUsage");
    if ( !ProcAddress )
    {
      *a1 = -2147221008;
      return a1;
    }
    v18 = 0LL;
    ((void (__fastcall *)(__int64 *))ProcAddress)(&v18);
    ActivationFactory_0 = RoGetActivationFactory_0(*a2, a3, a4);
  }
  if ( !ActivationFactory_0 )
  {
    *a1 = 0;
    return a1;
  }
  pperrinfo = 0LL;
  GetErrorInfo_0(0, &pperrinfo);
  std::wstring::wstring(lpLibFileName, a2);
  while ( 1 )
  {
    do
    {
      v15 = std::wstring::rfind(lpLibFileName);
      if ( v15 == -1LL )
      {
        SetErrorInfo_0(0, pperrinfo);
        *a1 = ActivationFactory_0;
        goto LABEL_20;
      }
      std::wstring::resize((wchar_t *)lpLibFileName, v15);
      std::wstring::append(lpLibFileName, L".dll", 4uLL);
      v12 = (const WCHAR *)lpLibFileName;
      if ( lpLibFileName[3] > (LPCWSTR)7 )
        v12 = lpLibFileName[0];
      v13 = LoadLibraryExW_0(v12, 0LL, 0x1000u);
      std::wstring::resize((wchar_t *)lpLibFileName, (unsigned __int64)(lpLibFileName[2] - 2));
    }
    while ( !v13 );
    v14 = WINRT_IMPL_GetProcAddress(v13, "DllGetActivationFactory");
    if ( v14 )
      break;
LABEL_17:
    WINRT_IMPL_FreeLibrary(v13);
  }
  v18 = 0LL;
  if ( ((unsigned int (__fastcall *)(__int64, __int64 *))v14)(*a2, &v18) )
  {
    if ( v18 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v18);
    goto LABEL_17;
  }
  v17 = v18;
  v18 = 0LL;
  *a4 = v17;
  *a1 = 0;
LABEL_20:
  std::wstring::_Tidy_deallocate((void **)lpLibFileName);
  if ( pperrinfo )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&pperrinfo);
  return a1;
}
