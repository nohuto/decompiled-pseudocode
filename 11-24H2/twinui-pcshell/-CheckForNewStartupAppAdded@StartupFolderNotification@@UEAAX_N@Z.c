/*
 * XREFs of ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x1800BC950
 * Callers:
 *     <none>
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800472A0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1STARTUPAPPINFO@@QEAA@XZ @ 0x1800BAA38 (--1STARTUPAPPINFO@@QEAA@XZ.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1800BAC80 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BADF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$basic_string_view@GU?$char_traits@G@std@@@1@U_Normal_conversion@01@@Z @ 0x1800BB98C (--$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA-AV-$basic_.c)
 *     ?filename@path@filesystem@std@@QEBA?AV123@XZ @ 0x1800BC5E8 (-filename@path@filesystem@std@@QEBA-AV123@XZ.c)
 *     ?_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z @ 0x1800BC64C (-_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z.c)
 *     ??$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@2@AEBVpath@12@W4directory_options@12@@Z @ 0x18021640C (--$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA-AW4__.c)
 *     ?UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z @ 0x180299D1C (-UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z.c)
 *     ?IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z @ 0x18029CA10 (-IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z.c)
 *     ??0STARTUPAPPINFO@@QEAA@$$QEAU0@@Z @ 0x1802A4098 (--0STARTUPAPPINFO@@QEAA@$$QEAU0@@Z.c)
 *     ?_Advance_and_reset_if_no_more_files@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@3@@Z @ 0x1802B8584 (-_Advance_and_reset_if_no_more_files@_Dir_enum_impl@filesystem@std@@SA-AW4__std_win_error@@AEAV-.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z @ 0x180319D90 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18033BE34 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18033BE5C (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@@Z @ 0x1805866D0 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@@Z.c)
 */

