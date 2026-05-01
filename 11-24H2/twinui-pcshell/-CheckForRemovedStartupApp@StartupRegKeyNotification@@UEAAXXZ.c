/*
 * XREFs of ?CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ @ 0x1800BCF10
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1800BBE6C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800BD1C0 (-_Alloc_sentinel_and_proxy@-$list@U-$pair@$$CBUhstring@winrt@@V-$vector@UWindowId@UI@Windows@win.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802A3708 (--$_Freenode@V-$allocator@U-$_List_node@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 *     ??$_Emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@QEAU21@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1802B5E48 (--$_Emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$list@V-$basic_st.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18033BE5C (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_7936b82dc4b721215efe4b8ef74a7a70__&_ @ 0x180584F9C (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_7936b82dc4b721215efe4b8ef74a7a70__-_.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall StartupRegKeyNotification::CheckForRemovedStartupApp(HKEY *this)
{
  unsigned int v2; // eax
  bool v3; // zf
  DWORD v4; // ebx
  _QWORD *v5; // rax
  WCHAR *v6; // r8
  LPWSTR *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r8
  _QWORD **v10; // rax
  _QWORD **v11; // rdi
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rdx
  _QWORD *v15; // rbx
  _QWORD **v16; // rcx
  _QWORD *v17; // rdx
  _QWORD *v18; // rbx
  unsigned int lpcSubKeys; // [rsp+28h] [rbp-59h]
  DWORD cbMaxValueNameLen; // [rsp+68h] [rbp-19h] BYREF
  DWORD cchValueName; // [rsp+6Ch] [rbp-15h] BYREF
  BYTE Data[4]; // [rsp+70h] [rbp-11h] BYREF
  DWORD cbData; // [rsp+74h] [rbp-Dh] BYREF
  _QWORD **v24; // [rsp+78h] [rbp-9h] BYREF
  __int64 v25; // [rsp+80h] [rbp-1h]
  HKEY *v26; // [rsp+88h] [rbp+7h] BYREF
  __int128 v27; // [rsp+90h] [rbp+Fh] BYREF
  LPWSTR lpValueName[2]; // [rsp+A0h] [rbp+1Fh] BYREF
  __int64 v29; // [rsp+B0h] [rbp+2Fh]
  unsigned __int64 v30; // [rsp+B8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  cbMaxValueNameLen = 0;
  v2 = RegQueryInfoKeyW(this[1], 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cbMaxValueNameLen, 0LL, 0LL, 0LL);
  if ( v2 )
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      (void *)0xDB,
      (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      (const char *)v2,
      lpcSubKeys);
  v3 = cbMaxValueNameLen++ == -1;
  cchValueName = cbMaxValueNameLen;
  *(_OWORD *)lpValueName = 0LL;
  v29 = 0LL;
  v30 = 7LL;
  LOWORD(lpValueName[0]) = 0;
  if ( v3 )
  {
    v29 = cbMaxValueNameLen;
    *((_WORD *)lpValueName + cbMaxValueNameLen) = 0;
  }
  else
  {
    std::wstring::append((wchar_t *)lpValueName, cbMaxValueNameLen, 0);
  }
  *(_DWORD *)Data = 0;
  cbData = 4;
  v4 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *v5 = v5;
  v5[1] = v5;
  v24 = (_QWORD **)v5;
  while ( 1 )
  {
    v6 = (WCHAR *)lpValueName;
    if ( v30 > 7 )
      v6 = lpValueName[0];
    if ( RegEnumValueW(this[1], v4, v6, &cchValueName, 0LL, 0LL, Data, &cbData) )
      break;
    if ( *(_DWORD *)Data == *((_DWORD *)this + 14) && cchValueName > 0xC )
    {
      v7 = lpValueName;
      if ( v30 > 7 )
        v7 = (LPWSTR *)lpValueName[0];
      if ( RegQueryValueExW(this[8], (LPCWSTR)v7 + 12, 0LL, 0LL, 0LL, 0LL) == 2 )
        std::list<std::wstring>::_Emplace<std::wstring const &>(&v24, v24, lpValueName);
    }
    ++v4;
    cchValueName = cbMaxValueNameLen;
    cbData = 4;
  }
  v8 = v25;
  v26 = this;
  v27 = 0LL;
  std::list<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>>::_Alloc_sentinel_and_proxy(&v27);
  v10 = (_QWORD **)v27;
  v11 = v24;
  *(_QWORD *)&v27 = v24;
  v24 = v10;
  v12 = *((_QWORD *)&v27 + 1);
  *((_QWORD *)&v27 + 1) = v25;
  v25 = v12;
  if ( v8 )
  {
    v13 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_7936b82dc4b721215efe4b8ef74a7a70____(
            v12,
            *((unsigned int *)this + 4),
            v9,
            &v26);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10C,
        (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)(unsigned int)v13);
    v11 = (_QWORD **)v27;
  }
  *v11[1] = 0LL;
  v14 = *v11;
  if ( *v11 )
  {
    do
    {
      v15 = (_QWORD *)*v14;
      std::_List_node<std::wstring,void *>::_Freenode<std::allocator<std::_List_node<std::wstring,void *>>>();
      v14 = v15;
    }
    while ( v15 );
  }
  std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)0x30);
  v16 = v24;
  *v24[1] = 0LL;
  v17 = *v16;
  if ( *v16 )
  {
    do
    {
      v18 = (_QWORD *)*v17;
      std::_List_node<std::wstring,void *>::_Freenode<std::allocator<std::_List_node<std::wstring,void *>>>();
      v17 = v18;
    }
    while ( v18 );
  }
  std::_Deallocate<16,0>(v24, (const struct std::nothrow_t *)0x30);
  std::wstring::_Tidy_deallocate((void **)lpValueName);
}
