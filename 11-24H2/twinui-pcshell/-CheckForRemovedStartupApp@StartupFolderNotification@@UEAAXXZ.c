/*
 * XREFs of ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x1800BE900
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x180056F50 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x180063074 (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?0V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0A@@path@filesystem@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@W4format@012@@Z @ 0x1800BAF24 (--$-0V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0A@@path@filesystem@std@@QEA.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1800BBE6C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ??$?0PEBG$0A@@path@filesystem@std@@QEAA@AEBQEBGW4format@012@@Z @ 0x1800BC554 (--$-0PEBG$0A@@path@filesystem@std@@QEAA@AEBQEBGW4format@012@@Z.c)
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800BD1C0 (-_Alloc_sentinel_and_proxy@-$list@U-$pair@$$CBUhstring@winrt@@V-$vector@UWindowId@UI@Windows@win.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802A3708 (--$_Freenode@V-$allocator@U-$_List_node@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 *     ??$_Emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@QEAU21@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1802B5E48 (--$_Emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$list@V-$basic_st.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18033BE5C (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_88c52b909d46191f2a7b9cf853665f36__&_ @ 0x180585030 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_88c52b909d46191f2a7b9cf853665f36__-_.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall StartupFolderNotification::CheckForRemovedStartupApp(HKEY *this)
{
  unsigned int v2; // eax
  bool v3; // zf
  DWORD v4; // ebx
  _QWORD *v5; // rax
  WCHAR *v6; // r8
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // r8
  _QWORD **v11; // rax
  _QWORD **v12; // rdi
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  _QWORD **v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // rbx
  _QWORD *v18; // rbx
  LPWSTR *v19; // rax
  std::filesystem::path *v20; // rax
  const struct std::filesystem::path *v21; // rdx
  int v22; // eax
  unsigned int lpcSubKeys; // [rsp+28h] [rbp-E0h]
  DWORD cbMaxValueNameLen; // [rsp+68h] [rbp-A0h] BYREF
  DWORD cchValueName; // [rsp+6Ch] [rbp-9Ch] BYREF
  BYTE Data[8]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD **v27; // [rsp+78h] [rbp-90h] BYREF
  __int64 v28; // [rsp+80h] [rbp-88h]
  HKEY *v29; // [rsp+88h] [rbp-80h] BYREF
  __int128 v30; // [rsp+90h] [rbp-78h] BYREF
  LPWSTR *v31; // [rsp+A0h] [rbp-68h] BYREF
  LPWSTR lpValueName[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v33; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v34; // [rsp+C0h] [rbp-48h]
  void *Src[4]; // [rsp+C8h] [rbp-40h] BYREF
  void *v36[4]; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+28h]

  cbMaxValueNameLen = 0;
  v2 = RegQueryInfoKeyW(this[1], 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cbMaxValueNameLen, 0LL, 0LL, 0LL);
  if ( v2 )
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      (void *)0x16B,
      (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      (const char *)v2,
      lpcSubKeys);
  v3 = cbMaxValueNameLen++ == -1;
  cchValueName = cbMaxValueNameLen;
  *(_OWORD *)lpValueName = 0LL;
  v33 = 0LL;
  v34 = 7LL;
  LOWORD(lpValueName[0]) = 0;
  if ( v3 )
  {
    v33 = cbMaxValueNameLen;
    *((_WORD *)lpValueName + cbMaxValueNameLen) = 0;
  }
  else
  {
    std::wstring::append((wchar_t *)lpValueName, cbMaxValueNameLen, 0);
  }
  *(_DWORD *)Data = 0;
  *(_DWORD *)&Data[4] = 4;
  v4 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *v5 = v5;
  v5[1] = v5;
  v27 = (_QWORD **)v5;
  while ( 1 )
  {
    v6 = (WCHAR *)lpValueName;
    if ( v34 > 7 )
      v6 = lpValueName[0];
    if ( RegEnumValueW(this[1], v4, v6, &cchValueName, 0LL, 0LL, Data, (LPDWORD)&Data[4]) )
      break;
    if ( *(_DWORD *)Data == *((_DWORD *)this + 14) && cchValueName > 0xC )
    {
      v19 = lpValueName;
      if ( v34 > 7 )
        v19 = (LPWSTR *)lpValueName[0];
      v31 = v19 + 3;
      std::filesystem::path::path((__int64)Src, this + 8, v7, v8);
      v20 = (std::filesystem::path *)std::filesystem::path::path(v36, (__int64 *)&v31);
      std::filesystem::path::operator/=((std::filesystem *)Src, v20);
      std::wstring::_Tidy_deallocate(v36);
      if ( !std::filesystem::exists((std::filesystem *)Src, v21) )
        std::list<std::wstring>::_Emplace<std::wstring const &>(&v27, v27, lpValueName);
      std::wstring::_Tidy_deallocate(Src);
    }
    ++v4;
    cchValueName = cbMaxValueNameLen;
    *(_DWORD *)&Data[4] = 4;
  }
  v9 = v28;
  v29 = this;
  v30 = 0LL;
  std::list<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>>::_Alloc_sentinel_and_proxy(&v30);
  v11 = (_QWORD **)v30;
  v12 = v27;
  *(_QWORD *)&v30 = v27;
  v27 = v11;
  v13 = *((_QWORD *)&v30 + 1);
  *((_QWORD *)&v30 + 1) = v28;
  v28 = v13;
  if ( v9 )
  {
    v22 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_88c52b909d46191f2a7b9cf853665f36____(
            v13,
            *((unsigned int *)this + 4),
            v10,
            &v29);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x19F,
        (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)(unsigned int)v22);
    v12 = (_QWORD **)v30;
  }
  *v12[1] = 0LL;
  v14 = *v12;
  if ( *v12 )
  {
    do
    {
      v17 = (_QWORD *)*v14;
      std::_List_node<std::wstring,void *>::_Freenode<std::allocator<std::_List_node<std::wstring,void *>>>();
      v14 = v17;
    }
    while ( v17 );
  }
  std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)0x30);
  v15 = v27;
  *v27[1] = 0LL;
  v16 = *v15;
  if ( *v15 )
  {
    do
    {
      v18 = (_QWORD *)*v16;
      std::_List_node<std::wstring,void *>::_Freenode<std::allocator<std::_List_node<std::wstring,void *>>>();
      v16 = v18;
    }
    while ( v18 );
  }
  std::_Deallocate<16,0>(v27, (const struct std::nothrow_t *)0x30);
  std::wstring::_Tidy_deallocate((void **)lpValueName);
}
