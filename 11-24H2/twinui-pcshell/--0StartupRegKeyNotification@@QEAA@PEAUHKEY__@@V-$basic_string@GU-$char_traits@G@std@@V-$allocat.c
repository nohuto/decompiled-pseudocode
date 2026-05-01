/*
 * XREFs of ??0StartupRegKeyNotification@@QEAA@PEAUHKEY__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4StartupAppLocation@@1@Z @ 0x1801E1E00
 * Callers:
 *     ??$make_shared@VStartupRegKeyNotification@@AEAPEAUHKEY__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAW4StartupAppLocation@@AEAV34@@std@@YA?AV?$shared_ptr@VStartupRegKeyNotification@@@0@AEAPEAUHKEY__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEAW4StartupAppLocation@@1@Z @ 0x1801E1D28 (--$make_shared@VStartupRegKeyNotification@@AEAPEAUHKEY__@@AEAV-$basic_string@GU-$char_traits@G@s.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BADF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0StartupNotification@@QEAA@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800F1480 (--0StartupNotification@@QEAA@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F2248 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F2678 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18033BE5C (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall StartupRegKeyNotification::StartupRegKeyNotification(
        __int64 a1,
        __int64 a2,
        char *a3,
        int a4,
        void **a5)
{
  void **v9; // rax
  const WCHAR *v10; // rsi
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  const WCHAR *v13; // r8
  const WCHAR *v14; // r10
  const WCHAR *v15; // rbx
  __int64 v16; // rax
  const WCHAR *v17; // rcx
  const WCHAR *v18; // rbx
  __int64 v19; // rdx
  const wchar_t *v20; // rcx
  __int64 v21; // rbx
  HKEY *phkResult; // rax
  unsigned int Key; // eax
  DWORD dwOptions; // [rsp+20h] [rbp-B8h]
  _QWORD v26[6]; // [rsp+60h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v26[4] = a3;
  v26[5] = a5;
  v9 = (void **)std::wstring::wstring((__int64)v26, (__int64)a5);
  StartupNotification::StartupNotification(a1, v9);
  *(_QWORD *)a1 = &StartupRegKeyNotification::`vftable';
  *(_QWORD *)(a1 + 64) = 0LL;
  v10 = (const WCHAR *)(a1 + 80);
  *(_OWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 7LL;
  *(_WORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = a2;
  std::wstring::operator=((char *)(a1 + 80), a3, v11);
  *(_DWORD *)(a1 + 56) = a4;
  v12 = *(_QWORD *)(a1 + 96);
  v13 = (const WCHAR *)(a1 + 80);
  if ( *(_QWORD *)(a1 + 104) > 7uLL )
    v13 = *(const WCHAR **)v10;
  if ( v12 < 0x39 )
    goto LABEL_17;
  v14 = &v13[v12 - 56];
  v15 = v13;
LABEL_5:
  v16 = v14 - v15;
  v17 = v15;
  v18 = 0LL;
  if ( v16 )
  {
    while ( *v17 != 83 )
    {
      if ( v16 == 1 )
        goto LABEL_10;
      --v16;
      ++v17;
    }
    v18 = v17;
  }
LABEL_10:
  if ( v18 )
  {
    v19 = 57LL;
    v20 = L"Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Run";
    while ( v19 )
    {
      if ( *(const wchar_t *)((char *)v20
                            + (char *)v18
                            - (char *)L"Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Run") != *v20 )
      {
        v15 = v18 + 1;
        goto LABEL_5;
      }
      --v19;
      ++v20;
    }
    v21 = v18 - v13;
  }
  else
  {
LABEL_17:
    v21 = -1LL;
  }
  phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put((HKEY *)(a1 + 64));
  if ( *(_QWORD *)(a1 + 104) > 7uLL )
    v10 = *(const WCHAR **)v10;
  Key = RegCreateKeyExW(*(HKEY *)(a1 + 72), v10, 0, 0LL, 0, v21 != 0 ? 281 : 537, 0LL, phkResult, 0LL);
  if ( Key )
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      (void *)0x8B,
      (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      (const char *)Key,
      dwOptions);
  std::wstring::_Tidy_deallocate((void **)a3);
  std::wstring::_Tidy_deallocate(a5);
  return a1;
}