// Hidden C++ exception states: #wind=17
void __fastcall StartupFolderNotification::CheckForNewStartupAppAdded(StartupFolderNotification *this, char a2)
{
  std::_Ref_count_base *v4; // rax
  std::_Ref_count_base *v5; // rcx
  unsigned int v6; // eax
  volatile signed __int32 *v7; // rdi
  std::filesystem **v8; // r15
  const unsigned __int16 *v9; // r8
  std::filesystem **v10; // rsi
  std::filesystem *v11; // rcx
  __int64 v12; // r11
  LPCWSTR *v13; // rdx
  unsigned __int64 v14; // r8
  const unsigned __int16 *v15; // r8
  std::filesystem *v16; // rcx
  __int64 v17; // r11
  const WCHAR *v18; // rdx
  LSTATUS Value; // ebx
  const WCHAR *v20; // rax
  unsigned int v21; // eax
  const WCHAR *v22; // rdx
  unsigned int v23; // eax
  const WCHAR *v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rax
  int updated; // eax
  const WCHAR *v28; // rdx
  unsigned int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // rcx
  unsigned int lpData; // [rsp+28h] [rbp-E0h]
  unsigned int lpDataa; // [rsp+28h] [rbp-E0h]
  int lpDatab; // [rsp+28h] [rbp-E0h]
  unsigned int lpDatac; // [rsp+28h] [rbp-E0h]
  BYTE Data[8]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v37; // [rsp+48h] [rbp-C0h] BYREF
  std::_Ref_count_base *v38[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct std::filesystem::directory_entry *v39[2]; // [rsp+68h] [rbp-A0h] BYREF
  std::_Ref_count_base *v40[2]; // [rsp+78h] [rbp-90h]
  __int128 v41; // [rsp+88h] [rbp-80h]
  _BYTE v42[192]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v43; // [rsp+158h] [rbp+50h] BYREF
  char *v44; // [rsp+160h] [rbp+58h] BYREF
  __int128 v45; // [rsp+180h] [rbp+78h]
  __int128 v46; // [rsp+190h] [rbp+88h]
  __int128 v47; // [rsp+1A0h] [rbp+98h]
  __int128 v48; // [rsp+1B0h] [rbp+A8h]
  __int128 v49; // [rsp+1C0h] [rbp+B8h]
  __int128 v50; // [rsp+1D0h] [rbp+C8h]
  int v51; // [rsp+1E0h] [rbp+D8h]
  int v52; // [rsp+1E4h] [rbp+DCh]
  __int64 v53; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE v54[40]; // [rsp+1F0h] [rbp+E8h] BYREF
  LPCWSTR lpValueName[2]; // [rsp+218h] [rbp+110h] BYREF
  __int128 v56; // [rsp+228h] [rbp+120h]
  LPCWSTR Src[2]; // [rsp+238h] [rbp+130h] BYREF
  __int128 v58; // [rsp+248h] [rbp+140h]
  BYTE v59[16]; // [rsp+258h] [rbp+150h] BYREF
  __int128 v60; // [rsp+268h] [rbp+160h]
  void *v61[4]; // [rsp+278h] [rbp+170h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D0h] [rbp+1C8h]

  v4 = (StartupFolderNotification *)((char *)this + 64);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 10);
  if ( *((_QWORD *)v4 + 3) > 7uLL )
    v4 = *(std::_Ref_count_base **)v4;
  v38[0] = v4;
  v38[1] = v5;
  std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(lpValueName, (__int128 *)v38);
  v37 = 0LL;
  v6 = std::filesystem::_Dir_enum_impl::_Initialize_dir_enum<std::filesystem::_Dir_enum_impl>(&v37, lpValueName);
  if ( v6 )
    std::filesystem::_Throw_fs_error("directory_iterator::directory_iterator", v6, lpValueName);
  std::wstring::_Tidy_deallocate((void **)lpValueName);
  v7 = (volatile signed __int32 *)*((_QWORD *)&v37 + 1);
  if ( *((_QWORD *)&v37 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v37 + 1) + 8LL));
    v7 = (volatile signed __int32 *)*((_QWORD *)&v37 + 1);
  }
  *(_OWORD *)v39 = v37;
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v7 = (volatile signed __int32 *)*((_QWORD *)&v37 + 1);
  }
  v41 = 0LL;
  if ( v7 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
  while ( 1 )
  {
    v8 = (std::filesystem **)v39[0];
    if ( !v39[0] )
      break;
    std::wstring::wstring((char **)Src, L"StartupTNoti");
    v10 = v8 + 4;
    v11 = (std::filesystem *)(v8 + 4);
    if ( (unsigned __int64)v8[7] > 7 )
      v11 = *v10;
    v38[0] = (std::_Ref_count_base *)std::filesystem::_Find_filename(v11, (char *)v11 + 2 * (_QWORD)v8[6], v9);
    v38[1] = (std::_Ref_count_base *)((signed __int64)(v12 - (unsigned __int64)v38[0]) >> 1);
    *(_OWORD *)v59 = *(_OWORD *)v38;
    std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(lpValueName, (__int128 *)v59);
    v13 = lpValueName;
    if ( *((_QWORD *)&v56 + 1) > 7uLL )
      v13 = (LPCWSTR *)lpValueName[0];
    v14 = -1LL;
    do
      ++v14;
    while ( *((_WORD *)v13 + v14) );
    std::wstring::append(Src, v13, v14);
    std::wstring::_Tidy_deallocate((void **)lpValueName);
    v16 = (std::filesystem *)(v8 + 4);
    if ( (unsigned __int64)v8[7] > 7 )
      v16 = *v10;
    v40[0] = (std::_Ref_count_base *)std::filesystem::_Find_filename(v16, (char *)v16 + 2 * (_QWORD)v8[6], v15);
    v40[1] = (std::_Ref_count_base *)((signed __int64)(v17 - (unsigned __int64)v40[0]) >> 1);
    *(_OWORD *)v59 = *(_OWORD *)v40;
    std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(lpValueName, (__int128 *)v59);
    v18 = (const WCHAR *)lpValueName;
    if ( *((_QWORD *)&v56 + 1) > 7uLL )
      v18 = lpValueName[0];
    Value = RegQueryValueExW(*((HKEY *)this + 1), v18, 0LL, 0LL, 0LL, 0LL);
    std::wstring::_Tidy_deallocate((void **)lpValueName);
    if ( !Value )
    {
      v20 = (const WCHAR *)std::filesystem::path::filename((std::filesystem *)(v8 + 4), lpValueName);
      if ( *((_QWORD *)v20 + 3) > 7uLL )
        v20 = *(const WCHAR **)v20;
      v21 = RegDeleteValueW(*((HKEY *)this + 1), v20);
      if ( v21 )
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          (void *)0x148,
          (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
          (const char *)v21,
          lpData);
      std::wstring::_Tidy_deallocate((void **)lpValueName);
      *(_DWORD *)Data = *((_DWORD *)this + 14);
      v22 = (const WCHAR *)Src;
      if ( *((_QWORD *)&v58 + 1) > 7uLL )
        v22 = Src[0];
      v23 = RegSetValueExW(*((HKEY *)this + 1), v22, 0, 4u, Data, 4u);
      if ( v23 )
        wil::details::in1diag3::_Throw_Win32(
          retaddr,
          (void *)0x14B,
          (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
          (const char *)v23,
          lpDataa);
    }
    v24 = (const WCHAR *)Src;
    if ( *((_QWORD *)&v58 + 1) > 7uLL )
      v24 = Src[0];
    if ( RegQueryValueExW(*((HKEY *)this + 1), v24, 0LL, 0LL, 0LL, 0LL) == 2
      && StartupFolderNotification::IsValidStartupAppFile((const struct std::filesystem::directory_entry *)v8) )
    {
      if ( a2 )
      {
        v25 = std::filesystem::path::filename((std::filesystem *)(v8 + 4), v61);
        std::wstring::wstring((__int64)lpValueName, (__int64)v25);
        std::wstring::_Tidy_deallocate(v61);
        std::wstring::wstring((__int64)v59, (__int64)(v8 + 4));
        v43 = *((_QWORD *)this + 12);
        std::wstring::wstring(&v44, &pvData);
        v45 = *(_OWORD *)lpValueName;
        v46 = v56;
        *(_QWORD *)&v56 = 0LL;
        *((_QWORD *)&v56 + 1) = 7LL;
        LOWORD(lpValueName[0]) = 0;
        v47 = *(_OWORD *)Src;
        v48 = v58;
        *(_QWORD *)&v58 = 0LL;
        *((_QWORD *)&v58 + 1) = 7LL;
        LOWORD(Src[0]) = 0;
        v49 = *(_OWORD *)v59;
        v50 = v60;
        *(_QWORD *)&v60 = 0LL;
        *((_QWORD *)&v60 + 1) = 7LL;
        *(_WORD *)v59 = 0;
        v51 = *((_DWORD *)this + 14);
        v52 = 0;
        std::chrono::steady_clock::now(&v53);
        std::wstring::wstring((__int64)v54, (__int64)this + 24);
        v26 = STARTUPAPPINFO::STARTUPAPPINFO(v42, &v43);
        updated = StartupAppMonitor::UpdateNotificationMap(v26);
        if ( updated < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x159,
            (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
            (const char *)(unsigned int)updated,
            lpDatab);
        STARTUPAPPINFO::~STARTUPAPPINFO((STARTUPAPPINFO *)&v43);
        std::wstring::_Tidy_deallocate((void **)v59);
        std::wstring::_Tidy_deallocate((void **)lpValueName);
      }
      else
      {
        *(_DWORD *)v59 = *((_DWORD *)this + 14);
        v28 = (const WCHAR *)Src;
        if ( *((_QWORD *)&v58 + 1) > 7uLL )
          v28 = Src[0];
        v29 = RegSetValueExW(*((HKEY *)this + 1), v28, 0, 4u, v59, 4u);
        if ( v29 )
          wil::details::in1diag3::_Throw_Win32(
            retaddr,
            (void *)0x161,
            (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
            (const char *)v29,
            lpDatac);
      }
    }
    std::wstring::_Tidy_deallocate((void **)Src);
    v30 = std::filesystem::_Dir_enum_impl::_Advance_and_reset_if_no_more_files(v39);
    if ( v30 )
      std::filesystem::_Throw_fs_error(v31, v30);
  }
  if ( v39[1] )
    std::_Ref_count_base::_Decref(v39[1]);
  if ( v7 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
}
