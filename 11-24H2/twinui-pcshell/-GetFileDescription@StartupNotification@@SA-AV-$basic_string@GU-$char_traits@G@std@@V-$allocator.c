/*
 * XREFs of ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x1800BAF60
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x1800B9260 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180048A38 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?has_extension@path@filesystem@std@@QEBA_NXZ @ 0x1800BB7C0 (-has_extension@path@filesystem@std@@QEBA_NXZ.c)
 *     ??$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$basic_string_view@GU?$char_traits@G@std@@@1@U_Normal_conversion@01@@Z @ 0x1800BB98C (--$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA-AV-$basic_.c)
 *     ?compare@path@filesystem@std@@QEBAHV?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1800BBA80 (-compare@path@filesystem@std@@QEBAHV-$basic_string_view@GU-$char_traits@G@std@@@3@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1800BBE6C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180125FF0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802CF544 (-_Xlen_string@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     __std_find_trivial_2 @ 0x1802D4BB0 (__std_find_trivial_2.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802DF760 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031DBA0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
_QWORD *__fastcall StartupNotification::GetFileDescription(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r15
  unsigned __int64 v6; // rdi
  _OWORD *v7; // r14
  __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  PCWSTR *v10; // rax
  char v11; // di
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r9
  void **i; // rcx
  void **v16; // rdx
  void **v17; // rdi
  void **v18; // rax
  void **trivial_2; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  void **v22; // rcx
  void **v23; // rax
  unsigned __int64 v24; // rsi
  char v25; // r14
  void *v26; // rdx
  void *v27; // rcx
  void *v28; // rdx
  void *v29; // rcx
  const WCHAR *v30; // rcx
  const char *v31; // r9
  void **v32; // r9
  const char *v33; // r9
  void *v34; // rdx
  WCHAR *v35; // rcx
  size_t size_of; // rax
  WCHAR *v38; // rax
  HRESULT v39; // eax
  __int64 (__fastcall **v40)(LPVOID, GUID *, void **); // rax
  int v41; // eax
  PCWSTR *v42; // rdx
  int v43; // eax
  void **v44; // rax
  PCWSTR *v45; // rax
  int ppv; // [rsp+20h] [rbp-A9h]
  void *v47; // [rsp+30h] [rbp-99h] BYREF
  LPVOID v48; // [rsp+38h] [rbp-91h] BYREF
  void *v49[2]; // [rsp+40h] [rbp-89h] BYREF
  PWSTR ppszApplication; // [rsp+50h] [rbp-79h] BYREF
  int v51; // [rsp+58h] [rbp-71h]
  PWSTR ppszParameters; // [rsp+60h] [rbp-69h] BYREF
  PCWSTR pszCmdTemplate[2]; // [rsp+68h] [rbp-61h] BYREF
  unsigned __int64 v54; // [rsp+78h] [rbp-51h]
  unsigned __int64 v55; // [rsp+80h] [rbp-49h]
  void *v56[2]; // [rsp+88h] [rbp-41h] BYREF
  __int128 v57; // [rsp+98h] [rbp-31h]
  void *v58[2]; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v59; // [rsp+B8h] [rbp-11h]
  unsigned __int64 v60; // [rsp+C0h] [rbp-9h]
  void *v61[2]; // [rsp+C8h] [rbp-1h] BYREF
  __m128i si128; // [rsp+D8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v4 = a2;
  v49[0] = a1;
  v51 = 0;
  *(_OWORD *)pszCmdTemplate = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v6 = a2[2];
  v7 = a2;
  if ( a2[3] > 7uLL )
    v7 = (_OWORD *)*a2;
  v8 = 0x7FFFFFFFFFFFFFFELL;
  if ( v6 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  if ( v6 > 7 )
  {
    v55 = 7LL;
    if ( (v6 | 7) <= 0x7FFFFFFFFFFFFFFELL )
    {
      v8 = v6 | 7;
      if ( (v6 | 7) < 0xA )
        v8 = 10LL;
    }
    size_of = std::_Get_size_of_n<2>(v8 + 1);
    if ( size_of >= 0x1000 )
    {
      v38 = (WCHAR *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(size_of);
    }
    else if ( size_of )
    {
      v38 = (WCHAR *)operator new(size_of);
    }
    else
    {
      v38 = 0LL;
    }
    pszCmdTemplate[0] = v38;
    v54 = v6;
    v55 = v8;
    memcpy_0(v38, v7, 2 * v6 + 2);
    v9 = v8;
  }
  else
  {
    v54 = a2[2];
    v9 = 7LL;
    v55 = 7LL;
    *(_OWORD *)pszCmdTemplate = *v7;
  }
  v10 = pszCmdTemplate;
  if ( v9 > 7 )
    v10 = (PCWSTR *)pszCmdTemplate[0];
  v49[0] = v10;
  v49[1] = (void *)v6;
  std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(v58, v49, a3, a4);
  v11 = 8;
  if ( !std::filesystem::path::has_extension((std::filesystem::path *)v58) )
  {
    v24 = *((_QWORD *)&v57 + 1);
    goto LABEL_31;
  }
  v49[0] = (void *)L".lnk";
  v49[1] = (void *)4;
  std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(v56, v49, v12, v13);
  v51 = 41;
  i = v58;
  if ( v60 > 7 )
    i = (void **)v58[0];
  v16 = (void **)((char *)i + 2 * v59);
  v17 = v16;
  LOWORD(v14) = 47;
  if ( v59 >= 2 )
  {
    if ( (*(_DWORD *)i & 0xFFFFFFDF) - 3801153 >= 0x1A )
    {
      if ( *(_WORD *)i == 92 || *(_WORD *)i == 47 )
      {
        if ( v59 >= 4
          && (*((_WORD *)i + 3) == 92 || *((_WORD *)i + 3) == 47)
          && (v59 == 4 || *((_WORD *)i + 4) != 92 && *((_WORD *)i + 4) != 47)
          && ((*((_WORD *)i + 1) == 92 || *((_WORD *)i + 1) == 47)
           && (*((_WORD *)i + 2) == 63 || *((_WORD *)i + 2) == 46)
           || *((_WORD *)i + 1) == 63 && *((_WORD *)i + 2) == 63) )
        {
          i = (void **)((char *)i + 6);
        }
        else if ( 2 * v59 >= 6
               && (*((_WORD *)i + 1) == 92 || *((_WORD *)i + 1) == 47)
               && *((_WORD *)i + 2) != 92
               && *((_WORD *)i + 2) != 47 )
        {
          for ( i = (void **)((char *)i + 6);
                i != v16 && *(_WORD *)i != 92 && *(_WORD *)i != 47;
                i = (void **)((char *)i + 2) )
          {
            ;
          }
        }
      }
    }
    else
    {
      i = (void **)((char *)i + 4);
    }
  }
  while ( i != v16 && (*(_WORD *)i == 92 || *(_WORD *)i == 47) )
    i = (void **)((char *)i + 2);
  if ( i != v16 )
  {
    do
    {
      v18 = (void **)((char *)v17 - 2);
      if ( *((_WORD *)v17 - 1) == 92 )
        break;
      if ( *(_WORD *)v18 == 47 )
        break;
      v17 = (void **)((char *)v17 - 2);
    }
    while ( i != v18 );
  }
  trivial_2 = (void **)_std_find_trivial_2(v17, v16, 58LL, v14);
  v22 = trivial_2;
  if ( v17 != trivial_2 )
  {
    trivial_2 = (void **)((char *)trivial_2 - 2);
    if ( v17 == trivial_2 )
      goto LABEL_130;
    if ( *(_WORD *)trivial_2 != 46 )
    {
      while ( 1 )
      {
        trivial_2 = (void **)((char *)trivial_2 - 2);
        if ( v17 == trivial_2 )
          goto LABEL_130;
        if ( *(_WORD *)trivial_2 == 46 )
          goto LABEL_26;
      }
    }
    if ( v17 == (void **)((char *)trivial_2 - 2) && *((_WORD *)trivial_2 - 1) == 46 )
LABEL_130:
      trivial_2 = v22;
  }
LABEL_26:
  v49[0] = trivial_2;
  v49[1] = (void *)(((char *)v22 - (char *)trivial_2) >> 1);
  std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(v61, v49, v20, v21);
  v11 = -85;
  v23 = v56;
  v24 = *((_QWORD *)&v57 + 1);
  if ( *((_QWORD *)&v57 + 1) > 7uLL )
    v23 = (void **)v56[0];
  v49[0] = v23;
  v49[1] = (void *)v57;
  if ( !(unsigned int)std::filesystem::path::compare(v61, v49) )
  {
    v25 = 1;
    goto LABEL_32;
  }
LABEL_31:
  v25 = 0;
LABEL_32:
  if ( (v11 & 2) != 0 )
  {
    v11 &= ~2u;
    if ( si128.m128i_i64[1] > 7uLL )
    {
      v26 = (void *)(2 * si128.m128i_i64[1] + 2);
      v48 = v26;
      v27 = v61[0];
      v47 = v61[0];
      if ( (unsigned __int64)v26 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v47, (unsigned __int64 *)&v48);
        v26 = v48;
        v27 = v47;
      }
      operator delete(v27, (const struct std::nothrow_t *)v26);
      v24 = *((_QWORD *)&v57 + 1);
    }
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v61[0]) = 0;
  }
  if ( (v11 & 1) != 0 && v24 > 7 )
  {
    v28 = (void *)(2 * v24 + 2);
    v48 = v28;
    v29 = v56[0];
    v47 = v56[0];
    if ( (unsigned __int64)v28 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v47, (unsigned __int64 *)&v48);
      v28 = v48;
      v29 = v47;
    }
    operator delete(v29, (const struct std::nothrow_t *)v28);
  }
  if ( v25 )
  {
    v48 = 0LL;
    v39 = CoCreateInstance(&CLSID_ShellLink, 0LL, 1u, &GUID_000214f9_0000_0000_c000_000000000046, &v48);
    if ( v39 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5D,
        (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)(unsigned int)v39,
        ppv);
    v47 = 0LL;
    v40 = *(__int64 (__fastcall ***)(LPVOID, GUID *, void **))v48;
    v47 = 0LL;
    v41 = (*v40)(v48, &GUID_0000010b_0000_0000_c000_000000000046, &v47);
    if ( v41 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5F,
        (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)(unsigned int)v41,
        ppv);
    if ( v4[3] > 7uLL )
      v4 = (_QWORD *)*v4;
    if ( (*(int (__fastcall **)(void *, _QWORD *, _QWORD))(*(_QWORD *)v47 + 40LL))(v47, v4, 0LL) < 0 )
    {
      std::wstring::wstring((char **)a1, &pvData);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v47);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v48);
LABEL_73:
      std::wstring::_Tidy_deallocate(v58);
      std::wstring::_Tidy_deallocate((void **)pszCmdTemplate);
      return a1;
    }
    if ( v54 >= 0x104 )
    {
      v45 = pszCmdTemplate;
      if ( v55 > 7 )
        v45 = (PCWSTR *)pszCmdTemplate[0];
      v54 = 260LL;
      *((_WORD *)v45 + 260) = 0;
    }
    else
    {
      std::wstring::append(pszCmdTemplate, 260 - v54, 0LL);
    }
    v42 = pszCmdTemplate;
    if ( v55 > 7 )
      v42 = (PCWSTR *)pszCmdTemplate[0];
    v43 = (*(__int64 (__fastcall **)(LPVOID, PCWSTR *, __int64, _QWORD))(*(_QWORD *)v48 + 24LL))(v48, v42, 260LL, 0LL);
    if ( v43 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x68,
        (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)(unsigned int)v43,
        4);
    if ( v47 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v47 + 16LL))(v47);
    if ( v48 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v48 + 16LL))(v48);
  }
  ppszParameters = 0LL;
  ppszApplication = 0LL;
  v30 = (const WCHAR *)pszCmdTemplate;
  if ( v55 > 7 )
    v30 = pszCmdTemplate[0];
  if ( SHEvaluateSystemCommandTemplate(v30, &ppszApplication, 0LL, &ppszParameters) < 0 )
  {
    *(_OWORD *)a1 = 0LL;
    a1[2] = 0LL;
    a1[3] = 7LL;
    *(_WORD *)a1 = 0;
    if ( ppszParameters )
      CoTaskMemFree(ppszParameters);
    if ( ppszApplication )
      CoTaskMemFree(ppszApplication);
    goto LABEL_73;
  }
  *(_OWORD *)v56 = 0LL;
  *(_QWORD *)&v57 = 0LL;
  *((_QWORD *)&v57 + 1) = 7LL;
  LOWORD(v56[0]) = 0;
  LODWORD(v47) = 0;
  if ( !(unsigned int)SHGetFileDescriptionW(ppszApplication, 0LL, 0LL, 0LL, &v47) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x71,
      (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      v31);
  if ( (unsigned int)v47 <= (unsigned __int64)v57 )
  {
    v44 = v56;
    if ( *((_QWORD *)&v57 + 1) > 7uLL )
      v44 = (void **)v56[0];
    *(_QWORD *)&v57 = (unsigned int)v47;
    *((_WORD *)v44 + (unsigned int)v47) = 0;
  }
  else
  {
    std::wstring::append(v56, (unsigned int)v47 - (_QWORD)v57, 0LL);
  }
  v32 = v56;
  if ( *((_QWORD *)&v57 + 1) > 7uLL )
    v32 = (void **)v56[0];
  if ( !(unsigned int)SHGetFileDescriptionW(ppszApplication, 0LL, 0LL, v32, &v47) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x73,
      (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      v33);
  *(_OWORD *)a1 = *(_OWORD *)v56;
  *((_OWORD *)a1 + 1) = v57;
  *(_QWORD *)&v57 = 0LL;
  *((_QWORD *)&v57 + 1) = 7LL;
  LOWORD(v56[0]) = 0;
  if ( ppszParameters )
    CoTaskMemFree(ppszParameters);
  if ( ppszApplication )
    CoTaskMemFree(ppszApplication);
  std::wstring::_Tidy_deallocate(v58);
  if ( v55 > 7 )
  {
    v34 = (void *)(2 * v55 + 2);
    v48 = v34;
    v35 = (WCHAR *)pszCmdTemplate[0];
    v49[0] = (void *)pszCmdTemplate[0];
    if ( (unsigned __int64)v34 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v49, (unsigned __int64 *)&v48);
      v34 = v48;
      v35 = (WCHAR *)v49[0];
    }
    operator delete(v35, (const struct std::nothrow_t *)v34);
  }
  return a1;
}
